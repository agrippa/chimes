# 1 "timestep.c.pre.transformed.cpp"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/local/lib/gcc/x86_64-apple-darwin14.0.0/4.9.2/include/stddef.h" 1 3 4
# 147 "/usr/local/lib/gcc/x86_64-apple-darwin14.0.0/4.9.2/include/stddef.h" 3 4
typedef long int ptrdiff_t;
# 212 "/usr/local/lib/gcc/x86_64-apple-darwin14.0.0/4.9.2/include/stddef.h" 3 4
typedef long unsigned int size_t;
# 1 "<command-line>" 2
# 1 "timestep.c.pre.transformed.cpp"
static int ____must_checkpoint_timestep_s_0 = 2;
static int ____must_checkpoint_timestep_nSteps_0 = 2;
static int ____must_checkpoint_timestep_dt_0 = 2;
static int ____must_checkpoint_timestep_ii_0 = 2;
static int ____must_checkpoint_redistributeAtoms_sim_0 = 2;
static int ____must_checkpoint_redistributeAtoms_ii_0 = 2;
static int ____must_checkpoint_kineticEnergy_s_0 = 2;
static int ____must_checkpoint_kineticEnergy_eLocal_0 = 2;
# 1 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/timestep.c"
# 1 "/tmp/chimes-frontend//"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/Users/jmg3/num-debug/src/libchimes/libchimes.h" 1



# 1 "/usr/local/lib/gcc/x86_64-apple-darwin14.0.0/4.9.2/include/stddef.h" 1 3 4
# 147 "/usr/local/lib/gcc/x86_64-apple-darwin14.0.0/4.9.2/include/stddef.h" 3 4
typedef long int ptrdiff_t;
# 212 "/usr/local/lib/gcc/x86_64-apple-darwin14.0.0/4.9.2/include/stddef.h" 3 4
typedef long unsigned int size_t;
# 5 "/Users/jmg3/num-debug/src/libchimes/libchimes.h" 2

extern void init_chimes();
extern void calling(void *func_ptr, int lbl, size_t set_return_alias,
        unsigned naliases, ...);
extern int get_next_call();
extern void new_stack(void *func_ptr, unsigned n_local_arg_aliases,
        unsigned nargs, ...);
extern void init_module(size_t module_id, int n_contains_mappings,
        int nfunctions, int nvars, int nstructs, ...);
extern void rm_stack(bool has_return_alias, size_t returned_alias);
extern void register_stack_var(const char *mangled_name,
        const char *full_type, void *ptr, size_t size, int is_ptr,
        int is_struct, int n_ptr_fields, ...);
extern void register_global_var(const char *mangled_name, const char *full_type,
        void *ptr, size_t size, int is_ptr, int is_struct, int n_ptr_fields,
        ...);
extern void register_constant(size_t const_id, void *address,
        size_t length);
extern int alias_group_changed(int ngroups, ...);
extern void *malloc_wrapper(size_t nbytes, size_t group, int is_ptr,
        int is_struct, ...);
extern void *calloc_wrapper(size_t num, size_t size, size_t group, int is_ptr,
        int is_struct, ...);
extern void *realloc_wrapper(void *ptr, size_t nbytes, size_t group, int is_ptr,
        int is_struct, ...);
extern void free_wrapper(void *ptr, size_t group);

extern unsigned entering_omp_parallel(unsigned lbl, size_t *region_id,
        unsigned nlocals, ...);
extern void register_thread_local_stack_vars(unsigned thread,
        unsigned parent, unsigned threads_in_region, bool spawns_threads,
        bool is_parallel_for, bool is_critical, unsigned parent_stack_depth,
        size_t region_id, unsigned nlocals, ...);
extern void leaving_omp_parallel(unsigned expected_parent_stack_depth,
        size_t region_id);
extern unsigned get_parent_vars_stack_depth();
extern unsigned get_thread_stack_depth();

extern void chimes_error();
# 53 "/Users/jmg3/num-debug/src/libchimes/libchimes.h"
extern "C" {
extern int omp_get_thread_num (void) throw ();
extern int omp_get_num_threads(void) throw ();
}
inline unsigned LIBCHIMES_THREAD_NUM() { return omp_get_thread_num(); }
inline unsigned LIBCHIMES_NUM_THREADS() { return omp_get_num_threads(); }





extern int ____chimes_replaying;
# 1 "<command-line>" 2
# 1 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/timestep.c"
# 1 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/timestep.c"
# 2 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/timestep.c"
# 3 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/timestep.c"

# 1 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/timestep.h" 1






# 1 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMDTypes.h" 1






# 1 "/usr/include/stdio.h" 1 3 4
# 64 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/sys/cdefs.h" 1 3 4
# 506 "/usr/include/sys/cdefs.h" 3 4
# 1 "/usr/include/sys/_symbol_aliasing.h" 1 3 4
# 507 "/usr/include/sys/cdefs.h" 2 3 4
# 572 "/usr/include/sys/cdefs.h" 3 4
# 1 "/usr/include/sys/_posix_availability.h" 1 3 4
# 573 "/usr/include/sys/cdefs.h" 2 3 4
# 65 "/usr/include/stdio.h" 2 3 4
# 1 "/usr/include/Availability.h" 1 3 4
# 153 "/usr/include/Availability.h" 3 4
# 1 "/usr/include/AvailabilityInternal.h" 1 3 4
# 154 "/usr/include/Availability.h" 2 3 4
# 66 "/usr/include/stdio.h" 2 3 4

# 1 "/usr/include/_types.h" 1 3 4
# 27 "/usr/include/_types.h" 3 4
# 1 "/usr/include/sys/_types.h" 1 3 4
# 33 "/usr/include/sys/_types.h" 3 4
# 1 "/usr/include/machine/_types.h" 1 3 4
# 32 "/usr/include/machine/_types.h" 3 4
# 1 "/usr/include/i386/_types.h" 1 3 4
# 37 "/usr/include/i386/_types.h" 3 4
typedef signed char __int8_t;



typedef unsigned char __uint8_t;
typedef short __int16_t;
typedef unsigned short __uint16_t;
typedef int __int32_t;
typedef unsigned int __uint32_t;
typedef long long __int64_t;
typedef unsigned long long __uint64_t;

typedef long __darwin_intptr_t;
typedef unsigned int __darwin_natural_t;
# 70 "/usr/include/i386/_types.h" 3 4
typedef int __darwin_ct_rune_t;





typedef union {
 char __mbstate8[128];
 long long _mbstateL;
} __mbstate_t;

typedef __mbstate_t __darwin_mbstate_t;


typedef long int __darwin_ptrdiff_t;







typedef long unsigned int __darwin_size_t;





typedef __builtin_va_list __darwin_va_list;





typedef int __darwin_wchar_t;




typedef __darwin_wchar_t __darwin_rune_t;


typedef int __darwin_wint_t;




typedef unsigned long __darwin_clock_t;
typedef __uint32_t __darwin_socklen_t;
typedef long __darwin_ssize_t;
typedef long __darwin_time_t;
# 33 "/usr/include/machine/_types.h" 2 3 4
# 34 "/usr/include/sys/_types.h" 2 3 4
# 55 "/usr/include/sys/_types.h" 3 4
typedef __int64_t __darwin_blkcnt_t;
typedef __int32_t __darwin_blksize_t;
typedef __int32_t __darwin_dev_t;
typedef unsigned int __darwin_fsblkcnt_t;
typedef unsigned int __darwin_fsfilcnt_t;
typedef __uint32_t __darwin_gid_t;
typedef __uint32_t __darwin_id_t;
typedef __uint64_t __darwin_ino64_t;

