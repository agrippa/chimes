# 1 "brg_sha1.c.pre.transformed.cpp"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/local/lib/gcc/x86_64-apple-darwin14.0.0/4.9.2/include/stddef.h" 1 3 4
# 147 "/usr/local/lib/gcc/x86_64-apple-darwin14.0.0/4.9.2/include/stddef.h" 3 4
typedef long int ptrdiff_t;
# 212 "/usr/local/lib/gcc/x86_64-apple-darwin14.0.0/4.9.2/include/stddef.h" 3 4
typedef long unsigned int size_t;
# 1 "<command-line>" 2
# 1 "brg_sha1.c.pre.transformed.cpp"
# 1 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
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
extern void init_module(size_t module_id, int n_contains_mappings, int nstructs,
        ...);
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
        unsigned parent, bool is_parallel_for, bool is_critical,
        unsigned parent_stack_depth, size_t region_id, unsigned nlocals, ...);
extern void leaving_omp_parallel(int expected_parent_stack_depth,
        size_t region_id);
extern unsigned get_parent_vars_stack_depth();
extern unsigned get_thread_stack_depth();

extern void chimes_error();
# 52 "/Users/jmg3/num-debug/src/libchimes/libchimes.h"
extern "C" {
extern int omp_get_thread_num (void) throw ();
}
inline unsigned LIBCHIMES_THREAD_NUM() { return omp_get_thread_num(); }





extern int ____chimes_replaying;
# 1 "<command-line>" 2
# 1 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
# 36 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
# 1 "/usr/include/string.h" 1 3 4
# 61 "/usr/include/string.h" 3 4
# 1 "/usr/include/_types.h" 1 3 4
# 27 "/usr/include/_types.h" 3 4
# 1 "/usr/include/sys/_types.h" 1 3 4
# 32 "/usr/include/sys/_types.h" 3 4
# 1 "/usr/include/sys/cdefs.h" 1 3 4
# 506 "/usr/include/sys/cdefs.h" 3 4
# 1 "/usr/include/sys/_symbol_aliasing.h" 1 3 4
# 507 "/usr/include/sys/cdefs.h" 2 3 4
# 572 "/usr/include/sys/cdefs.h" 3 4
# 1 "/usr/include/sys/_posix_availability.h" 1 3 4
# 573 "/usr/include/sys/cdefs.h" 2 3 4
# 33 "/usr/include/sys/_types.h" 2 3 4
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
# 62 "/usr/include/string.h" 2 3 4

# 1 "/usr/include/Availability.h" 1 3 4
# 153 "/usr/include/Availability.h" 3 4
# 1 "/usr/include/AvailabilityInternal.h" 1 3 4
# 154 "/usr/include/Availability.h" 2 3 4
# 64 "/usr/include/string.h" 2 3 4
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





# 1 "/usr/include/sys/_types/_ssize_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_ssize_t.h" 3 4
typedef __darwin_ssize_t ssize_t;
# 153 "/usr/include/string.h" 2 3 4

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
# 37 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c" 2
# 1 "/usr/include/stdio.h" 1 3 4
# 71 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/sys/_types/_va_list.h" 1 3 4
# 31 "/usr/include/sys/_types/_va_list.h" 3 4
typedef __darwin_va_list va_list;
# 72 "/usr/include/stdio.h" 2 3 4



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
# 438 "/usr/include/stdio.h" 3 4
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
# 38 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c" 2
# 38 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"

# 1 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.h" 1
# 36 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.h"
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
# 37 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.h" 2
# 1 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_types.h" 1
# 45 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_types.h"
# 1 "/usr/include/sys/types.h" 1 3 4
# 84 "/usr/include/sys/types.h" 3 4
typedef unsigned char u_char;
typedef unsigned short u_short;
typedef unsigned int u_int;

typedef unsigned long u_long;


typedef unsigned short ushort;
typedef unsigned int uint;


typedef u_int64_t u_quad_t;
typedef int64_t quad_t;
typedef quad_t * qaddr_t;

typedef char * caddr_t;
typedef int32_t daddr_t;



typedef u_int32_t fixpt_t;

# 1 "/usr/include/sys/_types/_blkcnt_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_blkcnt_t.h" 3 4
typedef __darwin_blkcnt_t blkcnt_t;
# 107 "/usr/include/sys/types.h" 2 3 4
# 1 "/usr/include/sys/_types/_blksize_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_blksize_t.h" 3 4
typedef __darwin_blksize_t blksize_t;
# 108 "/usr/include/sys/types.h" 2 3 4
# 1 "/usr/include/sys/_types/_gid_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_gid_t.h" 3 4
typedef __darwin_gid_t gid_t;
# 109 "/usr/include/sys/types.h" 2 3 4
# 1 "/usr/include/sys/_types/_in_addr_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_in_addr_t.h" 3 4
typedef __uint32_t in_addr_t;
# 110 "/usr/include/sys/types.h" 2 3 4
# 1 "/usr/include/sys/_types/_in_port_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_in_port_t.h" 3 4
typedef __uint16_t in_port_t;
# 111 "/usr/include/sys/types.h" 2 3 4
# 1 "/usr/include/sys/_types/_ino_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_ino_t.h" 3 4
typedef __darwin_ino_t ino_t;
# 112 "/usr/include/sys/types.h" 2 3 4


# 1 "/usr/include/sys/_types/_ino64_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_ino64_t.h" 3 4
typedef __darwin_ino64_t ino64_t;
# 115 "/usr/include/sys/types.h" 2 3 4


# 1 "/usr/include/sys/_types/_key_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_key_t.h" 3 4
typedef __int32_t key_t;
# 118 "/usr/include/sys/types.h" 2 3 4

# 1 "/usr/include/sys/_types/_nlink_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_nlink_t.h" 3 4
typedef __uint16_t nlink_t;
# 120 "/usr/include/sys/types.h" 2 3 4




typedef int32_t segsz_t;
typedef int32_t swblk_t;
# 137 "/usr/include/sys/types.h" 3 4
static inline __int32_t major(__uint32_t _x)
{
 return (__int32_t)(((__uint32_t)_x >> 24) & 0xff);
}

static inline __int32_t minor(__uint32_t _x)
{
 return (__int32_t)((_x) & 0xffffff);
}

static inline dev_t makedev(__uint32_t _major, __uint32_t _minor)
{
 return (dev_t)(((_major) << 24) | (_minor));
}
# 161 "/usr/include/sys/types.h" 3 4
# 1 "/usr/include/sys/_types/_clock_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_clock_t.h" 3 4
typedef __darwin_clock_t clock_t;
# 162 "/usr/include/sys/types.h" 2 3 4


# 1 "/usr/include/sys/_types/_time_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_time_t.h" 3 4
typedef __darwin_time_t time_t;
# 165 "/usr/include/sys/types.h" 2 3 4

# 1 "/usr/include/sys/_types/_useconds_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_useconds_t.h" 3 4
typedef __darwin_useconds_t useconds_t;
# 167 "/usr/include/sys/types.h" 2 3 4
# 1 "/usr/include/sys/_types/_suseconds_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_suseconds_t.h" 3 4
typedef __darwin_suseconds_t suseconds_t;
# 168 "/usr/include/sys/types.h" 2 3 4
# 180 "/usr/include/sys/types.h" 3 4
# 1 "/usr/include/sys/_types/_fd_def.h" 1 3 4
# 45 "/usr/include/sys/_types/_fd_def.h" 3 4
extern "C" {
typedef struct fd_set {
 __int32_t fds_bits[((((1024) % ((sizeof(__int32_t) * 8))) == 0) ? ((1024) / ((sizeof(__int32_t) * 8))) : (((1024) / ((sizeof(__int32_t) * 8))) + 1))];
} fd_set;
}


static inline int
__darwin_fd_isset(int _n, const struct fd_set *_p)
{
 return (_p->fds_bits[(unsigned long)_n/(sizeof(__int32_t) * 8)] & ((__int32_t)(1<<((unsigned long)_n % (sizeof(__int32_t) * 8)))));
}
# 181 "/usr/include/sys/types.h" 2 3 4




typedef __int32_t fd_mask;







# 1 "/usr/include/sys/_types/_fd_setsize.h" 1 3 4
# 194 "/usr/include/sys/types.h" 2 3 4
# 1 "/usr/include/sys/_types/_fd_set.h" 1 3 4
# 195 "/usr/include/sys/types.h" 2 3 4
# 1 "/usr/include/sys/_types/_fd_clr.h" 1 3 4
# 196 "/usr/include/sys/types.h" 2 3 4
# 1 "/usr/include/sys/_types/_fd_zero.h" 1 3 4
# 197 "/usr/include/sys/types.h" 2 3 4
# 1 "/usr/include/sys/_types/_fd_isset.h" 1 3 4
# 198 "/usr/include/sys/types.h" 2 3 4


