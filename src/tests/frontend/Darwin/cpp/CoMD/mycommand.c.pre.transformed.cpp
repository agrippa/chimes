# 1 "mycommand.c.pre.transformed.cpp"
# 1 "<built-in>" 1
# 1 "<built-in>" 3
# 175 "<built-in>" 3
# 1 "<command line>" 1

# 1 "/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/clang/6.0/include/stddef.h" 1 3 4
# 34 "/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/clang/6.0/include/stddef.h" 3 4
typedef long int ptrdiff_t;







typedef long unsigned int size_t;
# 3 "<command line>" 2
# 1 "<built-in>" 2
# 1 "mycommand.c.pre.transformed.cpp" 2
# 1 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
# 1 "<built-in>" 1
# 1 "<built-in>" 3
# 175 "<built-in>" 3
# 1 "<command line>" 1

# 1 "/Users/jmg3/num-debug/src/libchimes/libchimes.h" 1



# 1 "/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/clang/6.0/include/stddef.h" 1 3 4
# 34 "/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/clang/6.0/include/stddef.h" 3 4
typedef long int ptrdiff_t;







typedef long unsigned int size_t;
# 5 "/Users/jmg3/num-debug/src/libchimes/libchimes.h" 2

extern void init_chimes();
extern void calling(void *func_ptr, int lbl, size_t set_return_alias,
        unsigned naliases, ...);
extern int get_next_call();
extern void new_stack(void *func_ptr, unsigned n_local_arg_aliases,
        unsigned nargs, ...);
extern void init_module(size_t module_id, int n_contains_mappings, int nstructs,
        ...);
extern void rm_stack(bool has_return_alias, size_t returned_alias);
extern void register_stack_var(const char *mangled_name,
        const char *full_type, void *ptr, size_t size, int is_ptr,
        int is_struct, int n_ptr_fields, ...);
extern void register_global_var(const char *mangled_name, const char *full_type,
        void *ptr, size_t size, int is_ptr, int is_struct, int n_ptr_fields,
        ...);
extern int alias_group_changed(int ngroups, ...);
extern void *malloc_wrapper(size_t nbytes, size_t group, int is_ptr,
        int is_struct, ...);
extern void *calloc_wrapper(size_t num, size_t size, size_t group, int is_ptr,
        int is_struct, ...);
extern void *realloc_wrapper(void *ptr, size_t nbytes, size_t group);
extern void free_wrapper(void *ptr, size_t group);

extern unsigned entering_omp_parallel(unsigned lbl, unsigned nlocals, ...);
extern void register_thread_local_stack_vars(unsigned thread,
        unsigned parent, bool is_parallel_for, unsigned nlocals, ...);
extern void leaving_omp_parallel();

extern void chimes_error();
# 50 "/Users/jmg3/num-debug/src/libchimes/libchimes.h"
inline unsigned LIBCHIMES_THREAD_NUM() { return 0; }


extern int ____chimes_replaying;
# 3 "<command line>" 2
# 1 "<built-in>" 2
# 1 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c" 2
# 1 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
# 2 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
# 3 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"

# 1 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.h" 1






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
# 151 "/usr/include/Availability.h" 3 4
# 1 "/usr/include/AvailabilityInternal.h" 1 3 4
# 152 "/usr/include/Availability.h" 2 3 4
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



FILE *fopen(const char * , const char * ) __asm("_" "fopen");

int fprintf(FILE * , const char * , ...) __attribute__((__format__ (__printf__, 2, 3)));
int fputc(int, FILE *);
int fputs(const char * , FILE * ) __asm("_" "fputs") ;
size_t fread(void * , size_t, size_t, FILE * );
FILE *freopen(const char * , const char * ,
                 FILE * ) __asm("_" "freopen") ;
int fscanf(FILE * , const char * , ...) __attribute__((__format__ (__scanf__, 2, 3)));
int fseek(FILE *, long, int);
int fsetpos(FILE *, const fpos_t *);
long ftell(FILE *);
size_t fwrite(const void * , size_t, size_t, FILE * ) __asm("_" "fwrite") ;
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





FILE *fdopen(int, const char *) __asm("_" "fdopen");

