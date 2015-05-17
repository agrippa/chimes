# 1 "timestep.c.pre.transformed.cpp"
# 1 "<built-in>" 1
# 1 "<built-in>" 3
# 326 "<built-in>" 3
# 1 "<command line>" 1

# 1 "/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/clang/6.1.0/include/stddef.h" 1 3 4
# 47 "/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/clang/6.1.0/include/stddef.h" 3 4
typedef long int ptrdiff_t;
# 58 "/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/clang/6.1.0/include/stddef.h" 3 4
typedef long unsigned int size_t;
# 3 "<command line>" 2
# 1 "<built-in>" 2
# 1 "timestep.c.pre.transformed.cpp" 2
static int ____must_checkpoint_redistributeAtoms_sim_0 = 2;
static int ____must_checkpoint_redistributeAtoms_ii_0 = 2;
static int ____must_checkpoint_kineticEnergy_s_0 = 2;
static int ____must_checkpoint_kineticEnergy_eLocal_0 = 2;

static int ____must_manage_advancePosition = 2;
static int ____must_manage_kineticEnergy = 2;
static int ____must_manage_redistributeAtoms = 2;
static int ____must_manage_advanceVelocity = 2;

static unsigned ____alias_loc_id_0;
static unsigned ____alias_loc_id_1;
static unsigned ____alias_loc_id_2;
static unsigned ____alias_loc_id_3;
static unsigned ____alias_loc_id_4;
static unsigned ____alias_loc_id_5;
static unsigned ____alias_loc_id_6;
static unsigned ____alias_loc_id_7;
static unsigned ____alias_loc_id_8;
static unsigned ____alias_loc_id_9;
# 1 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
# 1 "<built-in>" 1
# 1 "<built-in>" 3
# 326 "<built-in>" 3
# 1 "<command line>" 1

# 1 "/Users/jmg3/num-debug/src/libchimes/libchimes.h" 1



# 1 "/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/clang/6.1.0/include/stddef.h" 1 3 4
# 47 "/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/clang/6.1.0/include/stddef.h" 3 4
typedef long int ptrdiff_t;
# 58 "/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/clang/6.1.0/include/stddef.h" 3 4
typedef long unsigned int size_t;
# 5 "/Users/jmg3/num-debug/src/libchimes/libchimes.h" 2
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

int renameat(int, const char *, int, const char *) __attribute__((availability(macosx,introduced=10.10)));

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
int dprintf(int, const char * , ...) __attribute__((__format__ (__printf__, 2, 3))) __attribute__((availability(macosx,introduced=10.7)));
int vdprintf(int, const char * , va_list) __attribute__((__format__ (__printf__, 2, 0))) __attribute__((availability(macosx,introduced=10.7)));
ssize_t getdelim(char ** , size_t * , int, FILE * ) __attribute__((availability(macosx,introduced=10.7)));
ssize_t getline(char ** , size_t * , FILE * ) __attribute__((availability(macosx,introduced=10.7)));
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
# 6 "/Users/jmg3/num-debug/src/libchimes/libchimes.h" 2

extern void init_chimes();
extern void calling(void *func_ptr, int lbl, size_t set_return_alias,
        unsigned loc_id, unsigned naliases, ...);
extern int get_next_call();
extern int new_stack(void *func_ptr, const char *funcname, int *conditional,
        unsigned n_local_arg_aliases, unsigned nargs, ...);
extern void init_module(size_t module_id, int n_contains_mappings,
        int nfunctions, int nvars, int n_change_locs, int nstructs, ...);
extern void rm_stack(bool has_return_alias, size_t returned_alias,
        const char *funcname, int *conditional, unsigned loc_id, int disabled);
extern void register_stack_var(const char *mangled_name, int *cond_registration,
        const char *full_type, void *ptr, size_t size, int is_ptr,
        int is_struct, int n_ptr_fields, ...);
extern void register_stack_vars(int nvars, ...);
extern void register_global_var(const char *mangled_name, const char *full_type,
        void *ptr, size_t size, int is_ptr, int is_struct, int n_ptr_fields,
        ...);
extern void register_constant(size_t const_id, void *address,
        size_t length);
extern void register_functions(int nfunctions, const char *module_name, ...);
extern int alias_group_changed(unsigned loc_id);
extern void *malloc_wrapper(size_t nbytes, size_t group, int is_ptr,
        int is_struct, ...);
extern void *calloc_wrapper(size_t num, size_t size, size_t group, int is_ptr,
        int is_struct, ...);
extern void *realloc_wrapper(void *ptr, size_t nbytes, size_t group, int is_ptr,
        int is_struct, ...);
extern void free_wrapper(void *ptr, size_t group);
extern bool disable_current_thread();
extern void reenable_current_thread(bool was_disabled);

extern unsigned entering_omp_parallel(unsigned lbl, size_t *region_id,
        unsigned nlocals, ...);
extern void register_thread_local_stack_vars(unsigned relation,
        unsigned parent, unsigned threads_in_region,
        unsigned parent_stack_depth,
        size_t region_id, unsigned nlocals, ...);
extern void leaving_omp_parallel(unsigned expected_parent_stack_depth,
        size_t region_id);
extern unsigned get_parent_vars_stack_depth();
extern unsigned get_thread_stack_depth();

extern void chimes_error();
# 66 "/Users/jmg3/num-debug/src/libchimes/libchimes.h"
inline unsigned LIBCHIMES_THREAD_NUM() { return 0; }
inline unsigned LIBCHIMES_NUM_THREADS() { return 1; }


extern int ____chimes_replaying;
# 3 "<command line>" 2
# 1 "<built-in>" 2
# 1 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c" 2
# 1 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
# 2 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
# 3 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"

# 1 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.h" 1






# 1 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMDTypes.h" 1







# 1 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mytype.h" 1
# 13 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mytype.h"
typedef double real_t;




typedef real_t real3[3];

static void zeroReal3(real3 a)
{
   a[0] = 0.0;
   a[1] = 0.0;
   a[2] = 0.0;
}
# 9 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMDTypes.h" 2
# 1 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/haloExchange.h" 1







