/*
 *         ---- The Unbalanced Tree Search (UTS) Benchmark ----
 *  
 *  This file is part of the unbalanced tree search benchmark.  This
 *  project is licensed under the MIT Open Source license.  See the LICENSE
 *  file for copyright and licensing information.
 *
 *  UTS is a collaborative project between researchers at the University of
 *  Maryland, the University of North Carolina at Chapel Hill, and the Ohio
 *  State University.  See AUTHORS file for more information.
 *
 *  ** THIS IS A PRE-RELEASE VERSION OF UTS, PLEASE DO NOT REDISTRIBUTE. **
 */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

#include "uts.h"

#ifdef __MTA__
/***********************************************************
 *     Cray MTA 2 -- Multithreaded Execution               *
 ***********************************************************/
#include <sys/mta_task.h>
#include <machine/mtaops.h>
#include <machine/runtime.h>

#define PARALLEL         1
#define COMPILER_TYPE    4
#define SHARED
#define SHARED_INDEF
#define VOLATILE
#define MAXTHREADS 1
#define LOCK_T           void
#define GET_NUM_THREADS  mta_get_num_teams()
#define GET_THREAD_NUM   0
#define SET_LOCK(zlk)    
#define UNSET_LOCK(zlk)  
#define INIT_LOCK(zlk) 
#define INIT_SINGLE_LOCK(zlk) 
#define SMEMCPY          memcpy
#define ALLOC            malloc
#define BARRIER           

#else
/***********************************************************
 *     (default) ANSI C compiler - sequential execution    *
 ***********************************************************/
#define PARALLEL         0
#define COMPILER_TYPE    0
#define SHARED
#define SHARED_INDEF
#define VOLATILE
#define MAXTHREADS 1
#define LOCK_T           void
#define GET_NUM_THREADS  1
#define GET_THREAD_NUM   0
#define SET_LOCK(zlk)    
#define UNSET_LOCK(zlk)  
#define INIT_LOCK(zlk) 
#define INIT_SINGLE_LOCK(zlk) 
#define SMEMCPY          memcpy
#define ALLOC            malloc
#define BARRIER           
#endif


/***********************************************************
 *  Global state                                           *
 ***********************************************************/
int nNodes  = 0;
int nLeaves = 0;
int maxTreeDepth = 0;


/***********************************************************
 *  UTS Implementation Hooks                               *
 ***********************************************************/

// The name of this implementation
char * impl_getName() {
#ifdef __MTA__
  return "MTA Futures-Parallel Recursive Search";
#else
  return "Sequential Recursive Search";
#endif
}

int  impl_paramsToStr(char *strBuf, int ind) { 
  ind += sprintf(strBuf+ind, "Execution strategy:  %s\n", impl_getName());
#ifdef __MTA__
  ind += sprintf(strBuf+ind, "  MTA parallel search using %d teams, %d max teams\n", mta_get_num_teams(), mta_get_max_teams()); 
#endif
  return ind;
}

// Not using UTS command line params, return non-success
int  impl_parseParam(char *param, char *value) { return 1; }

void impl_helpMessage() {
  printf("   none.\n");
}

void impl_abort(int err) {
  exit(err);
}


/***********************************************************
 * Recursive depth-first implementation                    *
 ***********************************************************/

int parTreeSearch(int depth, Node *parent) {
  Node *children;
  int parentHeight = parent->height;
  int numChildren, childType;
  int subtreesize;

  // FIXME: Potential hotspot -- could be better to return a struct
  // with depth, count, and nleaves
  maxTreeDepth = max(depth, maxTreeDepth);

  numChildren = uts_numChildren(parent);
  childType   = uts_childType(parent);

  // record number of children in parent
  parent->numChildren = numChildren;
  subtreesize = numChildren;
  
  // Recurse on the children
  if (numChildren > 0) {
    int i, j;
    children = malloc(numChildren * sizeof(Node));

    for (i = 0; i < numChildren; i++) {
      children[i].type = childType;
      children[i].height = parentHeight + 1;
      children[i].numChildren = -1;    // not yet determined
    }

#pragma mta assert parallel 
//#pragma mta use 100 streams
#pragma mta loop future
    for (i = 0; i < numChildren; i++) {
      for (j = 0; j < computeGranularity; j++) {
        rng_spawn(parent->state.state, children[i].state.state, i);
      }
#ifdef __MTA__
      int_fetch_add(&subtreesize, parTreeSearch(depth+1, &children[i]));
#else
      subtreesize += parTreeSearch(depth+1, &children[i]);
#endif /* __MTA__ */
    }
  } else {
#ifndef __MTA__
    // FIXME: Also a potential hotspot
    ++nLeaves;
#endif
  }

  // Don't need to keep around children after they have been explored
  // Freeing this returns memory to the MTA's slice allocator possibly
  // giving better performance.
  if (numChildren > 0) free(children);

  return subtreesize;
}


int main(int argc, char *argv[]) {
  Node root;
  double t1, t2;

  uts_parseParams(argc, argv);

  if (GET_THREAD_NUM == 0) {
    uts_printParams();
    uts_initRoot(&root, type);
  }

#pragma mta fence
  t1 = uts_wctime();

  nNodes = parTreeSearch(0, &root) + 1 /* root */;

#pragma mta fence
  t2 = uts_wctime();

  if (GET_THREAD_NUM == 0) {
    uts_showStats(GET_NUM_THREADS, 0, t2-t1, nNodes, nLeaves, maxTreeDepth);
  } 

  return 0;
}
