#include "checkpoint.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <assert.h>

typedef double real_t;
typedef real_t real3[3];

typedef struct LinkCellSt
{
    int gridSize[3];
    int nLocalBoxes;
    int nHaloBoxes;
    int nTotalBoxes;

    real3 localMin;
    real3 localMax;
    real3 boxSize;
    real3 invBoxSize;

    int* nAtoms;
} LinkCell;

typedef struct DomainSt
{
    int procGrid[3];        //!< number of processors in each dimension
    int procCoord[3];       //!< i,j,k for this processor

    real3 globalMin;        //!< minimum global coordinate (angstroms)
    real3 globalMax;        //!< maximum global coordinate (angstroms)
    real3 globalExtent;     //!< global size: globalMax - globalMin

    real3 localMin;         //!< minimum coordinate on local processor
    real3 localMax;         //!< maximum coordinate on local processor
    real3 localExtent;      //!< localMax - localMin
} Domain;

typedef struct AtomsSt
{
    // atom-specific data
    int nLocal;    //!< total number of atoms on this processor
    int nGlobal;   //!< total number of atoms in simulation

    int* gid;      //!< A globally unique id for each atom
    int* iSpecies; //!< the species index of the atom

    real3*  r;     //!< positions
    real3*  p;     //!< momenta of atoms
    real3*  f;     //!< forces 
    real_t* U;     //!< potential energy per atom
} Atoms;

typedef struct SpeciesDataSt
{
    char  name[3];   //!< element name
    int   atomicNo;  //!< atomic number  
    real_t mass;     //!< mass in internal units
} SpeciesData;

typedef struct BasePotentialSt
{
    real_t cutoff;          //!< potential cutoff distance in Angstroms
    real_t mass;            //!< mass of atoms in intenal units
    real_t lat;             //!< lattice spacing (angs) of unit cell
    char latticeType[8];    //!< lattice type, e.g. FCC, BCC, etc.
    char  name[3];      //!< element name
    int   atomicNo;     //!< atomic number  
    int  (*force)(struct SimFlatSt* s); //!< function pointer to force routine
    void (*print)(FILE* file, struct BasePotentialSt* pot);
    void (*destroy)(struct BasePotentialSt** pot); //!< destruction of the potential
} BasePotential;

typedef struct HaloExchangeSt
{
    /// Ranks are stored in the order specified in HaloFaceOrder.
    int nbrRank[6];
    /// The maximum send/recv buffer size (in bytes) that will be needed
    /// for this halo exchange.
    int bufCapacity;
    /// Pointer to a sub-class specific function to load the send buffer.
    /// \param [in] parms The parms member of the structure.  This is a
    ///                   pointer to a sub-class specific structure that can
    ///                   be used by the load and unload functions to store
    ///                   sub-class specific data.
    /// \param [in] data  A pointer to a structure that the contains the data
    ///                   that is needed by the loadBuffer function.  The
    ///                   loadBuffer function will cast the pointer to a
    ///                   concrete type that is appropriate for the data
    ///                   being exchanged.
    /// \param [in] face  Specifies the face across which data is being sent.
    /// \param [in] buf   The send buffer to be loaded
    /// \return The number of bytes loaded into the send buffer.
    int  (*loadBuffer)(void* parms, void* data, int face, char* buf);
    /// Pointer to a sub-class specific function to unload the recv buffer.
    /// \param [in] parms The parms member of the structure.  This is a
    ///                   pointer to a sub-class specific structure that can
    ///                   be used by the load and unload functions to store
    ///                   sub-class specific data.
    /// \param [out] data A pointer to a structure that the contains the data
    ///                   that is needed by the unloadBuffer function.  The
    ///                   unloadBuffer function will cast the pointer to a
    ///                   concrete type that is appropriate for the data
    ///                   being exchanged.
    /// \param [in] face  Specifies the face across which data is being sent.
    /// \param [in] bufSize The number of bytes in the recv buffer.
    /// \param [in] buf   The recv buffer to be unloaded.
    void (*unloadBuffer)(void* parms, void* data, int face, int bufSize, char* buf);
    /// Pointer to a function to deallocate any memory used by the
    /// sub-class parms.  Essentially this is a virtual destructor.
    void (*destroy)(void* parms);
    /// A pointer to a sub-class specific structure that contains
    /// additional data members needed by the sub-class.
    void* parms;
} HaloExchange;

typedef struct SimFlatSt
{
    int nSteps;            //<! number of time steps to run
    int printRate;         //<! number of steps between output
    double dt;             //<! time step

    Domain* domain;        //<! domain decomposition data

    LinkCell* boxes;       //<! link-cell data

    Atoms* atoms;          //<! atom data (positions, momenta, ...)

    SpeciesData* species;  //<! species data (per species, not per atom)

    real_t ePotential;     //!< the total potential energy of the system
    real_t eKinetic;       //!< the total kinetic energy of the system

    BasePotential *pot;    //!< the potential

    HaloExchange* atomExchange;

} SimFlat;

LinkCell* initLinkCells(const Domain* domain, double cutoff)
{
    assert(domain);
    LinkCell* ll = (LinkCell*)malloc(sizeof(LinkCell));

    for (int i = 0; i < 3; i++)
    {
        ll->localMin[i] = domain->localMin[i];
        ll->localMax[i] = domain->localMax[i];
        ll->gridSize[i] = domain->localExtent[i] / cutoff; // local number of boxes
        ll->boxSize[i] = domain->localExtent[i] / ((double) ll->gridSize[i]);
        ll->invBoxSize[i] = 1.0/ll->boxSize[i];
    }

    ll->nLocalBoxes = ll->gridSize[0] * ll->gridSize[1] * ll->gridSize[2];

    ll->nHaloBoxes = 2 * ((ll->gridSize[0] + 2) *
            (ll->gridSize[1] + ll->gridSize[2] + 2) +
            (ll->gridSize[1] * ll->gridSize[2]));

    ll->nTotalBoxes = ll->nLocalBoxes + ll->nHaloBoxes;

    ll->nAtoms = (int*)malloc(ll->nTotalBoxes*sizeof(int));
    for (int iBox=0; iBox<ll->nTotalBoxes; ++iBox)
        ll->nAtoms[iBox] = 0;

    assert ( (ll->gridSize[0] >= 2) && (ll->gridSize[1] >= 2) && (ll->gridSize[2] >= 2) );
    return ll;
}

void destroyLinkCells(LinkCell** boxes)
{
    if (! boxes) return;
    if (! *boxes) return;

    free((*boxes)->nAtoms);
    free(*boxes);
    *boxes = NULL;

    return;
}