# 1 "/usr/include/sys/_types/_fd_copy.h" 1 3 4
# 201 "/usr/include/sys/types.h" 2 3 4
# 212 "/usr/include/sys/types.h" 3 4
# 1 "/usr/include/sys/_pthread/_pthread_cond_t.h" 1 3 4
# 30 "/usr/include/sys/_pthread/_pthread_cond_t.h" 3 4
typedef __darwin_pthread_cond_t pthread_cond_t;
# 213 "/usr/include/sys/types.h" 2 3 4
# 1 "/usr/include/sys/_pthread/_pthread_condattr_t.h" 1 3 4
# 30 "/usr/include/sys/_pthread/_pthread_condattr_t.h" 3 4
typedef __darwin_pthread_condattr_t pthread_condattr_t;
# 214 "/usr/include/sys/types.h" 2 3 4
# 1 "/usr/include/sys/_pthread/_pthread_mutex_t.h" 1 3 4
# 30 "/usr/include/sys/_pthread/_pthread_mutex_t.h" 3 4
typedef __darwin_pthread_mutex_t pthread_mutex_t;
# 215 "/usr/include/sys/types.h" 2 3 4
# 1 "/usr/include/sys/_pthread/_pthread_mutexattr_t.h" 1 3 4
# 30 "/usr/include/sys/_pthread/_pthread_mutexattr_t.h" 3 4
typedef __darwin_pthread_mutexattr_t pthread_mutexattr_t;
# 216 "/usr/include/sys/types.h" 2 3 4
# 1 "/usr/include/sys/_pthread/_pthread_once_t.h" 1 3 4
# 30 "/usr/include/sys/_pthread/_pthread_once_t.h" 3 4
typedef __darwin_pthread_once_t pthread_once_t;
# 217 "/usr/include/sys/types.h" 2 3 4
# 1 "/usr/include/sys/_pthread/_pthread_rwlock_t.h" 1 3 4
# 30 "/usr/include/sys/_pthread/_pthread_rwlock_t.h" 3 4
typedef __darwin_pthread_rwlock_t pthread_rwlock_t;
# 218 "/usr/include/sys/types.h" 2 3 4
# 1 "/usr/include/sys/_pthread/_pthread_rwlockattr_t.h" 1 3 4
# 30 "/usr/include/sys/_pthread/_pthread_rwlockattr_t.h" 3 4
typedef __darwin_pthread_rwlockattr_t pthread_rwlockattr_t;
# 219 "/usr/include/sys/types.h" 2 3 4
# 1 "/usr/include/sys/_pthread/_pthread_t.h" 1 3 4
# 30 "/usr/include/sys/_pthread/_pthread_t.h" 3 4
typedef __darwin_pthread_t pthread_t;
# 220 "/usr/include/sys/types.h" 2 3 4



# 1 "/usr/include/sys/_pthread/_pthread_key_t.h" 1 3 4
# 30 "/usr/include/sys/_pthread/_pthread_key_t.h" 3 4
typedef __darwin_pthread_key_t pthread_key_t;
# 224 "/usr/include/sys/types.h" 2 3 4




# 1 "/usr/include/sys/_types/_fsblkcnt_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_fsblkcnt_t.h" 3 4
typedef __darwin_fsblkcnt_t fsblkcnt_t;
# 229 "/usr/include/sys/types.h" 2 3 4
# 1 "/usr/include/sys/_types/_fsfilcnt_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_fsfilcnt_t.h" 3 4
typedef __darwin_fsfilcnt_t fsfilcnt_t;
# 230 "/usr/include/sys/types.h" 2 3 4
# 46 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_types.h" 2


extern "C" {


# 1 "/usr/local/lib/gcc/x86_64-apple-darwin14.0.0/4.9.2/include-fixed/limits.h" 1 3 4
# 34 "/usr/local/lib/gcc/x86_64-apple-darwin14.0.0/4.9.2/include-fixed/limits.h" 3 4
# 1 "/usr/local/lib/gcc/x86_64-apple-darwin14.0.0/4.9.2/include-fixed/syslimits.h" 1 3 4






# 1 "/usr/local/lib/gcc/x86_64-apple-darwin14.0.0/4.9.2/include-fixed/limits.h" 1 3 4
# 168 "/usr/local/lib/gcc/x86_64-apple-darwin14.0.0/4.9.2/include-fixed/limits.h" 3 4
# 1 "/usr/include/limits.h" 1 3 4
# 64 "/usr/include/limits.h" 3 4
# 1 "/usr/include/machine/limits.h" 1 3 4





# 1 "/usr/include/i386/limits.h" 1 3 4
# 40 "/usr/include/i386/limits.h" 3 4
# 1 "/usr/include/i386/_limits.h" 1 3 4
# 41 "/usr/include/i386/limits.h" 2 3 4
# 7 "/usr/include/machine/limits.h" 2 3 4
# 65 "/usr/include/limits.h" 2 3 4
# 1 "/usr/include/sys/syslimits.h" 1 3 4
# 66 "/usr/include/limits.h" 2 3 4
# 169 "/usr/local/lib/gcc/x86_64-apple-darwin14.0.0/4.9.2/include-fixed/limits.h" 2 3 4
# 8 "/usr/local/lib/gcc/x86_64-apple-darwin14.0.0/4.9.2/include-fixed/syslimits.h" 2 3 4
# 35 "/usr/local/lib/gcc/x86_64-apple-darwin14.0.0/4.9.2/include-fixed/limits.h" 2 3 4
# 52 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_types.h" 2
# 70 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_types.h"
     typedef unsigned char uint_8t;
# 79 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_types.h"
     typedef unsigned short uint_16t;
# 89 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_types.h"
     typedef unsigned int uint_32t;
# 123 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_types.h"
       typedef unsigned long uint_64t;
# 197 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_types.h"
}
# 38 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.h" 2