struct AtomsSt;
struct LinkCellSt;
struct DomainSt;
# 26 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/haloExchange.h"
typedef struct HaloExchangeSt
{


   int nbrRank[6];


   int bufCapacity;
# 47 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/haloExchange.h"
 int (*loadBuffer)(void* parms, void* data, int face, char* buf);
# 61 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/haloExchange.h"
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
# 10 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMDTypes.h" 2
# 1 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.h" 1
# 12 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/linkCells.h"
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
# 11 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMDTypes.h" 2
# 1 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/decomposition.h" 1
# 10 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/decomposition.h"
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
# 12 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMDTypes.h" 2
# 1 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/initAtoms.h" 1








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
# 13 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMDTypes.h" 2

struct SimFlatSt;
# 28 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/CoMDTypes.h"
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
# 8 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.h" 2

double timestep(SimFlat* s, int n, real_t dt);
void computeForce(SimFlat* s);
void kineticEnergy(SimFlat* s);


void redistributeAtoms(struct SimFlatSt* sim);
# 5 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c" 2
# 5 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
# 6 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
# 7 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"

# 1 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.h" 1
# 10 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.h"
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
# 9 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c" 2
# 1 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/performanceTimers.h" 1








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
# 57 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/performanceTimers.h"
void profileStart(const enum TimerHandle handle);
void profileStop(const enum TimerHandle handle);


double getElapsedTime(const enum TimerHandle handle);


void printPerformanceResults(int nGlobalAtoms, int printRate);


void printPerformanceResultsYaml(FILE* file);
# 10 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c" 2
# 10 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
# 11 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"

# 1 "/Users/jmg3/num-debug/src/libchimes/checkpoint.h" 1








# 1 "/usr/include/stdlib.h" 1 3 4
# 65 "/usr/include/stdlib.h" 3 4
# 1 "/usr/include/sys/wait.h" 1 3 4
# 79 "/usr/include/sys/wait.h" 3 4
typedef enum {
 P_ALL,
 P_PID,
 P_PGID
} idtype_t;







# 1 "/usr/include/sys/_types/_pid_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_pid_t.h" 3 4
typedef __darwin_pid_t pid_t;
# 90 "/usr/include/sys/wait.h" 2 3 4
# 1 "/usr/include/sys/_types/_id_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_id_t.h" 3 4
typedef __darwin_id_t id_t;
# 91 "/usr/include/sys/wait.h" 2 3 4
# 109 "/usr/include/sys/wait.h" 3 4
# 1 "/usr/include/sys/signal.h" 1 3 4
# 73 "/usr/include/sys/signal.h" 3 4
# 1 "/usr/include/sys/appleapiopts.h" 1 3 4
# 74 "/usr/include/sys/signal.h" 2 3 4







# 1 "/usr/include/machine/signal.h" 1 3 4
# 32 "/usr/include/machine/signal.h" 3 4
# 1 "/usr/include/i386/signal.h" 1 3 4
# 39 "/usr/include/i386/signal.h" 3 4
typedef int sig_atomic_t;
# 33 "/usr/include/machine/signal.h" 2 3 4
# 82 "/usr/include/sys/signal.h" 2 3 4
# 145 "/usr/include/sys/signal.h" 3 4
# 1 "/usr/include/machine/_mcontext.h" 1 3 4
# 29 "/usr/include/machine/_mcontext.h" 3 4
# 1 "/usr/include/i386/_mcontext.h" 1 3 4
# 33 "/usr/include/i386/_mcontext.h" 3 4
# 1 "/usr/include/mach/i386/_structs.h" 1 3 4
# 43 "/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_i386_thread_state
{
    unsigned int __eax;
    unsigned int __ebx;
    unsigned int __ecx;
    unsigned int __edx;
    unsigned int __edi;
    unsigned int __esi;
    unsigned int __ebp;
    unsigned int __esp;
    unsigned int __ss;
    unsigned int __eflags;
    unsigned int __eip;
    unsigned int __cs;
    unsigned int __ds;
    unsigned int __es;
    unsigned int __fs;
    unsigned int __gs;
};
# 89 "/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_fp_control
{
    unsigned short __invalid :1,
        __denorm :1,
    __zdiv :1,
    __ovrfl :1,
    __undfl :1,
    __precis :1,
      :2,
    __pc :2,





    __rc :2,






             :1,
      :3;
};
typedef struct __darwin_fp_control __darwin_fp_control_t;
# 147 "/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_fp_status
{
    unsigned short __invalid :1,
        __denorm :1,
    __zdiv :1,
    __ovrfl :1,
    __undfl :1,
    __precis :1,
    __stkflt :1,
    __errsumm :1,
    __c0 :1,
    __c1 :1,
    __c2 :1,
    __tos :3,
    __c3 :1,
    __busy :1;
};
typedef struct __darwin_fp_status __darwin_fp_status_t;
# 191 "/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_mmst_reg
{
 char __mmst_reg[10];
 char __mmst_rsrv[6];
};
# 210 "/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_xmm_reg
{
 char __xmm_reg[16];
};
# 232 "/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_i386_float_state
{
 int __fpu_reserved[2];
 struct __darwin_fp_control __fpu_fcw;
 struct __darwin_fp_status __fpu_fsw;
 __uint8_t __fpu_ftw;
 __uint8_t __fpu_rsrv1;
 __uint16_t __fpu_fop;
 __uint32_t __fpu_ip;
 __uint16_t __fpu_cs;
 __uint16_t __fpu_rsrv2;
 __uint32_t __fpu_dp;
 __uint16_t __fpu_ds;
 __uint16_t __fpu_rsrv3;
 __uint32_t __fpu_mxcsr;
 __uint32_t __fpu_mxcsrmask;
 struct __darwin_mmst_reg __fpu_stmm0;
 struct __darwin_mmst_reg __fpu_stmm1;
 struct __darwin_mmst_reg __fpu_stmm2;
 struct __darwin_mmst_reg __fpu_stmm3;
 struct __darwin_mmst_reg __fpu_stmm4;
 struct __darwin_mmst_reg __fpu_stmm5;
 struct __darwin_mmst_reg __fpu_stmm6;
 struct __darwin_mmst_reg __fpu_stmm7;
 struct __darwin_xmm_reg __fpu_xmm0;
 struct __darwin_xmm_reg __fpu_xmm1;
 struct __darwin_xmm_reg __fpu_xmm2;
 struct __darwin_xmm_reg __fpu_xmm3;
 struct __darwin_xmm_reg __fpu_xmm4;
 struct __darwin_xmm_reg __fpu_xmm5;
 struct __darwin_xmm_reg __fpu_xmm6;
 struct __darwin_xmm_reg __fpu_xmm7;
 char __fpu_rsrv4[14*16];
 int __fpu_reserved1;
};


struct __darwin_i386_avx_state
{
 int __fpu_reserved[2];
 struct __darwin_fp_control __fpu_fcw;
 struct __darwin_fp_status __fpu_fsw;
 __uint8_t __fpu_ftw;
 __uint8_t __fpu_rsrv1;
 __uint16_t __fpu_fop;
 __uint32_t __fpu_ip;
 __uint16_t __fpu_cs;
 __uint16_t __fpu_rsrv2;
 __uint32_t __fpu_dp;
 __uint16_t __fpu_ds;
 __uint16_t __fpu_rsrv3;
 __uint32_t __fpu_mxcsr;
 __uint32_t __fpu_mxcsrmask;
 struct __darwin_mmst_reg __fpu_stmm0;
 struct __darwin_mmst_reg __fpu_stmm1;
 struct __darwin_mmst_reg __fpu_stmm2;
 struct __darwin_mmst_reg __fpu_stmm3;
 struct __darwin_mmst_reg __fpu_stmm4;
 struct __darwin_mmst_reg __fpu_stmm5;
 struct __darwin_mmst_reg __fpu_stmm6;
 struct __darwin_mmst_reg __fpu_stmm7;
 struct __darwin_xmm_reg __fpu_xmm0;
 struct __darwin_xmm_reg __fpu_xmm1;
 struct __darwin_xmm_reg __fpu_xmm2;
 struct __darwin_xmm_reg __fpu_xmm3;
 struct __darwin_xmm_reg __fpu_xmm4;
 struct __darwin_xmm_reg __fpu_xmm5;
 struct __darwin_xmm_reg __fpu_xmm6;
 struct __darwin_xmm_reg __fpu_xmm7;
 char __fpu_rsrv4[14*16];
 int __fpu_reserved1;
 char __avx_reserved1[64];
 struct __darwin_xmm_reg __fpu_ymmh0;
 struct __darwin_xmm_reg __fpu_ymmh1;
 struct __darwin_xmm_reg __fpu_ymmh2;
 struct __darwin_xmm_reg __fpu_ymmh3;
 struct __darwin_xmm_reg __fpu_ymmh4;
 struct __darwin_xmm_reg __fpu_ymmh5;
 struct __darwin_xmm_reg __fpu_ymmh6;
 struct __darwin_xmm_reg __fpu_ymmh7;
};
# 402 "/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_i386_exception_state
{
 __uint16_t __trapno;
 __uint16_t __cpu;
 __uint32_t __err;
 __uint32_t __faultvaddr;
};
# 422 "/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_x86_debug_state32
{
 unsigned int __dr0;
 unsigned int __dr1;
 unsigned int __dr2;
 unsigned int __dr3;
 unsigned int __dr4;
 unsigned int __dr5;
 unsigned int __dr6;
 unsigned int __dr7;
};
# 454 "/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_x86_thread_state64
{
 __uint64_t __rax;
 __uint64_t __rbx;
 __uint64_t __rcx;
 __uint64_t __rdx;
 __uint64_t __rdi;
 __uint64_t __rsi;
 __uint64_t __rbp;
 __uint64_t __rsp;
 __uint64_t __r8;
 __uint64_t __r9;
 __uint64_t __r10;
 __uint64_t __r11;
 __uint64_t __r12;
 __uint64_t __r13;
 __uint64_t __r14;
 __uint64_t __r15;
 __uint64_t __rip;
 __uint64_t __rflags;
 __uint64_t __cs;
 __uint64_t __fs;
 __uint64_t __gs;
};
# 509 "/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_x86_float_state64
{
 int __fpu_reserved[2];
 struct __darwin_fp_control __fpu_fcw;
 struct __darwin_fp_status __fpu_fsw;
 __uint8_t __fpu_ftw;
 __uint8_t __fpu_rsrv1;
 __uint16_t __fpu_fop;


 __uint32_t __fpu_ip;
 __uint16_t __fpu_cs;

 __uint16_t __fpu_rsrv2;


 __uint32_t __fpu_dp;
 __uint16_t __fpu_ds;

 __uint16_t __fpu_rsrv3;
 __uint32_t __fpu_mxcsr;
 __uint32_t __fpu_mxcsrmask;
 struct __darwin_mmst_reg __fpu_stmm0;
 struct __darwin_mmst_reg __fpu_stmm1;
 struct __darwin_mmst_reg __fpu_stmm2;
 struct __darwin_mmst_reg __fpu_stmm3;
 struct __darwin_mmst_reg __fpu_stmm4;
 struct __darwin_mmst_reg __fpu_stmm5;
 struct __darwin_mmst_reg __fpu_stmm6;
 struct __darwin_mmst_reg __fpu_stmm7;
 struct __darwin_xmm_reg __fpu_xmm0;
 struct __darwin_xmm_reg __fpu_xmm1;
 struct __darwin_xmm_reg __fpu_xmm2;
 struct __darwin_xmm_reg __fpu_xmm3;
 struct __darwin_xmm_reg __fpu_xmm4;
 struct __darwin_xmm_reg __fpu_xmm5;
 struct __darwin_xmm_reg __fpu_xmm6;
 struct __darwin_xmm_reg __fpu_xmm7;
 struct __darwin_xmm_reg __fpu_xmm8;
 struct __darwin_xmm_reg __fpu_xmm9;
 struct __darwin_xmm_reg __fpu_xmm10;
 struct __darwin_xmm_reg __fpu_xmm11;
 struct __darwin_xmm_reg __fpu_xmm12;
 struct __darwin_xmm_reg __fpu_xmm13;
 struct __darwin_xmm_reg __fpu_xmm14;
 struct __darwin_xmm_reg __fpu_xmm15;
 char __fpu_rsrv4[6*16];
 int __fpu_reserved1;
};


struct __darwin_x86_avx_state64
{
 int __fpu_reserved[2];
 struct __darwin_fp_control __fpu_fcw;
 struct __darwin_fp_status __fpu_fsw;
 __uint8_t __fpu_ftw;
 __uint8_t __fpu_rsrv1;
 __uint16_t __fpu_fop;


 __uint32_t __fpu_ip;
 __uint16_t __fpu_cs;

 __uint16_t __fpu_rsrv2;


 __uint32_t __fpu_dp;
 __uint16_t __fpu_ds;

 __uint16_t __fpu_rsrv3;
 __uint32_t __fpu_mxcsr;
 __uint32_t __fpu_mxcsrmask;
 struct __darwin_mmst_reg __fpu_stmm0;
 struct __darwin_mmst_reg __fpu_stmm1;
 struct __darwin_mmst_reg __fpu_stmm2;
 struct __darwin_mmst_reg __fpu_stmm3;
 struct __darwin_mmst_reg __fpu_stmm4;
 struct __darwin_mmst_reg __fpu_stmm5;
 struct __darwin_mmst_reg __fpu_stmm6;
 struct __darwin_mmst_reg __fpu_stmm7;
 struct __darwin_xmm_reg __fpu_xmm0;
 struct __darwin_xmm_reg __fpu_xmm1;
 struct __darwin_xmm_reg __fpu_xmm2;
 struct __darwin_xmm_reg __fpu_xmm3;
 struct __darwin_xmm_reg __fpu_xmm4;
 struct __darwin_xmm_reg __fpu_xmm5;
 struct __darwin_xmm_reg __fpu_xmm6;
 struct __darwin_xmm_reg __fpu_xmm7;
 struct __darwin_xmm_reg __fpu_xmm8;
 struct __darwin_xmm_reg __fpu_xmm9;
 struct __darwin_xmm_reg __fpu_xmm10;
 struct __darwin_xmm_reg __fpu_xmm11;
 struct __darwin_xmm_reg __fpu_xmm12;
 struct __darwin_xmm_reg __fpu_xmm13;
 struct __darwin_xmm_reg __fpu_xmm14;
 struct __darwin_xmm_reg __fpu_xmm15;
 char __fpu_rsrv4[6*16];
 int __fpu_reserved1;
 char __avx_reserved1[64];
 struct __darwin_xmm_reg __fpu_ymmh0;
 struct __darwin_xmm_reg __fpu_ymmh1;
 struct __darwin_xmm_reg __fpu_ymmh2;
 struct __darwin_xmm_reg __fpu_ymmh3;
 struct __darwin_xmm_reg __fpu_ymmh4;
 struct __darwin_xmm_reg __fpu_ymmh5;
 struct __darwin_xmm_reg __fpu_ymmh6;
 struct __darwin_xmm_reg __fpu_ymmh7;
 struct __darwin_xmm_reg __fpu_ymmh8;
 struct __darwin_xmm_reg __fpu_ymmh9;
 struct __darwin_xmm_reg __fpu_ymmh10;
 struct __darwin_xmm_reg __fpu_ymmh11;
 struct __darwin_xmm_reg __fpu_ymmh12;
 struct __darwin_xmm_reg __fpu_ymmh13;
 struct __darwin_xmm_reg __fpu_ymmh14;
 struct __darwin_xmm_reg __fpu_ymmh15;
};
# 751 "/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_x86_exception_state64
{
    __uint16_t __trapno;
    __uint16_t __cpu;
    __uint32_t __err;
    __uint64_t __faultvaddr;
};
# 771 "/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_x86_debug_state64
{
 __uint64_t __dr0;
 __uint64_t __dr1;
 __uint64_t __dr2;
 __uint64_t __dr3;
 __uint64_t __dr4;
 __uint64_t __dr5;
 __uint64_t __dr6;
 __uint64_t __dr7;
};
# 34 "/usr/include/i386/_mcontext.h" 2 3 4




struct __darwin_mcontext32
{
 struct __darwin_i386_exception_state __es;
 struct __darwin_i386_thread_state __ss;
 struct __darwin_i386_float_state __fs;
};


struct __darwin_mcontext_avx32
{
 struct __darwin_i386_exception_state __es;
 struct __darwin_i386_thread_state __ss;
 struct __darwin_i386_avx_state __fs;
};
# 76 "/usr/include/i386/_mcontext.h" 3 4
struct __darwin_mcontext64
{
 struct __darwin_x86_exception_state64 __es;
 struct __darwin_x86_thread_state64 __ss;
 struct __darwin_x86_float_state64 __fs;
};


struct __darwin_mcontext_avx64
{
 struct __darwin_x86_exception_state64 __es;
 struct __darwin_x86_thread_state64 __ss;
 struct __darwin_x86_avx_state64 __fs;
};
# 115 "/usr/include/i386/_mcontext.h" 3 4
typedef struct __darwin_mcontext64 *mcontext_t;
# 30 "/usr/include/machine/_mcontext.h" 2 3 4
# 146 "/usr/include/sys/signal.h" 2 3 4

# 1 "/usr/include/sys/_pthread/_pthread_attr_t.h" 1 3 4
# 30 "/usr/include/sys/_pthread/_pthread_attr_t.h" 3 4
typedef __darwin_pthread_attr_t pthread_attr_t;
# 148 "/usr/include/sys/signal.h" 2 3 4

# 1 "/usr/include/sys/_types/_sigaltstack.h" 1 3 4
# 36 "/usr/include/sys/_types/_sigaltstack.h" 3 4
struct __darwin_sigaltstack
{
 void *ss_sp;
 __darwin_size_t ss_size;
 int ss_flags;
};
typedef struct __darwin_sigaltstack stack_t;
# 150 "/usr/include/sys/signal.h" 2 3 4
# 1 "/usr/include/sys/_types/_ucontext.h" 1 3 4
# 34 "/usr/include/sys/_types/_ucontext.h" 3 4
struct __darwin_ucontext
{
 int uc_onstack;
 __darwin_sigset_t uc_sigmask;
 struct __darwin_sigaltstack uc_stack;
 struct __darwin_ucontext *uc_link;
 __darwin_size_t uc_mcsize;
 struct __darwin_mcontext64 *uc_mcontext;



};


typedef struct __darwin_ucontext ucontext_t;
# 151 "/usr/include/sys/signal.h" 2 3 4


# 1 "/usr/include/sys/_types/_sigset_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_sigset_t.h" 3 4
typedef __darwin_sigset_t sigset_t;
# 154 "/usr/include/sys/signal.h" 2 3 4
# 1 "/usr/include/sys/_types/_size_t.h" 1 3 4
# 155 "/usr/include/sys/signal.h" 2 3 4
# 1 "/usr/include/sys/_types/_uid_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_uid_t.h" 3 4
typedef __darwin_uid_t uid_t;
# 156 "/usr/include/sys/signal.h" 2 3 4

union sigval {

 int sival_int;
 void *sival_ptr;
};





struct sigevent {
 int sigev_notify;
 int sigev_signo;
 union sigval sigev_value;
 void (*sigev_notify_function)(union sigval);
 pthread_attr_t *sigev_notify_attributes;
};


typedef struct __siginfo {
 int si_signo;
 int si_errno;
 int si_code;
 pid_t si_pid;
 uid_t si_uid;
 int si_status;
 void *si_addr;
 union sigval si_value;
 long si_band;
 unsigned long __pad[7];
} siginfo_t;
# 268 "/usr/include/sys/signal.h" 3 4
union __sigaction_u {
 void (*__sa_handler)(int);
 void (*__sa_sigaction)(int, struct __siginfo *,
         void *);
};


struct __sigaction {
 union __sigaction_u __sigaction_u;
 void (*sa_tramp)(void *, int, int, siginfo_t *, void *);
 sigset_t sa_mask;
 int sa_flags;
};




struct sigaction {
 union __sigaction_u __sigaction_u;
 sigset_t sa_mask;
 int sa_flags;
};
# 330 "/usr/include/sys/signal.h" 3 4
typedef void (*sig_t)(int);
# 347 "/usr/include/sys/signal.h" 3 4
struct sigvec {
 void (*sv_handler)(int);
 int sv_mask;
 int sv_flags;
};
# 366 "/usr/include/sys/signal.h" 3 4
struct sigstack {
 char *ss_sp;
 int ss_onstack;
};
# 388 "/usr/include/sys/signal.h" 3 4
extern "C" {
void (*signal(int, void (*)(int)))(int);
}
# 110 "/usr/include/sys/wait.h" 2 3 4
# 1 "/usr/include/sys/resource.h" 1 3 4
# 72 "/usr/include/sys/resource.h" 3 4
# 1 "/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/clang/6.1.0/include/stdint.h" 1 3 4
# 63 "/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/clang/6.1.0/include/stdint.h" 3 4
# 1 "/usr/include/stdint.h" 1 3 4
# 18 "/usr/include/stdint.h" 3 4
# 1 "/usr/include/sys/_types/_int8_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_int8_t.h" 3 4
typedef signed char int8_t;
# 19 "/usr/include/stdint.h" 2 3 4
# 1 "/usr/include/sys/_types/_int16_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_int16_t.h" 3 4
typedef short int16_t;
# 20 "/usr/include/stdint.h" 2 3 4
# 1 "/usr/include/sys/_types/_int32_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_int32_t.h" 3 4
typedef int int32_t;
# 21 "/usr/include/stdint.h" 2 3 4
# 1 "/usr/include/sys/_types/_int64_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_int64_t.h" 3 4
typedef long long int64_t;
# 22 "/usr/include/stdint.h" 2 3 4

# 1 "/usr/include/_types/_uint8_t.h" 1 3 4
# 31 "/usr/include/_types/_uint8_t.h" 3 4
typedef unsigned char uint8_t;
# 24 "/usr/include/stdint.h" 2 3 4
# 1 "/usr/include/_types/_uint16_t.h" 1 3 4
# 31 "/usr/include/_types/_uint16_t.h" 3 4
typedef unsigned short uint16_t;
# 25 "/usr/include/stdint.h" 2 3 4
# 1 "/usr/include/_types/_uint32_t.h" 1 3 4
# 31 "/usr/include/_types/_uint32_t.h" 3 4
typedef unsigned int uint32_t;
# 26 "/usr/include/stdint.h" 2 3 4
# 1 "/usr/include/_types/_uint64_t.h" 1 3 4
# 31 "/usr/include/_types/_uint64_t.h" 3 4
typedef unsigned long long uint64_t;
# 27 "/usr/include/stdint.h" 2 3 4


typedef int8_t int_least8_t;
typedef int16_t int_least16_t;
typedef int32_t int_least32_t;
typedef int64_t int_least64_t;
typedef uint8_t uint_least8_t;
typedef uint16_t uint_least16_t;
typedef uint32_t uint_least32_t;
typedef uint64_t uint_least64_t;



typedef int8_t int_fast8_t;
typedef int16_t int_fast16_t;
typedef int32_t int_fast32_t;
typedef int64_t int_fast64_t;
typedef uint8_t uint_fast8_t;
typedef uint16_t uint_fast16_t;
typedef uint32_t uint_fast32_t;
typedef uint64_t uint_fast64_t;







# 1 "/usr/include/sys/_types/_intptr_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_intptr_t.h" 3 4
typedef __darwin_intptr_t intptr_t;
# 54 "/usr/include/stdint.h" 2 3 4
# 1 "/usr/include/sys/_types/_uintptr_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_uintptr_t.h" 3 4
typedef unsigned long uintptr_t;
# 55 "/usr/include/stdint.h" 2 3 4



# 1 "/usr/include/_types/_intmax_t.h" 1 3 4
# 32 "/usr/include/_types/_intmax_t.h" 3 4
typedef long int intmax_t;
# 59 "/usr/include/stdint.h" 2 3 4
# 1 "/usr/include/_types/_uintmax_t.h" 1 3 4
# 32 "/usr/include/_types/_uintmax_t.h" 3 4
typedef long unsigned int uintmax_t;
# 60 "/usr/include/stdint.h" 2 3 4
# 64 "/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/clang/6.1.0/include/stdint.h" 2 3 4
# 73 "/usr/include/sys/resource.h" 2 3 4







# 1 "/usr/include/sys/_types/_timeval.h" 1 3 4
# 30 "/usr/include/sys/_types/_timeval.h" 3 4
struct timeval
{
 __darwin_time_t tv_sec;
 __darwin_suseconds_t tv_usec;
};
# 81 "/usr/include/sys/resource.h" 2 3 4








typedef __uint64_t rlim_t;
# 152 "/usr/include/sys/resource.h" 3 4
struct rusage {
 struct timeval ru_utime;
 struct timeval ru_stime;
# 163 "/usr/include/sys/resource.h" 3 4
 long ru_maxrss;

 long ru_ixrss;
 long ru_idrss;
 long ru_isrss;
 long ru_minflt;
 long ru_majflt;
 long ru_nswap;
 long ru_inblock;
 long ru_oublock;
 long ru_msgsnd;
 long ru_msgrcv;
 long ru_nsignals;
 long ru_nvcsw;
 long ru_nivcsw;


};
# 192 "/usr/include/sys/resource.h" 3 4
typedef void *rusage_info_t;

struct rusage_info_v0 {
 uint8_t ri_uuid[16];
 uint64_t ri_user_time;
 uint64_t ri_system_time;
 uint64_t ri_pkg_idle_wkups;
 uint64_t ri_interrupt_wkups;
 uint64_t ri_pageins;
 uint64_t ri_wired_size;
 uint64_t ri_resident_size;
 uint64_t ri_phys_footprint;
 uint64_t ri_proc_start_abstime;
 uint64_t ri_proc_exit_abstime;
};

struct rusage_info_v1 {
 uint8_t ri_uuid[16];
 uint64_t ri_user_time;
 uint64_t ri_system_time;
 uint64_t ri_pkg_idle_wkups;
 uint64_t ri_interrupt_wkups;
 uint64_t ri_pageins;
 uint64_t ri_wired_size;
 uint64_t ri_resident_size;
 uint64_t ri_phys_footprint;
 uint64_t ri_proc_start_abstime;
 uint64_t ri_proc_exit_abstime;
 uint64_t ri_child_user_time;
 uint64_t ri_child_system_time;
 uint64_t ri_child_pkg_idle_wkups;
 uint64_t ri_child_interrupt_wkups;
 uint64_t ri_child_pageins;
 uint64_t ri_child_elapsed_abstime;
};

struct rusage_info_v2 {
 uint8_t ri_uuid[16];
 uint64_t ri_user_time;
 uint64_t ri_system_time;
 uint64_t ri_pkg_idle_wkups;
 uint64_t ri_interrupt_wkups;
 uint64_t ri_pageins;
 uint64_t ri_wired_size;
 uint64_t ri_resident_size;
 uint64_t ri_phys_footprint;
 uint64_t ri_proc_start_abstime;
 uint64_t ri_proc_exit_abstime;
 uint64_t ri_child_user_time;
 uint64_t ri_child_system_time;
 uint64_t ri_child_pkg_idle_wkups;
 uint64_t ri_child_interrupt_wkups;
 uint64_t ri_child_pageins;
 uint64_t ri_child_elapsed_abstime;
 uint64_t ri_diskio_bytesread;
 uint64_t ri_diskio_byteswritten;
};

struct rusage_info_v3 {
 uint8_t ri_uuid[16];
 uint64_t ri_user_time;
 uint64_t ri_system_time;
 uint64_t ri_pkg_idle_wkups;
 uint64_t ri_interrupt_wkups;
 uint64_t ri_pageins;
 uint64_t ri_wired_size;
 uint64_t ri_resident_size;
 uint64_t ri_phys_footprint;
 uint64_t ri_proc_start_abstime;
 uint64_t ri_proc_exit_abstime;
 uint64_t ri_child_user_time;
 uint64_t ri_child_system_time;
 uint64_t ri_child_pkg_idle_wkups;
 uint64_t ri_child_interrupt_wkups;
 uint64_t ri_child_pageins;
 uint64_t ri_child_elapsed_abstime;
 uint64_t ri_diskio_bytesread;
 uint64_t ri_diskio_byteswritten;
 uint64_t ri_cpu_time_qos_default;
 uint64_t ri_cpu_time_qos_maintenance;
 uint64_t ri_cpu_time_qos_background;
 uint64_t ri_cpu_time_qos_utility;
 uint64_t ri_cpu_time_qos_legacy;
 uint64_t ri_cpu_time_qos_user_initiated;
 uint64_t ri_cpu_time_qos_user_interactive;
 uint64_t ri_billed_system_time;
 uint64_t ri_serviced_system_time;
};

typedef struct rusage_info_v3 rusage_info_current;
# 325 "/usr/include/sys/resource.h" 3 4
struct rlimit {
 rlim_t rlim_cur;
 rlim_t rlim_max;
};
# 353 "/usr/include/sys/resource.h" 3 4
struct proc_rlimit_control_wakeupmon {
 uint32_t wm_flags;
 int32_t wm_rate;
};
# 382 "/usr/include/sys/resource.h" 3 4
extern "C" {
int getpriority(int, id_t);

int getiopolicy_np(int, int) __attribute__((availability(macosx,introduced=10.5)));

int getrlimit(int, struct rlimit *) __asm("_" "getrlimit" );
int getrusage(int, struct rusage *);
int setpriority(int, id_t, int);

int setiopolicy_np(int, int, int) __attribute__((availability(macosx,introduced=10.5)));

int setrlimit(int, const struct rlimit *) __asm("_" "setrlimit" );
}
# 111 "/usr/include/sys/wait.h" 2 3 4
# 186 "/usr/include/sys/wait.h" 3 4
# 1 "/usr/include/machine/endian.h" 1 3 4
# 35 "/usr/include/machine/endian.h" 3 4
# 1 "/usr/include/i386/endian.h" 1 3 4
# 99 "/usr/include/i386/endian.h" 3 4
# 1 "/usr/include/sys/_endian.h" 1 3 4
# 130 "/usr/include/sys/_endian.h" 3 4
# 1 "/usr/include/libkern/_OSByteOrder.h" 1 3 4
# 66 "/usr/include/libkern/_OSByteOrder.h" 3 4
# 1 "/usr/include/libkern/i386/_OSByteOrder.h" 1 3 4
# 44 "/usr/include/libkern/i386/_OSByteOrder.h" 3 4
static inline
__uint16_t
_OSSwapInt16(
    __uint16_t _data
)
{
    return ((__uint16_t)((_data << 8) | (_data >> 8)));
}

static inline
__uint32_t
_OSSwapInt32(
    __uint32_t _data
)
{

    return __builtin_bswap32(_data);




}


static inline
__uint64_t
_OSSwapInt64(
    __uint64_t _data
)
{
    return __builtin_bswap64(_data);
}
# 67 "/usr/include/libkern/_OSByteOrder.h" 2 3 4
# 131 "/usr/include/sys/_endian.h" 2 3 4
# 100 "/usr/include/i386/endian.h" 2 3 4
# 36 "/usr/include/machine/endian.h" 2 3 4
# 187 "/usr/include/sys/wait.h" 2 3 4







union wait {
 int w_status;



 struct {

  unsigned int w_Termsig:7,
    w_Coredump:1,
    w_Retcode:8,
    w_Filler:16;







 } w_T;





 struct {

  unsigned int w_Stopval:8,
    w_Stopsig:8,
    w_Filler:16;






 } w_S;
};
# 247 "/usr/include/sys/wait.h" 3 4
extern "C" {
pid_t wait(int *) __asm("_" "wait" );
pid_t waitpid(pid_t, int *, int) __asm("_" "waitpid" );

int waitid(idtype_t, id_t, siginfo_t *, int) __asm("_" "waitid" );


pid_t wait3(int *, int, struct rusage *);
pid_t wait4(pid_t, int *, int, struct rusage *);

}
# 66 "/usr/include/stdlib.h" 2 3 4

# 1 "/usr/include/alloca.h" 1 3 4
# 29 "/usr/include/alloca.h" 3 4
# 1 "/usr/include/sys/_types/_size_t.h" 1 3 4
# 30 "/usr/include/alloca.h" 2 3 4

extern "C" {
void *alloca(size_t);
}
# 68 "/usr/include/stdlib.h" 2 3 4





# 1 "/usr/include/sys/_types/_size_t.h" 1 3 4
# 74 "/usr/include/stdlib.h" 2 3 4


# 1 "/usr/include/sys/_types/_ct_rune_t.h" 1 3 4
# 31 "/usr/include/sys/_types/_ct_rune_t.h" 3 4
typedef __darwin_ct_rune_t ct_rune_t;
# 77 "/usr/include/stdlib.h" 2 3 4
# 1 "/usr/include/sys/_types/_rune_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_rune_t.h" 3 4
typedef __darwin_rune_t rune_t;
# 78 "/usr/include/stdlib.h" 2 3 4


# 1 "/usr/include/sys/_types/_wchar_t.h" 1 3 4
# 81 "/usr/include/stdlib.h" 2 3 4

typedef struct {
 int quot;
 int rem;
} div_t;

typedef struct {
 long quot;
 long rem;
} ldiv_t;


typedef struct {
 long long quot;
 long long rem;
} lldiv_t;




# 1 "/usr/include/sys/_types/_null.h" 1 3 4
# 100 "/usr/include/stdlib.h" 2 3 4
# 117 "/usr/include/stdlib.h" 3 4
extern int __mb_cur_max;
# 127 "/usr/include/stdlib.h" 3 4
extern "C" {
void abort(void) __attribute__((noreturn));
int abs(int) __attribute__((const));
int atexit(void (*)(void));
double atof(const char *);
int atoi(const char *);
long atol(const char *);

long long
  atoll(const char *);

void *bsearch(const void *, const void *, size_t,
     size_t, int (*)(const void *, const void *));
void *calloc(size_t, size_t);
div_t div(int, int) __attribute__((const));
void exit(int) __attribute__((noreturn));
void free(void *);
char *getenv(const char *);
long labs(long) __attribute__((const));
ldiv_t ldiv(long, long) __attribute__((const));

long long
  llabs(long long);
lldiv_t lldiv(long long, long long);

void *malloc(size_t);
int mblen(const char *, size_t);
size_t mbstowcs(wchar_t * , const char * , size_t);
int mbtowc(wchar_t * , const char * , size_t);
int posix_memalign(void **, size_t, size_t) __attribute__((availability(macosx,introduced=10.6)));
void qsort(void *, size_t, size_t,
     int (*)(const void *, const void *));
int rand(void);
void *realloc(void *, size_t);
void srand(unsigned);
double strtod(const char *, char **) __asm("_" "strtod" );
float strtof(const char *, char **) __asm("_" "strtof" );
long strtol(const char *, char **, int);
long double
  strtold(const char *, char **);

long long
  strtoll(const char *, char **, int);

unsigned long
  strtoul(const char *, char **, int);

unsigned long long
  strtoull(const char *, char **, int);

int system(const char *) __asm("_" "system" ) __attribute__((availability(macosx,introduced=10.0)));
size_t wcstombs(char * , const wchar_t * , size_t);
int wctomb(char *, wchar_t);


void _Exit(int) __attribute__((noreturn));
long a64l(const char *);
double drand48(void);
char *ecvt(double, int, int *, int *);
double erand48(unsigned short[3]);
char *fcvt(double, int, int *, int *);
char *gcvt(double, int, char *);
int getsubopt(char **, char * const *, char **);
int grantpt(int);

char *initstate(unsigned, char *, size_t);



long jrand48(unsigned short[3]);
char *l64a(long);
void lcong48(unsigned short[7]);
long lrand48(void);
char *mktemp(char *);
int mkstemp(char *);
long mrand48(void);
long nrand48(unsigned short[3]);
int posix_openpt(int);
char *ptsname(int);
int putenv(char *) __asm("_" "putenv" );
long random(void);
int rand_r(unsigned *);

char *realpath(const char * , char * ) __asm("_" "realpath" "$DARWIN_EXTSN");



unsigned short
 *seed48(unsigned short[3]);
int setenv(const char *, const char *, int) __asm("_" "setenv" );

void setkey(const char *) __asm("_" "setkey" );



char *setstate(const char *);
void srand48(long);

void srandom(unsigned);



int unlockpt(int);

int unsetenv(const char *) __asm("_" "unsetenv" );








# 1 "/usr/include/machine/types.h" 1 3 4
# 35 "/usr/include/machine/types.h" 3 4
# 1 "/usr/include/i386/types.h" 1 3 4
# 81 "/usr/include/i386/types.h" 3 4
typedef unsigned char u_int8_t;
typedef unsigned short u_int16_t;
typedef unsigned int u_int32_t;
typedef unsigned long long u_int64_t;


typedef int64_t register_t;
# 97 "/usr/include/i386/types.h" 3 4
typedef u_int64_t user_addr_t;
typedef u_int64_t user_size_t;
typedef int64_t user_ssize_t;
typedef int64_t user_long_t;
typedef u_int64_t user_ulong_t;
typedef int64_t user_time_t;
typedef int64_t user_off_t;







typedef u_int64_t syscall_arg_t;
# 36 "/usr/include/machine/types.h" 2 3 4
# 239 "/usr/include/stdlib.h" 2 3 4

# 1 "/usr/include/sys/_types/_dev_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_dev_t.h" 3 4
typedef __darwin_dev_t dev_t;
# 241 "/usr/include/stdlib.h" 2 3 4
# 1 "/usr/include/sys/_types/_mode_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_mode_t.h" 3 4
typedef __darwin_mode_t mode_t;
# 242 "/usr/include/stdlib.h" 2 3 4

u_int32_t arc4random(void);
void arc4random_addrandom(unsigned char * , int );
void arc4random_buf(void * , size_t ) __attribute__((availability(macosx,introduced=10.7)));
void arc4random_stir(void);
u_int32_t
  arc4random_uniform(u_int32_t ) __attribute__((availability(macosx,introduced=10.7)));

int atexit_b(void (^)(void)) __attribute__((availability(macosx,introduced=10.6)));
void *bsearch_b(const void *, const void *, size_t,
     size_t, int (^)(const void *, const void *)) __attribute__((availability(macosx,introduced=10.6)));



char *cgetcap(char *, const char *, int);
int cgetclose(void);
int cgetent(char **, char **, const char *);
int cgetfirst(char **, char **);
int cgetmatch(const char *, const char *);
int cgetnext(char **, char **);
int cgetnum(char *, const char *, long *);
int cgetset(const char *);
int cgetstr(char *, const char *, char **);
int cgetustr(char *, const char *, char **);

int daemon(int, int) __asm("_" "daemon" "$1050") __attribute__((availability(macosx,introduced=10.0,deprecated=10.5)));
char *devname(dev_t, mode_t);
char *devname_r(dev_t, mode_t, char *buf, int len);
char *getbsize(int *, long *);
int getloadavg(double [], int);
const char
 *getprogname(void);

int heapsort(void *, size_t, size_t,
     int (*)(const void *, const void *));

int heapsort_b(void *, size_t, size_t,
     int (^)(const void *, const void *)) __attribute__((availability(macosx,introduced=10.6)));

int mergesort(void *, size_t, size_t,
     int (*)(const void *, const void *));

int mergesort_b(void *, size_t, size_t,
     int (^)(const void *, const void *)) __attribute__((availability(macosx,introduced=10.6)));

void psort(void *, size_t, size_t,
     int (*)(const void *, const void *)) __attribute__((availability(macosx,introduced=10.6)));

void psort_b(void *, size_t, size_t,
     int (^)(const void *, const void *)) __attribute__((availability(macosx,introduced=10.6)));

void psort_r(void *, size_t, size_t, void *,
     int (*)(void *, const void *, const void *)) __attribute__((availability(macosx,introduced=10.6)));

void qsort_b(void *, size_t, size_t,
     int (^)(const void *, const void *)) __attribute__((availability(macosx,introduced=10.6)));

void qsort_r(void *, size_t, size_t, void *,
     int (*)(void *, const void *, const void *));
int radixsort(const unsigned char **, int, const unsigned char *,
     unsigned);
void setprogname(const char *);
int sradixsort(const unsigned char **, int, const unsigned char *,
     unsigned);
void sranddev(void);
void srandomdev(void);
void *reallocf(void *, size_t);

long long
  strtoq(const char *, char **, int);
unsigned long long
  strtouq(const char *, char **, int);

extern char *suboptarg;
void *valloc(size_t);






}
# 10 "/Users/jmg3/num-debug/src/libchimes/checkpoint.h" 2

extern void checkpoint();

extern void wait_for_checkpoint();
extern void register_custom_init_handler(const char *obj_name,
        void (*fp)(void *));
# 13 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c" 2
# 13 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
# 14 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
# 15 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
static void advanceVelocity(SimFlat* s, int nBoxes, real_t dt);
# 16 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
static void advancePosition(SimFlat* s, int nBoxes, real_t dt);
# 35 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
# 35 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
double timestep(SimFlat* s, int nSteps, real_t dt)
# 36 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
{const int ____chimes_did_disable0 = new_stack((void *)(&timestep), "timestep", (int *)0, 3, 3, (size_t)(8093288458141874007UL), (size_t)(0UL), (size_t)(0UL), "timestep|s|0", (int *)0, "%struct.SimFlatSt*", (void *)(&s), (size_t)8, 1, 0, 0, "timestep|nSteps|0", (int *)0, "i32", (void *)(&nSteps), (size_t)4, 0, 0, 0, "timestep|dt|0", (int *)0, "double", (void *)(&dt), (size_t)8, 0, 0, 0) ; int ii;
 register_stack_vars(1, "timestep|ii|0", (int *)0x0, "i32", (void *)(&ii), (size_t)4, 0, 0, 0); if (____chimes_replaying) { switch(get_next_call()) { case(1): { goto call_lbl_1; } case(2): { goto call_lbl_2; } case(3): { goto call_lbl_3; } case(4): { goto call_lbl_4; } case(5): { goto call_lbl_5; } case(6): { goto call_lbl_6; } case(7): { goto call_lbl_7; } case(8): { goto call_lbl_8; } case(9): { goto call_lbl_9; } case(10): { goto call_lbl_10; } case(11): { goto call_lbl_11; } case(12): { goto call_lbl_12; } case(13): { goto call_lbl_13; } case(14): { goto call_lbl_14; } case(15): { goto call_lbl_15; } case(16): { goto call_lbl_16; } case(17): { goto call_lbl_17; } case(18): { goto call_lbl_18; } default: { chimes_error(); } } } ; ;
# 37 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
 { for ( ii = (0) ; ii<nSteps; ++ii)
# 38 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
 {
# 39 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
 do { call_lbl_1: ({ calling((void*)profileStart, 1, 0UL, ____alias_loc_id_0, 1, (size_t)(0UL)); (profileStart)(velocityTimer); }) ; } while(0);
# 40 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
 ({ calling((void*)advanceVelocity, -1, 0UL, 0, 3, (size_t)(8093288458141874007UL), (size_t)(0UL), (size_t)(0UL)); (advanceVelocity)(s, s->boxes->nLocalBoxes, 0.5 * dt); }) ;
# 41 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
 do { call_lbl_2: ({ calling((void*)profileStop, 2, 0UL, 0, 1, (size_t)(0UL)); (profileStop)(velocityTimer); }) ; } while(0);
# 42 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
# 43 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
# 44 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
 call_lbl_3: ({ calling((void*)checkpoint, 3, 0UL, 0, 0); (checkpoint)(); }) ;
# 45 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
# 46 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
# 47 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
 do { call_lbl_4: ({ calling((void*)profileStart, 4, 0UL, 0, 1, (size_t)(0UL)); (profileStart)(positionTimer); }) ; } while(0);
# 48 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
 ({ calling((void*)advancePosition, -1, 0UL, 0, 3, (size_t)(8093288458141874007UL), (size_t)(0UL), (size_t)(0UL)); (advancePosition)(s, s->boxes->nLocalBoxes, dt); }) ;
# 49 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
 do { call_lbl_5: ({ calling((void*)profileStop, 5, 0UL, 0, 1, (size_t)(0UL)); (profileStop)(positionTimer); }) ; } while(0);
# 50 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
# 51 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
# 52 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
 call_lbl_6: ({ calling((void*)checkpoint, 6, 0UL, 0, 0); (checkpoint)(); }) ;
# 53 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
# 54 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
# 55 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
 do { call_lbl_7: ({ calling((void*)profileStart, 7, 0UL, 0, 1, (size_t)(0UL)); (profileStart)(redistributeTimer); }) ; } while(0);
# 56 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
 call_lbl_8: ({ calling((void*)redistributeAtoms, 8, 0UL, 0, 1, (size_t)(8093288458141874007UL)); (redistributeAtoms)(s); }) ;
# 57 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
 do { call_lbl_9: ({ calling((void*)profileStop, 9, 0UL, 0, 1, (size_t)(0UL)); (profileStop)(redistributeTimer); }) ; } while(0);
# 58 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
# 59 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
# 60 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
 call_lbl_10: ({ calling((void*)checkpoint, 10, 0UL, 0, 0); (checkpoint)(); }) ;
# 61 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
# 62 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
# 63 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
 do { call_lbl_11: ({ calling((void*)profileStart, 11, 0UL, 0, 1, (size_t)(0UL)); (profileStart)(computeForceTimer); }) ; } while(0);
# 64 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
 call_lbl_12: ({ calling((void*)computeForce, 12, 0UL, 0, 1, (size_t)(8093288458141874007UL)); (computeForce)(s); }) ;
# 65 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
 do { call_lbl_13: ({ calling((void*)profileStop, 13, 0UL, 0, 1, (size_t)(0UL)); (profileStop)(computeForceTimer); }) ; } while(0);
# 66 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
# 67 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
# 68 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
 call_lbl_14: ({ calling((void*)checkpoint, 14, 0UL, 0, 0); (checkpoint)(); }) ;
# 69 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
# 70 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
# 71 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
 do { call_lbl_15: ({ calling((void*)profileStart, 15, 0UL, 0, 1, (size_t)(0UL)); (profileStart)(velocityTimer); }) ; } while(0);
# 72 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
 ({ calling((void*)advanceVelocity, -1, 0UL, 0, 3, (size_t)(8093288458141874007UL), (size_t)(0UL), (size_t)(0UL)); (advanceVelocity)(s, s->boxes->nLocalBoxes, 0.5 * dt); }) ;
# 73 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
 do { call_lbl_16: ({ calling((void*)profileStop, 16, 0UL, 0, 1, (size_t)(0UL)); (profileStop)(velocityTimer); }) ; } while(0);
# 74 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
# 75 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
# 76 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
 call_lbl_17: ({ calling((void*)checkpoint, 17, 0UL, 0, 0); (checkpoint)(); }) ;
# 77 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
# 78 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
 } }
# 79 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
# 80 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
 call_lbl_18: ({ calling((void*)kineticEnergy, 18, 0UL, ____alias_loc_id_1, 1, (size_t)(8093288458141874007UL)); (kineticEnergy)(s); }) ;
# 81 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
# 82 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
 rm_stack(false, 0UL, "timestep", (int *)0x0, 0, ____chimes_did_disable0); return s->ePotential;
# 83 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
}
# 84 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
# 85 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
void computeForce(SimFlat* s)
# 86 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
{const int ____chimes_did_disable1 = new_stack((void *)(&computeForce), "computeForce", (int *)0, 1, 0, (size_t)(8093288458141874431UL)) ; if (____chimes_replaying) { switch(get_next_call()) { case(1): { goto call_lbl_1; } default: { chimes_error(); } } } ; ;
# 87 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
 call_lbl_1: ({ calling((void*)s->pot->force, 1, 0UL, ____alias_loc_id_4, 1, (size_t)(8093288458141874431UL)); (s->pot->force)(s); }) ;
# 88 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
rm_stack(false, 0UL, "computeForce", (int *)0x0, 0, ____chimes_did_disable1); }
# 89 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
# 90 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
# 91 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
void advanceVelocity(SimFlat* s, int nBoxes, real_t dt)
# 92 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
{const int ____chimes_did_disable2 = new_stack((void *)(&advanceVelocity), "advanceVelocity", &____must_manage_advanceVelocity, 3, 0, (size_t)(8093288458141874210UL), (size_t)(0UL), (size_t)(0UL)) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 93 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
 { int iBox; for ( iBox = (0) ; iBox<nBoxes; iBox++)
# 94 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
 {
# 95 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
 { int iOff; int ii; for ( iOff = (64 * iBox) , ii = (0) ; ii<s->boxes->nAtoms[iBox]; ii++,iOff++)
# 96 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
 {
# 97 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
 s->atoms->p[iOff][0] += dt*s->atoms->f[iOff][0];
# 98 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
 s->atoms->p[iOff][1] += dt*s->atoms->f[iOff][1];
# 99 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
 s->atoms->p[iOff][2] += dt*s->atoms->f[iOff][2];
# 100 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
 } }
# 101 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
 } }
# 102 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
rm_stack(false, 0UL, "advanceVelocity", &____must_manage_advanceVelocity, ____alias_loc_id_6, ____chimes_did_disable2); }
# 103 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
# 104 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
void advancePosition(SimFlat* s, int nBoxes, real_t dt)
# 105 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
{const int ____chimes_did_disable3 = new_stack((void *)(&advancePosition), "advancePosition", &____must_manage_advancePosition, 3, 0, (size_t)(8093288458141874368UL), (size_t)(0UL), (size_t)(0UL)) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 106 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
 { int iBox; for ( iBox = (0) ; iBox<nBoxes; iBox++)
# 107 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
 {
# 108 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
 { int iOff; int ii; for ( iOff = (64 * iBox) , ii = (0) ; ii<s->boxes->nAtoms[iBox]; ii++,iOff++)
# 109 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
 {
# 110 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
 int iSpecies; iSpecies = (s->atoms->iSpecies[iOff]) ;
# 111 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
 real_t invMass; invMass = (1. / s->species[iSpecies].mass) ;
# 112 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
 s->atoms->r[iOff][0] += dt*s->atoms->p[iOff][0]*invMass;
# 113 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
 s->atoms->r[iOff][1] += dt*s->atoms->p[iOff][1]*invMass;
# 114 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
 s->atoms->r[iOff][2] += dt*s->atoms->p[iOff][2]*invMass;
# 115 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
 } }
# 116 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
 } }
# 117 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
rm_stack(false, 0UL, "advancePosition", &____must_manage_advancePosition, ____alias_loc_id_7, ____chimes_did_disable3); }
# 118 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
# 119 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
# 120 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
# 121 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
void kineticEnergy(SimFlat* s)
# 122 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
{const int ____chimes_did_disable4 = new_stack((void *)(&kineticEnergy), "kineticEnergy", &____must_manage_kineticEnergy, 1, 1, (size_t)(8093288458141874598UL), "kineticEnergy|s|0", &____must_checkpoint_kineticEnergy_s_0, "%struct.SimFlatSt*", (void *)(&s), (size_t)8, 1, 0, 0) ; real_t eSum[2];
real_t eLocal[2];
 if (____must_checkpoint_kineticEnergy_eLocal_0) { register_stack_vars(1, "kineticEnergy|eLocal|0", &____must_checkpoint_kineticEnergy_eLocal_0, "[2 x double]", (void *)(eLocal), (size_t)16, 0, 0, 0); } if (____chimes_replaying) { switch(get_next_call()) { case(1): { goto call_lbl_1; } case(2): { goto call_lbl_2; } case(3): { goto call_lbl_3; } default: { chimes_error(); } } } ; ;
# 123 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
 ;
# 124 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
 eLocal[0] = s->ePotential;
# 125 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
 eLocal[1] = 0;
# 126 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
 { int iBox; for ( iBox = (0) ; iBox<s->boxes->nLocalBoxes; iBox++)
# 127 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
 {
# 128 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
 { int iOff; int ii; for ( iOff = (64 * iBox) , ii = (0) ; ii<s->boxes->nAtoms[iBox]; ii++,iOff++)
# 129 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
 {
# 130 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
 int iSpecies; iSpecies = (s->atoms->iSpecies[iOff]) ;
# 131 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
 real_t invMass; invMass = (0.5 / s->species[iSpecies].mass) ;
# 132 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
 eLocal[1] += ( s->atoms->p[iOff][0] * s->atoms->p[iOff][0] +
# 133 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
 s->atoms->p[iOff][1] * s->atoms->p[iOff][1] +
# 134 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
 s->atoms->p[iOff][2] * s->atoms->p[iOff][2] )*invMass;
# 135 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
 } }
# 136 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
 } }
# 137 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
# 138 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
 ;
# 139 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
 do { call_lbl_1: ({ calling((void*)profileStart, 1, 0UL, ____alias_loc_id_5, 1, (size_t)(0UL)); (profileStart)(commReduceTimer); }) ; } while(0);
# 140 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
 call_lbl_2: ({ calling((void*)addRealParallel, 2, 0UL, 0, 3, (size_t)(8093288458141874433UL), (size_t)(8093288458141874439UL), (size_t)(0UL)); (addRealParallel)(eLocal, eSum, 2); }) ;
# 141 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
 do { call_lbl_3: ({ calling((void*)profileStop, 3, 0UL, 0, 1, (size_t)(0UL)); (profileStop)(commReduceTimer); }) ; } while(0);
# 142 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
# 143 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
 s->ePotential = eSum[0];
# 144 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
 s->eKinetic = eSum[1];
# 145 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
rm_stack(false, 0UL, "kineticEnergy", &____must_manage_kineticEnergy, ____alias_loc_id_9, ____chimes_did_disable4); }
# 160 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
# 160 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
void redistributeAtoms(SimFlat* sim)
# 161 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
{const int ____chimes_did_disable5 = new_stack((void *)(&redistributeAtoms), "redistributeAtoms", &____must_manage_redistributeAtoms, 1, 1, (size_t)(8093288458141874385UL), "redistributeAtoms|sim|0", &____must_checkpoint_redistributeAtoms_sim_0, "%struct.SimFlatSt*", (void *)(&sim), (size_t)8, 1, 0, 0) ; int ii;
 if (____must_checkpoint_redistributeAtoms_ii_0) { register_stack_vars(1, "redistributeAtoms|ii|0", &____must_checkpoint_redistributeAtoms_ii_0, "i32", (void *)(&ii), (size_t)4, 0, 0, 0); } if (____chimes_replaying) { switch(get_next_call()) { case(1): { goto call_lbl_1; } case(2): { goto call_lbl_2; } case(3): { goto call_lbl_3; } case(4): { goto call_lbl_4; } case(5): { goto call_lbl_5; } default: { chimes_error(); } } } ; ;
# 162 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
 call_lbl_1: ({ LinkCell * ____chimes_arg28; Atoms * ____chimes_arg29; if (!____chimes_replaying) { ____chimes_arg28 = (sim->boxes); ____chimes_arg29 = (sim->atoms); } calling((void*)updateLinkCells, 1, 0UL, ____alias_loc_id_2, 2, (size_t)(8093288458141874387UL), (size_t)(8093288458141874387UL)); (updateLinkCells)(____chimes_arg28, ____chimes_arg29); }) ;
# 163 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
# 164 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
 do { call_lbl_2: ({ calling((void*)profileStart, 2, 0UL, 0, 1, (size_t)(0UL)); (profileStart)(atomHaloTimer); }) ; } while(0);
# 165 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
 call_lbl_3: ({ HaloExchange * ____chimes_arg31; if (!____chimes_replaying) { ____chimes_arg31 = (sim->atomExchange); } calling((void*)haloExchange, 3, 0UL, 0, 2, (size_t)(8093288458141874387UL), (size_t)(8093288458141874385UL)); (haloExchange)(____chimes_arg31, sim); }) ;
# 166 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
 do { call_lbl_4: ({ calling((void*)profileStop, 4, 0UL, 0, 1, (size_t)(0UL)); (profileStop)(atomHaloTimer); }) ; } while(0);
# 167 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
# 168 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
 { for ( ii = (0) ;ii < sim->boxes->nTotalBoxes; ++ii) { call_lbl_5: ({ Atoms * ____chimes_arg34; LinkCell * ____chimes_arg35; if (!____chimes_replaying) { ____chimes_arg34 = (sim->atoms); ____chimes_arg35 = (sim->boxes); } calling((void*)sortAtomsInCell, 5, 0UL, 0, 3, (size_t)(8093288458141874387UL), (size_t)(8093288458141874387UL), (size_t)(0UL)); (sortAtomsInCell)(____chimes_arg34, ____chimes_arg35, ii); }) ; } };
# 170 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/timestep.c"
rm_stack(false, 0UL, "redistributeAtoms", &____must_manage_redistributeAtoms, ____alias_loc_id_8, ____chimes_did_disable5); }


static int module_init() {
    init_module(8093288458141873986UL, 16, 6, 4, 6, 11, 8093288458141873986UL + 21UL, 8093288458141873986UL + 24UL, 8093288458141873986UL + 612UL, 8093288458141873986UL + 499UL, 8093288458141873986UL + 439UL, 8093288458141873986UL + 441UL, 8093288458141873986UL + 499UL, 8093288458141873986UL + 501UL, 8093288458141873986UL + 446UL, 8093288458141873986UL + 612UL, 8093288458141873986UL + 445UL, 8093288458141873986UL + 439UL, 8093288458141873986UL + 1UL, 8093288458141873986UL + 21UL, 8093288458141873986UL + 382UL, 8093288458141873986UL + 273UL, 8093288458141873986UL + 273UL, 8093288458141873986UL + 275UL, 8093288458141873986UL + 385UL, 8093288458141873986UL + 399UL, 8093288458141873986UL + 228UL, 8093288458141873986UL + 382UL, 8093288458141873986UL + 434UL, 8093288458141873986UL + 445UL, 8093288458141873986UL + 100UL, 8093288458141873986UL + 224UL, 8093288458141873986UL + 224UL, 8093288458141873986UL + 143UL, 8093288458141873986UL + 399UL, 8093288458141873986UL + 401UL, 8093288458141873986UL + 143UL, 8093288458141873986UL + 145UL, "AtomsSt", 8, "int", (int)__builtin_offsetof(struct AtomsSt, nLocal), "int", (int)__builtin_offsetof(struct AtomsSt, nGlobal), "int*", (int)__builtin_offsetof(struct AtomsSt, gid), "int*", (int)__builtin_offsetof(struct AtomsSt, iSpecies), "[ 3 x double ]*", (int)__builtin_offsetof(struct AtomsSt, r), "[ 3 x double ]*", (int)__builtin_offsetof(struct AtomsSt, p), "[ 3 x double ]*", (int)__builtin_offsetof(struct AtomsSt, f), "double*", (int)__builtin_offsetof(struct AtomsSt, U), "BasePotentialSt", 9, "double", (int)__builtin_offsetof(struct BasePotentialSt, cutoff), "double", (int)__builtin_offsetof(struct BasePotentialSt, mass), "double", (int)__builtin_offsetof(struct BasePotentialSt, lat), "[ 8 x char ]", (int)__builtin_offsetof(struct BasePotentialSt, latticeType), "[ 3 x char ]", (int)__builtin_offsetof(struct BasePotentialSt, name), "int", (int)__builtin_offsetof(struct BasePotentialSt, atomicNo), "*", (int)__builtin_offsetof(struct BasePotentialSt, force), "*", (int)__builtin_offsetof(struct BasePotentialSt, print), "*", (int)__builtin_offsetof(struct BasePotentialSt, destroy), "DomainSt", 8, "[ 3 x int ]", (int)__builtin_offsetof(struct DomainSt, procGrid), "[ 3 x int ]", (int)__builtin_offsetof(struct DomainSt, procCoord), "[ 3 x double ]", (int)__builtin_offsetof(struct DomainSt, globalMin), "[ 3 x double ]", (int)__builtin_offsetof(struct DomainSt, globalMax), "[ 3 x double ]", (int)__builtin_offsetof(struct DomainSt, globalExtent), "[ 3 x double ]", (int)__builtin_offsetof(struct DomainSt, localMin), "[ 3 x double ]", (int)__builtin_offsetof(struct DomainSt, localMax), "[ 3 x double ]", (int)__builtin_offsetof(struct DomainSt, localExtent), "HaloExchangeSt", 6, "[ 6 x int ]", (int)__builtin_offsetof(struct HaloExchangeSt, nbrRank), "int", (int)__builtin_offsetof(struct HaloExchangeSt, bufCapacity), "*", (int)__builtin_offsetof(struct HaloExchangeSt, loadBuffer), "*", (int)__builtin_offsetof(struct HaloExchangeSt, unloadBuffer), "*", (int)__builtin_offsetof(struct HaloExchangeSt, destroy), "void*", (int)__builtin_offsetof(struct HaloExchangeSt, parms), "LinkCellSt", 9, "[ 3 x int ]", (int)__builtin_offsetof(struct LinkCellSt, gridSize), "int", (int)__builtin_offsetof(struct LinkCellSt, nLocalBoxes), "int", (int)__builtin_offsetof(struct LinkCellSt, nHaloBoxes), "int", (int)__builtin_offsetof(struct LinkCellSt, nTotalBoxes), "[ 3 x double ]", (int)__builtin_offsetof(struct LinkCellSt, localMin), "[ 3 x double ]", (int)__builtin_offsetof(struct LinkCellSt, localMax), "[ 3 x double ]", (int)__builtin_offsetof(struct LinkCellSt, boxSize), "[ 3 x double ]", (int)__builtin_offsetof(struct LinkCellSt, invBoxSize), "int*", (int)__builtin_offsetof(struct LinkCellSt, nAtoms), "SimFlatSt", 11, "int", (int)__builtin_offsetof(struct SimFlatSt, nSteps), "int", (int)__builtin_offsetof(struct SimFlatSt, printRate), "double", (int)__builtin_offsetof(struct SimFlatSt, dt), "%struct.DomainSt*", (int)__builtin_offsetof(struct SimFlatSt, domain), "%struct.LinkCellSt*", (int)__builtin_offsetof(struct SimFlatSt, boxes), "%struct.AtomsSt*", (int)__builtin_offsetof(struct SimFlatSt, atoms), "%struct.SpeciesDataSt*", (int)__builtin_offsetof(struct SimFlatSt, species), "double", (int)__builtin_offsetof(struct SimFlatSt, ePotential), "double", (int)__builtin_offsetof(struct SimFlatSt, eKinetic), "%struct.BasePotentialSt*", (int)__builtin_offsetof(struct SimFlatSt, pot), "%struct.HaloExchangeSt*", (int)__builtin_offsetof(struct SimFlatSt, atomExchange), "SpeciesDataSt", 3, "[ 3 x char ]", (int)__builtin_offsetof(struct SpeciesDataSt, name), "int", (int)__builtin_offsetof(struct SpeciesDataSt, atomicNo), "double", (int)__builtin_offsetof(struct SpeciesDataSt, mass), "TimerHandle", 0, "__sFILE", 20, "unsigned char*", (int)__builtin_offsetof(struct __sFILE, _p), "int", (int)__builtin_offsetof(struct __sFILE, _r), "int", (int)__builtin_offsetof(struct __sFILE, _w), "short", (int)__builtin_offsetof(struct __sFILE, _flags), "short", (int)__builtin_offsetof(struct __sFILE, _file), "%struct.__sbuf", (int)__builtin_offsetof(struct __sFILE, _bf), "int", (int)__builtin_offsetof(struct __sFILE, _lbfsize), "void*", (int)__builtin_offsetof(struct __sFILE, _cookie), "*", (int)__builtin_offsetof(struct __sFILE, _close), "*", (int)__builtin_offsetof(struct __sFILE, _read), "*", (int)__builtin_offsetof(struct __sFILE, _seek), "*", (int)__builtin_offsetof(struct __sFILE, _write), "%struct.__sbuf", (int)__builtin_offsetof(struct __sFILE, _ub), "%struct.__sFILEX*", (int)__builtin_offsetof(struct __sFILE, _extra), "int", (int)__builtin_offsetof(struct __sFILE, _ur), "[ 3 x unsigned char ]", (int)__builtin_offsetof(struct __sFILE, _ubuf), "[ 1 x unsigned char ]", (int)__builtin_offsetof(struct __sFILE, _nbuf), "%struct.__sbuf", (int)__builtin_offsetof(struct __sFILE, _lb), "int", (int)__builtin_offsetof(struct __sFILE, _blksize), "long long int", (int)__builtin_offsetof(struct __sFILE, _offset), "__sFILEX", 0, "__sbuf", 2, "unsigned char*", (int)__builtin_offsetof(struct __sbuf, _base), "int", (int)__builtin_offsetof(struct __sbuf, _size), "timestep", 8, "advancePosition", "advanceVelocity", "checkpoint", "computeForce", "kineticEnergy", "profileStart", "profileStop", "redistributeAtoms", "advancePosition", 0, "kineticEnergy", 3, "addRealParallel", "profileStart", "profileStop", "computeForce", 0, "redistributeAtoms", 5, "haloExchange", "profileStart", "profileStop", "sortAtomsInCell", "updateLinkCells", "advanceVelocity", 0, "redistributeAtoms|sim|0", 5, "updateLinkCells", "sortAtomsInCell", "profileStop", "profileStart", "haloExchange", "redistributeAtoms|ii|0", 1, "sortAtomsInCell", "kineticEnergy|s|0", 3, "profileStop", "profileStart", "addRealParallel", "kineticEnergy|eLocal|0", 1, "kineticEnergy", &____alias_loc_id_0, (unsigned)4, 8093288458141873986UL + 1UL, 8093288458141873986UL + 2UL, 8093288458141873986UL + 3UL, 8093288458141873986UL + 4UL, &____alias_loc_id_1, (unsigned)4, 8093288458141873986UL + 1UL, 8093288458141873986UL + 2UL, 8093288458141873986UL + 3UL, 8093288458141873986UL + 4UL, &____alias_loc_id_2, (unsigned)1, 8093288458141873986UL + 385UL, &____alias_loc_id_3, (unsigned)1, 8093288458141873986UL + 386UL, &____alias_loc_id_4, (unsigned)1, 8093288458141873986UL + 434UL, &____alias_loc_id_5, (unsigned)7, 8093288458141873986UL + 446UL, 8093288458141873986UL + 447UL, 8093288458141873986UL + 448UL, 8093288458141873986UL + 449UL, 8093288458141873986UL + 450UL, 8093288458141873986UL + 451UL, 8093288458141873986UL + 452UL, &____alias_loc_id_6, (unsigned)7, 8093288458141873986UL + 100UL, 8093288458141873986UL + 101UL, 8093288458141873986UL + 102UL, 8093288458141873986UL + 103UL, 8093288458141873986UL + 104UL, 8093288458141873986UL + 105UL, 8093288458141873986UL + 145UL, &____alias_loc_id_7, (unsigned)9, 8093288458141873986UL + 228UL, 8093288458141873986UL + 229UL, 8093288458141873986UL + 230UL, 8093288458141873986UL + 231UL, 8093288458141873986UL + 232UL, 8093288458141873986UL + 233UL, 8093288458141873986UL + 234UL, 8093288458141873986UL + 235UL, 8093288458141873986UL + 275UL, &____alias_loc_id_8, (unsigned)1, 8093288458141873986UL + 386UL, &____alias_loc_id_9, (unsigned)1, 8093288458141873986UL + 612UL);
    register_functions(6, "timestep.c.pre.register.cpp", "timestep", &timestep, "advanceVelocity", &advanceVelocity, "advancePosition", &advancePosition, "redistributeAtoms", &redistributeAtoms, "computeForce", &computeForce, "kineticEnergy", &kineticEnergy);
    return 0;
}

static int __libchimes_module_init = module_init();