typedef __darwin_ino64_t __darwin_ino_t;



typedef __darwin_natural_t __darwin_mach_port_name_t;
typedef __darwin_mach_port_name_t __darwin_mach_port_t;
typedef __uint16_t __darwin_mode_t;
typedef __int64_t __darwin_off_t;
typedef __int32_t __darwin_pid_t;
typedef __uint32_t __darwin_sigset_t;
typedef __int32_t __darwin_suseconds_t;
typedef __uint32_t __darwin_uid_t;
typedef __uint32_t __darwin_useconds_t;
typedef unsigned char __darwin_uuid_t[16];
typedef char __darwin_uuid_string_t[37];

# 1 "/usr/include/sys/_pthread/_pthread_types.h" 1 3 4
# 57 "/usr/include/sys/_pthread/_pthread_types.h" 3 4
struct __darwin_pthread_handler_rec {
 void (*__routine)(void *);
 void *__arg;
 struct __darwin_pthread_handler_rec *__next;
};

struct _opaque_pthread_attr_t {
 long __sig;
 char __opaque[56];
};

struct _opaque_pthread_cond_t {
 long __sig;
 char __opaque[40];
};

struct _opaque_pthread_condattr_t {
 long __sig;
 char __opaque[8];
};

struct _opaque_pthread_mutex_t {
 long __sig;
 char __opaque[56];
};

struct _opaque_pthread_mutexattr_t {
 long __sig;
 char __opaque[8];
};

struct _opaque_pthread_once_t {
 long __sig;
 char __opaque[8];
};

struct _opaque_pthread_rwlock_t {
 long __sig;
 char __opaque[192];
};

struct _opaque_pthread_rwlockattr_t {
 long __sig;
 char __opaque[16];
};

struct _opaque_pthread_t {
 long __sig;
 struct __darwin_pthread_handler_rec *__cleanup_stack;
 char __opaque[8176];
};

typedef struct _opaque_pthread_attr_t __darwin_pthread_attr_t;
typedef struct _opaque_pthread_cond_t __darwin_pthread_cond_t;
typedef struct _opaque_pthread_condattr_t __darwin_pthread_condattr_t;
typedef unsigned long __darwin_pthread_key_t;
typedef struct _opaque_pthread_mutex_t __darwin_pthread_mutex_t;
typedef struct _opaque_pthread_mutexattr_t __darwin_pthread_mutexattr_t;
typedef struct _opaque_pthread_once_t __darwin_pthread_once_t;
typedef struct _opaque_pthread_rwlock_t __darwin_pthread_rwlock_t;
typedef struct _opaque_pthread_rwlockattr_t __darwin_pthread_rwlockattr_t;
typedef struct _opaque_pthread_t *__darwin_pthread_t;
# 81 "/usr/include/sys/_types.h" 2 3 4
# 28 "/usr/include/_types.h" 2 3 4
# 39 "/usr/include/_types.h" 3 4
typedef int __darwin_nl_item;
typedef int __darwin_wctrans_t;

typedef __uint32_t __darwin_wctype_t;
# 68 "/usr/include/stdio.h" 2 3 4



# 1 "/usr/include/sys/_types/_va_list.h" 1 3 4
# 31 "/usr/include/sys/_types/_va_list.h" 3 4
typedef __darwin_va_list va_list;
# 72 "/usr/include/stdio.h" 2 3 4
# 1 "/usr/include/sys/_types/_size_t.h" 1 3 4
# 73 "/usr/include/stdio.h" 2 3 4
# 1 "/usr/include/sys/_types/_null.h" 1 3 4
# 74 "/usr/include/stdio.h" 2 3 4

# 1 "/usr/include/sys/stdio.h" 1 3 4
# 37 "/usr/include/sys/stdio.h" 3 4
extern "C" {

int renameat(int, const char *, int, const char *) ;

}
# 76 "/usr/include/stdio.h" 2 3 4

typedef __darwin_off_t fpos_t;
# 88 "/usr/include/stdio.h" 3 4
struct __sbuf {
 unsigned char *_base;
 int _size;
};


struct __sFILEX;
# 122 "/usr/include/stdio.h" 3 4
typedef struct __sFILE {
 unsigned char *_p;
 int _r;
 int _w;
 short _flags;
 short _file;
 struct __sbuf _bf;
 int _lbfsize;


 void *_cookie;
 int (*_close)(void *);
 int (*_read) (void *, char *, int);
 fpos_t (*_seek) (void *, fpos_t, int);
 int (*_write)(void *, const char *, int);


 struct __sbuf _ub;
 struct __sFILEX *_extra;
 int _ur;


 unsigned char _ubuf[3];
 unsigned char _nbuf[1];


 struct __sbuf _lb;


 int _blksize;
 fpos_t _offset;
} FILE;

extern "C" {
extern FILE *__stdinp;
extern FILE *__stdoutp;
extern FILE *__stderrp;
}
# 230 "/usr/include/stdio.h" 3 4
extern "C" {
void clearerr(FILE *);
int fclose(FILE *);
int feof(FILE *);
int ferror(FILE *);
int fflush(FILE *);
int fgetc(FILE *);
int fgetpos(FILE * , fpos_t *);
char *fgets(char * , int, FILE *);



FILE *fopen(const char * , const char * ) __asm("_" "fopen" );

int fprintf(FILE * , const char * , ...) __attribute__((__format__ (__printf__, 2, 3)));
int fputc(int, FILE *);
int fputs(const char * , FILE * ) __asm("_" "fputs" );
size_t fread(void * , size_t, size_t, FILE * );
FILE *freopen(const char * , const char * ,
                 FILE * ) __asm("_" "freopen" );
int fscanf(FILE * , const char * , ...) __attribute__((__format__ (__scanf__, 2, 3)));
int fseek(FILE *, long, int);
int fsetpos(FILE *, const fpos_t *);
long ftell(FILE *);
size_t fwrite(const void * , size_t, size_t, FILE * ) __asm("_" "fwrite" );
int getc(FILE *);
int getchar(void);
char *gets(char *);
void perror(const char *);
int printf(const char * , ...) __attribute__((__format__ (__printf__, 1, 2)));
int putc(int, FILE *);
int putchar(int);
int puts(const char *);
int remove(const char *);
int rename (const char *, const char *);
void rewind(FILE *);
int scanf(const char * , ...) __attribute__((__format__ (__scanf__, 1, 2)));
void setbuf(FILE * , char * );
int setvbuf(FILE * , char * , int, size_t);
int sprintf(char * , const char * , ...) __attribute__((__format__ (__printf__, 2, 3)));
int sscanf(const char * , const char * , ...) __attribute__((__format__ (__scanf__, 2, 3)));
FILE *tmpfile(void);


__attribute__((deprecated("This function is provided for compatibility reasons only.  Due to security concerns inherent in the design of tmpnam(3), it is highly recommended that you use mkstemp(3) instead.")))

char *tmpnam(char *);
int ungetc(int, FILE *);
int vfprintf(FILE * , const char * , va_list) __attribute__((__format__ (__printf__, 2, 0)));
int vprintf(const char * , va_list) __attribute__((__format__ (__printf__, 1, 0)));
int vsprintf(char * , const char * , va_list) __attribute__((__format__ (__printf__, 2, 0)));
}
# 292 "/usr/include/stdio.h" 3 4
extern "C" {



char *ctermid(char *);





FILE *fdopen(int, const char *) __asm("_" "fdopen" );

int fileno(FILE *);
}
# 314 "/usr/include/stdio.h" 3 4
extern "C" {
int pclose(FILE *);



FILE *popen(const char *, const char *) __asm("_" "popen" );

}
# 336 "/usr/include/stdio.h" 3 4
extern "C" {
int __srget(FILE *);
int __svfscanf(FILE *, const char *, va_list) __attribute__((__format__ (__scanf__, 2, 0)));
int __swbuf(int, FILE *);
}







