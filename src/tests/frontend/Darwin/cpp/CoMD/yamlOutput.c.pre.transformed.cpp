# 1 "yamlOutput.c.pre.transformed.cpp"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/local/lib/gcc/x86_64-apple-darwin14.0.0/4.9.2/include/stddef.h" 1 3 4
# 147 "/usr/local/lib/gcc/x86_64-apple-darwin14.0.0/4.9.2/include/stddef.h" 3 4
typedef long int ptrdiff_t;
# 212 "/usr/local/lib/gcc/x86_64-apple-darwin14.0.0/4.9.2/include/stddef.h" 3 4
typedef long unsigned int size_t;
# 1 "<command-line>" 2
# 1 "yamlOutput.c.pre.transformed.cpp"
static int ____chimes_does_checkpoint_getTimeString_npm = 1;
static int ____chimes_does_checkpoint_yamlBegin_npm = 1;
static int ____chimes_does_checkpoint_yamlAppInfo_npm = 1;
static int ____chimes_does_checkpoint_yamlEnd_npm = 1;
static int ____chimes_does_checkpoint_printSeparator_npm = 1;
static int ____chimes_does_checkpoint_builtWithMpi_npm = 1;
static int ____chimes_does_checkpoint_printRank_npm = 1;

static int ____must_checkpoint_yamlBegin_filename_0 = 2;
static int ____must_checkpoint_yamlBegin_rawtime_0 = 2;
static int ____must_checkpoint_yamlBegin_sdate_0 = 2;
static int ____must_checkpoint_yamlAppInfo_file_0 = 2;
static int ____must_checkpoint_yamlAppInfo_timestring_0 = 2;
static int ____must_checkpoint_getTimeString_rawtime_0 = 2;

static int ____must_manage_printSeparator = 2;
static int ____must_manage_yamlBegin = 2;
static int ____must_manage_yamlEnd = 2;
static int ____must_manage_yamlAppInfo = 2;
static int ____must_manage_getTimeString = 2;

static unsigned ____alias_loc_id_0;
static unsigned ____alias_loc_id_1;
static unsigned ____alias_loc_id_2;
static unsigned ____alias_loc_id_3;
static unsigned ____alias_loc_id_4;
# 1 "/Users/jmg3/chimes/src/examples/cpp/CoMD/src-mpi/yamlOutput.c"
# 1 "/tmp/chimes-frontend//"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/Users/jmg3/chimes/src/libchimes/libchimes.h" 1



# 1 "/usr/local/lib/gcc/x86_64-apple-darwin14.0.0/4.9.2/include/stddef.h" 1 3 4
# 147 "/usr/local/lib/gcc/x86_64-apple-darwin14.0.0/4.9.2/include/stddef.h" 3 4
typedef long int ptrdiff_t;
# 212 "/usr/local/lib/gcc/x86_64-apple-darwin14.0.0/4.9.2/include/stddef.h" 3 4
typedef long unsigned int size_t;
# 5 "/Users/jmg3/chimes/src/libchimes/libchimes.h" 2


extern void init_chimes();
extern void checkpoint_transformed(int lbl, unsigned loc_id);

extern void *translate_fptr(void *fptr, int lbl, unsigned loc_id,
        size_t return_alias, int n_params, ...);
extern void calling_npm(const char *name, unsigned loc_id);
extern void calling(void *func_ptr, int lbl, unsigned loc_id,
        size_t set_return_alias, unsigned naliases, ...);
extern int get_next_call();
extern int new_stack(void *func_ptr, const char *funcname, int *conditional,
        unsigned n_local_arg_aliases, unsigned nargs, ...);
extern void init_module(size_t module_id, int n_contains_mappings, int nfunctions,
        int nvars, int n_change_locs, int n_provided_npm_functions,
        int n_external_npm_functions, int n_npm_conditionals,
        int n_static_merges, int n_dynamic_merges, int nstructs, ...);
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
extern void thread_leaving();
extern void *get_thread_ctx();

extern unsigned entering_omp_parallel(unsigned lbl, size_t *region_id,
        unsigned nlocals, ...);
extern void register_thread_local_stack_vars(unsigned relation,
        unsigned parent, void *parent_ctx_ptr, unsigned threads_in_region,
        unsigned parent_stack_depth,
        size_t region_id, unsigned nlocals, ...);
extern void leaving_omp_parallel(unsigned expected_parent_stack_depth,
        size_t region_id, int is_parallel_for);
extern unsigned get_parent_vars_stack_depth();
extern unsigned get_thread_stack_depth();

extern void chimes_error();
# 74 "/Users/jmg3/chimes/src/libchimes/libchimes.h"
inline unsigned LIBCHIMES_THREAD_NUM() { return 0; }
inline unsigned LIBCHIMES_NUM_THREADS() { return 1; }


extern int ____chimes_replaying;
# 1 "<command-line>" 2
# 1 "/Users/jmg3/chimes/src/examples/cpp/CoMD/src-mpi/yamlOutput.c"
# 13 "/Users/jmg3/chimes/src/examples/cpp/CoMD/src-mpi/yamlOutput.c"
# 1 "/Users/jmg3/chimes/src/examples/cpp/CoMD/src-mpi/yamlOutput.h" 1






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
# 8 "/Users/jmg3/chimes/src/examples/cpp/CoMD/src-mpi/yamlOutput.h" 2




void yamlBegin(void);
void yamlEnd(void);

void yamlAppInfo(FILE* file);

void printSeparator(FILE* file);
# 14 "/Users/jmg3/chimes/src/examples/cpp/CoMD/src-mpi/yamlOutput.c" 2
# 14 "/Users/jmg3/chimes/src/examples/cpp/CoMD/src-mpi/yamlOutput.c"

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
# 1 "/usr/local/lib/gcc/x86_64-apple-darwin14.0.0/4.9.2/include/stdint.h" 1 3 4
# 9 "/usr/local/lib/gcc/x86_64-apple-darwin14.0.0/4.9.2/include/stdint.h" 3 4
# 1 "/usr/local/lib/gcc/x86_64-apple-darwin14.0.0/4.9.2/include-fixed/stdint.h" 1 3 4
# 27 "/usr/local/lib/gcc/x86_64-apple-darwin14.0.0/4.9.2/include-fixed/stdint.h" 3 4
# 1 "/usr/include/sys/_types/_int8_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_int8_t.h" 3 4
typedef signed char int8_t;
# 28 "/usr/local/lib/gcc/x86_64-apple-darwin14.0.0/4.9.2/include-fixed/stdint.h" 2 3 4
# 1 "/usr/include/sys/_types/_int16_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_int16_t.h" 3 4
typedef short int16_t;
# 29 "/usr/local/lib/gcc/x86_64-apple-darwin14.0.0/4.9.2/include-fixed/stdint.h" 2 3 4
# 1 "/usr/include/sys/_types/_int32_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_int32_t.h" 3 4
typedef int int32_t;
# 30 "/usr/local/lib/gcc/x86_64-apple-darwin14.0.0/4.9.2/include-fixed/stdint.h" 2 3 4
# 1 "/usr/include/sys/_types/_int64_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_int64_t.h" 3 4
typedef long long int64_t;
# 31 "/usr/local/lib/gcc/x86_64-apple-darwin14.0.0/4.9.2/include-fixed/stdint.h" 2 3 4

# 1 "/usr/include/_types/_uint8_t.h" 1 3 4
# 31 "/usr/include/_types/_uint8_t.h" 3 4
typedef unsigned char uint8_t;
# 33 "/usr/local/lib/gcc/x86_64-apple-darwin14.0.0/4.9.2/include-fixed/stdint.h" 2 3 4
# 1 "/usr/include/_types/_uint16_t.h" 1 3 4
# 31 "/usr/include/_types/_uint16_t.h" 3 4
typedef unsigned short uint16_t;
# 34 "/usr/local/lib/gcc/x86_64-apple-darwin14.0.0/4.9.2/include-fixed/stdint.h" 2 3 4
# 1 "/usr/include/_types/_uint32_t.h" 1 3 4
# 31 "/usr/include/_types/_uint32_t.h" 3 4
typedef unsigned int uint32_t;
# 35 "/usr/local/lib/gcc/x86_64-apple-darwin14.0.0/4.9.2/include-fixed/stdint.h" 2 3 4
# 1 "/usr/include/_types/_uint64_t.h" 1 3 4
# 31 "/usr/include/_types/_uint64_t.h" 3 4
typedef unsigned long long uint64_t;
# 36 "/usr/local/lib/gcc/x86_64-apple-darwin14.0.0/4.9.2/include-fixed/stdint.h" 2 3 4


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
# 63 "/usr/local/lib/gcc/x86_64-apple-darwin14.0.0/4.9.2/include-fixed/stdint.h" 2 3 4
# 1 "/usr/include/sys/_types/_uintptr_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_uintptr_t.h" 3 4
typedef unsigned long uintptr_t;
# 64 "/usr/local/lib/gcc/x86_64-apple-darwin14.0.0/4.9.2/include-fixed/stdint.h" 2 3 4