extern "C"
{
# 54 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.h"
typedef u_int8_t RNG_state;
typedef u_int8_t uint8;
typedef u_int32_t uint32;





struct state_t {
  uint8 state[20];
};





void rng_init(RNG_state *state, int seed);
void rng_spawn(RNG_state *mystate, RNG_state *newstate, int spawnNumber);
int rng_rand(RNG_state *mystate);
int rng_nextrand(RNG_state *mystate);
char * rng_showstate(RNG_state *state, char *s);
int rng_showtype(char *strBuf, int ind);




struct sha1_ctx_s
{ uint_32t count[2];
    uint_32t hash[5];
    uint_32t wbuf[16];
};

typedef struct sha1_ctx_s sha1_ctx;
# 95 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.h"
void sha1_compile(sha1_ctx ctx[1]);

void sha1_begin(sha1_ctx ctx[1]);
void sha1_hash(const unsigned char data[], unsigned long len, sha1_ctx ctx[1]);
void sha1_end(unsigned char hval[], sha1_ctx ctx[1]);
void sha1(unsigned char hval[], const unsigned char data[], unsigned long len);


}
# 40 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c" 2
# 1 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_endian.h" 1
# 41 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c" 2
# 41 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
# 42 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
# 43 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
extern "C"
# 44 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
{
# 45 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
# 46 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
# 47 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
# 48 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
# 49 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
void rng_init(RNG_state *newstate, int seed)
# 50 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
{
# 51 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
  struct sha1_ctx_s ctx;
# 52 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
  struct state_t gen;
# 53 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
  int i;
# 54 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
# 55 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
  for (i=0; i < 16; i++)
# 56 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
    gen.state[i] = 0;
# 57 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
  gen.state[16] = 0xFF & (seed >> 24);
# 58 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
  gen.state[17] = 0xFF & (seed >> 16);
# 59 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
  gen.state[18] = 0xFF & (seed >> 8);
# 60 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
  gen.state[19] = 0xFF & (seed >> 0);
# 61 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
# 62 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
  sha1_begin(&ctx);
# 63 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
  sha1_hash(gen.state, 20, &ctx);
# 64 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
  sha1_end(newstate, &ctx);
# 65 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
}
# 66 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
# 67 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
void rng_spawn(RNG_state *mystate, RNG_state *newstate, int spawnnumber)
# 68 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
{
# 69 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
 struct sha1_ctx_s ctx;
# 70 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
 uint8 bytes[4];
# 71 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
# 72 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
 bytes[0] = 0xFF & (spawnnumber >> 24);
# 73 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
 bytes[1] = 0xFF & (spawnnumber >> 16);
# 74 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
 bytes[2] = 0xFF & (spawnnumber >> 8);
# 75 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
 bytes[3] = 0xFF & spawnnumber;
# 76 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
# 77 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
 sha1_begin(&ctx);
# 78 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
 sha1_hash(mystate, 20, &ctx);
# 79 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
 sha1_hash(bytes, 4, &ctx);
# 80 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
 sha1_end(newstate, &ctx);
# 81 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
}
# 82 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
# 83 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
int rng_rand(RNG_state *mystate){
# 84 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
        int r;
# 85 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
 uint32 b = (mystate[16] << 24) | (mystate[17] << 16)
# 86 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
  | (mystate[18] << 8) | (mystate[19] << 0);
# 87 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
 b = b & 0x7fffffff;
# 88 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
# 89 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
 r = (int) b;
# 90 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
# 91 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
 return r;
# 92 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
}
# 93 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
# 94 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
int rng_nextrand(RNG_state *mystate){
# 95 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
 struct sha1_ctx_s ctx;
# 96 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
 int r;
# 97 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
 uint32 b;
# 98 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
# 99 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
 sha1_begin(&ctx);
# 100 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
 sha1_hash(mystate, 20, &ctx);
# 101 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
 sha1_end(mystate, &ctx);
# 102 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
 b = (mystate[16] << 24) | (mystate[17] << 16)
# 103 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
  | (mystate[18] << 8) | (mystate[19] << 0);
# 104 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
 b = b & 0x7fffffff;
# 105 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
# 106 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
 r = (int) b;
# 107 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
 return r;
# 108 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
}
# 109 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
# 110 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
# 111 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
char * rng_showstate(RNG_state *state, char *s){
# 112 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
  sprintf(s,"%.2X%.2X...", state[0],state[1]);
# 113 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
  return s;
# 114 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
}
# 115 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
# 116 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
# 117 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
int rng_showtype(char *strBuf, int ind) {
# 118 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
  ind += sprintf(strBuf+ind, "SHA-1 (state size = %luB)",
# 119 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
                 sizeof(struct state_t));
# 120 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
  return ind;
# 121 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
}
# 195 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
# 195 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
void sha1_compile(sha1_ctx ctx[1])
# 196 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
{ uint_32t *w = ctx->wbuf;
# 197 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
# 198 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
# 199 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
# 200 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
# 201 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
# 202 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
    uint_32t v0, v1, v2, v3, v4;
# 203 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
    v0 = ctx->hash[0]; v1 = ctx->hash[1];
# 204 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
    v2 = ctx->hash[2]; v3 = ctx->hash[3];
# 205 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
    v4 = ctx->hash[4];
# 206 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
# 207 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
# 208 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
# 209 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
# 210 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
    v4 += (((v0) >> 27) | ((v0) << (32 - 27))) + ((v3) ^ ((v1) & ((v2) ^ (v3)))) + 0x5a827999 + w[0]; v1 = (((v1) >> 2) | ((v1) << (32 - 2))); v3 += (((v4) >> 27) | ((v4) << (32 - 27))) + ((v2) ^ ((v0) & ((v1) ^ (v2)))) + 0x5a827999 + w[0 +1]; v0 = (((v0) >> 2) | ((v0) << (32 - 2))); v2 += (((v3) >> 27) | ((v3) << (32 - 27))) + ((v1) ^ ((v4) & ((v0) ^ (v1)))) + 0x5a827999 + w[0 +2]; v4 = (((v4) >> 2) | ((v4) << (32 - 2))); v1 += (((v2) >> 27) | ((v2) << (32 - 27))) + ((v0) ^ ((v3) & ((v4) ^ (v0)))) + 0x5a827999 + w[0 +3]; v3 = (((v3) >> 2) | ((v3) << (32 - 2))); v0 += (((v1) >> 27) | ((v1) << (32 - 27))) + ((v4) ^ ((v2) & ((v3) ^ (v4)))) + 0x5a827999 + w[0 +4]; v2 = (((v2) >> 2) | ((v2) << (32 - 2)));
# 211 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
    v4 += (((v0) >> 27) | ((v0) << (32 - 27))) + ((v3) ^ ((v1) & ((v2) ^ (v3)))) + 0x5a827999 + w[5]; v1 = (((v1) >> 2) | ((v1) << (32 - 2))); v3 += (((v4) >> 27) | ((v4) << (32 - 27))) + ((v2) ^ ((v0) & ((v1) ^ (v2)))) + 0x5a827999 + w[5 +1]; v0 = (((v0) >> 2) | ((v0) << (32 - 2))); v2 += (((v3) >> 27) | ((v3) << (32 - 27))) + ((v1) ^ ((v4) & ((v0) ^ (v1)))) + 0x5a827999 + w[5 +2]; v4 = (((v4) >> 2) | ((v4) << (32 - 2))); v1 += (((v2) >> 27) | ((v2) << (32 - 27))) + ((v0) ^ ((v3) & ((v4) ^ (v0)))) + 0x5a827999 + w[5 +3]; v3 = (((v3) >> 2) | ((v3) << (32 - 2))); v0 += (((v1) >> 27) | ((v1) << (32 - 27))) + ((v4) ^ ((v2) & ((v3) ^ (v4)))) + 0x5a827999 + w[5 +4]; v2 = (((v2) >> 2) | ((v2) << (32 - 2)));
# 212 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
    v4 += (((v0) >> 27) | ((v0) << (32 - 27))) + ((v3) ^ ((v1) & ((v2) ^ (v3)))) + 0x5a827999 + w[10]; v1 = (((v1) >> 2) | ((v1) << (32 - 2))); v3 += (((v4) >> 27) | ((v4) << (32 - 27))) + ((v2) ^ ((v0) & ((v1) ^ (v2)))) + 0x5a827999 + w[10 +1]; v0 = (((v0) >> 2) | ((v0) << (32 - 2))); v2 += (((v3) >> 27) | ((v3) << (32 - 27))) + ((v1) ^ ((v4) & ((v0) ^ (v1)))) + 0x5a827999 + w[10 +2]; v4 = (((v4) >> 2) | ((v4) << (32 - 2))); v1 += (((v2) >> 27) | ((v2) << (32 - 27))) + ((v0) ^ ((v3) & ((v4) ^ (v0)))) + 0x5a827999 + w[10 +3]; v3 = (((v3) >> 2) | ((v3) << (32 - 2))); v0 += (((v1) >> 27) | ((v1) << (32 - 27))) + ((v4) ^ ((v2) & ((v3) ^ (v4)))) + 0x5a827999 + w[10 +4]; v2 = (((v2) >> 2) | ((v2) << (32 - 2)));
# 213 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
    v4 += (((v0) >> 27) | ((v0) << (32 - 27))) + ((v3) ^ ((v1) & ((v2) ^ (v3)))) + 0x5a827999 + w[15]; v1 = (((v1) >> 2) | ((v1) << (32 - 2)));
# 214 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
# 215 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
# 216 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
# 217 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
# 218 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
# 219 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
# 220 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
    v3 += (((v4) >> 27) | ((v4) << (32 - 27))) + ((v2) ^ ((v0) & ((v1) ^ (v2)))) + 0x5a827999 + (w[(16) & 15] = (((w[((16) + 13) & 15] ^ w[((16) + 8) & 15] ^ w[((16) + 2) & 15] ^ w[(16) & 15]) << 1) | ((w[((16) + 13) & 15] ^ w[((16) + 8) & 15] ^ w[((16) + 2) & 15] ^ w[(16) & 15]) >> (32 - 1)))); v0 = (((v0) >> 2) | ((v0) << (32 - 2)));
# 221 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
    v2 += (((v3) >> 27) | ((v3) << (32 - 27))) + ((v1) ^ ((v4) & ((v0) ^ (v1)))) + 0x5a827999 + (w[(17) & 15] = (((w[((17) + 13) & 15] ^ w[((17) + 8) & 15] ^ w[((17) + 2) & 15] ^ w[(17) & 15]) << 1) | ((w[((17) + 13) & 15] ^ w[((17) + 8) & 15] ^ w[((17) + 2) & 15] ^ w[(17) & 15]) >> (32 - 1)))); v4 = (((v4) >> 2) | ((v4) << (32 - 2)));
# 222 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
    v1 += (((v2) >> 27) | ((v2) << (32 - 27))) + ((v0) ^ ((v3) & ((v4) ^ (v0)))) + 0x5a827999 + (w[(18) & 15] = (((w[((18) + 13) & 15] ^ w[((18) + 8) & 15] ^ w[((18) + 2) & 15] ^ w[(18) & 15]) << 1) | ((w[((18) + 13) & 15] ^ w[((18) + 8) & 15] ^ w[((18) + 2) & 15] ^ w[(18) & 15]) >> (32 - 1)))); v3 = (((v3) >> 2) | ((v3) << (32 - 2)));
# 223 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
    v0 += (((v1) >> 27) | ((v1) << (32 - 27))) + ((v4) ^ ((v2) & ((v3) ^ (v4)))) + 0x5a827999 + (w[(19) & 15] = (((w[((19) + 13) & 15] ^ w[((19) + 8) & 15] ^ w[((19) + 2) & 15] ^ w[(19) & 15]) << 1) | ((w[((19) + 13) & 15] ^ w[((19) + 8) & 15] ^ w[((19) + 2) & 15] ^ w[(19) & 15]) >> (32 - 1)))); v2 = (((v2) >> 2) | ((v2) << (32 - 2)));
# 224 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
# 225 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
    v4 += (((v0) >> 27) | ((v0) << (32 - 27))) + ((v1) ^ (v2) ^ (v3)) + 0x6ed9eba1 + (w[(20) & 15] = (((w[((20) + 13) & 15] ^ w[((20) + 8) & 15] ^ w[((20) + 2) & 15] ^ w[(20) & 15]) << 1) | ((w[((20) + 13) & 15] ^ w[((20) + 8) & 15] ^ w[((20) + 2) & 15] ^ w[(20) & 15]) >> (32 - 1)))); v1 = (((v1) >> 2) | ((v1) << (32 - 2))); v3 += (((v4) >> 27) | ((v4) << (32 - 27))) + ((v0) ^ (v1) ^ (v2)) + 0x6ed9eba1 + (w[(20 +1) & 15] = (((w[((20 +1) + 13) & 15] ^ w[((20 +1) + 8) & 15] ^ w[((20 +1) + 2) & 15] ^ w[(20 +1) & 15]) << 1) | ((w[((20 +1) + 13) & 15] ^ w[((20 +1) + 8) & 15] ^ w[((20 +1) + 2) & 15] ^ w[(20 +1) & 15]) >> (32 - 1)))); v0 = (((v0) >> 2) | ((v0) << (32 - 2))); v2 += (((v3) >> 27) | ((v3) << (32 - 27))) + ((v4) ^ (v0) ^ (v1)) + 0x6ed9eba1 + (w[(20 +2) & 15] = (((w[((20 +2) + 13) & 15] ^ w[((20 +2) + 8) & 15] ^ w[((20 +2) + 2) & 15] ^ w[(20 +2) & 15]) << 1) | ((w[((20 +2) + 13) & 15] ^ w[((20 +2) + 8) & 15] ^ w[((20 +2) + 2) & 15] ^ w[(20 +2) & 15]) >> (32 - 1)))); v4 = (((v4) >> 2) | ((v4) << (32 - 2))); v1 += (((v2) >> 27) | ((v2) << (32 - 27))) + ((v3) ^ (v4) ^ (v0)) + 0x6ed9eba1 + (w[(20 +3) & 15] = (((w[((20 +3) + 13) & 15] ^ w[((20 +3) + 8) & 15] ^ w[((20 +3) + 2) & 15] ^ w[(20 +3) & 15]) << 1) | ((w[((20 +3) + 13) & 15] ^ w[((20 +3) + 8) & 15] ^ w[((20 +3) + 2) & 15] ^ w[(20 +3) & 15]) >> (32 - 1)))); v3 = (((v3) >> 2) | ((v3) << (32 - 2))); v0 += (((v1) >> 27) | ((v1) << (32 - 27))) + ((v2) ^ (v3) ^ (v4)) + 0x6ed9eba1 + (w[(20 +4) & 15] = (((w[((20 +4) + 13) & 15] ^ w[((20 +4) + 8) & 15] ^ w[((20 +4) + 2) & 15] ^ w[(20 +4) & 15]) << 1) | ((w[((20 +4) + 13) & 15] ^ w[((20 +4) + 8) & 15] ^ w[((20 +4) + 2) & 15] ^ w[(20 +4) & 15]) >> (32 - 1)))); v2 = (((v2) >> 2) | ((v2) << (32 - 2)));
# 226 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
    v4 += (((v0) >> 27) | ((v0) << (32 - 27))) + ((v1) ^ (v2) ^ (v3)) + 0x6ed9eba1 + (w[(25) & 15] = (((w[((25) + 13) & 15] ^ w[((25) + 8) & 15] ^ w[((25) + 2) & 15] ^ w[(25) & 15]) << 1) | ((w[((25) + 13) & 15] ^ w[((25) + 8) & 15] ^ w[((25) + 2) & 15] ^ w[(25) & 15]) >> (32 - 1)))); v1 = (((v1) >> 2) | ((v1) << (32 - 2))); v3 += (((v4) >> 27) | ((v4) << (32 - 27))) + ((v0) ^ (v1) ^ (v2)) + 0x6ed9eba1 + (w[(25 +1) & 15] = (((w[((25 +1) + 13) & 15] ^ w[((25 +1) + 8) & 15] ^ w[((25 +1) + 2) & 15] ^ w[(25 +1) & 15]) << 1) | ((w[((25 +1) + 13) & 15] ^ w[((25 +1) + 8) & 15] ^ w[((25 +1) + 2) & 15] ^ w[(25 +1) & 15]) >> (32 - 1)))); v0 = (((v0) >> 2) | ((v0) << (32 - 2))); v2 += (((v3) >> 27) | ((v3) << (32 - 27))) + ((v4) ^ (v0) ^ (v1)) + 0x6ed9eba1 + (w[(25 +2) & 15] = (((w[((25 +2) + 13) & 15] ^ w[((25 +2) + 8) & 15] ^ w[((25 +2) + 2) & 15] ^ w[(25 +2) & 15]) << 1) | ((w[((25 +2) + 13) & 15] ^ w[((25 +2) + 8) & 15] ^ w[((25 +2) + 2) & 15] ^ w[(25 +2) & 15]) >> (32 - 1)))); v4 = (((v4) >> 2) | ((v4) << (32 - 2))); v1 += (((v2) >> 27) | ((v2) << (32 - 27))) + ((v3) ^ (v4) ^ (v0)) + 0x6ed9eba1 + (w[(25 +3) & 15] = (((w[((25 +3) + 13) & 15] ^ w[((25 +3) + 8) & 15] ^ w[((25 +3) + 2) & 15] ^ w[(25 +3) & 15]) << 1) | ((w[((25 +3) + 13) & 15] ^ w[((25 +3) + 8) & 15] ^ w[((25 +3) + 2) & 15] ^ w[(25 +3) & 15]) >> (32 - 1)))); v3 = (((v3) >> 2) | ((v3) << (32 - 2))); v0 += (((v1) >> 27) | ((v1) << (32 - 27))) + ((v2) ^ (v3) ^ (v4)) + 0x6ed9eba1 + (w[(25 +4) & 15] = (((w[((25 +4) + 13) & 15] ^ w[((25 +4) + 8) & 15] ^ w[((25 +4) + 2) & 15] ^ w[(25 +4) & 15]) << 1) | ((w[((25 +4) + 13) & 15] ^ w[((25 +4) + 8) & 15] ^ w[((25 +4) + 2) & 15] ^ w[(25 +4) & 15]) >> (32 - 1)))); v2 = (((v2) >> 2) | ((v2) << (32 - 2)));
# 227 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
    v4 += (((v0) >> 27) | ((v0) << (32 - 27))) + ((v1) ^ (v2) ^ (v3)) + 0x6ed9eba1 + (w[(30) & 15] = (((w[((30) + 13) & 15] ^ w[((30) + 8) & 15] ^ w[((30) + 2) & 15] ^ w[(30) & 15]) << 1) | ((w[((30) + 13) & 15] ^ w[((30) + 8) & 15] ^ w[((30) + 2) & 15] ^ w[(30) & 15]) >> (32 - 1)))); v1 = (((v1) >> 2) | ((v1) << (32 - 2))); v3 += (((v4) >> 27) | ((v4) << (32 - 27))) + ((v0) ^ (v1) ^ (v2)) + 0x6ed9eba1 + (w[(30 +1) & 15] = (((w[((30 +1) + 13) & 15] ^ w[((30 +1) + 8) & 15] ^ w[((30 +1) + 2) & 15] ^ w[(30 +1) & 15]) << 1) | ((w[((30 +1) + 13) & 15] ^ w[((30 +1) + 8) & 15] ^ w[((30 +1) + 2) & 15] ^ w[(30 +1) & 15]) >> (32 - 1)))); v0 = (((v0) >> 2) | ((v0) << (32 - 2))); v2 += (((v3) >> 27) | ((v3) << (32 - 27))) + ((v4) ^ (v0) ^ (v1)) + 0x6ed9eba1 + (w[(30 +2) & 15] = (((w[((30 +2) + 13) & 15] ^ w[((30 +2) + 8) & 15] ^ w[((30 +2) + 2) & 15] ^ w[(30 +2) & 15]) << 1) | ((w[((30 +2) + 13) & 15] ^ w[((30 +2) + 8) & 15] ^ w[((30 +2) + 2) & 15] ^ w[(30 +2) & 15]) >> (32 - 1)))); v4 = (((v4) >> 2) | ((v4) << (32 - 2))); v1 += (((v2) >> 27) | ((v2) << (32 - 27))) + ((v3) ^ (v4) ^ (v0)) + 0x6ed9eba1 + (w[(30 +3) & 15] = (((w[((30 +3) + 13) & 15] ^ w[((30 +3) + 8) & 15] ^ w[((30 +3) + 2) & 15] ^ w[(30 +3) & 15]) << 1) | ((w[((30 +3) + 13) & 15] ^ w[((30 +3) + 8) & 15] ^ w[((30 +3) + 2) & 15] ^ w[(30 +3) & 15]) >> (32 - 1)))); v3 = (((v3) >> 2) | ((v3) << (32 - 2))); v0 += (((v1) >> 27) | ((v1) << (32 - 27))) + ((v2) ^ (v3) ^ (v4)) + 0x6ed9eba1 + (w[(30 +4) & 15] = (((w[((30 +4) + 13) & 15] ^ w[((30 +4) + 8) & 15] ^ w[((30 +4) + 2) & 15] ^ w[(30 +4) & 15]) << 1) | ((w[((30 +4) + 13) & 15] ^ w[((30 +4) + 8) & 15] ^ w[((30 +4) + 2) & 15] ^ w[(30 +4) & 15]) >> (32 - 1)))); v2 = (((v2) >> 2) | ((v2) << (32 - 2)));
# 228 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
    v4 += (((v0) >> 27) | ((v0) << (32 - 27))) + ((v1) ^ (v2) ^ (v3)) + 0x6ed9eba1 + (w[(35) & 15] = (((w[((35) + 13) & 15] ^ w[((35) + 8) & 15] ^ w[((35) + 2) & 15] ^ w[(35) & 15]) << 1) | ((w[((35) + 13) & 15] ^ w[((35) + 8) & 15] ^ w[((35) + 2) & 15] ^ w[(35) & 15]) >> (32 - 1)))); v1 = (((v1) >> 2) | ((v1) << (32 - 2))); v3 += (((v4) >> 27) | ((v4) << (32 - 27))) + ((v0) ^ (v1) ^ (v2)) + 0x6ed9eba1 + (w[(35 +1) & 15] = (((w[((35 +1) + 13) & 15] ^ w[((35 +1) + 8) & 15] ^ w[((35 +1) + 2) & 15] ^ w[(35 +1) & 15]) << 1) | ((w[((35 +1) + 13) & 15] ^ w[((35 +1) + 8) & 15] ^ w[((35 +1) + 2) & 15] ^ w[(35 +1) & 15]) >> (32 - 1)))); v0 = (((v0) >> 2) | ((v0) << (32 - 2))); v2 += (((v3) >> 27) | ((v3) << (32 - 27))) + ((v4) ^ (v0) ^ (v1)) + 0x6ed9eba1 + (w[(35 +2) & 15] = (((w[((35 +2) + 13) & 15] ^ w[((35 +2) + 8) & 15] ^ w[((35 +2) + 2) & 15] ^ w[(35 +2) & 15]) << 1) | ((w[((35 +2) + 13) & 15] ^ w[((35 +2) + 8) & 15] ^ w[((35 +2) + 2) & 15] ^ w[(35 +2) & 15]) >> (32 - 1)))); v4 = (((v4) >> 2) | ((v4) << (32 - 2))); v1 += (((v2) >> 27) | ((v2) << (32 - 27))) + ((v3) ^ (v4) ^ (v0)) + 0x6ed9eba1 + (w[(35 +3) & 15] = (((w[((35 +3) + 13) & 15] ^ w[((35 +3) + 8) & 15] ^ w[((35 +3) + 2) & 15] ^ w[(35 +3) & 15]) << 1) | ((w[((35 +3) + 13) & 15] ^ w[((35 +3) + 8) & 15] ^ w[((35 +3) + 2) & 15] ^ w[(35 +3) & 15]) >> (32 - 1)))); v3 = (((v3) >> 2) | ((v3) << (32 - 2))); v0 += (((v1) >> 27) | ((v1) << (32 - 27))) + ((v2) ^ (v3) ^ (v4)) + 0x6ed9eba1 + (w[(35 +4) & 15] = (((w[((35 +4) + 13) & 15] ^ w[((35 +4) + 8) & 15] ^ w[((35 +4) + 2) & 15] ^ w[(35 +4) & 15]) << 1) | ((w[((35 +4) + 13) & 15] ^ w[((35 +4) + 8) & 15] ^ w[((35 +4) + 2) & 15] ^ w[(35 +4) & 15]) >> (32 - 1)))); v2 = (((v2) >> 2) | ((v2) << (32 - 2)));
# 229 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
# 230 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
    v4 += (((v0) >> 27) | ((v0) << (32 - 27))) + (((v1) & (v2)) | ((v3) & ((v1) ^ (v2)))) + 0x8f1bbcdc + (w[(40) & 15] = (((w[((40) + 13) & 15] ^ w[((40) + 8) & 15] ^ w[((40) + 2) & 15] ^ w[(40) & 15]) << 1) | ((w[((40) + 13) & 15] ^ w[((40) + 8) & 15] ^ w[((40) + 2) & 15] ^ w[(40) & 15]) >> (32 - 1)))); v1 = (((v1) >> 2) | ((v1) << (32 - 2))); v3 += (((v4) >> 27) | ((v4) << (32 - 27))) + (((v0) & (v1)) | ((v2) & ((v0) ^ (v1)))) + 0x8f1bbcdc + (w[(40 +1) & 15] = (((w[((40 +1) + 13) & 15] ^ w[((40 +1) + 8) & 15] ^ w[((40 +1) + 2) & 15] ^ w[(40 +1) & 15]) << 1) | ((w[((40 +1) + 13) & 15] ^ w[((40 +1) + 8) & 15] ^ w[((40 +1) + 2) & 15] ^ w[(40 +1) & 15]) >> (32 - 1)))); v0 = (((v0) >> 2) | ((v0) << (32 - 2))); v2 += (((v3) >> 27) | ((v3) << (32 - 27))) + (((v4) & (v0)) | ((v1) & ((v4) ^ (v0)))) + 0x8f1bbcdc + (w[(40 +2) & 15] = (((w[((40 +2) + 13) & 15] ^ w[((40 +2) + 8) & 15] ^ w[((40 +2) + 2) & 15] ^ w[(40 +2) & 15]) << 1) | ((w[((40 +2) + 13) & 15] ^ w[((40 +2) + 8) & 15] ^ w[((40 +2) + 2) & 15] ^ w[(40 +2) & 15]) >> (32 - 1)))); v4 = (((v4) >> 2) | ((v4) << (32 - 2))); v1 += (((v2) >> 27) | ((v2) << (32 - 27))) + (((v3) & (v4)) | ((v0) & ((v3) ^ (v4)))) + 0x8f1bbcdc + (w[(40 +3) & 15] = (((w[((40 +3) + 13) & 15] ^ w[((40 +3) + 8) & 15] ^ w[((40 +3) + 2) & 15] ^ w[(40 +3) & 15]) << 1) | ((w[((40 +3) + 13) & 15] ^ w[((40 +3) + 8) & 15] ^ w[((40 +3) + 2) & 15] ^ w[(40 +3) & 15]) >> (32 - 1)))); v3 = (((v3) >> 2) | ((v3) << (32 - 2))); v0 += (((v1) >> 27) | ((v1) << (32 - 27))) + (((v2) & (v3)) | ((v4) & ((v2) ^ (v3)))) + 0x8f1bbcdc + (w[(40 +4) & 15] = (((w[((40 +4) + 13) & 15] ^ w[((40 +4) + 8) & 15] ^ w[((40 +4) + 2) & 15] ^ w[(40 +4) & 15]) << 1) | ((w[((40 +4) + 13) & 15] ^ w[((40 +4) + 8) & 15] ^ w[((40 +4) + 2) & 15] ^ w[(40 +4) & 15]) >> (32 - 1)))); v2 = (((v2) >> 2) | ((v2) << (32 - 2)));
# 231 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
    v4 += (((v0) >> 27) | ((v0) << (32 - 27))) + (((v1) & (v2)) | ((v3) & ((v1) ^ (v2)))) + 0x8f1bbcdc + (w[(45) & 15] = (((w[((45) + 13) & 15] ^ w[((45) + 8) & 15] ^ w[((45) + 2) & 15] ^ w[(45) & 15]) << 1) | ((w[((45) + 13) & 15] ^ w[((45) + 8) & 15] ^ w[((45) + 2) & 15] ^ w[(45) & 15]) >> (32 - 1)))); v1 = (((v1) >> 2) | ((v1) << (32 - 2))); v3 += (((v4) >> 27) | ((v4) << (32 - 27))) + (((v0) & (v1)) | ((v2) & ((v0) ^ (v1)))) + 0x8f1bbcdc + (w[(45 +1) & 15] = (((w[((45 +1) + 13) & 15] ^ w[((45 +1) + 8) & 15] ^ w[((45 +1) + 2) & 15] ^ w[(45 +1) & 15]) << 1) | ((w[((45 +1) + 13) & 15] ^ w[((45 +1) + 8) & 15] ^ w[((45 +1) + 2) & 15] ^ w[(45 +1) & 15]) >> (32 - 1)))); v0 = (((v0) >> 2) | ((v0) << (32 - 2))); v2 += (((v3) >> 27) | ((v3) << (32 - 27))) + (((v4) & (v0)) | ((v1) & ((v4) ^ (v0)))) + 0x8f1bbcdc + (w[(45 +2) & 15] = (((w[((45 +2) + 13) & 15] ^ w[((45 +2) + 8) & 15] ^ w[((45 +2) + 2) & 15] ^ w[(45 +2) & 15]) << 1) | ((w[((45 +2) + 13) & 15] ^ w[((45 +2) + 8) & 15] ^ w[((45 +2) + 2) & 15] ^ w[(45 +2) & 15]) >> (32 - 1)))); v4 = (((v4) >> 2) | ((v4) << (32 - 2))); v1 += (((v2) >> 27) | ((v2) << (32 - 27))) + (((v3) & (v4)) | ((v0) & ((v3) ^ (v4)))) + 0x8f1bbcdc + (w[(45 +3) & 15] = (((w[((45 +3) + 13) & 15] ^ w[((45 +3) + 8) & 15] ^ w[((45 +3) + 2) & 15] ^ w[(45 +3) & 15]) << 1) | ((w[((45 +3) + 13) & 15] ^ w[((45 +3) + 8) & 15] ^ w[((45 +3) + 2) & 15] ^ w[(45 +3) & 15]) >> (32 - 1)))); v3 = (((v3) >> 2) | ((v3) << (32 - 2))); v0 += (((v1) >> 27) | ((v1) << (32 - 27))) + (((v2) & (v3)) | ((v4) & ((v2) ^ (v3)))) + 0x8f1bbcdc + (w[(45 +4) & 15] = (((w[((45 +4) + 13) & 15] ^ w[((45 +4) + 8) & 15] ^ w[((45 +4) + 2) & 15] ^ w[(45 +4) & 15]) << 1) | ((w[((45 +4) + 13) & 15] ^ w[((45 +4) + 8) & 15] ^ w[((45 +4) + 2) & 15] ^ w[(45 +4) & 15]) >> (32 - 1)))); v2 = (((v2) >> 2) | ((v2) << (32 - 2)));
# 232 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
    v4 += (((v0) >> 27) | ((v0) << (32 - 27))) + (((v1) & (v2)) | ((v3) & ((v1) ^ (v2)))) + 0x8f1bbcdc + (w[(50) & 15] = (((w[((50) + 13) & 15] ^ w[((50) + 8) & 15] ^ w[((50) + 2) & 15] ^ w[(50) & 15]) << 1) | ((w[((50) + 13) & 15] ^ w[((50) + 8) & 15] ^ w[((50) + 2) & 15] ^ w[(50) & 15]) >> (32 - 1)))); v1 = (((v1) >> 2) | ((v1) << (32 - 2))); v3 += (((v4) >> 27) | ((v4) << (32 - 27))) + (((v0) & (v1)) | ((v2) & ((v0) ^ (v1)))) + 0x8f1bbcdc + (w[(50 +1) & 15] = (((w[((50 +1) + 13) & 15] ^ w[((50 +1) + 8) & 15] ^ w[((50 +1) + 2) & 15] ^ w[(50 +1) & 15]) << 1) | ((w[((50 +1) + 13) & 15] ^ w[((50 +1) + 8) & 15] ^ w[((50 +1) + 2) & 15] ^ w[(50 +1) & 15]) >> (32 - 1)))); v0 = (((v0) >> 2) | ((v0) << (32 - 2))); v2 += (((v3) >> 27) | ((v3) << (32 - 27))) + (((v4) & (v0)) | ((v1) & ((v4) ^ (v0)))) + 0x8f1bbcdc + (w[(50 +2) & 15] = (((w[((50 +2) + 13) & 15] ^ w[((50 +2) + 8) & 15] ^ w[((50 +2) + 2) & 15] ^ w[(50 +2) & 15]) << 1) | ((w[((50 +2) + 13) & 15] ^ w[((50 +2) + 8) & 15] ^ w[((50 +2) + 2) & 15] ^ w[(50 +2) & 15]) >> (32 - 1)))); v4 = (((v4) >> 2) | ((v4) << (32 - 2))); v1 += (((v2) >> 27) | ((v2) << (32 - 27))) + (((v3) & (v4)) | ((v0) & ((v3) ^ (v4)))) + 0x8f1bbcdc + (w[(50 +3) & 15] = (((w[((50 +3) + 13) & 15] ^ w[((50 +3) + 8) & 15] ^ w[((50 +3) + 2) & 15] ^ w[(50 +3) & 15]) << 1) | ((w[((50 +3) + 13) & 15] ^ w[((50 +3) + 8) & 15] ^ w[((50 +3) + 2) & 15] ^ w[(50 +3) & 15]) >> (32 - 1)))); v3 = (((v3) >> 2) | ((v3) << (32 - 2))); v0 += (((v1) >> 27) | ((v1) << (32 - 27))) + (((v2) & (v3)) | ((v4) & ((v2) ^ (v3)))) + 0x8f1bbcdc + (w[(50 +4) & 15] = (((w[((50 +4) + 13) & 15] ^ w[((50 +4) + 8) & 15] ^ w[((50 +4) + 2) & 15] ^ w[(50 +4) & 15]) << 1) | ((w[((50 +4) + 13) & 15] ^ w[((50 +4) + 8) & 15] ^ w[((50 +4) + 2) & 15] ^ w[(50 +4) & 15]) >> (32 - 1)))); v2 = (((v2) >> 2) | ((v2) << (32 - 2)));
# 233 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
    v4 += (((v0) >> 27) | ((v0) << (32 - 27))) + (((v1) & (v2)) | ((v3) & ((v1) ^ (v2)))) + 0x8f1bbcdc + (w[(55) & 15] = (((w[((55) + 13) & 15] ^ w[((55) + 8) & 15] ^ w[((55) + 2) & 15] ^ w[(55) & 15]) << 1) | ((w[((55) + 13) & 15] ^ w[((55) + 8) & 15] ^ w[((55) + 2) & 15] ^ w[(55) & 15]) >> (32 - 1)))); v1 = (((v1) >> 2) | ((v1) << (32 - 2))); v3 += (((v4) >> 27) | ((v4) << (32 - 27))) + (((v0) & (v1)) | ((v2) & ((v0) ^ (v1)))) + 0x8f1bbcdc + (w[(55 +1) & 15] = (((w[((55 +1) + 13) & 15] ^ w[((55 +1) + 8) & 15] ^ w[((55 +1) + 2) & 15] ^ w[(55 +1) & 15]) << 1) | ((w[((55 +1) + 13) & 15] ^ w[((55 +1) + 8) & 15] ^ w[((55 +1) + 2) & 15] ^ w[(55 +1) & 15]) >> (32 - 1)))); v0 = (((v0) >> 2) | ((v0) << (32 - 2))); v2 += (((v3) >> 27) | ((v3) << (32 - 27))) + (((v4) & (v0)) | ((v1) & ((v4) ^ (v0)))) + 0x8f1bbcdc + (w[(55 +2) & 15] = (((w[((55 +2) + 13) & 15] ^ w[((55 +2) + 8) & 15] ^ w[((55 +2) + 2) & 15] ^ w[(55 +2) & 15]) << 1) | ((w[((55 +2) + 13) & 15] ^ w[((55 +2) + 8) & 15] ^ w[((55 +2) + 2) & 15] ^ w[(55 +2) & 15]) >> (32 - 1)))); v4 = (((v4) >> 2) | ((v4) << (32 - 2))); v1 += (((v2) >> 27) | ((v2) << (32 - 27))) + (((v3) & (v4)) | ((v0) & ((v3) ^ (v4)))) + 0x8f1bbcdc + (w[(55 +3) & 15] = (((w[((55 +3) + 13) & 15] ^ w[((55 +3) + 8) & 15] ^ w[((55 +3) + 2) & 15] ^ w[(55 +3) & 15]) << 1) | ((w[((55 +3) + 13) & 15] ^ w[((55 +3) + 8) & 15] ^ w[((55 +3) + 2) & 15] ^ w[(55 +3) & 15]) >> (32 - 1)))); v3 = (((v3) >> 2) | ((v3) << (32 - 2))); v0 += (((v1) >> 27) | ((v1) << (32 - 27))) + (((v2) & (v3)) | ((v4) & ((v2) ^ (v3)))) + 0x8f1bbcdc + (w[(55 +4) & 15] = (((w[((55 +4) + 13) & 15] ^ w[((55 +4) + 8) & 15] ^ w[((55 +4) + 2) & 15] ^ w[(55 +4) & 15]) << 1) | ((w[((55 +4) + 13) & 15] ^ w[((55 +4) + 8) & 15] ^ w[((55 +4) + 2) & 15] ^ w[(55 +4) & 15]) >> (32 - 1)))); v2 = (((v2) >> 2) | ((v2) << (32 - 2)));
# 234 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
# 235 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
    v4 += (((v0) >> 27) | ((v0) << (32 - 27))) + ((v1) ^ (v2) ^ (v3)) + 0xca62c1d6 + (w[(60) & 15] = (((w[((60) + 13) & 15] ^ w[((60) + 8) & 15] ^ w[((60) + 2) & 15] ^ w[(60) & 15]) << 1) | ((w[((60) + 13) & 15] ^ w[((60) + 8) & 15] ^ w[((60) + 2) & 15] ^ w[(60) & 15]) >> (32 - 1)))); v1 = (((v1) >> 2) | ((v1) << (32 - 2))); v3 += (((v4) >> 27) | ((v4) << (32 - 27))) + ((v0) ^ (v1) ^ (v2)) + 0xca62c1d6 + (w[(60 +1) & 15] = (((w[((60 +1) + 13) & 15] ^ w[((60 +1) + 8) & 15] ^ w[((60 +1) + 2) & 15] ^ w[(60 +1) & 15]) << 1) | ((w[((60 +1) + 13) & 15] ^ w[((60 +1) + 8) & 15] ^ w[((60 +1) + 2) & 15] ^ w[(60 +1) & 15]) >> (32 - 1)))); v0 = (((v0) >> 2) | ((v0) << (32 - 2))); v2 += (((v3) >> 27) | ((v3) << (32 - 27))) + ((v4) ^ (v0) ^ (v1)) + 0xca62c1d6 + (w[(60 +2) & 15] = (((w[((60 +2) + 13) & 15] ^ w[((60 +2) + 8) & 15] ^ w[((60 +2) + 2) & 15] ^ w[(60 +2) & 15]) << 1) | ((w[((60 +2) + 13) & 15] ^ w[((60 +2) + 8) & 15] ^ w[((60 +2) + 2) & 15] ^ w[(60 +2) & 15]) >> (32 - 1)))); v4 = (((v4) >> 2) | ((v4) << (32 - 2))); v1 += (((v2) >> 27) | ((v2) << (32 - 27))) + ((v3) ^ (v4) ^ (v0)) + 0xca62c1d6 + (w[(60 +3) & 15] = (((w[((60 +3) + 13) & 15] ^ w[((60 +3) + 8) & 15] ^ w[((60 +3) + 2) & 15] ^ w[(60 +3) & 15]) << 1) | ((w[((60 +3) + 13) & 15] ^ w[((60 +3) + 8) & 15] ^ w[((60 +3) + 2) & 15] ^ w[(60 +3) & 15]) >> (32 - 1)))); v3 = (((v3) >> 2) | ((v3) << (32 - 2))); v0 += (((v1) >> 27) | ((v1) << (32 - 27))) + ((v2) ^ (v3) ^ (v4)) + 0xca62c1d6 + (w[(60 +4) & 15] = (((w[((60 +4) + 13) & 15] ^ w[((60 +4) + 8) & 15] ^ w[((60 +4) + 2) & 15] ^ w[(60 +4) & 15]) << 1) | ((w[((60 +4) + 13) & 15] ^ w[((60 +4) + 8) & 15] ^ w[((60 +4) + 2) & 15] ^ w[(60 +4) & 15]) >> (32 - 1)))); v2 = (((v2) >> 2) | ((v2) << (32 - 2)));
# 236 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
    v4 += (((v0) >> 27) | ((v0) << (32 - 27))) + ((v1) ^ (v2) ^ (v3)) + 0xca62c1d6 + (w[(65) & 15] = (((w[((65) + 13) & 15] ^ w[((65) + 8) & 15] ^ w[((65) + 2) & 15] ^ w[(65) & 15]) << 1) | ((w[((65) + 13) & 15] ^ w[((65) + 8) & 15] ^ w[((65) + 2) & 15] ^ w[(65) & 15]) >> (32 - 1)))); v1 = (((v1) >> 2) | ((v1) << (32 - 2))); v3 += (((v4) >> 27) | ((v4) << (32 - 27))) + ((v0) ^ (v1) ^ (v2)) + 0xca62c1d6 + (w[(65 +1) & 15] = (((w[((65 +1) + 13) & 15] ^ w[((65 +1) + 8) & 15] ^ w[((65 +1) + 2) & 15] ^ w[(65 +1) & 15]) << 1) | ((w[((65 +1) + 13) & 15] ^ w[((65 +1) + 8) & 15] ^ w[((65 +1) + 2) & 15] ^ w[(65 +1) & 15]) >> (32 - 1)))); v0 = (((v0) >> 2) | ((v0) << (32 - 2))); v2 += (((v3) >> 27) | ((v3) << (32 - 27))) + ((v4) ^ (v0) ^ (v1)) + 0xca62c1d6 + (w[(65 +2) & 15] = (((w[((65 +2) + 13) & 15] ^ w[((65 +2) + 8) & 15] ^ w[((65 +2) + 2) & 15] ^ w[(65 +2) & 15]) << 1) | ((w[((65 +2) + 13) & 15] ^ w[((65 +2) + 8) & 15] ^ w[((65 +2) + 2) & 15] ^ w[(65 +2) & 15]) >> (32 - 1)))); v4 = (((v4) >> 2) | ((v4) << (32 - 2))); v1 += (((v2) >> 27) | ((v2) << (32 - 27))) + ((v3) ^ (v4) ^ (v0)) + 0xca62c1d6 + (w[(65 +3) & 15] = (((w[((65 +3) + 13) & 15] ^ w[((65 +3) + 8) & 15] ^ w[((65 +3) + 2) & 15] ^ w[(65 +3) & 15]) << 1) | ((w[((65 +3) + 13) & 15] ^ w[((65 +3) + 8) & 15] ^ w[((65 +3) + 2) & 15] ^ w[(65 +3) & 15]) >> (32 - 1)))); v3 = (((v3) >> 2) | ((v3) << (32 - 2))); v0 += (((v1) >> 27) | ((v1) << (32 - 27))) + ((v2) ^ (v3) ^ (v4)) + 0xca62c1d6 + (w[(65 +4) & 15] = (((w[((65 +4) + 13) & 15] ^ w[((65 +4) + 8) & 15] ^ w[((65 +4) + 2) & 15] ^ w[(65 +4) & 15]) << 1) | ((w[((65 +4) + 13) & 15] ^ w[((65 +4) + 8) & 15] ^ w[((65 +4) + 2) & 15] ^ w[(65 +4) & 15]) >> (32 - 1)))); v2 = (((v2) >> 2) | ((v2) << (32 - 2)));
# 237 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
    v4 += (((v0) >> 27) | ((v0) << (32 - 27))) + ((v1) ^ (v2) ^ (v3)) + 0xca62c1d6 + (w[(70) & 15] = (((w[((70) + 13) & 15] ^ w[((70) + 8) & 15] ^ w[((70) + 2) & 15] ^ w[(70) & 15]) << 1) | ((w[((70) + 13) & 15] ^ w[((70) + 8) & 15] ^ w[((70) + 2) & 15] ^ w[(70) & 15]) >> (32 - 1)))); v1 = (((v1) >> 2) | ((v1) << (32 - 2))); v3 += (((v4) >> 27) | ((v4) << (32 - 27))) + ((v0) ^ (v1) ^ (v2)) + 0xca62c1d6 + (w[(70 +1) & 15] = (((w[((70 +1) + 13) & 15] ^ w[((70 +1) + 8) & 15] ^ w[((70 +1) + 2) & 15] ^ w[(70 +1) & 15]) << 1) | ((w[((70 +1) + 13) & 15] ^ w[((70 +1) + 8) & 15] ^ w[((70 +1) + 2) & 15] ^ w[(70 +1) & 15]) >> (32 - 1)))); v0 = (((v0) >> 2) | ((v0) << (32 - 2))); v2 += (((v3) >> 27) | ((v3) << (32 - 27))) + ((v4) ^ (v0) ^ (v1)) + 0xca62c1d6 + (w[(70 +2) & 15] = (((w[((70 +2) + 13) & 15] ^ w[((70 +2) + 8) & 15] ^ w[((70 +2) + 2) & 15] ^ w[(70 +2) & 15]) << 1) | ((w[((70 +2) + 13) & 15] ^ w[((70 +2) + 8) & 15] ^ w[((70 +2) + 2) & 15] ^ w[(70 +2) & 15]) >> (32 - 1)))); v4 = (((v4) >> 2) | ((v4) << (32 - 2))); v1 += (((v2) >> 27) | ((v2) << (32 - 27))) + ((v3) ^ (v4) ^ (v0)) + 0xca62c1d6 + (w[(70 +3) & 15] = (((w[((70 +3) + 13) & 15] ^ w[((70 +3) + 8) & 15] ^ w[((70 +3) + 2) & 15] ^ w[(70 +3) & 15]) << 1) | ((w[((70 +3) + 13) & 15] ^ w[((70 +3) + 8) & 15] ^ w[((70 +3) + 2) & 15] ^ w[(70 +3) & 15]) >> (32 - 1)))); v3 = (((v3) >> 2) | ((v3) << (32 - 2))); v0 += (((v1) >> 27) | ((v1) << (32 - 27))) + ((v2) ^ (v3) ^ (v4)) + 0xca62c1d6 + (w[(70 +4) & 15] = (((w[((70 +4) + 13) & 15] ^ w[((70 +4) + 8) & 15] ^ w[((70 +4) + 2) & 15] ^ w[(70 +4) & 15]) << 1) | ((w[((70 +4) + 13) & 15] ^ w[((70 +4) + 8) & 15] ^ w[((70 +4) + 2) & 15] ^ w[(70 +4) & 15]) >> (32 - 1)))); v2 = (((v2) >> 2) | ((v2) << (32 - 2)));
# 238 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
    v4 += (((v0) >> 27) | ((v0) << (32 - 27))) + ((v1) ^ (v2) ^ (v3)) + 0xca62c1d6 + (w[(75) & 15] = (((w[((75) + 13) & 15] ^ w[((75) + 8) & 15] ^ w[((75) + 2) & 15] ^ w[(75) & 15]) << 1) | ((w[((75) + 13) & 15] ^ w[((75) + 8) & 15] ^ w[((75) + 2) & 15] ^ w[(75) & 15]) >> (32 - 1)))); v1 = (((v1) >> 2) | ((v1) << (32 - 2))); v3 += (((v4) >> 27) | ((v4) << (32 - 27))) + ((v0) ^ (v1) ^ (v2)) + 0xca62c1d6 + (w[(75 +1) & 15] = (((w[((75 +1) + 13) & 15] ^ w[((75 +1) + 8) & 15] ^ w[((75 +1) + 2) & 15] ^ w[(75 +1) & 15]) << 1) | ((w[((75 +1) + 13) & 15] ^ w[((75 +1) + 8) & 15] ^ w[((75 +1) + 2) & 15] ^ w[(75 +1) & 15]) >> (32 - 1)))); v0 = (((v0) >> 2) | ((v0) << (32 - 2))); v2 += (((v3) >> 27) | ((v3) << (32 - 27))) + ((v4) ^ (v0) ^ (v1)) + 0xca62c1d6 + (w[(75 +2) & 15] = (((w[((75 +2) + 13) & 15] ^ w[((75 +2) + 8) & 15] ^ w[((75 +2) + 2) & 15] ^ w[(75 +2) & 15]) << 1) | ((w[((75 +2) + 13) & 15] ^ w[((75 +2) + 8) & 15] ^ w[((75 +2) + 2) & 15] ^ w[(75 +2) & 15]) >> (32 - 1)))); v4 = (((v4) >> 2) | ((v4) << (32 - 2))); v1 += (((v2) >> 27) | ((v2) << (32 - 27))) + ((v3) ^ (v4) ^ (v0)) + 0xca62c1d6 + (w[(75 +3) & 15] = (((w[((75 +3) + 13) & 15] ^ w[((75 +3) + 8) & 15] ^ w[((75 +3) + 2) & 15] ^ w[(75 +3) & 15]) << 1) | ((w[((75 +3) + 13) & 15] ^ w[((75 +3) + 8) & 15] ^ w[((75 +3) + 2) & 15] ^ w[(75 +3) & 15]) >> (32 - 1)))); v3 = (((v3) >> 2) | ((v3) << (32 - 2))); v0 += (((v1) >> 27) | ((v1) << (32 - 27))) + ((v2) ^ (v3) ^ (v4)) + 0xca62c1d6 + (w[(75 +4) & 15] = (((w[((75 +4) + 13) & 15] ^ w[((75 +4) + 8) & 15] ^ w[((75 +4) + 2) & 15] ^ w[(75 +4) & 15]) << 1) | ((w[((75 +4) + 13) & 15] ^ w[((75 +4) + 8) & 15] ^ w[((75 +4) + 2) & 15] ^ w[(75 +4) & 15]) >> (32 - 1)))); v2 = (((v2) >> 2) | ((v2) << (32 - 2)));
# 239 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
# 240 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
# 241 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
# 242 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
# 243 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
# 244 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
# 245 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
    ctx->hash[0] += v0; ctx->hash[1] += v1;
# 246 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
    ctx->hash[2] += v2; ctx->hash[3] += v3;
# 247 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
    ctx->hash[4] += v4;
# 248 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
# 249 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
}
# 250 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
# 251 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
void sha1_begin(sha1_ctx ctx[1])
# 252 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
{
# 253 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
    ctx->count[0] = ctx->count[1] = 0;
# 254 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
    ctx->hash[0] = 0x67452301;
# 255 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
    ctx->hash[1] = 0xefcdab89;
# 256 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
    ctx->hash[2] = 0x98badcfe;
# 257 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
    ctx->hash[3] = 0x10325476;
# 258 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
    ctx->hash[4] = 0xc3d2e1f0;
# 259 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
}
# 260 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
# 261 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
# 262 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
# 263 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
# 264 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
void sha1_hash(const unsigned char data[], unsigned long len, sha1_ctx ctx[1])
# 265 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
{ uint_32t pos = (uint_32t)(ctx->count[0] & (64 - 1)),
# 266 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
            space = 64 - pos;
# 267 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
    const unsigned char *sp = data;
# 268 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
# 269 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
    if((ctx->count[0] += len) < len)
# 270 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
        ++(ctx->count[1]);
# 271 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
# 272 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
    while(len >= space)
# 273 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
    {
# 274 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
        memcpy(((unsigned char*)ctx->wbuf) + pos, sp, space);
# 275 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
        sp += space; len -= space; space = 64; pos = 0;
# 276 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
        { int _i = (64 >> 2); while(_i--) ((uint_32t*)ctx->wbuf)[_i] = ((((((((uint_32t*)ctx->wbuf)[_i])) >> 24) | (((((uint_32t*)ctx->wbuf)[_i])) << (32 - 24))) & 0x00ff00ff) | (((((((uint_32t*)ctx->wbuf)[_i])) >> 8) | (((((uint_32t*)ctx->wbuf)[_i])) << (32 - 8))) & 0xff00ff00)); };
# 277 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
        sha1_compile(ctx);
# 278 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
    }
# 279 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
# 280 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
    memcpy(((unsigned char*)ctx->wbuf) + pos, sp, len);
# 281 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
}
# 282 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
# 283 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
# 284 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
# 285 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
void sha1_end(unsigned char hval[], sha1_ctx ctx[1])
# 286 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
{ uint_32t i = (uint_32t)(ctx->count[0] & (64 - 1));
# 287 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
# 288 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
# 289 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
# 290 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
# 291 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
    { int _i = ((i + 3) >> 2); while(_i--) ((uint_32t*)ctx->wbuf)[_i] = ((((((((uint_32t*)ctx->wbuf)[_i])) >> 24) | (((((uint_32t*)ctx->wbuf)[_i])) << (32 - 24))) & 0x00ff00ff) | (((((((uint_32t*)ctx->wbuf)[_i])) >> 8) | (((((uint_32t*)ctx->wbuf)[_i])) << (32 - 8))) & 0xff00ff00)); };
# 292 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
# 293 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
# 294 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
# 295 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
# 296 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
# 297 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
    ctx->wbuf[i >> 2] &= 0xffffff80 << 8 * (~i & 3);
# 298 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
    ctx->wbuf[i >> 2] |= 0x00000080 << 8 * (~i & 3);
# 299 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
# 300 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
# 301 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
# 302 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
# 303 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
    if(i > 64 - 9)
# 304 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
    {
# 305 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
        if(i < 60) ctx->wbuf[15] = 0;
# 306 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
        sha1_compile(ctx);
# 307 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
        i = 0;
# 308 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
    }
# 309 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
    else
# 310 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
        i = (i >> 2) + 1;
# 311 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
# 312 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
    while(i < 14)
# 313 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
        ctx->wbuf[i++] = 0;
# 314 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
# 315 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
# 316 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
# 317 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
# 318 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
# 319 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
    ctx->wbuf[14] = (ctx->count[1] << 3) | (ctx->count[0] >> 29);
# 320 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
    ctx->wbuf[15] = ctx->count[0] << 3;
# 321 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
    sha1_compile(ctx);
# 322 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
# 323 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
# 324 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
# 325 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
    for(i = 0; i < 20; ++i)
# 326 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
        hval[i] = (unsigned char)(ctx->hash[i >> 2] >> (8 * (~i & 3)));
# 327 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
}
# 328 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
# 329 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
void sha1(unsigned char hval[], const unsigned char data[], unsigned long len)
# 330 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
{ sha1_ctx cx[1];
# 331 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
# 332 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
    sha1_begin(cx); sha1_hash(data, len, cx); sha1_end(hval, cx);
# 333 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
}
# 334 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
# 335 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
# 336 "/Users/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
}