inline __attribute__ ((__always_inline__)) int __sputc(int _c, FILE *_p) {
 if (--_p->_w >= 0 || (_p->_w >= _p->_lbfsize && (char)_c != '\n'))
  return (*_p->_p++ = _c);
 else
  return (__swbuf(_c, _p));
}
# 373 "/usr/include/stdio.h" 3 4
extern "C" {
void flockfile(FILE *);
int ftrylockfile(FILE *);
void funlockfile(FILE *);
int getc_unlocked(FILE *);
int getchar_unlocked(void);
int putc_unlocked(int, FILE *);
int putchar_unlocked(int);



int getw(FILE *);
int putw(int, FILE *);



__attribute__((deprecated("This function is provided for compatibility reasons only.  Due to security concerns inherent in the design of tempnam(3), it is highly recommended that you use mkstemp(3) instead.")))

char *tempnam(const char *, const char *) __asm("_" "tempnam" );
}
# 411 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/sys/_types/_off_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_off_t.h" 3 4
typedef __darwin_off_t off_t;
# 412 "/usr/include/stdio.h" 2 3 4

extern "C" {
int fseeko(FILE *, off_t, int);
off_t ftello(FILE *);
}



extern "C" {
int snprintf(char * , size_t, const char * , ...) __attribute__((__format__ (__printf__, 3, 4)));
int vfscanf(FILE * , const char * , va_list) __attribute__((__format__ (__scanf__, 2, 0)));
int vscanf(const char * , va_list) __attribute__((__format__ (__scanf__, 1, 0)));
int vsnprintf(char * , size_t, const char * , va_list) __attribute__((__format__ (__printf__, 3, 0)));
int vsscanf(const char * , const char * , va_list) __attribute__((__format__ (__scanf__, 2, 0)));
}
# 436 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/sys/_types/_ssize_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_ssize_t.h" 3 4
typedef __darwin_ssize_t ssize_t;
# 437 "/usr/include/stdio.h" 2 3 4

extern "C" {
int dprintf(int, const char * , ...) __attribute__((__format__ (__printf__, 2, 3))) ;
int vdprintf(int, const char * , va_list) __attribute__((__format__ (__printf__, 2, 0))) ;
ssize_t getdelim(char ** , size_t * , int, FILE * ) ;
ssize_t getline(char ** , size_t * , FILE * ) ;
}







extern "C" {
extern const int sys_nerr;
extern const char *const sys_errlist[];

int asprintf(char ** , const char * , ...) __attribute__((__format__ (__printf__, 2, 3)));
char *ctermid_r(char *);
char *fgetln(FILE *, size_t *);
const char *fmtcheck(const char *, const char *);
int fpurge(FILE *);
void setbuffer(FILE *, char *, int);
int setlinebuf(FILE *);
int vasprintf(char ** , const char * , va_list) __attribute__((__format__ (__printf__, 2, 0)));
FILE *zopen(const char *, const char *, int);





FILE *funopen(const void *,
                 int (*)(void *, char *, int),
                 int (*)(void *, const char *, int),
                 fpos_t (*)(void *, fpos_t, int),
                 int (*)(void *));
}
# 8 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMDTypes.h" 2
# 1 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mytype.h" 1
# 13 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mytype.h"
typedef double real_t;




typedef real_t real3[3];

static void zeroReal3(real3 a)
{
   a[0] = 0.0;
   a[1] = 0.0;
   a[2] = 0.0;
}
# 9 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMDTypes.h" 2
# 1 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.h" 1







struct AtomsSt;
struct LinkCellSt;
struct DomainSt;
# 26 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.h"
typedef struct HaloExchangeSt
{


   int nbrRank[6];


   int bufCapacity;
# 47 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.h"
   int (*loadBuffer)(void* parms, void* data, int face, char* buf);
# 61 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.h"
   void (*unloadBuffer)(void* parms, void* data, int face, int bufSize, char* buf);


   void (*destroy)(void* parms);


   void* parms;
}
HaloExchange;


HaloExchange* initAtomHaloExchange(struct DomainSt* domain, struct LinkCellSt* boxes);


HaloExchange* initForceHaloExchange(struct DomainSt* domain, struct LinkCellSt* boxes);


void destroyHaloExchange(HaloExchange** haloExchange);


void haloExchange(HaloExchange* haloExchange, void* data);


void sortAtomsInCell(struct AtomsSt* atoms, struct LinkCellSt* boxes, int iBox);
# 10 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMDTypes.h" 2
# 1 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/linkCells.h" 1
# 12 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/linkCells.h"
struct DomainSt;
struct AtomsSt;



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
   int** nbrBoxes;
} LinkCell;

LinkCell* initLinkCells(const struct DomainSt* domain, real_t cutoff);
void destroyLinkCells(LinkCell** boxes);

int getNeighborBoxes(LinkCell* boxes, int iBox, int* nbrBoxes);
void putAtomInBox(LinkCell* boxes, struct AtomsSt* atoms,
                  const int gid, const int iType,
                  const real_t x, const real_t y, const real_t z,
                  const real_t px, const real_t py, const real_t pz);
int getBoxFromTuple(LinkCell* boxes, int x, int y, int z);

void moveAtom(LinkCell* boxes, struct AtomsSt* atoms, int iId, int iBox, int jBox);


void updateLinkCells(LinkCell* boxes, struct AtomsSt* atoms);

int maxOccupancy(LinkCell* boxes);
# 11 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMDTypes.h" 2
# 1 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/decomposition.h" 1
# 10 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/decomposition.h"
typedef struct DomainSt
{

   int procGrid[3];
   int procCoord[3];


   real3 globalMin;
   real3 globalMax;
   real3 globalExtent;


   real3 localMin;
   real3 localMax;
   real3 localExtent;
} Domain;

struct DomainSt* initDecomposition(int xproc, int yproc, int zproc,
                                   real3 globalExtent);


int processorNum(Domain* domain, int dix, int diy, int dik);
# 12 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMDTypes.h" 2
# 1 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.h" 1
# 9 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.h"
struct SimFlatSt;
struct LinkCellSt;


typedef struct AtomsSt
{

   int nLocal;
   int nGlobal;

   int* gid;
   int* iSpecies;

   real3* r;
   real3* p;
   real3* f;
   real_t* U;
} Atoms;



Atoms* initAtoms(struct LinkCellSt* boxes);
void destroyAtoms(struct AtomsSt* atoms);

void createFccLattice(int nx, int ny, int nz, real_t lat, struct SimFlatSt* s);

void setVcm(struct SimFlatSt* s, real_t vcm[3]);
void setTemperature(struct SimFlatSt* s, real_t temperature);
void randomDisplacements(struct SimFlatSt* s, real_t delta);
# 13 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMDTypes.h" 2

struct SimFlatSt;
# 28 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMDTypes.h"
typedef struct BasePotentialSt
{
   real_t cutoff;
   real_t mass;
   real_t lat;
   char latticeType[8];
   char name[3];
   int atomicNo;
   int (*force)(struct SimFlatSt* s);
   void (*print)(FILE* file, struct BasePotentialSt* pot);
   void (*destroy)(struct BasePotentialSt** pot);
} BasePotential;



