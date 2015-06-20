# 1 "mycommand.c.pre.transformed.cpp"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/local/lib/gcc/x86_64-apple-darwin14.0.0/4.9.2/include/stddef.h" 1 3 4
# 147 "/usr/local/lib/gcc/x86_64-apple-darwin14.0.0/4.9.2/include/stddef.h" 3 4
typedef long int ptrdiff_t;
# 212 "/usr/local/lib/gcc/x86_64-apple-darwin14.0.0/4.9.2/include/stddef.h" 3 4
typedef long unsigned int size_t;
# 1 "<command-line>" 2
# 1 "mycommand.c.pre.transformed.cpp"
static int ____chimes_does_checkpoint_parseCommandLine_npm = 1;
static int ____chimes_does_checkpoint_printCmdYaml_npm = 1;
static int ____chimes_does_checkpoint_addArg_npm = 1;
static int ____chimes_does_checkpoint_freeArgs_npm = 1;
static int ____chimes_does_checkpoint_printArgs_npm = 1;
static int ____chimes_does_checkpoint_printRank_npm = 1;
static int ____chimes_does_checkpoint_processArgs_npm = 1;

static int ____must_checkpoint_parseCommandLine_argc_0 = 2;
static int ____must_checkpoint_parseCommandLine_argv_0 = 2;
static int ____must_checkpoint_parseCommandLine_help_0 = 2;
static int ____must_checkpoint_printCmdYaml_file_0 = 2;
static int ____must_checkpoint_printCmdYaml_cmd_0 = 2;

static int ____must_manage_parseCommandLine = 2;
static int ____must_manage_printCmdYaml = 2;

static unsigned ____alias_loc_id_0;
static unsigned ____alias_loc_id_1;
static unsigned ____alias_loc_id_2;
static unsigned ____alias_loc_id_3;
# 1 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
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
# 67 "/Users/jmg3/num-debug/src/libchimes/libchimes.h"
extern "C" {
extern int omp_get_thread_num (void) throw ();
extern int omp_get_num_threads(void) throw ();
}
inline unsigned LIBCHIMES_THREAD_NUM() { return omp_get_thread_num(); }
inline unsigned LIBCHIMES_NUM_THREADS() { return omp_get_num_threads(); }





extern int ____chimes_replaying;
# 1 "<command-line>" 2
# 1 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
# 1 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
# 2 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
# 3 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"

# 1 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.h" 1






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
# 8 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.h" 2



typedef struct CommandSt
{
   char potDir[1024];
   char potName[1024];
   char potType[1024];
   int doeam;
   int nx;
   int ny;
   int nz;
   int xproc;
   int yproc;
   int zproc;
   int nSteps;
   int printRate;
   double dt;
   double lat;
   double temperature;
   double initialDelta;
} Command;


Command parseCommandLine(int argc, char** argv);


void printCmdYaml(FILE* file, Command* cmd);
# 5 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c" 2
# 5 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"

# 1 "/usr/include/string.h" 1 3 4
# 69 "/usr/include/string.h" 3 4
extern "C" {
void *memchr(const void *, int, size_t);
int memcmp(const void *, const void *, size_t);
void *memcpy(void *, const void *, size_t);
void *memmove(void *, const void *, size_t);
void *memset(void *, int, size_t);
char *strcat(char *, const char *);
char *strchr(const char *, int);
int strcmp(const char *, const char *);
int strcoll(const char *, const char *);
char *strcpy(char *, const char *);
size_t strcspn(const char *, const char *);
char *strerror(int) __asm("_" "strerror" );
size_t strlen(const char *);
char *strncat(char *, const char *, size_t);
int strncmp(const char *, const char *, size_t);
char *strncpy(char *, const char *, size_t);
char *strpbrk(const char *, const char *);
char *strrchr(const char *, int);
size_t strspn(const char *, const char *);
char *strstr(const char *, const char *);
char *strtok(char *, const char *);
size_t strxfrm(char *, const char *, size_t);
}
# 103 "/usr/include/string.h" 3 4
extern "C" {
char *strtok_r(char *, const char *, char **);
}
# 115 "/usr/include/string.h" 3 4
extern "C" {
int strerror_r(int, char *, size_t);
char *strdup(const char *);
void *memccpy(void *, const void *, int, size_t);
}
# 129 "/usr/include/string.h" 3 4
extern "C" {
char *stpcpy(char *, const char *);
char *stpncpy(char *, const char *, size_t) ;
char *strndup(const char *, size_t) ;
size_t strnlen(const char *, size_t) ;
char *strsignal(int sig);
}





# 1 "/usr/include/sys/_types/_rsize_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_rsize_t.h" 3 4
typedef __darwin_size_t rsize_t;
# 142 "/usr/include/string.h" 2 3 4
# 1 "/usr/include/sys/_types/_errno_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_errno_t.h" 3 4
typedef int errno_t;
# 143 "/usr/include/string.h" 2 3 4

extern "C" {
errno_t memset_s(void *, rsize_t, int, rsize_t) ;
}







extern "C" {
void *memmem(const void *, size_t, const void *, size_t) ;
void memset_pattern4(void *, const void *, size_t) ;
void memset_pattern8(void *, const void *, size_t) ;
void memset_pattern16(void *, const void *, size_t) ;

char *strcasestr(const char *, const char *);
char *strnstr(const char *, const char *, size_t);
size_t strlcat(char *, const char *, size_t);
size_t strlcpy(char *, const char *, size_t);
void strmode(int, char *);
char *strsep(char **, const char *);


void swab(const void * , void * , ssize_t);
}






# 1 "/usr/include/strings.h" 1 3 4
# 67 "/usr/include/strings.h" 3 4
extern "C" {


int bcmp(const void *, const void *, size_t) ;
void bcopy(const void *, void *, size_t) ;
void bzero(void *, size_t) ;
char *index(const char *, int) ;
char *rindex(const char *, int) ;


int ffs(int);
int strcasecmp(const char *, const char *);
int strncasecmp(const char *, const char *, size_t);
}



extern "C" {
int ffsl(long) ;
int ffsll(long long) ;
int fls(int) ;
int flsl(long) ;
int flsll(long long) ;
}

# 1 "/usr/include/string.h" 1 3 4
# 93 "/usr/include/strings.h" 2 3 4
# 177 "/usr/include/string.h" 2 3 4
# 7 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c" 2
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
# 8 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c" 2
# 8 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"

# 1 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/cmdLineParser.h" 1
# 28 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/cmdLineParser.h"
int addArg(const char *longOption, const char shortOption,
           int has_arg, const char type, void *dataPtr, int dataSize,
           const char *help);


void processArgs(int argc, char **argv);


void printArgs(void);