static int module_init() {
    init_module(3105055156744228427UL, 18, 2, 3105055156744228427UL + 568UL, 3105055156744228427UL + 586UL, 3105055156744228427UL + 607UL, 3105055156744228427UL + 4919UL, 3105055156744228427UL + 4926UL, 3105055156744228427UL + 4947UL, 3105055156744228427UL + 4925UL, 3105055156744228427UL + 4946UL, 3105055156744228427UL + 608UL, 3105055156744228427UL + 4919UL, 3105055156744228427UL + 567UL, 3105055156744228427UL + 585UL, 3105055156744228427UL + 1UL, 3105055156744228427UL + 63UL, 3105055156744228427UL + 436UL, 3105055156744228427UL + 480UL, 3105055156744228427UL + 247UL, 3105055156744228427UL + 434UL, 3105055156744228427UL + 246UL, 3105055156744228427UL + 433UL, 3105055156744228427UL + 521UL, 3105055156744228427UL + 566UL, 3105055156744228427UL + 67UL, 3105055156744228427UL + 99UL, 3105055156744228427UL + 102UL, 3105055156744228427UL + 245UL, 3105055156744228427UL + 100UL, 3105055156744228427UL + 243UL, 3105055156744228427UL + 435UL, 3105055156744228427UL + 479UL, 3105055156744228427UL + 482UL, 3105055156744228427UL + 520UL, 3105055156744228427UL + 589UL, 3105055156744228427UL + 605UL, 3105055156744228427UL + 105UL, 3105055156744228427UL + 243UL, "sha1_ctx_s", 3, "[ 2 x unsigned int ]", (int)__builtin_offsetof (struct sha1_ctx_s, count), "[ 5 x unsigned int ]", (int)__builtin_offsetof (struct sha1_ctx_s, hash), "[ 16 x unsigned int ]", (int)__builtin_offsetof (struct sha1_ctx_s, wbuf), "state_t", 1, "[ 20 x unsigned char ]", (int)__builtin_offsetof (struct state_t, state));
    return 0;
}

static int __libchimes_module_init = module_init();