typedef struct SpeciesDataSt
{
   char name[3];
   int atomicNo;
   real_t mass;
} SpeciesData;



typedef struct ValidateSt
{
   double eTot0;
   int nAtoms0;
} Validate;





typedef struct SimFlatSt
{
   int nSteps;
   int printRate;
   double dt;

   Domain* domain;

   LinkCell* boxes;

   Atoms* atoms;

   SpeciesData* species;

   real_t ePotential;
   real_t eKinetic;

   BasePotential *pot;

   HaloExchange* atomExchange;

} SimFlat;
# 8 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/timestep.h" 2

double timestep(SimFlat* s, int n, real_t dt);
void computeForce(SimFlat* s);
void kineticEnergy(SimFlat* s);


void redistributeAtoms(struct SimFlatSt* sim);
# 5 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/timestep.c" 2
# 5 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/timestep.c"

# 1 "/usr/local/lib/gcc/x86_64-apple-darwin14.0.0/4.9.2/include/omp.h" 1 3 4
# 34 "/usr/local/lib/gcc/x86_64-apple-darwin14.0.0/4.9.2/include/omp.h" 3 4
typedef struct
{
  unsigned char _x[64]
    __attribute__((__aligned__(8)));
} omp_lock_t;

typedef struct
{
  unsigned char _x[80]
    __attribute__((__aligned__(8)));
} omp_nest_lock_t;


typedef enum omp_sched_t
{
  omp_sched_static = 1,
  omp_sched_dynamic = 2,
  omp_sched_guided = 3,
  omp_sched_auto = 4
} omp_sched_t;

typedef enum omp_proc_bind_t
{
  omp_proc_bind_false = 0,
  omp_proc_bind_true = 1,
  omp_proc_bind_master = 2,
  omp_proc_bind_close = 3,
  omp_proc_bind_spread = 4
} omp_proc_bind_t;


extern "C" {





extern void omp_set_num_threads (int) throw ();
extern int omp_get_num_threads (void) throw ();
extern int omp_get_max_threads (void) throw ();
extern int omp_get_thread_num (void) throw ();
extern int omp_get_num_procs (void) throw ();

extern int omp_in_parallel (void) throw ();

extern void omp_set_dynamic (int) throw ();
extern int omp_get_dynamic (void) throw ();

extern void omp_set_nested (int) throw ();
extern int omp_get_nested (void) throw ();

extern void omp_init_lock (omp_lock_t *) throw ();
extern void omp_destroy_lock (omp_lock_t *) throw ();
extern void omp_set_lock (omp_lock_t *) throw ();
extern void omp_unset_lock (omp_lock_t *) throw ();
extern int omp_test_lock (omp_lock_t *) throw ();

extern void omp_init_nest_lock (omp_nest_lock_t *) throw ();
extern void omp_destroy_nest_lock (omp_nest_lock_t *) throw ();
extern void omp_set_nest_lock (omp_nest_lock_t *) throw ();
extern void omp_unset_nest_lock (omp_nest_lock_t *) throw ();
extern int omp_test_nest_lock (omp_nest_lock_t *) throw ();

extern double omp_get_wtime (void) throw ();
extern double omp_get_wtick (void) throw ();

extern void omp_set_schedule (omp_sched_t, int) throw ();
extern void omp_get_schedule (omp_sched_t *, int *) throw ();
extern int omp_get_thread_limit (void) throw ();
extern void omp_set_max_active_levels (int) throw ();
extern int omp_get_max_active_levels (void) throw ();
extern int omp_get_level (void) throw ();
extern int omp_get_ancestor_thread_num (int) throw ();
extern int omp_get_team_size (int) throw ();
extern int omp_get_active_level (void) throw ();

extern int omp_in_final (void) throw ();

extern int omp_get_cancellation (void) throw ();
extern omp_proc_bind_t omp_get_proc_bind (void) throw ();

extern void omp_set_default_device (int) throw ();
extern int omp_get_default_device (void) throw ();
extern int omp_get_num_devices (void) throw ();
extern int omp_get_num_teams (void) throw ();
extern int omp_get_team_num (void) throw ();

extern int omp_is_initial_device (void) throw ();


}
# 7 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/timestep.c" 2
# 7 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/timestep.c"
# 8 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/timestep.c"
# 9 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/timestep.c"

# 1 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/parallel.h" 1
# 10 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/parallel.h"
typedef struct RankReduceDataSt
{
   double val;
   int rank;
} RankReduceData;


int getNRanks(void);


int getMyRank(void);


int printRank(void);


void timestampBarrier(const char* msg);


void initParallel(int *argc, char ***argv);


void destroyParallel(void);


void barrierParallel(void);


int sendReceiveParallel(void* sendBuf, int sendLen, int dest,
                        void* recvBuf, int recvLen, int source);


void addIntParallel(int* sendBuf, int* recvBuf, int count);


void addRealParallel(real_t* sendBuf, real_t* recvBuf, int count);


void addDoubleParallel(double* sendBuf, double* recvBuf, int count);


void maxIntParallel(int* sendBuf, int* recvBuf, int count);


void minRankDoubleParallel(RankReduceData* sendBuf, RankReduceData* recvBuf, int count);


void maxRankDoubleParallel(RankReduceData* sendBuf, RankReduceData* recvBuf, int count);


void bcastParallel(void* buf, int len, int root);


int builtWithMpi(void);
# 11 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/timestep.c" 2
# 1 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.h" 1
# 9 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.h"
enum TimerHandle{
   totalTimer,
   loopTimer,
   timestepTimer,
   positionTimer,
   velocityTimer,
   redistributeTimer,
   atomHaloTimer,
   computeForceTimer,
   eamHaloTimer,
   commHaloTimer,
   commReduceTimer,
   numberOfTimers};
# 57 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.h"
void profileStart(const enum TimerHandle handle);
void profileStop(const enum TimerHandle handle);


double getElapsedTime(const enum TimerHandle handle);


void printPerformanceResults(int nGlobalAtoms, int printRate);