# 1 "/usr/include/_types/_intmax_t.h" 1 3 4
# 32 "/usr/include/_types/_intmax_t.h" 3 4
typedef long int intmax_t;
# 68 "/usr/local/lib/gcc/x86_64-apple-darwin14.0.0/4.9.2/include-fixed/stdint.h" 2 3 4
# 1 "/usr/include/_types/_uintmax_t.h" 1 3 4
# 32 "/usr/include/_types/_uintmax_t.h" 3 4
typedef long unsigned int uintmax_t;
# 69 "/usr/local/lib/gcc/x86_64-apple-darwin14.0.0/4.9.2/include-fixed/stdint.h" 2 3 4
# 10 "/usr/local/lib/gcc/x86_64-apple-darwin14.0.0/4.9.2/include/stdint.h" 2 3 4
# 73 "/usr/include/sys/resource.h" 2 3 4







# 1 "/usr/include/sys/_types/_timeval.h" 1 3 4
# 30 "/usr/include/sys/_types/_timeval.h" 3 4
struct timeval
{
 __darwin_time_t tv_sec;
 __darwin_suseconds_t tv_usec;
};
# 81 "/usr/include/sys/resource.h" 2 3 4
# 89 "/usr/include/sys/resource.h" 3 4
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

int getiopolicy_np(int, int) ;

int getrlimit(int, struct rlimit *) __asm("_" "getrlimit" );
int getrusage(int, struct rusage *);
int setpriority(int, id_t, int);