int fileno(FILE *);
}
# 314 "/usr/include/stdio.h" 3 4
extern "C" {
int pclose(FILE *);



FILE *popen(const char *, const char *) __asm("_" "popen");

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

char *tempnam(const char *, const char *) __asm("_" "tempnam") ;
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
# 8 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.h" 2



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
# 5 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c" 2
# 5 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"

# 1 "/usr/include/string.h" 1 3 4
# 64 "/usr/include/string.h" 3 4
# 1 "/usr/include/sys/_types/_size_t.h" 1 3 4
# 65 "/usr/include/string.h" 2 3 4
# 1 "/usr/include/sys/_types/_null.h" 1 3 4
# 66 "/usr/include/string.h" 2 3 4



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
char *strerror(int) __asm("_" "strerror") ;
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
char *stpncpy(char *, const char *, size_t) __attribute__((availability(macosx,introduced=10.7)));
char *strndup(const char *, size_t) __attribute__((availability(macosx,introduced=10.7)));
size_t strnlen(const char *, size_t) __attribute__((availability(macosx,introduced=10.7)));
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
errno_t memset_s(void *, rsize_t, int, rsize_t) __attribute__((availability(macosx,introduced=10.9)));
}







extern "C" {
void *memmem(const void *, size_t, const void *, size_t) __attribute__((availability(macosx,introduced=10.7)));
void memset_pattern4(void *, const void *, size_t) __attribute__((availability(macosx,introduced=10.5)));
void memset_pattern8(void *, const void *, size_t) __attribute__((availability(macosx,introduced=10.5)));
void memset_pattern16(void *, const void *, size_t) __attribute__((availability(macosx,introduced=10.5)));

char *strcasestr(const char *, const char *);
char *strnstr(const char *, const char *, size_t);
size_t strlcat(char *, const char *, size_t);
size_t strlcpy(char *, const char *, size_t);
void strmode(int, char *);
char *strsep(char **, const char *);


void swab(const void * , void * , ssize_t);
}








# 1 "/usr/include/strings.h" 1 3 4
# 65 "/usr/include/strings.h" 3 4
# 1 "/usr/include/sys/_types/_size_t.h" 1 3 4
# 66 "/usr/include/strings.h" 2 3 4

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
int ffsl(long) __attribute__((availability(macosx,introduced=10.5)));
int ffsll(long long) __attribute__((availability(macosx,introduced=10.9)));
int fls(int) __attribute__((availability(macosx,introduced=10.5)));
int flsl(long) __attribute__((availability(macosx,introduced=10.5)));
int flsll(long long) __attribute__((availability(macosx,introduced=10.9)));
}



# 1 "/usr/include/string.h" 1 3 4
# 93 "/usr/include/strings.h" 2 3 4
# 177 "/usr/include/string.h" 2 3 4
# 7 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c" 2
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
# 1 "/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/clang/6.0/include/stdint.h" 1 3 4
# 64 "/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/clang/6.0/include/stdint.h" 3 4
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
# 65 "/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/clang/6.0/include/stdint.h" 2 3 4
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

int getrlimit(int, struct rlimit *) __asm("_" "getrlimit") ;
int getrusage(int, struct rusage *);
int setpriority(int, id_t, int);

int setiopolicy_np(int, int, int) __attribute__((availability(macosx,introduced=10.5)));

int setrlimit(int, const struct rlimit *) __asm("_" "setrlimit") ;
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
pid_t wait(int *) __asm("_" "wait") ;
pid_t waitpid(pid_t, int *, int) __asm("_" "waitpid") ;

int waitid(idtype_t, id_t, siginfo_t *, int) __asm("_" "waitid") ;


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
double strtod(const char *, char **) __asm("_" "strtod") ;
float strtof(const char *, char **) __asm("_" "strtof") ;
long strtol(const char *, char **, int);
long double
  strtold(const char *, char **);

long long
  strtoll(const char *, char **, int);

unsigned long
  strtoul(const char *, char **, int);

unsigned long long
  strtoull(const char *, char **, int);

int system(const char *) __asm("_" "system") __attribute__((availability(macosx,introduced=10.0)));
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
int putenv(char *) __asm("_" "putenv") ;
long random(void);
int rand_r(unsigned *);

char *realpath(const char * , char * ) __asm("_" "realpath" "$DARWIN_EXTSN");



unsigned short
 *seed48(unsigned short[3]);
int setenv(const char *, const char *, int) __asm("_" "setenv") ;

void setkey(const char *) __asm("_" "setkey") ;



char *setstate(const char *);
void srand48(long);

void srandom(unsigned);



int unlockpt(int);

int unsetenv(const char *) __asm("_" "unsetenv") ;








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
# 8 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c" 2
# 8 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"

# 1 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/cmdLineParser.h" 1
# 28 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/cmdLineParser.h"
int addArg(const char *longOption, const char shortOption,
           int has_arg, const char type, void *dataPtr, int dataSize,
           const char *help);