void printPerformanceResultsYaml(FILE* file);
# 12 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/timestep.c" 2
# 12 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/timestep.c"
# 13 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/timestep.c"
static void advanceVelocity(SimFlat* s, int nBoxes, real_t dt);
# 14 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/timestep.c"
static void advancePosition(SimFlat* s, int nBoxes, real_t dt);
# 33 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/timestep.c"
# 33 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/timestep.c"
double timestep(SimFlat* s, int nSteps, real_t dt)
# 34 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/timestep.c"
{new_stack((void *)(&timestep), 3, 3, (size_t)(7181207812802620300UL), (size_t)(0UL), (size_t)(0UL), "timestep|s|0", "%struct.SimFlatSt*", (void *)(&s), (size_t)8, 1, 0, 0, "timestep|nSteps|0", "i32", (void *)(&nSteps), (size_t)4, 0, 0, 0, "timestep|dt|0", "double", (void *)(&dt), (size_t)8, 0, 0, 0); if (____chimes_replaying) { goto lbl_0; }
# 35 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/timestep.c"
   { lbl_0: int ii; register_stack_var("timestep|ii|0", "i32", (void *)(&ii), (size_t)4, 0, 0, 0); if (____chimes_replaying) { switch(get_next_call()) { case(2): { goto call_lbl_2; } case(3): { goto call_lbl_3; } case(4): { goto call_lbl_4; } case(5): { goto call_lbl_5; } case(6): { goto call_lbl_6; } case(7): { goto call_lbl_7; } case(8): { goto call_lbl_8; } case(9): { goto call_lbl_9; } case(10): { goto call_lbl_10; } case(11): { goto call_lbl_11; } case(12): { goto call_lbl_12; } case(13): { goto call_lbl_13; } case(14): { goto call_lbl_14; } case(15): { goto call_lbl_15; } case(16): { goto call_lbl_16; } case(18): { goto call_lbl_18; } default: { chimes_error(); } } } for ( ii = (0) ; ii<nSteps; ++ii)
# 36 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/timestep.c"
   {
# 37 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/timestep.c"
      do { alias_group_changed(4, (size_t)(7181207812802620280UL), (size_t)(7181207812802620281UL), (size_t)(7181207812802620282UL), (size_t)(7181207812802620283UL)); call_lbl_2: calling((void*)&profileStart, 2, 0UL, 1, (size_t)(0UL)); profileStart(velocityTimer); } while(0);
# 38 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/timestep.c"
       call_lbl_3: calling((void*)&advanceVelocity, 3, 0UL, 3, (size_t)(7181207812802620300UL), (size_t)(0UL), (size_t)(0UL)); advanceVelocity(s, s->boxes->nLocalBoxes, 0.5*dt);
# 39 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/timestep.c"
      do { call_lbl_4: calling((void*)&profileStop, 4, 0UL, 1, (size_t)(0UL)); profileStop(velocityTimer); } while(0);
# 40 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/timestep.c"
# 41 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/timestep.c"
      do { call_lbl_5: calling((void*)&profileStart, 5, 0UL, 1, (size_t)(0UL)); profileStart(positionTimer); } while(0);
# 42 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/timestep.c"
       call_lbl_6: calling((void*)&advancePosition, 6, 0UL, 3, (size_t)(7181207812802620300UL), (size_t)(0UL), (size_t)(0UL)); advancePosition(s, s->boxes->nLocalBoxes, dt);
# 43 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/timestep.c"
      do { call_lbl_7: calling((void*)&profileStop, 7, 0UL, 1, (size_t)(0UL)); profileStop(positionTimer); } while(0);
# 44 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/timestep.c"
# 45 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/timestep.c"
      do { call_lbl_8: calling((void*)&profileStart, 8, 0UL, 1, (size_t)(0UL)); profileStart(redistributeTimer); } while(0);
# 46 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/timestep.c"
       call_lbl_9: calling((void*)&redistributeAtoms, 9, 0UL, 1, (size_t)(7181207812802620300UL)); redistributeAtoms(s);
# 47 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/timestep.c"
      do { call_lbl_10: calling((void*)&profileStop, 10, 0UL, 1, (size_t)(0UL)); profileStop(redistributeTimer); } while(0);
# 48 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/timestep.c"
# 49 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/timestep.c"
      do { call_lbl_11: calling((void*)&profileStart, 11, 0UL, 1, (size_t)(0UL)); profileStart(computeForceTimer); } while(0);
# 50 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/timestep.c"
       call_lbl_12: calling((void*)&computeForce, 12, 0UL, 1, (size_t)(7181207812802620300UL)); computeForce(s);
# 51 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/timestep.c"
      do { call_lbl_13: calling((void*)&profileStop, 13, 0UL, 1, (size_t)(0UL)); profileStop(computeForceTimer); } while(0);
# 52 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/timestep.c"
# 53 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/timestep.c"
      do { call_lbl_14: calling((void*)&profileStart, 14, 0UL, 1, (size_t)(0UL)); profileStart(velocityTimer); } while(0);
# 54 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/timestep.c"
       call_lbl_15: calling((void*)&advanceVelocity, 15, 0UL, 3, (size_t)(7181207812802620300UL), (size_t)(0UL), (size_t)(0UL)); advanceVelocity(s, s->boxes->nLocalBoxes, 0.5*dt);
# 55 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/timestep.c"
      do { call_lbl_16: calling((void*)&profileStop, 16, 0UL, 1, (size_t)(0UL)); profileStop(velocityTimer); } while(0);
# 56 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/timestep.c"
   } }
# 57 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/timestep.c"
# 58 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/timestep.c"
   alias_group_changed(4, (size_t)(7181207812802620280UL), (size_t)(7181207812802620281UL), (size_t)(7181207812802620282UL), (size_t)(7181207812802620283UL)); call_lbl_18: calling((void*)&kineticEnergy, 18, 0UL, 1, (size_t)(7181207812802620300UL)); kineticEnergy(s);
# 59 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/timestep.c"
# 60 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/timestep.c"
   rm_stack(false, 0UL); return s->ePotential;
# 61 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/timestep.c"
}
# 62 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/timestep.c"
# 63 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/timestep.c"
void computeForce(SimFlat* s)
# 64 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/timestep.c"
{new_stack((void *)(&computeForce), 1, 0, (size_t)(7181207812802620719UL)); if (____chimes_replaying) { switch(get_next_call()) { case(2): { goto call_lbl_2; } default: { chimes_error(); } } }
# 65 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/timestep.c"
   alias_group_changed(1, (size_t)(7181207812802620708UL)); call_lbl_2: calling((void*)s->pot->force, 2, 0UL, 1, (size_t)(7181207812802620719UL)); s->pot->force(s);
# 66 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/timestep.c"
rm_stack(false, 0UL); }
# 67 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/timestep.c"
# 68 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/timestep.c"
# 69 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/timestep.c"
void advanceVelocity(SimFlat* s, int nBoxes, real_t dt)
# 70 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/timestep.c"
{new_stack((void *)(&advanceVelocity), 3, 0, (size_t)(7181207812802620498UL), (size_t)(0UL), (size_t)(0UL)); { call_lbl_3: unsigned ____chimes_parent_stack_depth0 = get_parent_vars_stack_depth(); unsigned ____chimes_call_stack_depth0 = get_thread_stack_depth(); size_t ____chimes_region_id0; unsigned ____chimes_parent_thread0 = entering_omp_parallel(3, &____chimes_region_id0, 0); int ____chimes_first_iter0 = 1; ; if (____chimes_replaying) { switch(get_next_call()) { case(3): { goto call_lbl_3; } default: { chimes_error(); } } }
# 71 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/timestep.c"
# 71 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/timestep.c"
# 71 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/timestep.c"
#pragma omp parallel for firstprivate(____chimes_first_iter0)
# 71 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/timestep.c"
# 71 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/timestep.c"
# 72 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/timestep.c"
   for (int iBox=0; iBox<nBoxes; iBox++)
# 73 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/timestep.c"
   {if (____chimes_first_iter0) { register_thread_local_stack_vars(LIBCHIMES_THREAD_NUM(), ____chimes_parent_thread0, LIBCHIMES_NUM_THREADS(), true, true, false, ____chimes_parent_stack_depth0, ____chimes_region_id0, 0); ____chimes_first_iter0 = 0; } if (____chimes_replaying) { chimes_error(); }
# 74 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/timestep.c"
      { int iOff; int ii; for ( iOff = (64 * iBox) , ii = (0) ; ii<s->boxes->nAtoms[iBox]; ii++,iOff++)
# 75 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/timestep.c"
      {
# 76 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/timestep.c"
         s->atoms->p[iOff][0] += dt*s->atoms->f[iOff][0];
# 77 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/timestep.c"
         s->atoms->p[iOff][1] += dt*s->atoms->f[iOff][1];
# 78 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/timestep.c"
         s->atoms->p[iOff][2] += dt*s->atoms->f[iOff][2];
# 79 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/timestep.c"
      } }
# 80 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/timestep.c"
   } leaving_omp_parallel(____chimes_call_stack_depth0, ____chimes_region_id0); }
# 81 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/timestep.c"
alias_group_changed(7, (size_t)(7181207812802620374UL), (size_t)(7181207812802620375UL), (size_t)(7181207812802620376UL), (size_t)(7181207812802620377UL), (size_t)(7181207812802620378UL), (size_t)(7181207812802620379UL), (size_t)(7181207812802620419UL)); rm_stack(false, 0UL); }
# 82 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/timestep.c"
# 83 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/timestep.c"
void advancePosition(SimFlat* s, int nBoxes, real_t dt)
# 84 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/timestep.c"
{new_stack((void *)(&advancePosition), 3, 0, (size_t)(7181207812802620656UL), (size_t)(0UL), (size_t)(0UL)); { call_lbl_3: unsigned ____chimes_parent_stack_depth1 = get_parent_vars_stack_depth(); unsigned ____chimes_call_stack_depth1 = get_thread_stack_depth(); size_t ____chimes_region_id1; unsigned ____chimes_parent_thread1 = entering_omp_parallel(3, &____chimes_region_id1, 0); int ____chimes_first_iter1 = 1; ; if (____chimes_replaying) { switch(get_next_call()) { case(3): { goto call_lbl_3; } default: { chimes_error(); } } }
# 85 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/timestep.c"
# 85 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/timestep.c"
# 85 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/timestep.c"
#pragma omp parallel for firstprivate(____chimes_first_iter1)
# 85 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/timestep.c"
# 85 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/timestep.c"
# 86 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/timestep.c"
   for (int iBox=0; iBox<nBoxes; iBox++)
# 87 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/timestep.c"
   {if (____chimes_first_iter1) { register_thread_local_stack_vars(LIBCHIMES_THREAD_NUM(), ____chimes_parent_thread1, LIBCHIMES_NUM_THREADS(), true, true, false, ____chimes_parent_stack_depth1, ____chimes_region_id1, 0); ____chimes_first_iter1 = 0; } if (____chimes_replaying) { chimes_error(); }
# 88 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/timestep.c"
      { int iOff; int ii; for ( iOff = (64 * iBox) , ii = (0) ; ii<s->boxes->nAtoms[iBox]; ii++,iOff++)
# 89 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/timestep.c"
      {
# 90 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/timestep.c"
          int iSpecies; iSpecies = (s->atoms->iSpecies[iOff]) ;
# 91 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/timestep.c"
          real_t invMass; invMass = (1. / s->species[iSpecies].mass) ;
# 92 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/timestep.c"
         s->atoms->r[iOff][0] += dt*s->atoms->p[iOff][0]*invMass;
# 93 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/timestep.c"
         s->atoms->r[iOff][1] += dt*s->atoms->p[iOff][1]*invMass;
# 94 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/timestep.c"
         s->atoms->r[iOff][2] += dt*s->atoms->p[iOff][2]*invMass;
# 95 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/timestep.c"
      } }
# 96 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/timestep.c"
   } leaving_omp_parallel(____chimes_call_stack_depth1, ____chimes_region_id1); }
# 97 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/timestep.c"
alias_group_changed(9, (size_t)(7181207812802620502UL), (size_t)(7181207812802620503UL), (size_t)(7181207812802620504UL), (size_t)(7181207812802620505UL), (size_t)(7181207812802620506UL), (size_t)(7181207812802620507UL), (size_t)(7181207812802620508UL), (size_t)(7181207812802620509UL), (size_t)(7181207812802620549UL)); rm_stack(false, 0UL); }
# 98 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/timestep.c"
# 99 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/timestep.c"
# 100 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/timestep.c"
# 101 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/timestep.c"
void kineticEnergy(SimFlat* s)
# 102 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/timestep.c"
{new_stack((void *)(&kineticEnergy), 1, 1, (size_t)(7181207812802620891UL), "kineticEnergy|s|0", "%struct.SimFlatSt*", (void *)(&s), (size_t)8, 1, 0, 0); if (____chimes_replaying) { goto lbl_0; }
# 103 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/timestep.c"
    lbl_0: real_t eLocal[2]; register_stack_var("kineticEnergy|eLocal|0", "[2 x double]", (void *)(eLocal), (size_t)16, 0, 0, 0); if (____chimes_replaying) { switch(get_next_call()) { case(7): { goto call_lbl_7; } case(2): { goto call_lbl_2; } case(3): { goto call_lbl_3; } case(4): { goto call_lbl_4; } default: { chimes_error(); } } } ;
# 104 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/timestep.c"
    real_t kenergy; kenergy = (0.) ;
# 105 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/timestep.c"
   eLocal[0] = s->ePotential;
# 106 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/timestep.c"
   eLocal[1] = 0; { call_lbl_7: unsigned ____chimes_parent_stack_depth2 = get_parent_vars_stack_depth(); unsigned ____chimes_call_stack_depth2 = get_thread_stack_depth(); size_t ____chimes_region_id2; unsigned ____chimes_parent_thread2 = entering_omp_parallel(7, &____chimes_region_id2, 0); int ____chimes_first_iter2 = 1; ;
# 107 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/timestep.c"
# 107 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/timestep.c"
# 107 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/timestep.c"
#pragma omp parallel for reduction(+:kenergy) firstprivate(____chimes_first_iter2)
# 107 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/timestep.c"
# 107 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/timestep.c"
# 108 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/timestep.c"
   for (int iBox=0; iBox<s->boxes->nLocalBoxes; iBox++)
# 109 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/timestep.c"
   {if (____chimes_first_iter2) { register_thread_local_stack_vars(LIBCHIMES_THREAD_NUM(), ____chimes_parent_thread2, LIBCHIMES_NUM_THREADS(), true, true, false, ____chimes_parent_stack_depth2, ____chimes_region_id2, 0); ____chimes_first_iter2 = 0; } if (____chimes_replaying) { chimes_error(); }
# 110 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/timestep.c"
      { int iOff; int ii; for ( iOff = (64 * iBox) , ii = (0) ; ii<s->boxes->nAtoms[iBox]; ii++,iOff++)
# 111 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/timestep.c"
      {
# 112 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/timestep.c"
          int iSpecies; iSpecies = (s->atoms->iSpecies[iOff]) ;
# 113 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/timestep.c"
          real_t invMass; invMass = (0.5 / s->species[iSpecies].mass) ;
# 114 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/timestep.c"
         kenergy += ( s->atoms->p[iOff][0] * s->atoms->p[iOff][0] +
# 115 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/timestep.c"
         s->atoms->p[iOff][1] * s->atoms->p[iOff][1] +
# 116 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/timestep.c"
         s->atoms->p[iOff][2] * s->atoms->p[iOff][2] )*invMass;
# 117 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/timestep.c"
      } }
# 118 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/timestep.c"
   } leaving_omp_parallel(____chimes_call_stack_depth2, ____chimes_region_id2); }
# 119 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/timestep.c"
# 120 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/timestep.c"
   eLocal[1] = kenergy;
# 121 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/timestep.c"
# 122 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/timestep.c"
   real_t eSum[2]; ;
# 123 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/timestep.c"
   do { alias_group_changed(8, (size_t)(7181207812802620720UL), (size_t)(7181207812802620721UL), (size_t)(7181207812802620722UL), (size_t)(7181207812802620723UL), (size_t)(7181207812802620724UL), (size_t)(7181207812802620725UL), (size_t)(7181207812802620726UL), (size_t)(7181207812802620727UL)); call_lbl_2: calling((void*)&profileStart, 2, 0UL, 1, (size_t)(0UL)); profileStart(commReduceTimer); } while(0);
# 124 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/timestep.c"
    call_lbl_3: calling((void*)&addRealParallel, 3, 0UL, 3, (size_t)(7181207812802620721UL), (size_t)(7181207812802620728UL), (size_t)(0UL)); addRealParallel(eLocal, eSum, 2);
# 125 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/timestep.c"
   do { call_lbl_4: calling((void*)&profileStop, 4, 0UL, 1, (size_t)(0UL)); profileStop(commReduceTimer); } while(0);
# 126 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/timestep.c"
# 127 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/timestep.c"
   s->ePotential = eSum[0];
# 128 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/timestep.c"
   s->eKinetic = eSum[1];
# 129 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/timestep.c"
alias_group_changed(1, (size_t)(7181207812802620891UL)); rm_stack(false, 0UL); }
# 144 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/timestep.c"
# 144 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/timestep.c"
void redistributeAtoms(SimFlat* sim)
# 145 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/timestep.c"
{new_stack((void *)(&redistributeAtoms), 1, 1, (size_t)(7181207812802620673UL), "redistributeAtoms|sim|0", "%struct.SimFlatSt*", (void *)(&sim), (size_t)8, 1, 0, 0); if (____chimes_replaying) { switch(get_next_call()) { case(10): { goto call_lbl_10; } case(2): { goto call_lbl_2; } case(3): { goto call_lbl_3; } case(4): { goto call_lbl_4; } case(5): { goto call_lbl_5; } default: { chimes_error(); } } }
# 146 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/timestep.c"
   alias_group_changed(1, (size_t)(7181207812802620659UL)); call_lbl_2: calling((void*)&updateLinkCells, 2, 0UL, 2, (size_t)(7181207812802620675UL), (size_t)(7181207812802620675UL)); updateLinkCells(sim->boxes, sim->atoms);
# 147 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/timestep.c"
# 148 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/timestep.c"
   do { call_lbl_3: calling((void*)&profileStart, 3, 0UL, 1, (size_t)(0UL)); profileStart(atomHaloTimer); } while(0);
# 149 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/timestep.c"
    call_lbl_4: calling((void*)&haloExchange, 4, 0UL, 2, (size_t)(7181207812802620675UL), (size_t)(7181207812802620673UL)); haloExchange(sim->atomExchange, sim);
# 150 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/timestep.c"
   do { call_lbl_5: calling((void*)&profileStop, 5, 0UL, 1, (size_t)(0UL)); profileStop(atomHaloTimer); } while(0); { call_lbl_10: unsigned ____chimes_parent_stack_depth3 = get_parent_vars_stack_depth(); unsigned ____chimes_call_stack_depth3 = get_thread_stack_depth(); size_t ____chimes_region_id3; unsigned ____chimes_parent_thread3 = entering_omp_parallel(10, &____chimes_region_id3, 0); int ____chimes_first_iter3 = 1; ;
# 151 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/timestep.c"
# 152 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/timestep.c"
# 152 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/timestep.c"
# 152 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/timestep.c"
#pragma omp parallel for firstprivate(____chimes_first_iter3)
# 152 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/timestep.c"
# 152 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/timestep.c"
# 153 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/timestep.c"
   for (int ii = 0;ii < sim->boxes->nTotalBoxes; ++ii) {if (____chimes_first_iter3) { register_thread_local_stack_vars(LIBCHIMES_THREAD_NUM(), ____chimes_parent_thread3, LIBCHIMES_NUM_THREADS(), true, true, false, ____chimes_parent_stack_depth3, ____chimes_region_id3, 0); ____chimes_first_iter3 = 0; } if (____chimes_replaying) { chimes_error(); } alias_group_changed(1, (size_t)(7181207812802620660UL)); call_lbl_7: calling((void*)&sortAtomsInCell, 7, 0UL, 3, (size_t)(7181207812802620675UL), (size_t)(7181207812802620675UL), (size_t)(0UL)); sortAtomsInCell(sim->atoms, sim->boxes, ii); } leaving_omp_parallel(____chimes_call_stack_depth3, ____chimes_region_id3); } ;
# 155 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/timestep.c"
alias_group_changed(1, (size_t)(7181207812802620660UL)); rm_stack(false, 0UL); }