void freeArgs(void);
# 10 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c" 2
# 1 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/parallel.h" 1






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
# 8 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/parallel.h" 2


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
# 11 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c" 2
# 186 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
# 186 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
Command parseCommandLine_npm(int argc, char** argv);static int (*____chimes_extern_func_addArg)(const char *, char, int, char, void *, int, const char *) = addArg;static void (*____chimes_extern_func_freeArgs)(void) = freeArgs;static void (*____chimes_extern_func_printArgs)(void) = printArgs;static void (*____chimes_extern_func_processArgs)(int, char **) = processArgs;
Command parseCommandLine_quick(int argc, char** argv); Command parseCommandLine(int argc, char** argv);
Command parseCommandLine_resumable(int argc, char** argv)
# 187 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
{const int ____chimes_did_disable0 = new_stack((void *)(&parseCommandLine), "parseCommandLine", &____must_manage_parseCommandLine, 3, 2, (size_t)(6351733837270304242UL), (size_t)(0UL), (size_t)(6351733837270304244UL), "parseCommandLine|argc|0", &____must_checkpoint_parseCommandLine_argc_0, "i32", (void *)(&argc), (size_t)4, 0, 0, 0, "parseCommandLine|argv|0", &____must_checkpoint_parseCommandLine_argv_0, "i8**", (void *)(&argv), (size_t)8, 1, 0, 0) ; int help;
 if (____must_checkpoint_parseCommandLine_help_0) { register_stack_vars(1, "parseCommandLine|help|0", &____must_checkpoint_parseCommandLine_help_0, "i32", (void *)(&help), (size_t)4, 0, 0, 0); } if (____chimes_replaying) { switch(get_next_call()) { case(7): { goto call_lbl_7; } case(8): { goto call_lbl_8; } case(9): { goto call_lbl_9; } case(10): { goto call_lbl_10; } case(11): { goto call_lbl_11; } case(12): { goto call_lbl_12; } case(13): { goto call_lbl_13; } case(14): { goto call_lbl_14; } case(15): { goto call_lbl_15; } case(16): { goto call_lbl_16; } case(17): { goto call_lbl_17; } case(18): { goto call_lbl_18; } case(19): { goto call_lbl_19; } case(20): { goto call_lbl_20; } case(21): { goto call_lbl_21; } case(22): { goto call_lbl_22; } case(23): { goto call_lbl_23; } case(24): { goto call_lbl_24; } case(30): { goto call_lbl_30; } case(31): { goto call_lbl_31; } case(33): { goto call_lbl_33; } default: { chimes_error(); } } } ; ;
# 188 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
    Command cmd; ;
# 189 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
# 190 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
   memset(cmd.potDir, 0, 1024);
# 191 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
   memset(cmd.potName, 0, 1024);
# 192 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
   memset(cmd.potType, 0, 1024);
# 193 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
   strcpy(cmd.potDir, "pots");
# 194 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
   strcpy(cmd.potName, "\0");
# 195 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
   strcpy(cmd.potType, "funcfl");
# 196 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
   cmd.doeam = 0;
# 197 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
   cmd.nx = 20;
# 198 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
   cmd.ny = 20;
# 199 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
   cmd.nz = 20;
# 200 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
   cmd.xproc = 1;
# 201 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
   cmd.yproc = 1;
# 202 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
   cmd.zproc = 1;
# 203 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
   cmd.nSteps = 100;
# 204 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
   cmd.printRate = 10;
# 205 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
   cmd.dt = 1.0;
# 206 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
   cmd.lat = -1.0;
# 207 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
   cmd.temperature = 600.0;
# 208 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
   cmd.initialDelta = 0.0;
# 209 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
# 210 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
      help = (0) ;
# 211 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
# 212 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
    call_lbl_7: ({ char ____chimes_arg1; char ____chimes_arg3; void * ____chimes_arg4; if (!____chimes_replaying) { ____chimes_arg1 = ('h'); ____chimes_arg3 = ('i'); ____chimes_arg4 = (&(help)); } calling((void*)addArg, 7, ____alias_loc_id_0, 0UL, 7, (size_t)(6351733837270304336UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(6351733837270304104UL), (size_t)(0UL), (size_t)(6351733837270304340UL)); (addArg)("help", ____chimes_arg1, 0, ____chimes_arg3, ____chimes_arg4, 0, "print this message"); }) ;
# 213 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
    call_lbl_8: ({ char ____chimes_arg8; char ____chimes_arg10; void * ____chimes_arg11; int ____chimes_arg12; if (!____chimes_replaying) { ____chimes_arg8 = ('d'); ____chimes_arg10 = ('s'); ____chimes_arg11 = (cmd.potDir); ____chimes_arg12 = (sizeof (cmd.potDir)); } calling((void*)addArg, 8, 0, 0UL, 7, (size_t)(6351733837270304338UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(6351733837270304242UL), (size_t)(0UL), (size_t)(6351733837270304342UL)); (addArg)("potDir", ____chimes_arg8, 1, ____chimes_arg10, ____chimes_arg11, ____chimes_arg12, "potential directory"); }) ;
# 214 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
    call_lbl_9: ({ char ____chimes_arg15; char ____chimes_arg17; void * ____chimes_arg18; int ____chimes_arg19; if (!____chimes_replaying) { ____chimes_arg15 = ('p'); ____chimes_arg17 = ('s'); ____chimes_arg18 = (cmd.potName); ____chimes_arg19 = (sizeof (cmd.potName)); } calling((void*)addArg, 9, 0, 0UL, 7, (size_t)(6351733837270304343UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(6351733837270304242UL), (size_t)(0UL), (size_t)(6351733837270304344UL)); (addArg)("potName", ____chimes_arg15, 1, ____chimes_arg17, ____chimes_arg18, ____chimes_arg19, "potential name"); }) ;
# 215 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
    call_lbl_10: ({ char ____chimes_arg22; char ____chimes_arg24; void * ____chimes_arg25; int ____chimes_arg26; if (!____chimes_replaying) { ____chimes_arg22 = ('t'); ____chimes_arg24 = ('s'); ____chimes_arg25 = (cmd.potType); ____chimes_arg26 = (sizeof (cmd.potType)); } calling((void*)addArg, 10, 0, 0UL, 7, (size_t)(6351733837270304343UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(6351733837270304242UL), (size_t)(0UL), (size_t)(6351733837270304346UL)); (addArg)("potType", ____chimes_arg22, 1, ____chimes_arg24, ____chimes_arg25, ____chimes_arg26, "potential type (funcfl or setfl)"); }) ;
# 216 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
    call_lbl_11: ({ char ____chimes_arg29; char ____chimes_arg31; void * ____chimes_arg32; if (!____chimes_replaying) { ____chimes_arg29 = ('e'); ____chimes_arg31 = ('i'); ____chimes_arg32 = (&(cmd.doeam)); } calling((void*)addArg, 11, 0, 0UL, 7, (size_t)(6351733837270304347UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(6351733837270304242UL), (size_t)(0UL), (size_t)(6351733837270304348UL)); (addArg)("doeam", ____chimes_arg29, 0, ____chimes_arg31, ____chimes_arg32, 0, "compute eam potentials"); }) ;
# 217 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
    call_lbl_12: ({ char ____chimes_arg36; char ____chimes_arg38; void * ____chimes_arg39; if (!____chimes_replaying) { ____chimes_arg36 = ('x'); ____chimes_arg38 = ('i'); ____chimes_arg39 = (&(cmd.nx)); } calling((void*)addArg, 12, 0, 0UL, 7, (size_t)(6351733837270304349UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(6351733837270304242UL), (size_t)(0UL), (size_t)(6351733837270304350UL)); (addArg)("nx", ____chimes_arg36, 1, ____chimes_arg38, ____chimes_arg39, 0, "number of unit cells in x"); }) ;
# 218 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
    call_lbl_13: ({ char ____chimes_arg43; char ____chimes_arg45; void * ____chimes_arg46; if (!____chimes_replaying) { ____chimes_arg43 = ('y'); ____chimes_arg45 = ('i'); ____chimes_arg46 = (&(cmd.ny)); } calling((void*)addArg, 13, 0, 0UL, 7, (size_t)(6351733837270304349UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(6351733837270304242UL), (size_t)(0UL), (size_t)(6351733837270304350UL)); (addArg)("ny", ____chimes_arg43, 1, ____chimes_arg45, ____chimes_arg46, 0, "number of unit cells in y"); }) ;
# 219 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
    call_lbl_14: ({ char ____chimes_arg50; char ____chimes_arg52; void * ____chimes_arg53; if (!____chimes_replaying) { ____chimes_arg50 = ('z'); ____chimes_arg52 = ('i'); ____chimes_arg53 = (&(cmd.nz)); } calling((void*)addArg, 14, 0, 0UL, 7, (size_t)(6351733837270304349UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(6351733837270304242UL), (size_t)(0UL), (size_t)(6351733837270304350UL)); (addArg)("nz", ____chimes_arg50, 1, ____chimes_arg52, ____chimes_arg53, 0, "number of unit cells in z"); }) ;
# 220 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
    call_lbl_15: ({ char ____chimes_arg57; char ____chimes_arg59; void * ____chimes_arg60; if (!____chimes_replaying) { ____chimes_arg57 = ('i'); ____chimes_arg59 = ('i'); ____chimes_arg60 = (&(cmd.xproc)); } calling((void*)addArg, 15, 0, 0UL, 7, (size_t)(6351733837270304347UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(6351733837270304242UL), (size_t)(0UL), (size_t)(6351733837270304350UL)); (addArg)("xproc", ____chimes_arg57, 1, ____chimes_arg59, ____chimes_arg60, 0, "processors in x direction"); }) ;
# 221 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
    call_lbl_16: ({ char ____chimes_arg64; char ____chimes_arg66; void * ____chimes_arg67; if (!____chimes_replaying) { ____chimes_arg64 = ('j'); ____chimes_arg66 = ('i'); ____chimes_arg67 = (&(cmd.yproc)); } calling((void*)addArg, 16, 0, 0UL, 7, (size_t)(6351733837270304347UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(6351733837270304242UL), (size_t)(0UL), (size_t)(6351733837270304350UL)); (addArg)("yproc", ____chimes_arg64, 1, ____chimes_arg66, ____chimes_arg67, 0, "processors in y direction"); }) ;
# 222 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
    call_lbl_17: ({ char ____chimes_arg71; char ____chimes_arg73; void * ____chimes_arg74; if (!____chimes_replaying) { ____chimes_arg71 = ('k'); ____chimes_arg73 = ('i'); ____chimes_arg74 = (&(cmd.zproc)); } calling((void*)addArg, 17, 0, 0UL, 7, (size_t)(6351733837270304347UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(6351733837270304242UL), (size_t)(0UL), (size_t)(6351733837270304350UL)); (addArg)("zproc", ____chimes_arg71, 1, ____chimes_arg73, ____chimes_arg74, 0, "processors in z direction"); }) ;
# 223 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
    call_lbl_18: ({ char ____chimes_arg78; char ____chimes_arg80; void * ____chimes_arg81; if (!____chimes_replaying) { ____chimes_arg78 = ('N'); ____chimes_arg80 = ('i'); ____chimes_arg81 = (&(cmd.nSteps)); } calling((void*)addArg, 18, 0, 0UL, 7, (size_t)(6351733837270304338UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(6351733837270304242UL), (size_t)(0UL), (size_t)(6351733837270304362UL)); (addArg)("nSteps", ____chimes_arg78, 1, ____chimes_arg80, ____chimes_arg81, 0, "number of time steps"); }) ;
# 224 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
    call_lbl_19: ({ char ____chimes_arg85; char ____chimes_arg87; void * ____chimes_arg88; if (!____chimes_replaying) { ____chimes_arg85 = ('n'); ____chimes_arg87 = ('i'); ____chimes_arg88 = (&(cmd.printRate)); } calling((void*)addArg, 19, 0, 0UL, 7, (size_t)(6351733837270304363UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(6351733837270304242UL), (size_t)(0UL), (size_t)(6351733837270304364UL)); (addArg)("printRate", ____chimes_arg85, 1, ____chimes_arg87, ____chimes_arg88, 0, "number of steps between output"); }) ;
# 225 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
    call_lbl_20: ({ char ____chimes_arg92; char ____chimes_arg94; void * ____chimes_arg95; if (!____chimes_replaying) { ____chimes_arg92 = ('D'); ____chimes_arg94 = ('d'); ____chimes_arg95 = (&(cmd.dt)); } calling((void*)addArg, 20, 0, 0UL, 7, (size_t)(6351733837270304349UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(6351733837270304242UL), (size_t)(0UL), (size_t)(6351733837270304366UL)); (addArg)("dt", ____chimes_arg92, 1, ____chimes_arg94, ____chimes_arg95, 0, "time step (in fs)"); }) ;
# 226 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
    call_lbl_21: ({ char ____chimes_arg99; char ____chimes_arg101; void * ____chimes_arg102; if (!____chimes_replaying) { ____chimes_arg99 = ('l'); ____chimes_arg101 = ('d'); ____chimes_arg102 = (&(cmd.lat)); } calling((void*)addArg, 21, 0, 0UL, 7, (size_t)(6351733837270304367UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(6351733837270304242UL), (size_t)(0UL), (size_t)(6351733837270304368UL)); (addArg)("lat", ____chimes_arg99, 1, ____chimes_arg101, ____chimes_arg102, 0, "lattice parameter (Angstroms)"); }) ;
# 227 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
    call_lbl_22: ({ char ____chimes_arg106; char ____chimes_arg108; void * ____chimes_arg109; if (!____chimes_replaying) { ____chimes_arg106 = ('T'); ____chimes_arg108 = ('d'); ____chimes_arg109 = (&(cmd.temperature)); } calling((void*)addArg, 22, 0, 0UL, 7, (size_t)(6351733837270304336UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(6351733837270304242UL), (size_t)(0UL), (size_t)(6351733837270304370UL)); (addArg)("temp", ____chimes_arg106, 1, ____chimes_arg108, ____chimes_arg109, 0, "initial temperature (K)"); }) ;
# 228 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
    call_lbl_23: ({ char ____chimes_arg113; char ____chimes_arg115; void * ____chimes_arg116; if (!____chimes_replaying) { ____chimes_arg113 = ('r'); ____chimes_arg115 = ('d'); ____chimes_arg116 = (&(cmd.initialDelta)); } calling((void*)addArg, 23, 0, 0UL, 7, (size_t)(6351733837270304347UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(6351733837270304242UL), (size_t)(0UL), (size_t)(6351733837270304350UL)); (addArg)("delta", ____chimes_arg113, 1, ____chimes_arg115, ____chimes_arg116, 0, "initial delta (Angstroms)"); }) ;
# 229 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
# 230 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
    call_lbl_24: ({ calling((void*)processArgs, 24, 0, 0UL, 2, (size_t)(0UL), (size_t)(6351733837270304244UL)); (processArgs)(argc, argv); }) ;
# 231 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
# 232 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
# 233 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
   if (strlen(cmd.potName) == 0)
# 234 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
   {
# 235 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
      if (strcmp(cmd.potType, "setfl") == 0) {strcpy(cmd.potName, "Cu01.eam.alloy"); };
# 237 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
      if (strcmp(cmd.potType, "funcfl") == 0) {strcpy(cmd.potName, "Cu_u6.eam"); };
# 239 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
   }
# 240 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
# 241 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
   if (help)
# 242 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
   {
# 243 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
       call_lbl_30: ({ calling((void*)printArgs, 30, ____alias_loc_id_1, 0UL, 0); (printArgs)(); }) ;
# 244 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
       call_lbl_31: ({ calling((void*)freeArgs, 31, 0, 0UL, 0); (freeArgs)(); }) ;
# 245 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
      exit(2);
# 246 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
   }
# 247 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
    call_lbl_33: ({ calling((void*)freeArgs, 33, ____alias_loc_id_2, 0UL, 0); (freeArgs)(); }) ;
# 248 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
# 249 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
   rm_stack(false, 0UL, "parseCommandLine", &____must_manage_parseCommandLine, 0, ____chimes_did_disable0); return cmd;
# 250 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
}
# 251 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
# 252 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
void printCmdYaml_npm(FILE* file, Command* cmd);static int (*____chimes_extern_func_printRank)(void) = printRank;
void printCmdYaml_quick(FILE* file, Command* cmd); void printCmdYaml(FILE* file, Command* cmd);
void printCmdYaml_resumable(FILE* file, Command* cmd)
# 253 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
{const int ____chimes_did_disable1 = new_stack((void *)(&printCmdYaml), "printCmdYaml", &____must_manage_printCmdYaml, 2, 2, (size_t)(6351733837270304331UL), (size_t)(6351733837270304332UL), "printCmdYaml|file|0", &____must_checkpoint_printCmdYaml_file_0, "%struct.__sFILE*", (void *)(&file), (size_t)8, 1, 0, 0, "printCmdYaml|cmd|0", &____must_checkpoint_printCmdYaml_cmd_0, "%struct.CommandSt*", (void *)(&cmd), (size_t)8, 1, 0, 0) ; if (____chimes_replaying) { switch(get_next_call()) { case(2): { goto call_lbl_2; } default: { chimes_error(); } } } ; ;
# 254 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
   alias_group_changed(____alias_loc_id_3); call_lbl_2: if (! ({ calling((void*)printRank, 2, ____alias_loc_id_3, 0UL, 0); (printRank)(); }) ) {rm_stack(false, 0UL, "printCmdYaml", &____must_manage_printCmdYaml, 0, ____chimes_did_disable1); return;; };
# 256 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
   fprintf(file,
# 257 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
           "Command Line Parameters:\n"
# 258 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
           "  doeam: %d\n"
# 259 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
           "  potDir: %s\n"
# 260 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
           "  potName: %s\n"
# 261 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
           "  potType: %s\n"
# 262 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
           "  nx: %d\n"
# 263 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
           "  ny: %d\n"
# 264 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
           "  nz: %d\n"
# 265 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
           "  xproc: %d\n"
# 266 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
           "  yproc: %d\n"
# 267 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
           "  zproc: %d\n"
# 268 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
           "  Lattice constant: %g Angstroms\n"
# 269 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
           "  nSteps: %d\n"
# 270 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
           "  printRate: %d\n"
# 271 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
           "  Time step: %g fs\n"
# 272 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
           "  Initial Temperature: %g K\n"
# 273 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
           "  Initial Delta: %g Angstroms\n"
# 274 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
           "\n",
# 275 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
           cmd->doeam,
# 276 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
           cmd->potDir,
# 277 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
           cmd->potName,
# 278 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
           cmd->potType,
# 279 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
           cmd->nx, cmd->ny, cmd->nz,
# 280 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
           cmd->xproc, cmd->yproc, cmd->zproc,
# 281 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
           cmd->lat,
# 282 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
           cmd->nSteps,
# 283 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
           cmd->printRate,
# 284 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
           cmd->dt,
# 285 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
           cmd->temperature,
# 286 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
           cmd->initialDelta
# 287 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
   );
# 288 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
   fflush(file);
# 289 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
rm_stack(false, 0UL, "printCmdYaml", &____must_manage_printCmdYaml, 0, ____chimes_did_disable1); }
Command parseCommandLine_quick(int argc, char** argv)
# 187 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
{const int ____chimes_did_disable0 = new_stack((void *)(&parseCommandLine), "parseCommandLine", &____must_manage_parseCommandLine, 3, 2, (size_t)(6351733837270304242UL), (size_t)(0UL), (size_t)(6351733837270304244UL), "parseCommandLine|argc|0", &____must_checkpoint_parseCommandLine_argc_0, "i32", (void *)(&argc), (size_t)4, 0, 0, 0, "parseCommandLine|argv|0", &____must_checkpoint_parseCommandLine_argv_0, "i8**", (void *)(&argv), (size_t)8, 1, 0, 0) ; int help;
 if (____must_checkpoint_parseCommandLine_help_0) { register_stack_vars(1, "parseCommandLine|help|0", &____must_checkpoint_parseCommandLine_help_0, "i32", (void *)(&help), (size_t)4, 0, 0, 0); } ; ;
# 188 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
    Command cmd; ;
# 189 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
# 190 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
   memset(cmd.potDir, 0, 1024);
# 191 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
   memset(cmd.potName, 0, 1024);
# 192 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
   memset(cmd.potType, 0, 1024);
# 193 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
   strcpy(cmd.potDir, "pots");
# 194 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
   strcpy(cmd.potName, "\0");
# 195 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
   strcpy(cmd.potType, "funcfl");
# 196 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
   cmd.doeam = 0;
# 197 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
   cmd.nx = 20;
# 198 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
   cmd.ny = 20;
# 199 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
   cmd.nz = 20;
# 200 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
   cmd.xproc = 1;
# 201 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
   cmd.yproc = 1;
# 202 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
   cmd.zproc = 1;
# 203 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
   cmd.nSteps = 100;
# 204 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
   cmd.printRate = 10;
# 205 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
   cmd.dt = 1.0;
# 206 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
   cmd.lat = -1.0;
# 207 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
   cmd.temperature = 600.0;
# 208 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
   cmd.initialDelta = 0.0;
# 209 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
# 210 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
      help = (0) ;
# 211 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
# 212 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
    call_lbl_7: ({ calling((void*)addArg, 7, ____alias_loc_id_0, 0UL, 7, (size_t)(6351733837270304336UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(6351733837270304104UL), (size_t)(0UL), (size_t)(6351733837270304340UL)); (addArg)("help", 'h', 0, 'i', &(help), 0, "print this message"); }) ;
# 213 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
    call_lbl_8: ({ calling((void*)addArg, 8, 0, 0UL, 7, (size_t)(6351733837270304338UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(6351733837270304242UL), (size_t)(0UL), (size_t)(6351733837270304342UL)); (addArg)("potDir", 'd', 1, 's', cmd.potDir, sizeof (cmd.potDir), "potential directory"); }) ;
# 214 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
    call_lbl_9: ({ calling((void*)addArg, 9, 0, 0UL, 7, (size_t)(6351733837270304343UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(6351733837270304242UL), (size_t)(0UL), (size_t)(6351733837270304344UL)); (addArg)("potName", 'p', 1, 's', cmd.potName, sizeof (cmd.potName), "potential name"); }) ;
# 215 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
    call_lbl_10: ({ calling((void*)addArg, 10, 0, 0UL, 7, (size_t)(6351733837270304343UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(6351733837270304242UL), (size_t)(0UL), (size_t)(6351733837270304346UL)); (addArg)("potType", 't', 1, 's', cmd.potType, sizeof (cmd.potType), "potential type (funcfl or setfl)"); }) ;
# 216 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
    call_lbl_11: ({ calling((void*)addArg, 11, 0, 0UL, 7, (size_t)(6351733837270304347UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(6351733837270304242UL), (size_t)(0UL), (size_t)(6351733837270304348UL)); (addArg)("doeam", 'e', 0, 'i', &(cmd.doeam), 0, "compute eam potentials"); }) ;
# 217 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
    call_lbl_12: ({ calling((void*)addArg, 12, 0, 0UL, 7, (size_t)(6351733837270304349UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(6351733837270304242UL), (size_t)(0UL), (size_t)(6351733837270304350UL)); (addArg)("nx", 'x', 1, 'i', &(cmd.nx), 0, "number of unit cells in x"); }) ;
# 218 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
    call_lbl_13: ({ calling((void*)addArg, 13, 0, 0UL, 7, (size_t)(6351733837270304349UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(6351733837270304242UL), (size_t)(0UL), (size_t)(6351733837270304350UL)); (addArg)("ny", 'y', 1, 'i', &(cmd.ny), 0, "number of unit cells in y"); }) ;
# 219 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
    call_lbl_14: ({ calling((void*)addArg, 14, 0, 0UL, 7, (size_t)(6351733837270304349UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(6351733837270304242UL), (size_t)(0UL), (size_t)(6351733837270304350UL)); (addArg)("nz", 'z', 1, 'i', &(cmd.nz), 0, "number of unit cells in z"); }) ;
# 220 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
    call_lbl_15: ({ calling((void*)addArg, 15, 0, 0UL, 7, (size_t)(6351733837270304347UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(6351733837270304242UL), (size_t)(0UL), (size_t)(6351733837270304350UL)); (addArg)("xproc", 'i', 1, 'i', &(cmd.xproc), 0, "processors in x direction"); }) ;
# 221 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
    call_lbl_16: ({ calling((void*)addArg, 16, 0, 0UL, 7, (size_t)(6351733837270304347UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(6351733837270304242UL), (size_t)(0UL), (size_t)(6351733837270304350UL)); (addArg)("yproc", 'j', 1, 'i', &(cmd.yproc), 0, "processors in y direction"); }) ;
# 222 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
    call_lbl_17: ({ calling((void*)addArg, 17, 0, 0UL, 7, (size_t)(6351733837270304347UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(6351733837270304242UL), (size_t)(0UL), (size_t)(6351733837270304350UL)); (addArg)("zproc", 'k', 1, 'i', &(cmd.zproc), 0, "processors in z direction"); }) ;
# 223 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
    call_lbl_18: ({ calling((void*)addArg, 18, 0, 0UL, 7, (size_t)(6351733837270304338UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(6351733837270304242UL), (size_t)(0UL), (size_t)(6351733837270304362UL)); (addArg)("nSteps", 'N', 1, 'i', &(cmd.nSteps), 0, "number of time steps"); }) ;
# 224 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
    call_lbl_19: ({ calling((void*)addArg, 19, 0, 0UL, 7, (size_t)(6351733837270304363UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(6351733837270304242UL), (size_t)(0UL), (size_t)(6351733837270304364UL)); (addArg)("printRate", 'n', 1, 'i', &(cmd.printRate), 0, "number of steps between output"); }) ;
# 225 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
    call_lbl_20: ({ calling((void*)addArg, 20, 0, 0UL, 7, (size_t)(6351733837270304349UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(6351733837270304242UL), (size_t)(0UL), (size_t)(6351733837270304366UL)); (addArg)("dt", 'D', 1, 'd', &(cmd.dt), 0, "time step (in fs)"); }) ;
# 226 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
    call_lbl_21: ({ calling((void*)addArg, 21, 0, 0UL, 7, (size_t)(6351733837270304367UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(6351733837270304242UL), (size_t)(0UL), (size_t)(6351733837270304368UL)); (addArg)("lat", 'l', 1, 'd', &(cmd.lat), 0, "lattice parameter (Angstroms)"); }) ;
# 227 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
    call_lbl_22: ({ calling((void*)addArg, 22, 0, 0UL, 7, (size_t)(6351733837270304336UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(6351733837270304242UL), (size_t)(0UL), (size_t)(6351733837270304370UL)); (addArg)("temp", 'T', 1, 'd', &(cmd.temperature), 0, "initial temperature (K)"); }) ;
# 228 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
    call_lbl_23: ({ calling((void*)addArg, 23, 0, 0UL, 7, (size_t)(6351733837270304347UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(6351733837270304242UL), (size_t)(0UL), (size_t)(6351733837270304350UL)); (addArg)("delta", 'r', 1, 'd', &(cmd.initialDelta), 0, "initial delta (Angstroms)"); }) ;
# 229 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
# 230 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
    call_lbl_24: ({ calling((void*)processArgs, 24, 0, 0UL, 2, (size_t)(0UL), (size_t)(6351733837270304244UL)); (processArgs)(argc, argv); }) ;
# 231 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
# 232 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
# 233 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
   if (strlen(cmd.potName) == 0)
# 234 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
   {
# 235 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
      if (strcmp(cmd.potType, "setfl") == 0) {strcpy(cmd.potName, "Cu01.eam.alloy"); };
# 237 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
      if (strcmp(cmd.potType, "funcfl") == 0) {strcpy(cmd.potName, "Cu_u6.eam"); };
# 239 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
   }
# 240 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
# 241 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
   if (help)
# 242 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
   {
# 243 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
       call_lbl_30: ({ calling((void*)printArgs, 30, ____alias_loc_id_1, 0UL, 0); (printArgs)(); }) ;
# 244 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
       call_lbl_31: ({ calling((void*)freeArgs, 31, 0, 0UL, 0); (freeArgs)(); }) ;
# 245 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
      exit(2);
# 246 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
   }
# 247 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
    call_lbl_33: ({ calling((void*)freeArgs, 33, ____alias_loc_id_2, 0UL, 0); (freeArgs)(); }) ;
# 248 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
# 249 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
   rm_stack(false, 0UL, "parseCommandLine", &____must_manage_parseCommandLine, 0, ____chimes_did_disable0); return cmd;
# 250 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
}

Command parseCommandLine(int argc, char** argv) { return (____chimes_replaying ? parseCommandLine_resumable(argc, argv) : parseCommandLine_quick(argc, argv)); }

void printCmdYaml_quick(FILE* file, Command* cmd)
# 253 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
{const int ____chimes_did_disable1 = new_stack((void *)(&printCmdYaml), "printCmdYaml", &____must_manage_printCmdYaml, 2, 2, (size_t)(6351733837270304331UL), (size_t)(6351733837270304332UL), "printCmdYaml|file|0", &____must_checkpoint_printCmdYaml_file_0, "%struct.__sFILE*", (void *)(&file), (size_t)8, 1, 0, 0, "printCmdYaml|cmd|0", &____must_checkpoint_printCmdYaml_cmd_0, "%struct.CommandSt*", (void *)(&cmd), (size_t)8, 1, 0, 0) ; ; ;
# 254 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
   alias_group_changed(____alias_loc_id_3); call_lbl_2: if (! ({ calling((void*)printRank, 2, ____alias_loc_id_3, 0UL, 0); (printRank)(); }) ) {rm_stack(false, 0UL, "printCmdYaml", &____must_manage_printCmdYaml, 0, ____chimes_did_disable1); return;; };
# 256 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
   fprintf(file,
# 257 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
           "Command Line Parameters:\n"
# 258 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
           "  doeam: %d\n"
# 259 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
           "  potDir: %s\n"
# 260 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
           "  potName: %s\n"
# 261 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
           "  potType: %s\n"
# 262 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
           "  nx: %d\n"
# 263 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
           "  ny: %d\n"
# 264 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
           "  nz: %d\n"
# 265 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
           "  xproc: %d\n"
# 266 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
           "  yproc: %d\n"
# 267 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
           "  zproc: %d\n"
# 268 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
           "  Lattice constant: %g Angstroms\n"
# 269 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
           "  nSteps: %d\n"
# 270 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
           "  printRate: %d\n"
# 271 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
           "  Time step: %g fs\n"
# 272 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
           "  Initial Temperature: %g K\n"
# 273 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
           "  Initial Delta: %g Angstroms\n"
# 274 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
           "\n",
# 275 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
           cmd->doeam,
# 276 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
           cmd->potDir,
# 277 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
           cmd->potName,
# 278 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
           cmd->potType,
# 279 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
           cmd->nx, cmd->ny, cmd->nz,
# 280 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
           cmd->xproc, cmd->yproc, cmd->zproc,
# 281 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
           cmd->lat,
# 282 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
           cmd->nSteps,
# 283 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
           cmd->printRate,
# 284 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
           cmd->dt,
# 285 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
           cmd->temperature,
# 286 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
           cmd->initialDelta
# 287 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
   );
# 288 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
   fflush(file);
# 289 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
rm_stack(false, 0UL, "printCmdYaml", &____must_manage_printCmdYaml, 0, ____chimes_did_disable1); }

void printCmdYaml(FILE* file, Command* cmd) { (____chimes_replaying ? printCmdYaml_resumable(file, cmd) : printCmdYaml_quick(file, cmd)); }



Command parseCommandLine_npm(int argc, char** argv)
# 187 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
{
# 188 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
   Command cmd;
# 189 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
# 190 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
   memset(cmd.potDir, 0, 1024);
# 191 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
   memset(cmd.potName, 0, 1024);
# 192 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
   memset(cmd.potType, 0, 1024);
# 193 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
   strcpy(cmd.potDir, "pots");
# 194 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
   strcpy(cmd.potName, "\0");
# 195 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
   strcpy(cmd.potType, "funcfl");
# 196 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
   cmd.doeam = 0;
# 197 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
   cmd.nx = 20;
# 198 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
   cmd.ny = 20;
# 199 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
   cmd.nz = 20;
# 200 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
   cmd.xproc = 1;
# 201 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
   cmd.yproc = 1;
# 202 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
   cmd.zproc = 1;
# 203 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
   cmd.nSteps = 100;
# 204 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
   cmd.printRate = 10;
# 205 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
   cmd.dt = 1.0;
# 206 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
   cmd.lat = -1.0;
# 207 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
   cmd.temperature = 600.0;
# 208 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
   cmd.initialDelta = 0.0;
# 209 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
# 210 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
   int help=0;
# 211 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
# 212 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
   (*____chimes_extern_func_addArg)("help", 'h', 0, 'i', &(help), 0, "print this message");
# 213 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
   (*____chimes_extern_func_addArg)("potDir", 'd', 1, 's', cmd.potDir, sizeof(cmd.potDir), "potential directory");
# 214 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
   (*____chimes_extern_func_addArg)("potName", 'p', 1, 's', cmd.potName, sizeof(cmd.potName), "potential name");
# 215 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
   (*____chimes_extern_func_addArg)("potType", 't', 1, 's', cmd.potType, sizeof(cmd.potType), "potential type (funcfl or setfl)");
# 216 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
   (*____chimes_extern_func_addArg)("doeam", 'e', 0, 'i', &(cmd.doeam), 0, "compute eam potentials");
# 217 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
   (*____chimes_extern_func_addArg)("nx", 'x', 1, 'i', &(cmd.nx), 0, "number of unit cells in x");
# 218 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
   (*____chimes_extern_func_addArg)("ny", 'y', 1, 'i', &(cmd.ny), 0, "number of unit cells in y");
# 219 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
   (*____chimes_extern_func_addArg)("nz", 'z', 1, 'i', &(cmd.nz), 0, "number of unit cells in z");
# 220 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
   (*____chimes_extern_func_addArg)("xproc", 'i', 1, 'i', &(cmd.xproc), 0, "processors in x direction");
# 221 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
   (*____chimes_extern_func_addArg)("yproc", 'j', 1, 'i', &(cmd.yproc), 0, "processors in y direction");
# 222 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
   (*____chimes_extern_func_addArg)("zproc", 'k', 1, 'i', &(cmd.zproc), 0, "processors in z direction");
# 223 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
   (*____chimes_extern_func_addArg)("nSteps", 'N', 1, 'i', &(cmd.nSteps), 0, "number of time steps");
# 224 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
   (*____chimes_extern_func_addArg)("printRate", 'n', 1, 'i', &(cmd.printRate), 0, "number of steps between output");
# 225 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
   (*____chimes_extern_func_addArg)("dt", 'D', 1, 'd', &(cmd.dt), 0, "time step (in fs)");
# 226 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
   (*____chimes_extern_func_addArg)("lat", 'l', 1, 'd', &(cmd.lat), 0, "lattice parameter (Angstroms)");
# 227 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
   (*____chimes_extern_func_addArg)("temp", 'T', 1, 'd', &(cmd.temperature), 0, "initial temperature (K)");
# 228 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
   (*____chimes_extern_func_addArg)("delta", 'r', 1, 'd', &(cmd.initialDelta), 0, "initial delta (Angstroms)");
# 229 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
# 230 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
   (*____chimes_extern_func_processArgs)(argc, argv);
# 231 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
# 232 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
# 233 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
   if (strlen(cmd.potName) == 0)
# 234 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
   {
# 235 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
      if (strcmp(cmd.potType, "setfl") == 0) {strcpy(cmd.potName, "Cu01.eam.alloy"); };
# 237 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
      if (strcmp(cmd.potType, "funcfl") == 0) {strcpy(cmd.potName, "Cu_u6.eam"); };
# 239 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
   }
# 240 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
# 241 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
   if (help)
# 242 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
   {
# 243 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
      (*____chimes_extern_func_printArgs)();
# 244 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
      (*____chimes_extern_func_freeArgs)();
# 245 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
      exit(2);
# 246 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
   }
# 247 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
   (*____chimes_extern_func_freeArgs)();
# 248 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
# 249 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
   return cmd;
# 250 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
}

void printCmdYaml_npm(FILE* file, Command* cmd)
# 253 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
{
# 254 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
   if (!(*____chimes_extern_func_printRank)()) {return;; };
# 256 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
   fprintf(file,
# 257 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
           "Command Line Parameters:\n"
# 258 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
           "  doeam: %d\n"
# 259 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
           "  potDir: %s\n"
# 260 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
           "  potName: %s\n"
# 261 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
           "  potType: %s\n"
# 262 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
           "  nx: %d\n"
# 263 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
           "  ny: %d\n"
# 264 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
           "  nz: %d\n"
# 265 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
           "  xproc: %d\n"
# 266 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
           "  yproc: %d\n"
# 267 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
           "  zproc: %d\n"
# 268 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
           "  Lattice constant: %g Angstroms\n"
# 269 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
           "  nSteps: %d\n"
# 270 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
           "  printRate: %d\n"
# 271 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
           "  Time step: %g fs\n"
# 272 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
           "  Initial Temperature: %g K\n"
# 273 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
           "  Initial Delta: %g Angstroms\n"
# 274 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
           "\n",
# 275 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
           cmd->doeam,
# 276 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
           cmd->potDir,
# 277 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
           cmd->potName,
# 278 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
           cmd->potType,
# 279 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
           cmd->nx, cmd->ny, cmd->nz,
# 280 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
           cmd->xproc, cmd->yproc, cmd->zproc,
# 281 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
           cmd->lat,
# 282 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
           cmd->nSteps,
# 283 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
           cmd->printRate,
# 284 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
           cmd->dt,
# 285 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
           cmd->temperature,
# 286 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
           cmd->initialDelta
# 287 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
   );
# 288 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
   fflush(file);
# 289 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.c"
}





static int module_init() {
    init_module(6351733837270304101UL, 3, 2, 5, 4, 2, 5, 7, 0, 0, 4,
                           &____alias_loc_id_0, (unsigned)4, (unsigned)1, (6351733837270304101UL + 1UL), (6351733837270304101UL + 2UL), (6351733837270304101UL + 3UL), (6351733837270304101UL + 141UL), "addArg", (unsigned)3, (6351733837270304101UL + 3UL), (6351733837270304101UL + 235UL), (6351733837270304101UL + 239UL),
                           &____alias_loc_id_1, (unsigned)1, (unsigned)2, (6351733837270304101UL + 141UL), "addArg", (unsigned)18, (6351733837270304101UL + 141UL), (6351733837270304101UL + 235UL), (6351733837270304101UL + 237UL), (6351733837270304101UL + 241UL), (6351733837270304101UL + 242UL), (6351733837270304101UL + 243UL), (6351733837270304101UL + 245UL), (6351733837270304101UL + 246UL), (6351733837270304101UL + 247UL), (6351733837270304101UL + 248UL), (6351733837270304101UL + 249UL), (6351733837270304101UL + 261UL), (6351733837270304101UL + 262UL), (6351733837270304101UL + 263UL), (6351733837270304101UL + 265UL), (6351733837270304101UL + 266UL), (6351733837270304101UL + 267UL), (6351733837270304101UL + 269UL), "processArgs", (unsigned)1, (6351733837270304101UL + 143UL),
                           &____alias_loc_id_2, (unsigned)1, (unsigned)2, (6351733837270304101UL + 141UL), "addArg", (unsigned)18, (6351733837270304101UL + 141UL), (6351733837270304101UL + 235UL), (6351733837270304101UL + 237UL), (6351733837270304101UL + 241UL), (6351733837270304101UL + 242UL), (6351733837270304101UL + 243UL), (6351733837270304101UL + 245UL), (6351733837270304101UL + 246UL), (6351733837270304101UL + 247UL), (6351733837270304101UL + 248UL), (6351733837270304101UL + 249UL), (6351733837270304101UL + 261UL), (6351733837270304101UL + 262UL), (6351733837270304101UL + 263UL), (6351733837270304101UL + 265UL), (6351733837270304101UL + 266UL), (6351733837270304101UL + 267UL), (6351733837270304101UL + 269UL), "processArgs", (unsigned)1, (6351733837270304101UL + 143UL),
                           &____alias_loc_id_3, (unsigned)2, (unsigned)0, (6351733837270304101UL + 166UL), (6351733837270304101UL + 167UL),
                            "parseCommandLine", (void *)(&parseCommandLine_npm), (void *)__null, 3, &____alias_loc_id_0, &____alias_loc_id_1, &____alias_loc_id_2, 3, (6351733837270304101UL + 141UL), 0UL, (6351733837270304101UL + 143UL), 0UL, 33, "memset", 3, (6351733837270304101UL + 141UL), 0UL, 0UL, 0UL, "memset", 3, (6351733837270304101UL + 141UL), 0UL, 0UL, 0UL, "memset", 3, (6351733837270304101UL + 141UL), 0UL, 0UL, 0UL, "strcpy", 2, (6351733837270304101UL + 141UL), (6351733837270304101UL + 235UL), (6351733837270304101UL + 20UL), "strcpy", 2, (6351733837270304101UL + 141UL), (6351733837270304101UL + 236UL), (6351733837270304101UL + 23UL), "strcpy", 2, (6351733837270304101UL + 141UL), (6351733837270304101UL + 237UL), (6351733837270304101UL + 26UL), "addArg", 7, (6351733837270304101UL + 235UL), 0UL, 0UL, 0UL, (6351733837270304101UL + 3UL), 0UL, (6351733837270304101UL + 239UL), 0UL, "addArg", 7, (6351733837270304101UL + 237UL), 0UL, 0UL, 0UL, (6351733837270304101UL + 141UL), 0UL, (6351733837270304101UL + 241UL), 0UL, "addArg", 7, (6351733837270304101UL + 242UL), 0UL, 0UL, 0UL, (6351733837270304101UL + 141UL), 0UL, (6351733837270304101UL + 243UL), 0UL, "addArg", 7, (6351733837270304101UL + 242UL), 0UL, 0UL, 0UL, (6351733837270304101UL + 141UL), 0UL, (6351733837270304101UL + 245UL), 0UL, "addArg", 7, (6351733837270304101UL + 246UL), 0UL, 0UL, 0UL, (6351733837270304101UL + 141UL), 0UL, (6351733837270304101UL + 247UL), 0UL, "addArg", 7, (6351733837270304101UL + 248UL), 0UL, 0UL, 0UL, (6351733837270304101UL + 141UL), 0UL, (6351733837270304101UL + 249UL), 0UL, "addArg", 7, (6351733837270304101UL + 248UL), 0UL, 0UL, 0UL, (6351733837270304101UL + 141UL), 0UL, (6351733837270304101UL + 249UL), 0UL, "addArg", 7, (6351733837270304101UL + 248UL), 0UL, 0UL, 0UL, (6351733837270304101UL + 141UL), 0UL, (6351733837270304101UL + 249UL), 0UL, "addArg", 7, (6351733837270304101UL + 246UL), 0UL, 0UL, 0UL, (6351733837270304101UL + 141UL), 0UL, (6351733837270304101UL + 249UL), 0UL, "addArg", 7, (6351733837270304101UL + 246UL), 0UL, 0UL, 0UL, (6351733837270304101UL + 141UL), 0UL, (6351733837270304101UL + 249UL), 0UL, "addArg", 7, (6351733837270304101UL + 246UL), 0UL, 0UL, 0UL, (6351733837270304101UL + 141UL), 0UL, (6351733837270304101UL + 249UL), 0UL, "addArg", 7, (6351733837270304101UL + 237UL), 0UL, 0UL, 0UL, (6351733837270304101UL + 141UL), 0UL, (6351733837270304101UL + 261UL), 0UL, "addArg", 7, (6351733837270304101UL + 262UL), 0UL, 0UL, 0UL, (6351733837270304101UL + 141UL), 0UL, (6351733837270304101UL + 263UL), 0UL, "addArg", 7, (6351733837270304101UL + 248UL), 0UL, 0UL, 0UL, (6351733837270304101UL + 141UL), 0UL, (6351733837270304101UL + 265UL), 0UL, "addArg", 7, (6351733837270304101UL + 266UL), 0UL, 0UL, 0UL, (6351733837270304101UL + 141UL), 0UL, (6351733837270304101UL + 267UL), 0UL, "addArg", 7, (6351733837270304101UL + 235UL), 0UL, 0UL, 0UL, (6351733837270304101UL + 141UL), 0UL, (6351733837270304101UL + 269UL), 0UL, "addArg", 7, (6351733837270304101UL + 246UL), 0UL, 0UL, 0UL, (6351733837270304101UL + 141UL), 0UL, (6351733837270304101UL + 249UL), 0UL, "processArgs", 2, 0UL, (6351733837270304101UL + 143UL), 0UL, "strlen", 1, (6351733837270304101UL + 141UL), 0UL, "strcmp", 2, (6351733837270304101UL + 141UL), (6351733837270304101UL + 246UL), 0UL, "strcpy", 2, (6351733837270304101UL + 141UL), (6351733837270304101UL + 243UL), (6351733837270304101UL + 120UL), "strcmp", 2, (6351733837270304101UL + 141UL), (6351733837270304101UL + 237UL), 0UL, "strcpy", 2, (6351733837270304101UL + 141UL), (6351733837270304101UL + 262UL), (6351733837270304101UL + 129UL), "printArgs", 0, 0UL, "freeArgs", 0, 0UL, "exit", 1, 0UL, 0UL, "freeArgs", 0, 0UL,
                            "printCmdYaml", (void *)(&printCmdYaml_npm), (void *)__null, 1, &____alias_loc_id_3, 2, (6351733837270304101UL + 230UL), (6351733837270304101UL + 231UL), 0UL, 3, "printRank", 0, 0UL, "fprintf", 18, (6351733837270304101UL + 230UL), (6351733837270304101UL + 275UL), 0UL, (6351733837270304101UL + 231UL), (6351733837270304101UL + 231UL), (6351733837270304101UL + 231UL), 0UL, 0UL, 0UL, 0UL, 0UL, 0UL, 0UL, 0UL, 0UL, 0UL, 0UL, 0UL, 0UL, "fflush", 1, (6351733837270304101UL + 230UL), 0UL,
                               "addArg", (void **)&(____chimes_extern_func_addArg),
                               "freeArgs", (void **)&(____chimes_extern_func_freeArgs),
                               "printArgs", (void **)&(____chimes_extern_func_printArgs),
                               "printRank", (void **)&(____chimes_extern_func_printRank),
                               "processArgs", (void **)&(____chimes_extern_func_processArgs),
                           "parseCommandLine", &(____chimes_does_checkpoint_parseCommandLine_npm),
                           "printCmdYaml", &(____chimes_does_checkpoint_printCmdYaml_npm),
                           "addArg", &(____chimes_does_checkpoint_addArg_npm),
                           "freeArgs", &(____chimes_does_checkpoint_freeArgs_npm),
                           "printArgs", &(____chimes_does_checkpoint_printArgs_npm),
                           "printRank", &(____chimes_does_checkpoint_printRank_npm),
                           "processArgs", &(____chimes_does_checkpoint_processArgs_npm),
                             (6351733837270304101UL + 166UL), (6351733837270304101UL + 230UL),
                             (6351733837270304101UL + 2UL), (6351733837270304101UL + 143UL),
                             (6351733837270304101UL + 167UL), (6351733837270304101UL + 231UL),
                     "CommandSt", 16, "[ 1024 x char ]", (int)__builtin_offsetof (struct CommandSt, potDir), "[ 1024 x char ]", (int)__builtin_offsetof (struct CommandSt, potName), "[ 1024 x char ]", (int)__builtin_offsetof (struct CommandSt, potType), "int", (int)__builtin_offsetof (struct CommandSt, doeam), "int", (int)__builtin_offsetof (struct CommandSt, nx), "int", (int)__builtin_offsetof (struct CommandSt, ny), "int", (int)__builtin_offsetof (struct CommandSt, nz), "int", (int)__builtin_offsetof (struct CommandSt, xproc), "int", (int)__builtin_offsetof (struct CommandSt, yproc), "int", (int)__builtin_offsetof (struct CommandSt, zproc), "int", (int)__builtin_offsetof (struct CommandSt, nSteps), "int", (int)__builtin_offsetof (struct CommandSt, printRate), "double", (int)__builtin_offsetof (struct CommandSt, dt), "double", (int)__builtin_offsetof (struct CommandSt, lat), "double", (int)__builtin_offsetof (struct CommandSt, temperature), "double", (int)__builtin_offsetof (struct CommandSt, initialDelta),
                     "__sFILE", 20, "unsigned char*", (int)__builtin_offsetof (struct __sFILE, _p), "int", (int)__builtin_offsetof (struct __sFILE, _r), "int", (int)__builtin_offsetof (struct __sFILE, _w), "short", (int)__builtin_offsetof (struct __sFILE, _flags), "short", (int)__builtin_offsetof (struct __sFILE, _file), "%struct.__sbuf", (int)__builtin_offsetof (struct __sFILE, _bf), "int", (int)__builtin_offsetof (struct __sFILE, _lbfsize), "void*", (int)__builtin_offsetof (struct __sFILE, _cookie), "*", (int)__builtin_offsetof (struct __sFILE, _close), "*", (int)__builtin_offsetof (struct __sFILE, _read), "*", (int)__builtin_offsetof (struct __sFILE, _seek), "*", (int)__builtin_offsetof (struct __sFILE, _write), "%struct.__sbuf", (int)__builtin_offsetof (struct __sFILE, _ub), "%struct.__sFILEX*", (int)__builtin_offsetof (struct __sFILE, _extra), "int", (int)__builtin_offsetof (struct __sFILE, _ur), "[ 3 x unsigned char ]", (int)__builtin_offsetof (struct __sFILE, _ubuf), "[ 1 x unsigned char ]", (int)__builtin_offsetof (struct __sFILE, _nbuf), "%struct.__sbuf", (int)__builtin_offsetof (struct __sFILE, _lb), "int", (int)__builtin_offsetof (struct __sFILE, _blksize), "long long int", (int)__builtin_offsetof (struct __sFILE, _offset),
                     "__sFILEX", 0,
                     "__sbuf", 2, "unsigned char*", (int)__builtin_offsetof (struct __sbuf, _base), "int", (int)__builtin_offsetof (struct __sbuf, _size),
                             "parseCommandLine", "_Z16parseCommandLineiPPc", 21, "addArg", "addArg", "addArg", "addArg", "addArg", "addArg", "addArg", "addArg", "addArg", "addArg", "addArg", "addArg", "addArg", "addArg", "addArg", "addArg", "addArg", "processArgs", "printArgs", "freeArgs", "freeArgs",
                             "printCmdYaml", "_Z12printCmdYamlP7__sFILEP9CommandSt", 1, "printRank",
                        "parseCommandLine|argc|0", 4, "processArgs", "printArgs", "freeArgs", "addArg",
                        "parseCommandLine|argv|0", 4, "processArgs", "printArgs", "freeArgs", "addArg",
                        "parseCommandLine|help|0", 1, "parseCommandLine",
                        "printCmdYaml|file|0", 1, "printRank",
                        "printCmdYaml|cmd|0", 1, "printRank");
    return 0;
}

static const int __libchimes_module_init = module_init();