void processArgs(int argc, char **argv);


void printArgs(void);

void freeArgs(void);
# 10 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c" 2
# 1 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.h" 1






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
# 8 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/parallel.h" 2


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
# 11 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c" 2
# 186 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
# 186 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
Command parseCommandLine(int argc, char** argv)
# 187 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
{new_stack((void *)(&parseCommandLine), 3, 2, (size_t)(6238158647987170569UL), (size_t)(0UL), (size_t)(6238158647987170571UL), "parseCommandLine|argc|0", "i32", (void *)(&argc), (size_t)4, 0, 0, 0, "parseCommandLine|argv|0", "i8**", (void *)(&argv), (size_t)8, 1, 0, 0); if (____chimes_replaying) { goto lbl_0; }
# 188 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
 Command cmd; ;
# 189 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
# 190 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
 call_lbl_1: calling((void*)&memset, 1, 0UL, 3, (size_t)(6238158647987170569UL), (size_t)(0UL), (size_t)(0UL)); memset(cmd.potDir, 0, 1024);
# 191 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
 call_lbl_2: calling((void*)&memset, 2, 0UL, 3, (size_t)(6238158647987170569UL), (size_t)(0UL), (size_t)(0UL)); memset(cmd.potName, 0, 1024);
# 192 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
 call_lbl_3: calling((void*)&memset, 3, 0UL, 3, (size_t)(6238158647987170569UL), (size_t)(0UL), (size_t)(0UL)); memset(cmd.potType, 0, 1024);
# 193 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
 alias_group_changed(2, (size_t)(6238158647987170429UL), (size_t)(6238158647987170430UL)); call_lbl_5: calling((void*)&strcpy, 5, 6238158647987170448UL, 2, (size_t)(6238158647987170569UL), (size_t)(6238158647987170663UL)); strcpy(cmd.potDir, "pots");
# 194 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
 call_lbl_6: calling((void*)&strcpy, 6, 6238158647987170451UL, 2, (size_t)(6238158647987170569UL), (size_t)(6238158647987170664UL)); strcpy(cmd.potName, "\0");
# 195 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
 call_lbl_7: calling((void*)&strcpy, 7, 6238158647987170454UL, 2, (size_t)(6238158647987170569UL), (size_t)(6238158647987170665UL)); strcpy(cmd.potType, "funcfl");
# 196 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
 cmd.doeam = 0;
# 197 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
 cmd.nx = 20;
# 198 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
 cmd.ny = 20;
# 199 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
 cmd.nz = 20;
# 200 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
 cmd.xproc = 1;
# 201 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
 cmd.yproc = 1;
# 202 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
 cmd.zproc = 1;
# 203 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
 cmd.nSteps = 100;
# 204 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
 cmd.printRate = 10;
# 205 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
 cmd.dt = 1.0;
# 206 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
 cmd.lat = -1.0;
# 207 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
 cmd.temperature = 600.0;
# 208 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
 cmd.initialDelta = 0.0;
# 209 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
# 210 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
 lbl_0: int help; register_stack_var("parseCommandLine|help|0", "i32", (void *)(&help), (size_t)4, 0, 0, 0); if (____chimes_replaying) { switch(get_next_call()) { case(1): { goto call_lbl_1; } case(2): { goto call_lbl_2; } case(3): { goto call_lbl_3; } case(5): { goto call_lbl_5; } case(6): { goto call_lbl_6; } case(7): { goto call_lbl_7; } case(9): { goto call_lbl_9; } case(10): { goto call_lbl_10; } case(11): { goto call_lbl_11; } case(12): { goto call_lbl_12; } case(13): { goto call_lbl_13; } case(14): { goto call_lbl_14; } case(15): { goto call_lbl_15; } case(16): { goto call_lbl_16; } case(17): { goto call_lbl_17; } case(18): { goto call_lbl_18; } case(19): { goto call_lbl_19; } case(20): { goto call_lbl_20; } case(21): { goto call_lbl_21; } case(22): { goto call_lbl_22; } case(23): { goto call_lbl_23; } case(24): { goto call_lbl_24; } case(25): { goto call_lbl_25; } case(26): { goto call_lbl_26; } case(27): { goto call_lbl_27; } case(28): { goto call_lbl_28; } case(29): { goto call_lbl_29; } case(30): { goto call_lbl_30; } case(31): { goto call_lbl_31; } case(32): { goto call_lbl_32; } case(33): { goto call_lbl_33; } case(35): { goto call_lbl_35; } default: { chimes_error(); } } } help = (0) ;
# 211 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
# 212 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
 alias_group_changed(2, (size_t)(6238158647987170431UL), (size_t)(6238158647987170569UL)); call_lbl_9: calling((void*)&addArg, 9, 0UL, 7, (size_t)(6238158647987170663UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(6238158647987170431UL), (size_t)(0UL), (size_t)(6238158647987170667UL)); addArg("help", 'h', 0, 'i', &(help), 0, "print this message");
# 213 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
 call_lbl_10: calling((void*)&addArg, 10, 0UL, 7, (size_t)(6238158647987170665UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(6238158647987170569UL), (size_t)(0UL), (size_t)(6238158647987170669UL)); addArg("potDir", 'd', 1, 's', cmd.potDir, sizeof(cmd.potDir), "potential directory");
# 214 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
 call_lbl_11: calling((void*)&addArg, 11, 0UL, 7, (size_t)(6238158647987170670UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(6238158647987170569UL), (size_t)(0UL), (size_t)(6238158647987170671UL)); addArg("potName", 'p', 1, 's', cmd.potName, sizeof(cmd.potName), "potential name");
# 215 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
 call_lbl_12: calling((void*)&addArg, 12, 0UL, 7, (size_t)(6238158647987170670UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(6238158647987170569UL), (size_t)(0UL), (size_t)(6238158647987170673UL)); addArg("potType", 't', 1, 's', cmd.potType, sizeof(cmd.potType), "potential type (funcfl or setfl)");
# 216 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
 call_lbl_13: calling((void*)&addArg, 13, 0UL, 7, (size_t)(6238158647987170674UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(6238158647987170569UL), (size_t)(0UL), (size_t)(6238158647987170675UL)); addArg("doeam", 'e', 0, 'i', &(cmd.doeam), 0, "compute eam potentials");
# 217 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
 call_lbl_14: calling((void*)&addArg, 14, 0UL, 7, (size_t)(6238158647987170676UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(6238158647987170569UL), (size_t)(0UL), (size_t)(6238158647987170677UL)); addArg("nx", 'x', 1, 'i', &(cmd.nx), 0, "number of unit cells in x");
# 218 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
 call_lbl_15: calling((void*)&addArg, 15, 0UL, 7, (size_t)(6238158647987170676UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(6238158647987170569UL), (size_t)(0UL), (size_t)(6238158647987170677UL)); addArg("ny", 'y', 1, 'i', &(cmd.ny), 0, "number of unit cells in y");
# 219 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
 call_lbl_16: calling((void*)&addArg, 16, 0UL, 7, (size_t)(6238158647987170676UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(6238158647987170569UL), (size_t)(0UL), (size_t)(6238158647987170677UL)); addArg("nz", 'z', 1, 'i', &(cmd.nz), 0, "number of unit cells in z");
# 220 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
 call_lbl_17: calling((void*)&addArg, 17, 0UL, 7, (size_t)(6238158647987170674UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(6238158647987170569UL), (size_t)(0UL), (size_t)(6238158647987170677UL)); addArg("xproc", 'i', 1, 'i', &(cmd.xproc), 0, "processors in x direction");
# 221 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
 call_lbl_18: calling((void*)&addArg, 18, 0UL, 7, (size_t)(6238158647987170674UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(6238158647987170569UL), (size_t)(0UL), (size_t)(6238158647987170677UL)); addArg("yproc", 'j', 1, 'i', &(cmd.yproc), 0, "processors in y direction");
# 222 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
 call_lbl_19: calling((void*)&addArg, 19, 0UL, 7, (size_t)(6238158647987170674UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(6238158647987170569UL), (size_t)(0UL), (size_t)(6238158647987170677UL)); addArg("zproc", 'k', 1, 'i', &(cmd.zproc), 0, "processors in z direction");
# 223 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
 call_lbl_20: calling((void*)&addArg, 20, 0UL, 7, (size_t)(6238158647987170665UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(6238158647987170569UL), (size_t)(0UL), (size_t)(6238158647987170689UL)); addArg("nSteps", 'N', 1, 'i', &(cmd.nSteps), 0, "number of time steps");
# 224 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
 call_lbl_21: calling((void*)&addArg, 21, 0UL, 7, (size_t)(6238158647987170690UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(6238158647987170569UL), (size_t)(0UL), (size_t)(6238158647987170691UL)); addArg("printRate", 'n', 1, 'i', &(cmd.printRate), 0, "number of steps between output");
# 225 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
 call_lbl_22: calling((void*)&addArg, 22, 0UL, 7, (size_t)(6238158647987170676UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(6238158647987170569UL), (size_t)(0UL), (size_t)(6238158647987170693UL)); addArg("dt", 'D', 1, 'd', &(cmd.dt), 0, "time step (in fs)");
# 226 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
 call_lbl_23: calling((void*)&addArg, 23, 0UL, 7, (size_t)(6238158647987170694UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(6238158647987170569UL), (size_t)(0UL), (size_t)(6238158647987170695UL)); addArg("lat", 'l', 1, 'd', &(cmd.lat), 0, "lattice parameter (Angstroms)");
# 227 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
 call_lbl_24: calling((void*)&addArg, 24, 0UL, 7, (size_t)(6238158647987170663UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(6238158647987170569UL), (size_t)(0UL), (size_t)(6238158647987170697UL)); addArg("temp", 'T', 1, 'd', &(cmd.temperature), 0, "initial temperature (K)");
# 228 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
 call_lbl_25: calling((void*)&addArg, 25, 0UL, 7, (size_t)(6238158647987170674UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(6238158647987170569UL), (size_t)(0UL), (size_t)(6238158647987170677UL)); addArg("delta", 'r', 1, 'd', &(cmd.initialDelta), 0, "initial delta (Angstroms)");
# 229 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
# 230 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
 call_lbl_26: calling((void*)&processArgs, 26, 0UL, 2, (size_t)(0UL), (size_t)(6238158647987170571UL)); processArgs(argc,argv);
# 231 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
# 232 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
# 233 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
 call_lbl_27: calling((void*)&strlen, 27, 0UL, 1, (size_t)(6238158647987170569UL)); if (strlen(cmd.potName) == 0)
# 234 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
 {
# 235 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
 call_lbl_28: calling((void*)&strcmp, 28, 0UL, 2, (size_t)(6238158647987170569UL), (size_t)(6238158647987170674UL)); if (strcmp(cmd.potType, "setfl") == 0) { call_lbl_29: calling((void*)&strcpy, 29, 6238158647987170548UL, 2, (size_t)(6238158647987170569UL), (size_t)(6238158647987170671UL)); strcpy(cmd.potName, "Cu01.eam.alloy"); };
# 237 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
 call_lbl_30: calling((void*)&strcmp, 30, 0UL, 2, (size_t)(6238158647987170569UL), (size_t)(6238158647987170665UL)); if (strcmp(cmd.potType, "funcfl") == 0) { call_lbl_31: calling((void*)&strcpy, 31, 6238158647987170557UL, 2, (size_t)(6238158647987170569UL), (size_t)(6238158647987170690UL)); strcpy(cmd.potName, "Cu_u6.eam"); };
# 239 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
 }
# 240 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
# 241 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
 if (help)
# 242 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
 {
# 243 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
 call_lbl_32: calling((void*)&printArgs, 32, 0UL, 0); printArgs();
# 244 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
 call_lbl_33: calling((void*)&freeArgs, 33, 0UL, 0); freeArgs();
# 245 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
 exit(2);
# 246 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
 }
# 247 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
 call_lbl_35: calling((void*)&freeArgs, 35, 0UL, 0); freeArgs();
# 248 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
# 249 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
 rm_stack(false, 0UL); return cmd;
# 250 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
}
# 251 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
# 252 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
void printCmdYaml(FILE* file, Command* cmd)
# 253 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
{new_stack((void *)(&printCmdYaml), 2, 2, (size_t)(6238158647987170658UL), (size_t)(6238158647987170659UL), "printCmdYaml|file|0", "%struct.__sFILE*", (void *)(&file), (size_t)8, 1, 0, 0, "printCmdYaml|cmd|0", "%struct.CommandSt*", (void *)(&cmd), (size_t)8, 1, 0, 0); if (____chimes_replaying) { switch(get_next_call()) { case(2): { goto call_lbl_2; } case(5): { goto call_lbl_5; } default: { chimes_error(); } } }
# 254 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
 alias_group_changed(2, (size_t)(6238158647987170594UL), (size_t)(6238158647987170595UL)); call_lbl_2: calling((void*)&printRank, 2, 0UL, 0); if (!printRank()) {rm_stack(false, 0UL); return;; };
# 256 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
 fprintf(file,
# 257 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
 "Command Line Parameters:\n"
# 258 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
 "  doeam: %d\n"
# 259 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
 "  potDir: %s\n"
# 260 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
 "  potName: %s\n"
# 261 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
 "  potType: %s\n"
# 262 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
 "  nx: %d\n"
# 263 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
 "  ny: %d\n"
# 264 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
 "  nz: %d\n"
# 265 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
 "  xproc: %d\n"
# 266 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
 "  yproc: %d\n"
# 267 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
 "  zproc: %d\n"
# 268 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
 "  Lattice constant: %g Angstroms\n"
# 269 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
 "  nSteps: %d\n"
# 270 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
 "  printRate: %d\n"
# 271 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
 "  Time step: %g fs\n"
# 272 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
 "  Initial Temperature: %g K\n"
# 273 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
 "  Initial Delta: %g Angstroms\n"
# 274 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
 "\n",
# 275 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
 cmd->doeam,
# 276 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
 cmd->potDir,
# 277 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
 cmd->potName,
# 278 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
 cmd->potType,
# 279 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
 cmd->nx, cmd->ny, cmd->nz,
# 280 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
 cmd->xproc, cmd->yproc, cmd->zproc,
# 281 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
 cmd->lat,
# 282 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
 cmd->nSteps,
# 283 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
 cmd->printRate,
# 284 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
 cmd->dt,
# 285 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
 cmd->temperature,
# 286 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
 cmd->initialDelta
# 287 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
 );
# 288 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
 call_lbl_5: calling((void*)&fflush, 5, 0UL, 1, (size_t)(6238158647987170658UL)); fflush(file);
# 289 "/Users/jmg3/num-debug/src/examples/cpp/CoMD/src-mpi/mycommand.c"
rm_stack(false, 0UL); }


static int module_init() {
    init_module(6238158647987170428UL, 3, 4, 6238158647987170428UL + 166UL, 6238158647987170428UL + 230UL, 6238158647987170428UL + 2UL, 6238158647987170428UL + 143UL, 6238158647987170428UL + 167UL, 6238158647987170428UL + 231UL, "CommandSt", 16, (int)__builtin_offsetof(struct CommandSt, potDir), (int)__builtin_offsetof(struct CommandSt, potName), (int)__builtin_offsetof(struct CommandSt, potType), (int)__builtin_offsetof(struct CommandSt, doeam), (int)__builtin_offsetof(struct CommandSt, nx), (int)__builtin_offsetof(struct CommandSt, ny), (int)__builtin_offsetof(struct CommandSt, nz), (int)__builtin_offsetof(struct CommandSt, xproc), (int)__builtin_offsetof(struct CommandSt, yproc), (int)__builtin_offsetof(struct CommandSt, zproc), (int)__builtin_offsetof(struct CommandSt, nSteps), (int)__builtin_offsetof(struct CommandSt, printRate), (int)__builtin_offsetof(struct CommandSt, dt), (int)__builtin_offsetof(struct CommandSt, lat), (int)__builtin_offsetof(struct CommandSt, temperature), (int)__builtin_offsetof(struct CommandSt, initialDelta), "__sFILE", 20, (int)__builtin_offsetof(struct __sFILE, _p), (int)__builtin_offsetof(struct __sFILE, _r), (int)__builtin_offsetof(struct __sFILE, _w), (int)__builtin_offsetof(struct __sFILE, _flags), (int)__builtin_offsetof(struct __sFILE, _file), (int)__builtin_offsetof(struct __sFILE, _bf), (int)__builtin_offsetof(struct __sFILE, _lbfsize), (int)__builtin_offsetof(struct __sFILE, _cookie), (int)__builtin_offsetof(struct __sFILE, _close), (int)__builtin_offsetof(struct __sFILE, _read), (int)__builtin_offsetof(struct __sFILE, _seek), (int)__builtin_offsetof(struct __sFILE, _write), (int)__builtin_offsetof(struct __sFILE, _ub), (int)__builtin_offsetof(struct __sFILE, _extra), (int)__builtin_offsetof(struct __sFILE, _ur), (int)__builtin_offsetof(struct __sFILE, _ubuf), (int)__builtin_offsetof(struct __sFILE, _nbuf), (int)__builtin_offsetof(struct __sFILE, _lb), (int)__builtin_offsetof(struct __sFILE, _blksize), (int)__builtin_offsetof(struct __sFILE, _offset), "__sFILEX", 0, "__sbuf", 2, (int)__builtin_offsetof(struct __sbuf, _base), (int)__builtin_offsetof(struct __sbuf, _size));
    return 0;
}

static int __libchimes_module_init = module_init();