static int module_init() {
    init_module(7181207812802620279UL, 16, 5, 8, 11, 7181207812802620279UL + 497UL, 7181207812802620279UL + 499UL, 7181207812802620279UL + 380UL, 7181207812802620279UL + 394UL, 7181207812802620279UL + 268UL, 7181207812802620279UL + 270UL, 7181207812802620279UL + 21UL, 7181207812802620279UL + 24UL, 7181207812802620279UL + 429UL, 7181207812802620279UL + 440UL, 7181207812802620279UL + 612UL, 7181207812802620279UL + 497UL, 7181207812802620279UL + 95UL, 7181207812802620279UL + 219UL, 7181207812802620279UL + 441UL, 7181207812802620279UL + 612UL, 7181207812802620279UL + 440UL, 7181207812802620279UL + 434UL, 7181207812802620279UL + 219UL, 7181207812802620279UL + 138UL, 7181207812802620279UL + 1UL, 7181207812802620279UL + 21UL, 7181207812802620279UL + 394UL, 7181207812802620279UL + 396UL, 7181207812802620279UL + 434UL, 7181207812802620279UL + 436UL, 7181207812802620279UL + 138UL, 7181207812802620279UL + 140UL, 7181207812802620279UL + 223UL, 7181207812802620279UL + 377UL, 7181207812802620279UL + 377UL, 7181207812802620279UL + 268UL, "AtomsSt", 8, "int", (int)__builtin_offsetof (struct AtomsSt, nLocal), "int", (int)__builtin_offsetof (struct AtomsSt, nGlobal), "int*", (int)__builtin_offsetof (struct AtomsSt, gid), "int*", (int)__builtin_offsetof (struct AtomsSt, iSpecies), "[ 3 x double ]*", (int)__builtin_offsetof (struct AtomsSt, r), "[ 3 x double ]*", (int)__builtin_offsetof (struct AtomsSt, p), "[ 3 x double ]*", (int)__builtin_offsetof (struct AtomsSt, f), "double*", (int)__builtin_offsetof (struct AtomsSt, U), "BasePotentialSt", 9, "double", (int)__builtin_offsetof (struct BasePotentialSt, cutoff), "double", (int)__builtin_offsetof (struct BasePotentialSt, mass), "double", (int)__builtin_offsetof (struct BasePotentialSt, lat), "[ 8 x char ]", (int)__builtin_offsetof (struct BasePotentialSt, latticeType), "[ 3 x char ]", (int)__builtin_offsetof (struct BasePotentialSt, name), "int", (int)__builtin_offsetof (struct BasePotentialSt, atomicNo), "*", (int)__builtin_offsetof (struct BasePotentialSt, force), "*", (int)__builtin_offsetof (struct BasePotentialSt, print), "*", (int)__builtin_offsetof (struct BasePotentialSt, destroy), "DomainSt", 8, "[ 3 x int ]", (int)__builtin_offsetof (struct DomainSt, procGrid), "[ 3 x int ]", (int)__builtin_offsetof (struct DomainSt, procCoord), "[ 3 x double ]", (int)__builtin_offsetof (struct DomainSt, globalMin), "[ 3 x double ]", (int)__builtin_offsetof (struct DomainSt, globalMax), "[ 3 x double ]", (int)__builtin_offsetof (struct DomainSt, globalExtent), "[ 3 x double ]", (int)__builtin_offsetof (struct DomainSt, localMin), "[ 3 x double ]", (int)__builtin_offsetof (struct DomainSt, localMax), "[ 3 x double ]", (int)__builtin_offsetof (struct DomainSt, localExtent), "HaloExchangeSt", 5, "[ 6 x int ]", (int)__builtin_offsetof (struct HaloExchangeSt, nbrRank), "int", (int)__builtin_offsetof (struct HaloExchangeSt, bufCapacity), "*", (int)__builtin_offsetof (struct HaloExchangeSt, loadBuffer), "*", (int)__builtin_offsetof (struct HaloExchangeSt, unloadBuffer), "*", (int)__builtin_offsetof (struct HaloExchangeSt, destroy), "LinkCellSt", 10, "[ 3 x int ]", (int)__builtin_offsetof (struct LinkCellSt, gridSize), "int", (int)__builtin_offsetof (struct LinkCellSt, nLocalBoxes), "int", (int)__builtin_offsetof (struct LinkCellSt, nHaloBoxes), "int", (int)__builtin_offsetof (struct LinkCellSt, nTotalBoxes), "[ 3 x double ]", (int)__builtin_offsetof (struct LinkCellSt, localMin), "[ 3 x double ]", (int)__builtin_offsetof (struct LinkCellSt, localMax), "[ 3 x double ]", (int)__builtin_offsetof (struct LinkCellSt, boxSize), "[ 3 x double ]", (int)__builtin_offsetof (struct LinkCellSt, invBoxSize), "int*", (int)__builtin_offsetof (struct LinkCellSt, nAtoms), "int**", (int)__builtin_offsetof (struct LinkCellSt, nbrBoxes), "SimFlatSt", 11, "int", (int)__builtin_offsetof (struct SimFlatSt, nSteps), "int", (int)__builtin_offsetof (struct SimFlatSt, printRate), "double", (int)__builtin_offsetof (struct SimFlatSt, dt), "%struct.DomainSt*", (int)__builtin_offsetof (struct SimFlatSt, domain), "%struct.LinkCellSt*", (int)__builtin_offsetof (struct SimFlatSt, boxes), "%struct.AtomsSt*", (int)__builtin_offsetof (struct SimFlatSt, atoms), "%struct.SpeciesDataSt*", (int)__builtin_offsetof (struct SimFlatSt, species), "double", (int)__builtin_offsetof (struct SimFlatSt, ePotential), "double", (int)__builtin_offsetof (struct SimFlatSt, eKinetic), "%struct.BasePotentialSt*", (int)__builtin_offsetof (struct SimFlatSt, pot), "%struct.HaloExchangeSt*", (int)__builtin_offsetof (struct SimFlatSt, atomExchange), "SpeciesDataSt", 3, "[ 3 x char ]", (int)__builtin_offsetof (struct SpeciesDataSt, name), "int", (int)__builtin_offsetof (struct SpeciesDataSt, atomicNo), "double", (int)__builtin_offsetof (struct SpeciesDataSt, mass), "TimerHandle", 0, "__sFILE", 19, "unsigned char*", (int)__builtin_offsetof (struct __sFILE, _p), "int", (int)__builtin_offsetof (struct __sFILE, _r), "int", (int)__builtin_offsetof (struct __sFILE, _w), "short", (int)__builtin_offsetof (struct __sFILE, _flags), "short", (int)__builtin_offsetof (struct __sFILE, _file), "%struct.__sbuf", (int)__builtin_offsetof (struct __sFILE, _bf), "int", (int)__builtin_offsetof (struct __sFILE, _lbfsize), "*", (int)__builtin_offsetof (struct __sFILE, _close), "*", (int)__builtin_offsetof (struct __sFILE, _read), "*", (int)__builtin_offsetof (struct __sFILE, _seek), "*", (int)__builtin_offsetof (struct __sFILE, _write), "%struct.__sbuf", (int)__builtin_offsetof (struct __sFILE, _ub), "%struct.__sFILEX*", (int)__builtin_offsetof (struct __sFILE, _extra), "int", (int)__builtin_offsetof (struct __sFILE, _ur), "[ 3 x unsigned char ]", (int)__builtin_offsetof (struct __sFILE, _ubuf), "[ 1 x unsigned char ]", (int)__builtin_offsetof (struct __sFILE, _nbuf), "%struct.__sbuf", (int)__builtin_offsetof (struct __sFILE, _lb), "int", (int)__builtin_offsetof (struct __sFILE, _blksize), "long long int", (int)__builtin_offsetof (struct __sFILE, _offset), "__sFILEX", 0, "__sbuf", 2, "unsigned char*", (int)__builtin_offsetof (struct __sbuf, _base), "int", (int)__builtin_offsetof (struct __sbuf, _size), "_Z8timestepP9SimFlatStid", 7, "_Z11profileStop11TimerHandle", "_Z12computeForceP9SimFlatSt", "_Z12profileStart11TimerHandle", "_Z13kineticEnergyP9SimFlatSt", "_Z17redistributeAtomsP9SimFlatSt", "_ZL15advancePositionP9SimFlatStid", "_ZL15advanceVelocityP9SimFlatStid", "_ZL15advanceVelocityP9SimFlatStid", 0, "_ZL15advancePositionP9SimFlatStid", 0, "_Z17redistributeAtomsP9SimFlatSt", 5, "_Z11profileStop11TimerHandle", "_Z12haloExchangeP14HaloExchangeStPv", "_Z12profileStart11TimerHandle", "_Z15sortAtomsInCellP7AtomsStP10LinkCellSti", "_Z15updateLinkCellsP10LinkCellStP7AtomsSt", "_Z13kineticEnergyP9SimFlatSt", 3, "_Z11profileStop11TimerHandle", "_Z12profileStart11TimerHandle", "_Z15addRealParallelPdS_i", "timestep|s|0", 5, "_Z17redistributeAtomsP9SimFlatSt", "_Z13kineticEnergyP9SimFlatSt", "_Z12profileStart11TimerHandle", "_Z12computeForceP9SimFlatSt", "_Z11profileStop11TimerHandle", "timestep|nSteps|0", 5, "_Z17redistributeAtomsP9SimFlatSt", "_Z13kineticEnergyP9SimFlatSt", "_Z12profileStart11TimerHandle", "_Z12computeForceP9SimFlatSt", "_Z11profileStop11TimerHandle", "timestep|dt|0", 5, "_Z17redistributeAtomsP9SimFlatSt", "_Z13kineticEnergyP9SimFlatSt", "_Z12profileStart11TimerHandle", "_Z12computeForceP9SimFlatSt", "_Z11profileStop11TimerHandle", "timestep|ii|0", 5, "_Z17redistributeAtomsP9SimFlatSt", "_Z13kineticEnergyP9SimFlatSt", "_Z12profileStart11TimerHandle", "_Z12computeForceP9SimFlatSt", "_Z11profileStop11TimerHandle", "redistributeAtoms|sim|0", 5, "_Z15updateLinkCellsP10LinkCellStP7AtomsSt", "_Z15sortAtomsInCellP7AtomsStP10LinkCellSti", "_Z12profileStart11TimerHandle", "_Z12haloExchangeP14HaloExchangeStPv", "_Z11profileStop11TimerHandle", "redistributeAtoms|ii|0", 1, "_Z15sortAtomsInCellP7AtomsStP10LinkCellSti", "kineticEnergy|s|0", 3, "_Z15addRealParallelPdS_i", "_Z12profileStart11TimerHandle", "_Z11profileStop11TimerHandle", "kineticEnergy|eLocal|0", 1, "_Z13kineticEnergyP9SimFlatSt");
    return 0;
}

static int __libchimes_module_init = module_init();