int setiopolicy_np(int, int, int) ;

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



    __asm__ ("bswap   %0" : "+r" (_data));
    return _data;

}
# 91 "/usr/include/libkern/i386/_OSByteOrder.h" 3 4
static inline
__uint64_t
_OSSwapInt64(
    __uint64_t _data
)
{
    __asm__ ("bswap   %0" : "+r" (_data));
    return _data;
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
# 31 "/usr/include/alloca.h" 3 4
extern "C" {
void *alloca(size_t);
}
# 68 "/usr/include/stdlib.h" 2 3 4
# 76 "/usr/include/stdlib.h" 3 4
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
int posix_memalign(void **, size_t, size_t) ;
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

int system(const char *) __asm("_" "system" ) ;
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
void arc4random_buf(void * , size_t ) ;
void arc4random_stir(void);
u_int32_t
  arc4random_uniform(u_int32_t ) ;







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

int daemon(int, int) __asm("_" "daemon" "$1050") __attribute__((deprecated));
char *devname(dev_t, mode_t);
char *devname_r(dev_t, mode_t, char *buf, int len);
char *getbsize(int *, long *);
int getloadavg(double [], int);
const char
 *getprogname(void);

int heapsort(void *, size_t, size_t,
     int (*)(const void *, const void *));




int mergesort(void *, size_t, size_t,
     int (*)(const void *, const void *));




void psort(void *, size_t, size_t,
     int (*)(const void *, const void *)) ;




void psort_r(void *, size_t, size_t, void *,
     int (*)(void *, const void *, const void *)) ;




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
# 16 "/Users/jmg3/chimes/src/examples/cpp/CoMD/src-mpi/yamlOutput.c" 2
# 16 "/Users/jmg3/chimes/src/examples/cpp/CoMD/src-mpi/yamlOutput.c"

# 1 "/usr/include/time.h" 1 3 4
# 67 "/usr/include/time.h" 3 4
# 1 "/usr/include/sys/_types/_clock_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_clock_t.h" 3 4
typedef __darwin_clock_t clock_t;
# 68 "/usr/include/time.h" 2 3 4


# 1 "/usr/include/sys/_types/_time_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_time_t.h" 3 4
typedef __darwin_time_t time_t;
# 71 "/usr/include/time.h" 2 3 4
# 1 "/usr/include/sys/_types/_timespec.h" 1 3 4
# 30 "/usr/include/sys/_types/_timespec.h" 3 4
struct timespec
{
 __darwin_time_t tv_sec;
 long tv_nsec;
};
# 72 "/usr/include/time.h" 2 3 4

struct tm {
 int tm_sec;
 int tm_min;
 int tm_hour;
 int tm_mday;
 int tm_mon;
 int tm_year;
 int tm_wday;
 int tm_yday;
 int tm_isdst;
 long tm_gmtoff;
 char *tm_zone;
};
# 96 "/usr/include/time.h" 3 4
extern char *tzname[];


extern int getdate_err;

extern long timezone __asm("_" "timezone" );

extern int daylight;

extern "C" {
char *asctime(const struct tm *);
clock_t clock(void) __asm("_" "clock" );
char *ctime(const time_t *);
double difftime(time_t, time_t);
struct tm *getdate(const char *);
struct tm *gmtime(const time_t *);
struct tm *localtime(const time_t *);
time_t mktime(struct tm *) __asm("_" "mktime" );
size_t strftime(char * , size_t, const char * , const struct tm * ) __asm("_" "strftime" );
char *strptime(const char * , const char * , struct tm * ) __asm("_" "strptime" );
time_t time(time_t *);


void tzset(void);



char *asctime_r(const struct tm * , char * );
char *ctime_r(const time_t *, char *);
struct tm *gmtime_r(const time_t * , struct tm * );
struct tm *localtime_r(const time_t * , struct tm * );


time_t posix2time(time_t);



void tzsetwall(void);
time_t time2posix(time_t);
time_t timelocal(struct tm * const);
time_t timegm(struct tm * const);



int nanosleep(const struct timespec *, struct timespec *) __asm("_" "nanosleep" );

}
# 18 "/Users/jmg3/chimes/src/examples/cpp/CoMD/src-mpi/yamlOutput.c" 2
# 18 "/Users/jmg3/chimes/src/examples/cpp/CoMD/src-mpi/yamlOutput.c"

# 1 "/Users/jmg3/chimes/src/examples/cpp/CoMD/src-mpi/CoMD_info.h" 1
# 20 "/Users/jmg3/chimes/src/examples/cpp/CoMD/src-mpi/yamlOutput.c" 2
# 1 "/Users/jmg3/chimes/src/examples/cpp/CoMD/src-mpi/mytype.h" 1
# 13 "/Users/jmg3/chimes/src/examples/cpp/CoMD/src-mpi/mytype.h"
typedef double real_t;




typedef real_t real3[3];

static void zeroReal3(real3 a)
{
   a[0] = 0.0;
   a[1] = 0.0;
   a[2] = 0.0;
}
# 21 "/Users/jmg3/chimes/src/examples/cpp/CoMD/src-mpi/yamlOutput.c" 2
# 1 "/Users/jmg3/chimes/src/examples/cpp/CoMD/src-mpi/parallel.h" 1
# 10 "/Users/jmg3/chimes/src/examples/cpp/CoMD/src-mpi/parallel.h"
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
# 22 "/Users/jmg3/chimes/src/examples/cpp/CoMD/src-mpi/yamlOutput.c" 2
# 22 "/Users/jmg3/chimes/src/examples/cpp/CoMD/src-mpi/yamlOutput.c"
# 23 "/Users/jmg3/chimes/src/examples/cpp/CoMD/src-mpi/yamlOutput.c"
# 24 "/Users/jmg3/chimes/src/examples/cpp/CoMD/src-mpi/yamlOutput.c"
# 25 "/Users/jmg3/chimes/src/examples/cpp/CoMD/src-mpi/yamlOutput.c"
static const char* CoMDVersion = "1.1";
# 26 "/Users/jmg3/chimes/src/examples/cpp/CoMD/src-mpi/yamlOutput.c"
static const char* CoMDVariant = "CoMD-serial";
# 27 "/Users/jmg3/chimes/src/examples/cpp/CoMD/src-mpi/yamlOutput.c"
# 28 "/Users/jmg3/chimes/src/examples/cpp/CoMD/src-mpi/yamlOutput.c"
static void getTimeString_npm(char* timestring);
static void getTimeString_quick(char* timestring); static void getTimeString(char* timestring);
static void getTimeString_resumable(char* timestring)
# 29 "/Users/jmg3/chimes/src/examples/cpp/CoMD/src-mpi/yamlOutput.c"
{const int ____chimes_did_disable0 = new_stack((void *)(&getTimeString), "getTimeString", &____must_manage_getTimeString, 1, 0, (size_t)(12737042733622956041UL)) ; time_t rawtime;
 if (____must_checkpoint_getTimeString_rawtime_0) { register_stack_vars(1, "getTimeString|rawtime|0", &____must_checkpoint_getTimeString_rawtime_0, "i64", (void *)(&rawtime), (size_t)8, 0, 0, 0); } if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 30 "/Users/jmg3/chimes/src/examples/cpp/CoMD/src-mpi/yamlOutput.c"
    ;
# 31 "/Users/jmg3/chimes/src/examples/cpp/CoMD/src-mpi/yamlOutput.c"
   struct tm *timeinfo; ;
# 32 "/Users/jmg3/chimes/src/examples/cpp/CoMD/src-mpi/yamlOutput.c"
   time(&rawtime);
# 33 "/Users/jmg3/chimes/src/examples/cpp/CoMD/src-mpi/yamlOutput.c"
   timeinfo = localtime(&rawtime);
# 34 "/Users/jmg3/chimes/src/examples/cpp/CoMD/src-mpi/yamlOutput.c"
# 35 "/Users/jmg3/chimes/src/examples/cpp/CoMD/src-mpi/yamlOutput.c"
   sprintf(timestring,
# 36 "/Users/jmg3/chimes/src/examples/cpp/CoMD/src-mpi/yamlOutput.c"
           "%4d-%02i-%02d, %02d:%02d:%02d",
# 37 "/Users/jmg3/chimes/src/examples/cpp/CoMD/src-mpi/yamlOutput.c"
           timeinfo->tm_year+1900,
# 38 "/Users/jmg3/chimes/src/examples/cpp/CoMD/src-mpi/yamlOutput.c"
           timeinfo->tm_mon+1,
# 39 "/Users/jmg3/chimes/src/examples/cpp/CoMD/src-mpi/yamlOutput.c"
           timeinfo->tm_mday,
# 40 "/Users/jmg3/chimes/src/examples/cpp/CoMD/src-mpi/yamlOutput.c"
           timeinfo->tm_hour,
# 41 "/Users/jmg3/chimes/src/examples/cpp/CoMD/src-mpi/yamlOutput.c"
           timeinfo->tm_min,
# 42 "/Users/jmg3/chimes/src/examples/cpp/CoMD/src-mpi/yamlOutput.c"
           timeinfo->tm_sec);
# 43 "/Users/jmg3/chimes/src/examples/cpp/CoMD/src-mpi/yamlOutput.c"
rm_stack(false, 0UL, "getTimeString", &____must_manage_getTimeString, ____alias_loc_id_4, ____chimes_did_disable0); }
# 44 "/Users/jmg3/chimes/src/examples/cpp/CoMD/src-mpi/yamlOutput.c"
# 45 "/Users/jmg3/chimes/src/examples/cpp/CoMD/src-mpi/yamlOutput.c"
void yamlBegin_npm(void);static int (*____chimes_extern_func_printRank)(void) = printRank;
void yamlBegin_quick(void); void yamlBegin(void);
void yamlBegin_resumable(void)
# 46 "/Users/jmg3/chimes/src/examples/cpp/CoMD/src-mpi/yamlOutput.c"
{const int ____chimes_did_disable1 = new_stack((void *)(&yamlBegin), "yamlBegin", &____must_manage_yamlBegin, 0, 0) ; char sdate[25];
time_t rawtime;
char filename[64];
 if (____must_checkpoint_yamlBegin_sdate_0 || ____must_checkpoint_yamlBegin_rawtime_0 || ____must_checkpoint_yamlBegin_filename_0) { register_stack_vars(3, "yamlBegin|sdate|0", &____must_checkpoint_yamlBegin_sdate_0, "[25 x i8]", (void *)(sdate), (size_t)25, 0, 0, 0, "yamlBegin|rawtime|0", &____must_checkpoint_yamlBegin_rawtime_0, "i64", (void *)(&rawtime), (size_t)8, 0, 0, 0, "yamlBegin|filename|0", &____must_checkpoint_yamlBegin_filename_0, "[64 x i8]", (void *)(filename), (size_t)64, 0, 0, 0); } if (____chimes_replaying) { switch(get_next_call()) { case(1): { goto call_lbl_1; } default: { chimes_error(); } } } ; ;
# 47 "/Users/jmg3/chimes/src/examples/cpp/CoMD/src-mpi/yamlOutput.c"
    call_lbl_1: if (! ({ calling((void*)printRank, 1, 0, 0UL, 0); (printRank)(); }) ) {rm_stack(false, 0UL, "yamlBegin", &____must_manage_yamlBegin, ____alias_loc_id_1, ____chimes_did_disable1); return; };
# 49 "/Users/jmg3/chimes/src/examples/cpp/CoMD/src-mpi/yamlOutput.c"
# 50 "/Users/jmg3/chimes/src/examples/cpp/CoMD/src-mpi/yamlOutput.c"
    ;
# 51 "/Users/jmg3/chimes/src/examples/cpp/CoMD/src-mpi/yamlOutput.c"
    ;
# 52 "/Users/jmg3/chimes/src/examples/cpp/CoMD/src-mpi/yamlOutput.c"
   time (&rawtime);
# 53 "/Users/jmg3/chimes/src/examples/cpp/CoMD/src-mpi/yamlOutput.c"
    struct tm *ptm; ptm = (localtime(&rawtime)) ;
# 54 "/Users/jmg3/chimes/src/examples/cpp/CoMD/src-mpi/yamlOutput.c"
    ;
# 55 "/Users/jmg3/chimes/src/examples/cpp/CoMD/src-mpi/yamlOutput.c"
# 56 "/Users/jmg3/chimes/src/examples/cpp/CoMD/src-mpi/yamlOutput.c"
   sprintf (sdate,"%04d:%02d:%02d-%02d:%02d:%02d",
# 57 "/Users/jmg3/chimes/src/examples/cpp/CoMD/src-mpi/yamlOutput.c"
            ptm->tm_year + 1900, ptm->tm_mon+1,
# 58 "/Users/jmg3/chimes/src/examples/cpp/CoMD/src-mpi/yamlOutput.c"
            ptm->tm_mday, ptm->tm_hour, ptm->tm_min,ptm->tm_sec);
# 59 "/Users/jmg3/chimes/src/examples/cpp/CoMD/src-mpi/yamlOutput.c"
   sprintf(filename, "%s.%s.yaml", CoMDVariant, sdate);
# 60 "/Users/jmg3/chimes/src/examples/cpp/CoMD/src-mpi/yamlOutput.c"
# 61 "/Users/jmg3/chimes/src/examples/cpp/CoMD/src-mpi/yamlOutput.c"
rm_stack(false, 0UL, "yamlBegin", &____must_manage_yamlBegin, ____alias_loc_id_1, ____chimes_did_disable1); }
# 62 "/Users/jmg3/chimes/src/examples/cpp/CoMD/src-mpi/yamlOutput.c"
# 63 "/Users/jmg3/chimes/src/examples/cpp/CoMD/src-mpi/yamlOutput.c"
void yamlAppInfo_npm(FILE* file);void printSeparator_npm(FILE* file);static int (*____chimes_extern_func_builtWithMpi)(void) = builtWithMpi;
void yamlAppInfo_quick(FILE* file); void yamlAppInfo(FILE* file);void printSeparator_quick(FILE* file); void printSeparator(FILE* file);
void yamlAppInfo_resumable(FILE* file)
# 64 "/Users/jmg3/chimes/src/examples/cpp/CoMD/src-mpi/yamlOutput.c"
{const int ____chimes_did_disable2 = new_stack((void *)(&yamlAppInfo), "yamlAppInfo", &____must_manage_yamlAppInfo, 1, 1, (size_t)(12737042733622955998UL), "yamlAppInfo|file|0", &____must_checkpoint_yamlAppInfo_file_0, "%struct.__sFILE*", (void *)(&file), (size_t)8, 1, 0, 0) ; char timestring[32];
 if (____must_checkpoint_yamlAppInfo_timestring_0) { register_stack_vars(1, "yamlAppInfo|timestring|0", &____must_checkpoint_yamlAppInfo_timestring_0, "[32 x i8]", (void *)(timestring), (size_t)32, 0, 0, 0); } if (____chimes_replaying) { switch(get_next_call()) { case(2): { goto call_lbl_2; } case(16): { goto call_lbl_16; } default: { chimes_error(); } } } ; ;
# 65 "/Users/jmg3/chimes/src/examples/cpp/CoMD/src-mpi/yamlOutput.c"
   alias_group_changed(____alias_loc_id_0); call_lbl_2: if (! ({ calling((void*)printRank, 2, ____alias_loc_id_0, 0UL, 0); (printRank)(); }) ) {rm_stack(false, 0UL, "yamlAppInfo", &____must_manage_yamlAppInfo, ____alias_loc_id_2, ____chimes_did_disable2); return; };
# 67 "/Users/jmg3/chimes/src/examples/cpp/CoMD/src-mpi/yamlOutput.c"
   ({ calling_npm("printSeparator", 0); printSeparator_npm(file); });
# 68 "/Users/jmg3/chimes/src/examples/cpp/CoMD/src-mpi/yamlOutput.c"
   fprintf(file,"Mini-Application Name    : %s\n", CoMDVariant);
# 69 "/Users/jmg3/chimes/src/examples/cpp/CoMD/src-mpi/yamlOutput.c"
   fprintf(file,"Mini-Application Version : %s\n", CoMDVersion);
# 70 "/Users/jmg3/chimes/src/examples/cpp/CoMD/src-mpi/yamlOutput.c"
   fprintf(file,"Platform:\n");
# 71 "/Users/jmg3/chimes/src/examples/cpp/CoMD/src-mpi/yamlOutput.c"
   fprintf(file,"  hostname: %s\n", "Maxs-MacBook-Pro.local");
# 72 "/Users/jmg3/chimes/src/examples/cpp/CoMD/src-mpi/yamlOutput.c"
   fprintf(file,"  kernel name: %s\n", "'Darwin'");
# 73 "/Users/jmg3/chimes/src/examples/cpp/CoMD/src-mpi/yamlOutput.c"
   fprintf(file,"  kernel release: %s\n", "'14.1.0'");
# 74 "/Users/jmg3/chimes/src/examples/cpp/CoMD/src-mpi/yamlOutput.c"
   fprintf(file,"  processor: %s\n", "'i386'");
# 75 "/Users/jmg3/chimes/src/examples/cpp/CoMD/src-mpi/yamlOutput.c"
   fprintf(file,"Build:\n");
# 76 "/Users/jmg3/chimes/src/examples/cpp/CoMD/src-mpi/yamlOutput.c"
   fprintf(file,"  CC: %s\n", "''");
# 77 "/Users/jmg3/chimes/src/examples/cpp/CoMD/src-mpi/yamlOutput.c"
   fprintf(file,"  compiler version: %s\n", "'unknown'");
# 78 "/Users/jmg3/chimes/src/examples/cpp/CoMD/src-mpi/yamlOutput.c"
   fprintf(file,"  CFLAGS: %s\n", "'-std=c99 -DDOUBLE -g -O5  '");
# 79 "/Users/jmg3/chimes/src/examples/cpp/CoMD/src-mpi/yamlOutput.c"
   fprintf(file,"  LDFLAGS: %s\n", "'-lm '");
# 80 "/Users/jmg3/chimes/src/examples/cpp/CoMD/src-mpi/yamlOutput.c"
     int ____chimes_unroll_var_0; call_lbl_16: ____chimes_unroll_var_0 = ( ({ calling((void*)builtWithMpi, 16, 0, 0UL, 0); (builtWithMpi)(); }) ) ; fprintf(file,"  using MPI: %s\n", ____chimes_unroll_var_0 ? "true":"false");
# 81 "/Users/jmg3/chimes/src/examples/cpp/CoMD/src-mpi/yamlOutput.c"
   fprintf(file,"  Threading: none\n");
# 82 "/Users/jmg3/chimes/src/examples/cpp/CoMD/src-mpi/yamlOutput.c"
   fprintf(file,"  Double Precision: %s\n", (sizeof(real_t)==sizeof(double)?"true":"false"));
# 83 "/Users/jmg3/chimes/src/examples/cpp/CoMD/src-mpi/yamlOutput.c"
    ;
# 84 "/Users/jmg3/chimes/src/examples/cpp/CoMD/src-mpi/yamlOutput.c"
   ({ calling_npm("getTimeString", 0); getTimeString_npm(timestring); });
# 85 "/Users/jmg3/chimes/src/examples/cpp/CoMD/src-mpi/yamlOutput.c"
   fprintf(file,"Run Date/Time: %s\n", timestring);
# 86 "/Users/jmg3/chimes/src/examples/cpp/CoMD/src-mpi/yamlOutput.c"
   fprintf(file, "\n");
# 87 "/Users/jmg3/chimes/src/examples/cpp/CoMD/src-mpi/yamlOutput.c"
   fflush(file);
# 88 "/Users/jmg3/chimes/src/examples/cpp/CoMD/src-mpi/yamlOutput.c"
rm_stack(false, 0UL, "yamlAppInfo", &____must_manage_yamlAppInfo, ____alias_loc_id_2, ____chimes_did_disable2); }
# 89 "/Users/jmg3/chimes/src/examples/cpp/CoMD/src-mpi/yamlOutput.c"
# 90 "/Users/jmg3/chimes/src/examples/cpp/CoMD/src-mpi/yamlOutput.c"
void yamlEnd_npm(void);
void yamlEnd_quick(void); void yamlEnd(void);
void yamlEnd_resumable(void)
# 91 "/Users/jmg3/chimes/src/examples/cpp/CoMD/src-mpi/yamlOutput.c"
{const int ____chimes_did_disable3 = new_stack((void *)(&yamlEnd), "yamlEnd", &____must_manage_yamlEnd, 0, 0) ; if (____chimes_replaying) { switch(get_next_call()) { case(1): { goto call_lbl_1; } default: { chimes_error(); } } } ; ;
# 92 "/Users/jmg3/chimes/src/examples/cpp/CoMD/src-mpi/yamlOutput.c"
    call_lbl_1: if (! ({ calling((void*)printRank, 1, 0, 0UL, 0); (printRank)(); }) ) {rm_stack(false, 0UL, "yamlEnd", &____must_manage_yamlEnd, 0, ____chimes_did_disable3); return; };
# 94 "/Users/jmg3/chimes/src/examples/cpp/CoMD/src-mpi/yamlOutput.c"
# 95 "/Users/jmg3/chimes/src/examples/cpp/CoMD/src-mpi/yamlOutput.c"
# 96 "/Users/jmg3/chimes/src/examples/cpp/CoMD/src-mpi/yamlOutput.c"
rm_stack(false, 0UL, "yamlEnd", &____must_manage_yamlEnd, 0, ____chimes_did_disable3); }
# 97 "/Users/jmg3/chimes/src/examples/cpp/CoMD/src-mpi/yamlOutput.c"
# 98 "/Users/jmg3/chimes/src/examples/cpp/CoMD/src-mpi/yamlOutput.c"
void printSeparator_resumable(FILE* file)
# 99 "/Users/jmg3/chimes/src/examples/cpp/CoMD/src-mpi/yamlOutput.c"
{const int ____chimes_did_disable4 = new_stack((void *)(&printSeparator), "printSeparator", &____must_manage_printSeparator, 1, 0, (size_t)(12737042733622956005UL)) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 100 "/Users/jmg3/chimes/src/examples/cpp/CoMD/src-mpi/yamlOutput.c"
# 101 "/Users/jmg3/chimes/src/examples/cpp/CoMD/src-mpi/yamlOutput.c"
      fprintf(file,"\n");
# 102 "/Users/jmg3/chimes/src/examples/cpp/CoMD/src-mpi/yamlOutput.c"
rm_stack(false, 0UL, "printSeparator", &____must_manage_printSeparator, ____alias_loc_id_3, ____chimes_did_disable4); }
static void getTimeString_quick(char* timestring)
# 29 "/Users/jmg3/chimes/src/examples/cpp/CoMD/src-mpi/yamlOutput.c"
{const int ____chimes_did_disable0 = new_stack((void *)(&getTimeString), "getTimeString", &____must_manage_getTimeString, 1, 0, (size_t)(12737042733622956041UL)) ; time_t rawtime;
 if (____must_checkpoint_getTimeString_rawtime_0) { register_stack_vars(1, "getTimeString|rawtime|0", &____must_checkpoint_getTimeString_rawtime_0, "i64", (void *)(&rawtime), (size_t)8, 0, 0, 0); } ; ;
# 30 "/Users/jmg3/chimes/src/examples/cpp/CoMD/src-mpi/yamlOutput.c"
    ;
# 31 "/Users/jmg3/chimes/src/examples/cpp/CoMD/src-mpi/yamlOutput.c"
   struct tm *timeinfo; ;
# 32 "/Users/jmg3/chimes/src/examples/cpp/CoMD/src-mpi/yamlOutput.c"
   time(&rawtime);
# 33 "/Users/jmg3/chimes/src/examples/cpp/CoMD/src-mpi/yamlOutput.c"
   timeinfo = localtime(&rawtime);
# 34 "/Users/jmg3/chimes/src/examples/cpp/CoMD/src-mpi/yamlOutput.c"
# 35 "/Users/jmg3/chimes/src/examples/cpp/CoMD/src-mpi/yamlOutput.c"
   sprintf(timestring,
# 36 "/Users/jmg3/chimes/src/examples/cpp/CoMD/src-mpi/yamlOutput.c"
           "%4d-%02i-%02d, %02d:%02d:%02d",
# 37 "/Users/jmg3/chimes/src/examples/cpp/CoMD/src-mpi/yamlOutput.c"
           timeinfo->tm_year+1900,
# 38 "/Users/jmg3/chimes/src/examples/cpp/CoMD/src-mpi/yamlOutput.c"
           timeinfo->tm_mon+1,
# 39 "/Users/jmg3/chimes/src/examples/cpp/CoMD/src-mpi/yamlOutput.c"
           timeinfo->tm_mday,
# 40 "/Users/jmg3/chimes/src/examples/cpp/CoMD/src-mpi/yamlOutput.c"
           timeinfo->tm_hour,
# 41 "/Users/jmg3/chimes/src/examples/cpp/CoMD/src-mpi/yamlOutput.c"
           timeinfo->tm_min,
# 42 "/Users/jmg3/chimes/src/examples/cpp/CoMD/src-mpi/yamlOutput.c"
           timeinfo->tm_sec);
# 43 "/Users/jmg3/chimes/src/examples/cpp/CoMD/src-mpi/yamlOutput.c"
rm_stack(false, 0UL, "getTimeString", &____must_manage_getTimeString, ____alias_loc_id_4, ____chimes_did_disable0); }

static void getTimeString(char* timestring) { (____chimes_replaying ? getTimeString_resumable(timestring) : getTimeString_quick(timestring)); }

void yamlBegin_quick(void)
# 46 "/Users/jmg3/chimes/src/examples/cpp/CoMD/src-mpi/yamlOutput.c"
{const int ____chimes_did_disable1 = new_stack((void *)(&yamlBegin), "yamlBegin", &____must_manage_yamlBegin, 0, 0) ; char sdate[25];
time_t rawtime;
char filename[64];
 if (____must_checkpoint_yamlBegin_sdate_0 || ____must_checkpoint_yamlBegin_rawtime_0 || ____must_checkpoint_yamlBegin_filename_0) { register_stack_vars(3, "yamlBegin|sdate|0", &____must_checkpoint_yamlBegin_sdate_0, "[25 x i8]", (void *)(sdate), (size_t)25, 0, 0, 0, "yamlBegin|rawtime|0", &____must_checkpoint_yamlBegin_rawtime_0, "i64", (void *)(&rawtime), (size_t)8, 0, 0, 0, "yamlBegin|filename|0", &____must_checkpoint_yamlBegin_filename_0, "[64 x i8]", (void *)(filename), (size_t)64, 0, 0, 0); } ; ;
# 47 "/Users/jmg3/chimes/src/examples/cpp/CoMD/src-mpi/yamlOutput.c"
    call_lbl_1: if (! ({ calling((void*)printRank, 1, 0, 0UL, 0); (printRank)(); }) ) {rm_stack(false, 0UL, "yamlBegin", &____must_manage_yamlBegin, ____alias_loc_id_1, ____chimes_did_disable1); return; };
# 49 "/Users/jmg3/chimes/src/examples/cpp/CoMD/src-mpi/yamlOutput.c"
# 50 "/Users/jmg3/chimes/src/examples/cpp/CoMD/src-mpi/yamlOutput.c"
    ;
# 51 "/Users/jmg3/chimes/src/examples/cpp/CoMD/src-mpi/yamlOutput.c"
    ;
# 52 "/Users/jmg3/chimes/src/examples/cpp/CoMD/src-mpi/yamlOutput.c"
   time (&rawtime);
# 53 "/Users/jmg3/chimes/src/examples/cpp/CoMD/src-mpi/yamlOutput.c"
    struct tm *ptm; ptm = (localtime(&rawtime)) ;
# 54 "/Users/jmg3/chimes/src/examples/cpp/CoMD/src-mpi/yamlOutput.c"
    ;
# 55 "/Users/jmg3/chimes/src/examples/cpp/CoMD/src-mpi/yamlOutput.c"
# 56 "/Users/jmg3/chimes/src/examples/cpp/CoMD/src-mpi/yamlOutput.c"
   sprintf (sdate,"%04d:%02d:%02d-%02d:%02d:%02d",
# 57 "/Users/jmg3/chimes/src/examples/cpp/CoMD/src-mpi/yamlOutput.c"
            ptm->tm_year + 1900, ptm->tm_mon+1,
# 58 "/Users/jmg3/chimes/src/examples/cpp/CoMD/src-mpi/yamlOutput.c"
            ptm->tm_mday, ptm->tm_hour, ptm->tm_min,ptm->tm_sec);
# 59 "/Users/jmg3/chimes/src/examples/cpp/CoMD/src-mpi/yamlOutput.c"
   sprintf(filename, "%s.%s.yaml", CoMDVariant, sdate);
# 60 "/Users/jmg3/chimes/src/examples/cpp/CoMD/src-mpi/yamlOutput.c"
# 61 "/Users/jmg3/chimes/src/examples/cpp/CoMD/src-mpi/yamlOutput.c"
rm_stack(false, 0UL, "yamlBegin", &____must_manage_yamlBegin, ____alias_loc_id_1, ____chimes_did_disable1); }

void yamlBegin(void) { (____chimes_replaying ? yamlBegin_resumable() : yamlBegin_quick()); }

void yamlAppInfo_quick(FILE* file)
# 64 "/Users/jmg3/chimes/src/examples/cpp/CoMD/src-mpi/yamlOutput.c"
{const int ____chimes_did_disable2 = new_stack((void *)(&yamlAppInfo), "yamlAppInfo", &____must_manage_yamlAppInfo, 1, 1, (size_t)(12737042733622955998UL), "yamlAppInfo|file|0", &____must_checkpoint_yamlAppInfo_file_0, "%struct.__sFILE*", (void *)(&file), (size_t)8, 1, 0, 0) ; char timestring[32];
 if (____must_checkpoint_yamlAppInfo_timestring_0) { register_stack_vars(1, "yamlAppInfo|timestring|0", &____must_checkpoint_yamlAppInfo_timestring_0, "[32 x i8]", (void *)(timestring), (size_t)32, 0, 0, 0); } ; ;
# 65 "/Users/jmg3/chimes/src/examples/cpp/CoMD/src-mpi/yamlOutput.c"
   alias_group_changed(____alias_loc_id_0); call_lbl_2: if (! ({ calling((void*)printRank, 2, ____alias_loc_id_0, 0UL, 0); (printRank)(); }) ) {rm_stack(false, 0UL, "yamlAppInfo", &____must_manage_yamlAppInfo, ____alias_loc_id_2, ____chimes_did_disable2); return; };
# 67 "/Users/jmg3/chimes/src/examples/cpp/CoMD/src-mpi/yamlOutput.c"
   ({ calling_npm("printSeparator", 0); printSeparator_npm(file); });
# 68 "/Users/jmg3/chimes/src/examples/cpp/CoMD/src-mpi/yamlOutput.c"
   fprintf(file,"Mini-Application Name    : %s\n", CoMDVariant);
# 69 "/Users/jmg3/chimes/src/examples/cpp/CoMD/src-mpi/yamlOutput.c"
   fprintf(file,"Mini-Application Version : %s\n", CoMDVersion);
# 70 "/Users/jmg3/chimes/src/examples/cpp/CoMD/src-mpi/yamlOutput.c"
   fprintf(file,"Platform:\n");
# 71 "/Users/jmg3/chimes/src/examples/cpp/CoMD/src-mpi/yamlOutput.c"
   fprintf(file,"  hostname: %s\n", "Maxs-MacBook-Pro.local");
# 72 "/Users/jmg3/chimes/src/examples/cpp/CoMD/src-mpi/yamlOutput.c"
   fprintf(file,"  kernel name: %s\n", "'Darwin'");
# 73 "/Users/jmg3/chimes/src/examples/cpp/CoMD/src-mpi/yamlOutput.c"
   fprintf(file,"  kernel release: %s\n", "'14.1.0'");
# 74 "/Users/jmg3/chimes/src/examples/cpp/CoMD/src-mpi/yamlOutput.c"
   fprintf(file,"  processor: %s\n", "'i386'");
# 75 "/Users/jmg3/chimes/src/examples/cpp/CoMD/src-mpi/yamlOutput.c"
   fprintf(file,"Build:\n");
# 76 "/Users/jmg3/chimes/src/examples/cpp/CoMD/src-mpi/yamlOutput.c"
   fprintf(file,"  CC: %s\n", "''");
# 77 "/Users/jmg3/chimes/src/examples/cpp/CoMD/src-mpi/yamlOutput.c"
   fprintf(file,"  compiler version: %s\n", "'unknown'");
# 78 "/Users/jmg3/chimes/src/examples/cpp/CoMD/src-mpi/yamlOutput.c"
   fprintf(file,"  CFLAGS: %s\n", "'-std=c99 -DDOUBLE -g -O5  '");
# 79 "/Users/jmg3/chimes/src/examples/cpp/CoMD/src-mpi/yamlOutput.c"
   fprintf(file,"  LDFLAGS: %s\n", "'-lm '");
# 80 "/Users/jmg3/chimes/src/examples/cpp/CoMD/src-mpi/yamlOutput.c"
     int ____chimes_unroll_var_0; call_lbl_16: ____chimes_unroll_var_0 = ( ({ calling((void*)builtWithMpi, 16, 0, 0UL, 0); (builtWithMpi)(); }) ) ; fprintf(file,"  using MPI: %s\n", ____chimes_unroll_var_0 ? "true":"false");
# 81 "/Users/jmg3/chimes/src/examples/cpp/CoMD/src-mpi/yamlOutput.c"
   fprintf(file,"  Threading: none\n");
# 82 "/Users/jmg3/chimes/src/examples/cpp/CoMD/src-mpi/yamlOutput.c"
   fprintf(file,"  Double Precision: %s\n", (sizeof(real_t)==sizeof(double)?"true":"false"));
# 83 "/Users/jmg3/chimes/src/examples/cpp/CoMD/src-mpi/yamlOutput.c"
    ;
# 84 "/Users/jmg3/chimes/src/examples/cpp/CoMD/src-mpi/yamlOutput.c"
   ({ calling_npm("getTimeString", 0); getTimeString_npm(timestring); });
# 85 "/Users/jmg3/chimes/src/examples/cpp/CoMD/src-mpi/yamlOutput.c"
   fprintf(file,"Run Date/Time: %s\n", timestring);
# 86 "/Users/jmg3/chimes/src/examples/cpp/CoMD/src-mpi/yamlOutput.c"
   fprintf(file, "\n");
# 87 "/Users/jmg3/chimes/src/examples/cpp/CoMD/src-mpi/yamlOutput.c"
   fflush(file);
# 88 "/Users/jmg3/chimes/src/examples/cpp/CoMD/src-mpi/yamlOutput.c"
rm_stack(false, 0UL, "yamlAppInfo", &____must_manage_yamlAppInfo, ____alias_loc_id_2, ____chimes_did_disable2); }

void yamlAppInfo(FILE* file) { (____chimes_replaying ? yamlAppInfo_resumable(file) : yamlAppInfo_quick(file)); }

void yamlEnd_quick(void)
# 91 "/Users/jmg3/chimes/src/examples/cpp/CoMD/src-mpi/yamlOutput.c"
{const int ____chimes_did_disable3 = new_stack((void *)(&yamlEnd), "yamlEnd", &____must_manage_yamlEnd, 0, 0) ; ; ;
# 92 "/Users/jmg3/chimes/src/examples/cpp/CoMD/src-mpi/yamlOutput.c"
    call_lbl_1: if (! ({ calling((void*)printRank, 1, 0, 0UL, 0); (printRank)(); }) ) {rm_stack(false, 0UL, "yamlEnd", &____must_manage_yamlEnd, 0, ____chimes_did_disable3); return; };
# 94 "/Users/jmg3/chimes/src/examples/cpp/CoMD/src-mpi/yamlOutput.c"
# 95 "/Users/jmg3/chimes/src/examples/cpp/CoMD/src-mpi/yamlOutput.c"
# 96 "/Users/jmg3/chimes/src/examples/cpp/CoMD/src-mpi/yamlOutput.c"
rm_stack(false, 0UL, "yamlEnd", &____must_manage_yamlEnd, 0, ____chimes_did_disable3); }

void yamlEnd(void) { (____chimes_replaying ? yamlEnd_resumable() : yamlEnd_quick()); }

void printSeparator_quick(FILE* file)
# 99 "/Users/jmg3/chimes/src/examples/cpp/CoMD/src-mpi/yamlOutput.c"
{const int ____chimes_did_disable4 = new_stack((void *)(&printSeparator), "printSeparator", &____must_manage_printSeparator, 1, 0, (size_t)(12737042733622956005UL)) ; ; ;
# 100 "/Users/jmg3/chimes/src/examples/cpp/CoMD/src-mpi/yamlOutput.c"
# 101 "/Users/jmg3/chimes/src/examples/cpp/CoMD/src-mpi/yamlOutput.c"
      fprintf(file,"\n");
# 102 "/Users/jmg3/chimes/src/examples/cpp/CoMD/src-mpi/yamlOutput.c"
rm_stack(false, 0UL, "printSeparator", &____must_manage_printSeparator, ____alias_loc_id_3, ____chimes_did_disable4); }

void printSeparator(FILE* file) { (____chimes_replaying ? printSeparator_resumable(file) : printSeparator_quick(file)); }



static void getTimeString_npm(char* timestring)
# 29 "/Users/jmg3/chimes/src/examples/cpp/CoMD/src-mpi/yamlOutput.c"
{
# 30 "/Users/jmg3/chimes/src/examples/cpp/CoMD/src-mpi/yamlOutput.c"
   time_t rawtime;
# 31 "/Users/jmg3/chimes/src/examples/cpp/CoMD/src-mpi/yamlOutput.c"
   struct tm* timeinfo;
# 32 "/Users/jmg3/chimes/src/examples/cpp/CoMD/src-mpi/yamlOutput.c"
   time(&rawtime);
# 33 "/Users/jmg3/chimes/src/examples/cpp/CoMD/src-mpi/yamlOutput.c"
   timeinfo = localtime(&rawtime);
# 34 "/Users/jmg3/chimes/src/examples/cpp/CoMD/src-mpi/yamlOutput.c"
# 35 "/Users/jmg3/chimes/src/examples/cpp/CoMD/src-mpi/yamlOutput.c"
   sprintf(timestring,
# 36 "/Users/jmg3/chimes/src/examples/cpp/CoMD/src-mpi/yamlOutput.c"
           "%4d-%02i-%02d, %02d:%02d:%02d",
# 37 "/Users/jmg3/chimes/src/examples/cpp/CoMD/src-mpi/yamlOutput.c"
           timeinfo->tm_year+1900,
# 38 "/Users/jmg3/chimes/src/examples/cpp/CoMD/src-mpi/yamlOutput.c"
           timeinfo->tm_mon+1,
# 39 "/Users/jmg3/chimes/src/examples/cpp/CoMD/src-mpi/yamlOutput.c"
           timeinfo->tm_mday,
# 40 "/Users/jmg3/chimes/src/examples/cpp/CoMD/src-mpi/yamlOutput.c"
           timeinfo->tm_hour,
# 41 "/Users/jmg3/chimes/src/examples/cpp/CoMD/src-mpi/yamlOutput.c"
           timeinfo->tm_min,
# 42 "/Users/jmg3/chimes/src/examples/cpp/CoMD/src-mpi/yamlOutput.c"
           timeinfo->tm_sec);
# 43 "/Users/jmg3/chimes/src/examples/cpp/CoMD/src-mpi/yamlOutput.c"
}

void yamlBegin_npm(void)
# 46 "/Users/jmg3/chimes/src/examples/cpp/CoMD/src-mpi/yamlOutput.c"
{
# 47 "/Users/jmg3/chimes/src/examples/cpp/CoMD/src-mpi/yamlOutput.c"
   if (! (*____chimes_extern_func_printRank)()) {return; };
# 49 "/Users/jmg3/chimes/src/examples/cpp/CoMD/src-mpi/yamlOutput.c"
# 50 "/Users/jmg3/chimes/src/examples/cpp/CoMD/src-mpi/yamlOutput.c"
   char filename[64];
# 51 "/Users/jmg3/chimes/src/examples/cpp/CoMD/src-mpi/yamlOutput.c"
   time_t rawtime;
# 52 "/Users/jmg3/chimes/src/examples/cpp/CoMD/src-mpi/yamlOutput.c"
   time (&rawtime);
# 53 "/Users/jmg3/chimes/src/examples/cpp/CoMD/src-mpi/yamlOutput.c"
   struct tm* ptm = localtime(&rawtime);
# 54 "/Users/jmg3/chimes/src/examples/cpp/CoMD/src-mpi/yamlOutput.c"
   char sdate[25];
# 55 "/Users/jmg3/chimes/src/examples/cpp/CoMD/src-mpi/yamlOutput.c"
# 56 "/Users/jmg3/chimes/src/examples/cpp/CoMD/src-mpi/yamlOutput.c"
   sprintf (sdate,"%04d:%02d:%02d-%02d:%02d:%02d",
# 57 "/Users/jmg3/chimes/src/examples/cpp/CoMD/src-mpi/yamlOutput.c"
            ptm->tm_year + 1900, ptm->tm_mon+1,
# 58 "/Users/jmg3/chimes/src/examples/cpp/CoMD/src-mpi/yamlOutput.c"
            ptm->tm_mday, ptm->tm_hour, ptm->tm_min,ptm->tm_sec);
# 59 "/Users/jmg3/chimes/src/examples/cpp/CoMD/src-mpi/yamlOutput.c"
   sprintf(filename, "%s.%s.yaml", CoMDVariant, sdate);
# 60 "/Users/jmg3/chimes/src/examples/cpp/CoMD/src-mpi/yamlOutput.c"
# 61 "/Users/jmg3/chimes/src/examples/cpp/CoMD/src-mpi/yamlOutput.c"
}

void yamlAppInfo_npm(FILE* file)
# 64 "/Users/jmg3/chimes/src/examples/cpp/CoMD/src-mpi/yamlOutput.c"
{
# 65 "/Users/jmg3/chimes/src/examples/cpp/CoMD/src-mpi/yamlOutput.c"
   if (! (*____chimes_extern_func_printRank)()) {return; };
# 67 "/Users/jmg3/chimes/src/examples/cpp/CoMD/src-mpi/yamlOutput.c"
   printSeparator_npm(file);
# 68 "/Users/jmg3/chimes/src/examples/cpp/CoMD/src-mpi/yamlOutput.c"
   fprintf(file,"Mini-Application Name    : %s\n", CoMDVariant);
# 69 "/Users/jmg3/chimes/src/examples/cpp/CoMD/src-mpi/yamlOutput.c"
   fprintf(file,"Mini-Application Version : %s\n", CoMDVersion);
# 70 "/Users/jmg3/chimes/src/examples/cpp/CoMD/src-mpi/yamlOutput.c"
   fprintf(file,"Platform:\n");
# 71 "/Users/jmg3/chimes/src/examples/cpp/CoMD/src-mpi/yamlOutput.c"
   fprintf(file,"  hostname: %s\n", "Maxs-MacBook-Pro.local");
# 72 "/Users/jmg3/chimes/src/examples/cpp/CoMD/src-mpi/yamlOutput.c"
   fprintf(file,"  kernel name: %s\n", "'Darwin'");
# 73 "/Users/jmg3/chimes/src/examples/cpp/CoMD/src-mpi/yamlOutput.c"
   fprintf(file,"  kernel release: %s\n", "'14.1.0'");
# 74 "/Users/jmg3/chimes/src/examples/cpp/CoMD/src-mpi/yamlOutput.c"
   fprintf(file,"  processor: %s\n", "'i386'");
# 75 "/Users/jmg3/chimes/src/examples/cpp/CoMD/src-mpi/yamlOutput.c"
   fprintf(file,"Build:\n");
# 76 "/Users/jmg3/chimes/src/examples/cpp/CoMD/src-mpi/yamlOutput.c"
   fprintf(file,"  CC: %s\n", "''");
# 77 "/Users/jmg3/chimes/src/examples/cpp/CoMD/src-mpi/yamlOutput.c"
   fprintf(file,"  compiler version: %s\n", "'unknown'");
# 78 "/Users/jmg3/chimes/src/examples/cpp/CoMD/src-mpi/yamlOutput.c"
   fprintf(file,"  CFLAGS: %s\n", "'-std=c99 -DDOUBLE -g -O5  '");
# 79 "/Users/jmg3/chimes/src/examples/cpp/CoMD/src-mpi/yamlOutput.c"
   fprintf(file,"  LDFLAGS: %s\n", "'-lm '");
# 80 "/Users/jmg3/chimes/src/examples/cpp/CoMD/src-mpi/yamlOutput.c"
    int ____chimes_unroll_var_0 = (*____chimes_extern_func_builtWithMpi)(); fprintf(file,"  using MPI: %s\n", ____chimes_unroll_var_0 ? "true":"false");
# 81 "/Users/jmg3/chimes/src/examples/cpp/CoMD/src-mpi/yamlOutput.c"
   fprintf(file,"  Threading: none\n");
# 82 "/Users/jmg3/chimes/src/examples/cpp/CoMD/src-mpi/yamlOutput.c"
   fprintf(file,"  Double Precision: %s\n", (sizeof(real_t)==sizeof(double)?"true":"false"));
# 83 "/Users/jmg3/chimes/src/examples/cpp/CoMD/src-mpi/yamlOutput.c"
   char timestring[32];
# 84 "/Users/jmg3/chimes/src/examples/cpp/CoMD/src-mpi/yamlOutput.c"
   getTimeString_npm(timestring);
# 85 "/Users/jmg3/chimes/src/examples/cpp/CoMD/src-mpi/yamlOutput.c"
   fprintf(file,"Run Date/Time: %s\n", timestring);
# 86 "/Users/jmg3/chimes/src/examples/cpp/CoMD/src-mpi/yamlOutput.c"
   fprintf(file, "\n");
# 87 "/Users/jmg3/chimes/src/examples/cpp/CoMD/src-mpi/yamlOutput.c"
   fflush(file);
# 88 "/Users/jmg3/chimes/src/examples/cpp/CoMD/src-mpi/yamlOutput.c"
}

void yamlEnd_npm(void)
# 91 "/Users/jmg3/chimes/src/examples/cpp/CoMD/src-mpi/yamlOutput.c"
{
# 92 "/Users/jmg3/chimes/src/examples/cpp/CoMD/src-mpi/yamlOutput.c"
   if (! (*____chimes_extern_func_printRank)()) {return; };
# 94 "/Users/jmg3/chimes/src/examples/cpp/CoMD/src-mpi/yamlOutput.c"
# 95 "/Users/jmg3/chimes/src/examples/cpp/CoMD/src-mpi/yamlOutput.c"
# 96 "/Users/jmg3/chimes/src/examples/cpp/CoMD/src-mpi/yamlOutput.c"
}

void printSeparator_npm(FILE* file)
# 99 "/Users/jmg3/chimes/src/examples/cpp/CoMD/src-mpi/yamlOutput.c"
{
# 100 "/Users/jmg3/chimes/src/examples/cpp/CoMD/src-mpi/yamlOutput.c"
# 101 "/Users/jmg3/chimes/src/examples/cpp/CoMD/src-mpi/yamlOutput.c"
      fprintf(file,"\n");
# 102 "/Users/jmg3/chimes/src/examples/cpp/CoMD/src-mpi/yamlOutput.c"
}





static int module_init() {
    init_module(12737042733622955887UL, 6, 5, 6, 5, 5, 2, 7, 2, 0, 4,
                           &____alias_loc_id_0, (unsigned)1, (unsigned)0, (12737042733622955887UL + 50UL),
                           &____alias_loc_id_1, (unsigned)2, (unsigned)0, (12737042733622955887UL + 2UL), (12737042733622955887UL + 3UL),
                           &____alias_loc_id_2, (unsigned)1, (unsigned)2, (12737042733622955887UL + 51UL), "printSeparator", (unsigned)1, (12737042733622955887UL + 111UL), "getTimeString", (unsigned)1, (12737042733622955887UL + 52UL),
                           &____alias_loc_id_3, (unsigned)1, (unsigned)0, (12737042733622955887UL + 112UL),
                           &____alias_loc_id_4, (unsigned)3, (unsigned)0, (12737042733622955887UL + 121UL), (12737042733622955887UL + 122UL), (12737042733622955887UL + 123UL),
                            "getTimeString", (void *)(&getTimeString_npm), (void *)__null, 0, 1, (12737042733622955887UL + 154UL), 0UL, 3, "time", 1, (12737042733622955887UL + 122UL), 0UL, "localtime", 1, (12737042733622955887UL + 122UL), (12737042733622955887UL + 129UL), "sprintf", 8, (12737042733622955887UL + 154UL), (12737042733622955887UL + 161UL), 0UL, 0UL, 0UL, 0UL, 0UL, 0UL, 0UL,
                            "yamlBegin", (void *)(&yamlBegin_npm), (void *)__null, 0, 0, 0UL, 5, "printRank", 0, 0UL, "time", 1, (12737042733622955887UL + 2UL), 0UL, "localtime", 1, (12737042733622955887UL + 2UL), (12737042733622955887UL + 13UL), "sprintf", 8, (12737042733622955887UL + 4UL), (12737042733622955887UL + 161UL), 0UL, 0UL, 0UL, 0UL, 0UL, 0UL, 0UL, "sprintf", 4, (12737042733622955887UL + 1UL), (12737042733622955887UL + 162UL), (12737042733622955887UL + 62UL), (12737042733622955887UL + 4UL), 0UL,
                            "yamlAppInfo", (void *)(&yamlAppInfo_npm), (void *)__null, 1, &____alias_loc_id_0, 1, (12737042733622955887UL + 111UL), 0UL, 22, "printRank", 0, 0UL, "printSeparator", 1, (12737042733622955887UL + 111UL), 0UL, "fprintf", 3, (12737042733622955887UL + 111UL), (12737042733622955887UL + 164UL), (12737042733622955887UL + 62UL), 0UL, "fprintf", 3, (12737042733622955887UL + 111UL), (12737042733622955887UL + 164UL), (12737042733622955887UL + 62UL), 0UL, "fprintf", 2, (12737042733622955887UL + 111UL), (12737042733622955887UL + 162UL), 0UL, "fprintf", 3, (12737042733622955887UL + 111UL), (12737042733622955887UL + 168UL), (12737042733622955887UL + 169UL), 0UL, "fprintf", 3, (12737042733622955887UL + 111UL), (12737042733622955887UL + 170UL), (12737042733622955887UL + 171UL), 0UL, "fprintf", 3, (12737042733622955887UL + 111UL), (12737042733622955887UL + 172UL), (12737042733622955887UL + 171UL), 0UL, "fprintf", 3, (12737042733622955887UL + 111UL), (12737042733622955887UL + 174UL), (12737042733622955887UL + 175UL), 0UL, "fprintf", 2, (12737042733622955887UL + 111UL), (12737042733622955887UL + 176UL), 0UL, "fprintf", 3, (12737042733622955887UL + 111UL), (12737042733622955887UL + 177UL), (12737042733622955887UL + 178UL), 0UL, "fprintf", 3, (12737042733622955887UL + 111UL), (12737042733622955887UL + 179UL), (12737042733622955887UL + 177UL), 0UL, "fprintf", 3, (12737042733622955887UL + 111UL), (12737042733622955887UL + 181UL), (12737042733622955887UL + 182UL), 0UL, "fprintf", 3, (12737042733622955887UL + 111UL), (12737042733622955887UL + 183UL), (12737042733622955887UL + 175UL), 0UL, "builtWithMpi", 0, 0UL, "fprintf", 3, (12737042733622955887UL + 111UL), (12737042733622955887UL + 174UL), (12737042733622955887UL + 186UL), 0UL, "fprintf", 2, (12737042733622955887UL + 111UL), (12737042733622955887UL + 170UL), 0UL, "fprintf", 3, (12737042733622955887UL + 111UL), (12737042733622955887UL + 179UL), (12737042733622955887UL + 186UL), 0UL, "getTimeString", 1, (12737042733622955887UL + 52UL), 0UL, "fprintf", 3, (12737042733622955887UL + 111UL), (12737042733622955887UL + 170UL), (12737042733622955887UL + 52UL), 0UL, "fprintf", 2, (12737042733622955887UL + 111UL), (12737042733622955887UL + 191UL), 0UL, "fflush", 1, (12737042733622955887UL + 111UL), 0UL,
                            "yamlEnd", (void *)(&yamlEnd_npm), (void *)__null, 0, 0, 0UL, 1, "printRank", 0, 0UL,
                            "printSeparator", (void *)(&printSeparator_npm), (void *)__null, 0, 1, (12737042733622955887UL + 118UL), 0UL, 1, "fprintf", 2, (12737042733622955887UL + 118UL), (12737042733622955887UL + 191UL), 0UL,
                               "builtWithMpi", (void **)&(____chimes_extern_func_builtWithMpi),
                               "printRank", (void **)&(____chimes_extern_func_printRank),
                           "getTimeString", &(____chimes_does_checkpoint_getTimeString_npm),
                           "yamlBegin", &(____chimes_does_checkpoint_yamlBegin_npm),
                           "yamlAppInfo", &(____chimes_does_checkpoint_yamlAppInfo_npm),
                           "yamlEnd", &(____chimes_does_checkpoint_yamlEnd_npm),
                           "printSeparator", &(____chimes_does_checkpoint_printSeparator_npm),
                           "builtWithMpi", &(____chimes_does_checkpoint_builtWithMpi_npm),
                           "printRank", &(____chimes_does_checkpoint_printRank_npm),
                             (12737042733622955887UL + 50UL), (12737042733622955887UL + 111UL),
                             (12737042733622955887UL + 121UL), (12737042733622955887UL + 154UL),
                             (12737042733622955887UL + 3UL), (12737042733622955887UL + 13UL),
                             (12737042733622955887UL + 123UL), (12737042733622955887UL + 129UL),
                             (12737042733622955887UL + 112UL), (12737042733622955887UL + 118UL),
                             (12737042733622955887UL + 163UL), (12737042733622955887UL + 62UL),
                     "__sFILE", 20, "unsigned char*", (int)__builtin_offsetof (struct __sFILE, _p), "int", (int)__builtin_offsetof (struct __sFILE, _r), "int", (int)__builtin_offsetof (struct __sFILE, _w), "short", (int)__builtin_offsetof (struct __sFILE, _flags), "short", (int)__builtin_offsetof (struct __sFILE, _file), "%struct.__sbuf", (int)__builtin_offsetof (struct __sFILE, _bf), "int", (int)__builtin_offsetof (struct __sFILE, _lbfsize), "void*", (int)__builtin_offsetof (struct __sFILE, _cookie), "*", (int)__builtin_offsetof (struct __sFILE, _close), "*", (int)__builtin_offsetof (struct __sFILE, _read), "*", (int)__builtin_offsetof (struct __sFILE, _seek), "*", (int)__builtin_offsetof (struct __sFILE, _write), "%struct.__sbuf", (int)__builtin_offsetof (struct __sFILE, _ub), "%struct.__sFILEX*", (int)__builtin_offsetof (struct __sFILE, _extra), "int", (int)__builtin_offsetof (struct __sFILE, _ur), "[ 3 x unsigned char ]", (int)__builtin_offsetof (struct __sFILE, _ubuf), "[ 1 x unsigned char ]", (int)__builtin_offsetof (struct __sFILE, _nbuf), "%struct.__sbuf", (int)__builtin_offsetof (struct __sFILE, _lb), "int", (int)__builtin_offsetof (struct __sFILE, _blksize), "long long int", (int)__builtin_offsetof (struct __sFILE, _offset),
                     "__sFILEX", 0,
                     "__sbuf", 2, "unsigned char*", (int)__builtin_offsetof (struct __sbuf, _base), "int", (int)__builtin_offsetof (struct __sbuf, _size),
                     "tm", 11, "int", (int)__builtin_offsetof (struct tm, tm_sec), "int", (int)__builtin_offsetof (struct tm, tm_min), "int", (int)__builtin_offsetof (struct tm, tm_hour), "int", (int)__builtin_offsetof (struct tm, tm_mday), "int", (int)__builtin_offsetof (struct tm, tm_mon), "int", (int)__builtin_offsetof (struct tm, tm_year), "int", (int)__builtin_offsetof (struct tm, tm_wday), "int", (int)__builtin_offsetof (struct tm, tm_yday), "int", (int)__builtin_offsetof (struct tm, tm_isdst), "long int", (int)__builtin_offsetof (struct tm, tm_gmtoff), "char*", (int)__builtin_offsetof (struct tm, tm_zone),
                             "printSeparator", "_Z14printSeparatorP7__sFILE", 0,
                             "yamlBegin", "_Z9yamlBeginv", 1, "printRank",
                             "yamlEnd", "_Z7yamlEndv", 1, "printRank",
                             "yamlAppInfo", "_Z11yamlAppInfoP7__sFILE", 4, "printRank", "printSeparator", "builtWithMpi", "getTimeString",
                             "getTimeString", "_ZL13getTimeStringPc", 0,
                        "yamlBegin|filename|0", 1, "yamlBegin",
                        "yamlBegin|rawtime|0", 1, "yamlBegin",
                        "yamlBegin|sdate|0", 1, "yamlBegin",
                        "yamlAppInfo|file|0", 2, "printRank", "builtWithMpi",
                        "yamlAppInfo|timestring|0", 1, "yamlAppInfo",
                        "getTimeString|rawtime|0", 1, "getTimeString",
        "printSeparator", 0UL, (int)1, 12737042733622955998UL,
        "getTimeString", 0UL, (int)1, 12737042733622955939UL);
    register_global_var("global|CoMDVariant", "i8*", (void *)(&CoMDVariant), 8, 1, 0, 0);
    register_global_var("global|CoMDVersion", "i8*", (void *)(&CoMDVersion), 8, 1, 0, 0);
    register_constant(12737042733622955887UL + 0UL, (void *)CoMDVersion, 4);
    register_constant(12737042733622955887UL + 1UL, (void *)CoMDVariant, 12);
    return 0;
}

static const int __libchimes_module_init = module_init();
