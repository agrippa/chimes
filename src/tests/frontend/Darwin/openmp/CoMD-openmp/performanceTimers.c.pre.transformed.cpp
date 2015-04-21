# 1 "performanceTimers.c.pre.transformed.cpp"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/local/lib/gcc/x86_64-apple-darwin14.0.0/4.9.2/include/stddef.h" 1 3 4
# 147 "/usr/local/lib/gcc/x86_64-apple-darwin14.0.0/4.9.2/include/stddef.h" 3 4
typedef long int ptrdiff_t;
# 212 "/usr/local/lib/gcc/x86_64-apple-darwin14.0.0/4.9.2/include/stddef.h" 3 4
typedef long unsigned int size_t;
# 1 "<command-line>" 2
# 1 "performanceTimers.c.pre.transformed.cpp"
# 1 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
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
extern int alias_group_changed(int ngroups, ...);
extern void *malloc_wrapper(size_t nbytes, size_t group, int is_ptr,
        int is_struct, ...);
extern void *calloc_wrapper(size_t num, size_t size, size_t group, int is_ptr,
        int is_struct, ...);
extern void *realloc_wrapper(void *ptr, size_t nbytes, size_t group);
extern void free_wrapper(void *ptr, size_t group);

extern unsigned entering_omp_parallel(unsigned lbl, size_t *region_id,
        unsigned nlocals, ...);
extern void register_thread_local_stack_vars(unsigned thread,
        unsigned parent, bool is_parallel_for, unsigned parent_stack_depth,
        size_t region_id, unsigned nlocals, ...);
extern void leaving_omp_parallel(int expected_parent_stack_depth,
        size_t region_id);
extern unsigned get_parent_vars_stack_depth();
extern unsigned get_thread_stack_depth();

extern void chimes_error();
# 55 "/Users/jmg3/num-debug/src/libchimes/libchimes.h"
inline unsigned LIBCHIMES_THREAD_NUM() { return 0; }


extern int ____chimes_replaying;
# 1 "<command-line>" 2
# 1 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 29 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 1 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.h" 1





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
# 7 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.h" 2


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
# 30 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c" 2
# 30 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 31 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"

# 1 "/usr/include/sys/time.h" 1 3 4
# 75 "/usr/include/sys/time.h" 3 4
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
# 76 "/usr/include/sys/time.h" 2 3 4
# 1 "/usr/include/sys/_types/_timespec.h" 1 3 4
# 30 "/usr/include/sys/_types/_timespec.h" 3 4
struct timespec
{
 __darwin_time_t tv_sec;
 long tv_nsec;
};
# 77 "/usr/include/sys/time.h" 2 3 4
# 1 "/usr/include/sys/_types/_timeval.h" 1 3 4
# 30 "/usr/include/sys/_types/_timeval.h" 3 4
struct timeval
{
 __darwin_time_t tv_sec;
 __darwin_suseconds_t tv_usec;
};
# 78 "/usr/include/sys/time.h" 2 3 4

# 1 "/usr/include/sys/_types/_time_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_time_t.h" 3 4
typedef __darwin_time_t time_t;
# 80 "/usr/include/sys/time.h" 2 3 4
# 1 "/usr/include/sys/_types/_suseconds_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_suseconds_t.h" 3 4
typedef __darwin_suseconds_t suseconds_t;
# 81 "/usr/include/sys/time.h" 2 3 4





struct itimerval {
 struct timeval it_interval;
 struct timeval it_value;
};
# 105 "/usr/include/sys/time.h" 3 4
# 1 "/usr/include/sys/_types/_fd_setsize.h" 1 3 4
# 106 "/usr/include/sys/time.h" 2 3 4
# 1 "/usr/include/sys/_types/_fd_set.h" 1 3 4
# 107 "/usr/include/sys/time.h" 2 3 4
# 1 "/usr/include/sys/_types/_fd_clr.h" 1 3 4
# 108 "/usr/include/sys/time.h" 2 3 4
# 1 "/usr/include/sys/_types/_fd_isset.h" 1 3 4
# 109 "/usr/include/sys/time.h" 2 3 4
# 1 "/usr/include/sys/_types/_fd_zero.h" 1 3 4
# 110 "/usr/include/sys/time.h" 2 3 4



# 1 "/usr/include/sys/_types/_fd_copy.h" 1 3 4
# 114 "/usr/include/sys/time.h" 2 3 4
# 124 "/usr/include/sys/time.h" 3 4
struct timezone {
 int tz_minuteswest;
 int tz_dsttime;
};
# 167 "/usr/include/sys/time.h" 3 4
struct clockinfo {
 int hz;
 int tick;
 int tickadj;
 int stathz;
 int profhz;
};




# 1 "/usr/include/time.h" 1 3 4
# 67 "/usr/include/time.h" 3 4
# 1 "/usr/include/sys/_types/_clock_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_clock_t.h" 3 4
typedef __darwin_clock_t clock_t;
# 68 "/usr/include/time.h" 2 3 4





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
# 179 "/usr/include/sys/time.h" 2 3 4


extern "C" {


int adjtime(const struct timeval *, struct timeval *);
int futimes(int, const struct timeval *);
int lutimes(const char *, const struct timeval *) ;
int settimeofday(const struct timeval *, const struct timezone *);


int getitimer(int, struct itimerval *);
int gettimeofday(struct timeval * , void * );

# 1 "/usr/include/sys/_select.h" 1 3 4
# 39 "/usr/include/sys/_select.h" 3 4
int select(int, fd_set * , fd_set * ,
  fd_set * , struct timeval * )




  __asm("_" "select" "$1050")




  ;
# 194 "/usr/include/sys/time.h" 2 3 4

int setitimer(int, const struct itimerval * ,
  struct itimerval * );
int utimes(const char *, const struct timeval *);

}
# 33 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c" 2
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
# 34 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c" 2
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
# 35 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c" 2
# 1 "/usr/include/inttypes.h" 1 3 4
# 227 "/usr/include/inttypes.h" 3 4
# 1 "/usr/include/sys/_types/_wchar_t.h" 1 3 4
# 228 "/usr/include/inttypes.h" 2 3 4



extern "C" {



extern intmax_t
imaxabs(intmax_t j);


typedef struct {
 intmax_t quot;
 intmax_t rem;
} imaxdiv_t;


extern imaxdiv_t
imaxdiv(intmax_t __numer, intmax_t __denom);



extern intmax_t
strtoimax(const char * __nptr,
   char ** __endptr,
   int __base);


extern uintmax_t
strtoumax(const char * __nptr,
   char ** __endptr,
   int __base);



extern intmax_t
wcstoimax(const wchar_t * __nptr,
   wchar_t ** __endptr,
   int __base);


extern uintmax_t
wcstoumax(const wchar_t * __nptr,
   wchar_t ** __endptr,
   int __base);






}
# 36 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c" 2
# 1 "/usr/local/lib/gcc/x86_64-apple-darwin14.0.0/4.9.2/include-fixed/math.h" 1 3 4
# 48 "/usr/local/lib/gcc/x86_64-apple-darwin14.0.0/4.9.2/include-fixed/math.h" 3 4
extern "C" {
# 59 "/usr/local/lib/gcc/x86_64-apple-darwin14.0.0/4.9.2/include-fixed/math.h" 3 4
    typedef float float_t;
    typedef double double_t;
# 126 "/usr/local/lib/gcc/x86_64-apple-darwin14.0.0/4.9.2/include-fixed/math.h" 3 4
extern int __math_errhandling(void);
# 159 "/usr/local/lib/gcc/x86_64-apple-darwin14.0.0/4.9.2/include-fixed/math.h" 3 4
extern int __fpclassifyf(float);
extern int __fpclassifyd(double);
extern int __fpclassifyl(long double);
# 203 "/usr/local/lib/gcc/x86_64-apple-darwin14.0.0/4.9.2/include-fixed/math.h" 3 4
inline __attribute__ ((__always_inline__)) int __inline_isfinitef(float);
inline __attribute__ ((__always_inline__)) int __inline_isfinited(double);
inline __attribute__ ((__always_inline__)) int __inline_isfinitel(long double);
inline __attribute__ ((__always_inline__)) int __inline_isinff(float);
inline __attribute__ ((__always_inline__)) int __inline_isinfd(double);
inline __attribute__ ((__always_inline__)) int __inline_isinfl(long double);
inline __attribute__ ((__always_inline__)) int __inline_isnanf(float);
inline __attribute__ ((__always_inline__)) int __inline_isnand(double);
inline __attribute__ ((__always_inline__)) int __inline_isnanl(long double);
inline __attribute__ ((__always_inline__)) int __inline_isnormalf(float);
inline __attribute__ ((__always_inline__)) int __inline_isnormald(double);
inline __attribute__ ((__always_inline__)) int __inline_isnormall(long double);
inline __attribute__ ((__always_inline__)) int __inline_signbitf(float);
inline __attribute__ ((__always_inline__)) int __inline_signbitd(double);
inline __attribute__ ((__always_inline__)) int __inline_signbitl(long double);

inline __attribute__ ((__always_inline__)) int __inline_isfinitef(float __x) {
    return __x == __x && __builtin_fabsf(__x) != __builtin_inff();
}
inline __attribute__ ((__always_inline__)) int __inline_isfinited(double __x) {
    return __x == __x && __builtin_fabs(__x) != __builtin_inf();
}
inline __attribute__ ((__always_inline__)) int __inline_isfinitel(long double __x) {
    return __x == __x && __builtin_fabsl(__x) != __builtin_infl();
}
inline __attribute__ ((__always_inline__)) int __inline_isinff(float __x) {
    return __builtin_fabsf(__x) == __builtin_inff();
}
inline __attribute__ ((__always_inline__)) int __inline_isinfd(double __x) {
    return __builtin_fabs(__x) == __builtin_inf();
}
inline __attribute__ ((__always_inline__)) int __inline_isinfl(long double __x) {
    return __builtin_fabsl(__x) == __builtin_infl();
}
inline __attribute__ ((__always_inline__)) int __inline_isnanf(float __x) {
    return __x != __x;
}
inline __attribute__ ((__always_inline__)) int __inline_isnand(double __x) {
    return __x != __x;
}
inline __attribute__ ((__always_inline__)) int __inline_isnanl(long double __x) {
    return __x != __x;
}
inline __attribute__ ((__always_inline__)) int __inline_signbitf(float __x) {
    union { float __f; unsigned int __u; } __u;
    __u.__f = __x;
    return (int)(__u.__u >> 31);
}
inline __attribute__ ((__always_inline__)) int __inline_signbitd(double __x) {
    union { double __f; unsigned long long __u; } __u;
    __u.__f = __x;
    return (int)(__u.__u >> 63);
}

inline __attribute__ ((__always_inline__)) int __inline_signbitl(long double __x) {
    union {
        long double __ld;
        struct{ unsigned long long __m; unsigned short __sexp; } __p;
    } __u;
    __u.__ld = __x;
    return (int)(__u.__p.__sexp >> 15);
}







inline __attribute__ ((__always_inline__)) int __inline_isnormalf(float __x) {
    return __inline_isfinitef(__x) && __builtin_fabsf(__x) >= 1.17549435082228750797e-38F;
}
inline __attribute__ ((__always_inline__)) int __inline_isnormald(double __x) {
    return __inline_isfinited(__x) && __builtin_fabs(__x) >= double(2.22507385850720138309e-308L);
}
inline __attribute__ ((__always_inline__)) int __inline_isnormall(long double __x) {
    return __inline_isfinitel(__x) && __builtin_fabsl(__x) >= 3.36210314311209350626e-4932L;
}
# 337 "/usr/local/lib/gcc/x86_64-apple-darwin14.0.0/4.9.2/include-fixed/math.h" 3 4
extern float acosf(float);
extern double acos(double);
extern long double acosl(long double);

extern float asinf(float);
extern double asin(double);
extern long double asinl(long double);

extern float atanf(float);
extern double atan(double);
extern long double atanl(long double);

extern float atan2f(float, float);
extern double atan2(double, double);
extern long double atan2l(long double, long double);

extern float cosf(float);
extern double cos(double);
extern long double cosl(long double);

extern float sinf(float);
extern double sin(double);
extern long double sinl(long double);

extern float tanf(float);
extern double tan(double);
extern long double tanl(long double);

extern float acoshf(float);
extern double acosh(double);
extern long double acoshl(long double);

extern float asinhf(float);
extern double asinh(double);
extern long double asinhl(long double);

extern float atanhf(float);
extern double atanh(double);
extern long double atanhl(long double);

extern float coshf(float);
extern double cosh(double);
extern long double coshl(long double);

extern float sinhf(float);
extern double sinh(double);
extern long double sinhl(long double);

extern float tanhf(float);
extern double tanh(double);
extern long double tanhl(long double);

extern float expf(float);
extern double exp(double);
extern long double expl(long double);

extern float exp2f(float);
extern double exp2(double);
extern long double exp2l(long double);

extern float expm1f(float);
extern double expm1(double);
extern long double expm1l(long double);

extern float logf(float);
extern double log(double);
extern long double logl(long double);

extern float log10f(float);
extern double log10(double);
extern long double log10l(long double);

extern float log2f(float);
extern double log2(double);
extern long double log2l(long double);

extern float log1pf(float);
extern double log1p(double);
extern long double log1pl(long double);

extern float logbf(float);
extern double logb(double);
extern long double logbl(long double);

extern float modff(float, float *);
extern double modf(double, double *);
extern long double modfl(long double, long double *);

extern float ldexpf(float, int);
extern double ldexp(double, int);
extern long double ldexpl(long double, int);

extern float frexpf(float, int *);
extern double frexp(double, int *);
extern long double frexpl(long double, int *);

extern int ilogbf(float);
extern int ilogb(double);
extern int ilogbl(long double);

extern float scalbnf(float, int);
extern double scalbn(double, int);
extern long double scalbnl(long double, int);

extern float scalblnf(float, long int);
extern double scalbln(double, long int);
extern long double scalblnl(long double, long int);

extern float fabsf(float);
extern double fabs(double);
extern long double fabsl(long double);

extern float cbrtf(float);
extern double cbrt(double);
extern long double cbrtl(long double);

extern float hypotf(float, float);
extern double hypot(double, double);
extern long double hypotl(long double, long double);

extern float powf(float, float);
extern double pow(double, double);
extern long double powl(long double, long double);

extern float sqrtf(float);
extern double sqrt(double);
extern long double sqrtl(long double);

extern float erff(float);
extern double erf(double);
extern long double erfl(long double);

extern float erfcf(float);
extern double erfc(double);
extern long double erfcl(long double);




extern float lgammaf(float);
extern double lgamma(double);
extern long double lgammal(long double);

extern float tgammaf(float);
extern double tgamma(double);
extern long double tgammal(long double);

extern float ceilf(float);
extern double ceil(double);
extern long double ceill(long double);

extern float floorf(float);
extern double floor(double);
extern long double floorl(long double);

extern float nearbyintf(float);
extern double nearbyint(double);
extern long double nearbyintl(long double);

extern float rintf(float);
extern double rint(double);
extern long double rintl(long double);

extern long int lrintf(float);
extern long int lrint(double);
extern long int lrintl(long double);

extern float roundf(float);
extern double round(double);
extern long double roundl(long double);

extern long int lroundf(float);
extern long int lround(double);
extern long int lroundl(long double);




extern long long int llrintf(float);
extern long long int llrint(double);
extern long long int llrintl(long double);

extern long long int llroundf(float);
extern long long int llround(double);
extern long long int llroundl(long double);


extern float truncf(float);
extern double trunc(double);
extern long double truncl(long double);

extern float fmodf(float, float);
extern double fmod(double, double);
extern long double fmodl(long double, long double);

extern float remainderf(float, float);
extern double remainder(double, double);
extern long double remainderl(long double, long double);

extern float remquof(float, float, int *);
extern double remquo(double, double, int *);
extern long double remquol(long double, long double, int *);

extern float copysignf(float, float);
extern double copysign(double, double);
extern long double copysignl(long double, long double);

extern float nanf(const char *);
extern double nan(const char *);
extern long double nanl(const char *);

extern float nextafterf(float, float);
extern double nextafter(double, double);
extern long double nextafterl(long double, long double);

extern double nexttoward(double, long double);
extern float nexttowardf(float, long double);
extern long double nexttowardl(long double, long double);

extern float fdimf(float, float);
extern double fdim(double, double);
extern long double fdiml(long double, long double);

extern float fmaxf(float, float);
extern double fmax(double, double);
extern long double fmaxl(long double, long double);

extern float fminf(float, float);
extern double fmin(double, double);
extern long double fminl(long double, long double);

extern float fmaf(float, float, float);
extern double fma(double, double, double);
extern long double fmal(long double, long double, long double);
# 580 "/usr/local/lib/gcc/x86_64-apple-darwin14.0.0/4.9.2/include-fixed/math.h" 3 4
extern float __inff(void) __attribute__((deprecated));
extern double __inf(void) __attribute__((deprecated));
extern long double __infl(void) __attribute__((deprecated));

extern float __nan(void) ;
# 612 "/usr/local/lib/gcc/x86_64-apple-darwin14.0.0/4.9.2/include-fixed/math.h" 3 4
extern float __exp10f(float) ;
extern double __exp10(double) ;





inline __attribute__ ((__always_inline__)) void __sincosf(float __x, float *__sinp, float *__cosp) ;
inline __attribute__ ((__always_inline__)) void __sincos(double __x, double *__sinp, double *__cosp) ;
# 629 "/usr/local/lib/gcc/x86_64-apple-darwin14.0.0/4.9.2/include-fixed/math.h" 3 4
extern float __cospif(float) ;
extern double __cospi(double) ;
extern float __sinpif(float) ;
extern double __sinpi(double) ;
extern float __tanpif(float) ;
extern double __tanpi(double) ;






inline __attribute__ ((__always_inline__)) void __sincospif(float __x, float *__sinp, float *__cosp) ;
inline __attribute__ ((__always_inline__)) void __sincospi(double __x, double *__sinp, double *__cosp) ;






struct __float2 { float __sinval; float __cosval; };
struct __double2 { double __sinval; double __cosval; };

extern struct __float2 __sincosf_stret(float);
extern struct __double2 __sincos_stret(double);
extern struct __float2 __sincospif_stret(float);
extern struct __double2 __sincospi_stret(double);

inline __attribute__ ((__always_inline__)) void __sincosf(float __x, float *__sinp, float *__cosp) {
    const struct __float2 __stret = __sincosf_stret(__x);
    *__sinp = __stret.__sinval; *__cosp = __stret.__cosval;
}

inline __attribute__ ((__always_inline__)) void __sincos(double __x, double *__sinp, double *__cosp) {
    const struct __double2 __stret = __sincos_stret(__x);
    *__sinp = __stret.__sinval; *__cosp = __stret.__cosval;
}

inline __attribute__ ((__always_inline__)) void __sincospif(float __x, float *__sinp, float *__cosp) {
    const struct __float2 __stret = __sincospif_stret(__x);
    *__sinp = __stret.__sinval; *__cosp = __stret.__cosval;
}

inline __attribute__ ((__always_inline__)) void __sincospi(double __x, double *__sinp, double *__cosp) {
    const struct __double2 __stret = __sincospi_stret(__x);
    *__sinp = __stret.__sinval; *__cosp = __stret.__cosval;
}






extern double j0(double) ;
extern double j1(double) ;
extern double jn(int, double) ;
extern double y0(double) ;
extern double y1(double) ;
extern double yn(int, double) ;
extern double scalb(double, double);
extern int signgam;
# 727 "/usr/local/lib/gcc/x86_64-apple-darwin14.0.0/4.9.2/include-fixed/math.h" 3 4
extern long int rinttol(double) __attribute__((deprecated));

extern long int roundtol(double) __attribute__((deprecated));

extern double drem(double, double) __attribute__((deprecated));

extern int finite(double) __attribute__((deprecated));

extern double gamma(double) __attribute__((deprecated));

extern double significand(double) __attribute__((deprecated));
# 752 "/usr/local/lib/gcc/x86_64-apple-darwin14.0.0/4.9.2/include-fixed/math.h" 3 4
}
# 37 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c" 2
# 37 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 38 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"

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
# 40 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c" 2
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
# 41 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c" 2
# 1 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/yamlOutput.h" 1
# 10 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/yamlOutput.h"
extern FILE* yamlFile;

void yamlBegin(void);
void yamlEnd(void);

void yamlAppInfo(FILE* file);

void printSeparator(FILE* file);
# 42 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c" 2
# 42 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 43 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
static uint64_t getTime(void);
# 44 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
static double getTick(void);
# 45 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
static void timerStats(void);
# 46 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 47 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 48 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 49 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
char* timerName[numberOfTimers] = {
# 50 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   "total",
# 51 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   "loop",
# 52 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   "timestep",
# 53 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   "  position",
# 54 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   "  velocity",
# 55 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   "  redistribute",
# 56 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   "    atomHalo",
# 57 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   "  force",
# 58 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   "    eamHalo",
# 59 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   "commHalo",
# 60 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   "commReduce"
# 61 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
};
# 62 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 63 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 64 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 65 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
typedef struct TimersSt
# 66 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
{
# 67 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   uint64_t start;
# 68 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   uint64_t total;
# 69 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   uint64_t count;
# 70 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   uint64_t elapsed;
# 71 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 72 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   int minRank;
# 73 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   int maxRank;
# 74 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 75 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   double minValue;
# 76 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   double maxValue;
# 77 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   double average;
# 78 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   double stdev;
# 79 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
} Timers;
# 80 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 81 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 82 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
typedef struct TimerGlobalSt
# 83 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
{
# 84 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   double atomRate;
# 85 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   double atomAllRate;
# 86 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   double atomsPerUSec;
# 87 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
} TimerGlobal;
# 88 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 89 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
static Timers perfTimer[numberOfTimers];
# 90 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
static TimerGlobal perfGlobal;
# 91 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 92 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
void profileStart(const enum TimerHandle handle)
# 93 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
{new_stack((void *)(&profileStart), 1, 1, (size_t)(0UL), "profileStart|handle|0", "i32", (void *)(&handle), (size_t)4, 0, 0, 0); if (____chimes_replaying) { switch(get_next_call()) { case(2): { goto call_lbl_2; } default: { chimes_error(); } } }
# 94 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   alias_group_changed(1, (size_t)(10568076854246272995UL)); call_lbl_2: calling((void*)&getTime, 2, 0UL, 0); perfTimer[handle].start = getTime();
# 95 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
alias_group_changed(1, (size_t)(10568076854246273749UL)); rm_stack(false, 0UL); }
# 96 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 97 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
void profileStop(const enum TimerHandle handle)
# 98 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
{new_stack((void *)(&profileStop), 1, 1, (size_t)(0UL), "profileStop|handle|0", "i32", (void *)(&handle), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_0; }
# 99 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   perfTimer[handle].count += 1;
# 100 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   alias_group_changed(2, (size_t)(10568076854246273024UL), (size_t)(10568076854246273749UL)); lbl_0: uint64_t delta; register_stack_var("profileStop|delta|0", "i64", (void *)(&delta), (size_t)8, 0, 0, 0); if (____chimes_replaying) { switch(get_next_call()) { case(2): { goto call_lbl_2; } default: { chimes_error(); } } } call_lbl_2: calling((void*)&getTime, 2, 0UL, 0); delta = (getTime() - perfTimer[handle].start) ;
# 101 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   perfTimer[handle].total += delta;
# 102 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   perfTimer[handle].elapsed += delta;
# 103 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
alias_group_changed(2, (size_t)(10568076854246273025UL), (size_t)(10568076854246273749UL)); rm_stack(false, 0UL); }
# 104 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 105 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 106 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 107 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 108 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
double getElapsedTime(const enum TimerHandle handle)
# 109 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
{new_stack((void *)(&getElapsedTime), 1, 0, (size_t)(0UL)); if (____chimes_replaying) { switch(get_next_call()) { case(1): { goto call_lbl_1; } default: { chimes_error(); } } }
# 110 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
    double etime; call_lbl_1: calling((void*)&getTick, 1, 0UL, 0); etime = (getTick() * (double)perfTimer[handle].elapsed) ;
# 111 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   perfTimer[handle].elapsed = 0;
# 112 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 113 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   alias_group_changed(3, (size_t)(10568076854246273062UL), (size_t)(10568076854246273063UL), (size_t)(10568076854246273749UL)); rm_stack(false, 0UL); return etime;
# 114 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
}
# 115 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 116 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 117 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 118 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 119 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 120 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
void printPerformanceResults(int nGlobalAtoms, int printRate)
# 121 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
{new_stack((void *)(&printPerformanceResults), 2, 2, (size_t)(0UL), (size_t)(0UL), "printPerformanceResults|nGlobalAtoms|0", "i32", (void *)(&nGlobalAtoms), (size_t)4, 0, 0, 0, "printPerformanceResults|printRate|0", "i32", (void *)(&printRate), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_0; }
# 122 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 123 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   alias_group_changed(2, (size_t)(10568076854246273089UL), (size_t)(10568076854246273090UL)); call_lbl_2: calling((void*)&timerStats, 2, 0UL, 0); timerStats();
# 124 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 125 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
    call_lbl_3: calling((void*)&printRank, 3, 0UL, 0); if (!printRank()) {alias_group_changed(2, (size_t)(10568076854246273096UL), (size_t)(10568076854246273759UL)); rm_stack(false, 0UL); return;; };
# 127 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 128 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 129 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
     lbl_0: double tick; register_stack_var("printPerformanceResults|tick|0", "double", (void *)(&tick), (size_t)8, 0, 0, 0); if (____chimes_replaying) { goto lbl_1; } call_lbl_6: calling((void*)&getTick, 6, 0UL, 0); tick = (getTick()) ;
# 130 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
     lbl_1: double loopTime; register_stack_var("printPerformanceResults|loopTime|0", "double", (void *)(&loopTime), (size_t)8, 0, 0, 0); if (____chimes_replaying) { goto lbl_2; } loopTime = (perfTimer[loopTimer].total * tick) ;
# 131 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 132 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   alias_group_changed(2, (size_t)(10568076854246273091UL), (size_t)(10568076854246273092UL)); call_lbl_9: calling((void*)&getMyRank, 9, 0UL, 0); fprintf(__stdoutp, "\n\nTimings for Rank %d\n", getMyRank());
# 133 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   fprintf(__stdoutp, "        Timer        # Calls    Avg/Call (s)   Total (s)    %% Loop\n");
# 134 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   fprintf(__stdoutp, "___________________________________________________________________\n");
# 135 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   { lbl_2: int ii; register_stack_var("printPerformanceResults|ii|0", "i32", (void *)(&ii), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_3; } for ( ii = (0) ; ii<numberOfTimers; ++ii)
# 136 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   {
# 137 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
        lbl_3: double totalTime; register_stack_var("printPerformanceResults|totalTime|0", "double", (void *)(&totalTime), (size_t)8, 0, 0, 0); if (____chimes_replaying) { goto lbl_4; } totalTime = (perfTimer[ii].total * tick) ;
# 138 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
      if (perfTimer[ii].count > 0) {fprintf(__stdoutp, "%-16s%12llu     %8.4f      %8.4f    %8.2f\n", timerName[ii], perfTimer[ii].count, totalTime / (double)perfTimer[ii].count, totalTime, totalTime / loopTime * 100.); };
# 145 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   } }
# 146 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 147 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   alias_group_changed(2, (size_t)(10568076854246273093UL), (size_t)(10568076854246273094UL)); call_lbl_15: calling((void*)&getNRanks, 15, 0UL, 0); fprintf(__stdoutp, "\nTiming Statistics Across %d Ranks:\n", getNRanks());
# 148 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   fprintf(__stdoutp, "        Timer        Rank: Min(s)       Rank: Max(s)      Avg(s)    Stdev(s)\n");
# 149 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   fprintf(__stdoutp, "_____________________________________________________________________________\n");
# 150 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 151 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   { lbl_4: int ii; register_stack_var("printPerformanceResults|ii|1", "i32", (void *)(&ii), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_5; } for ( ii = (0) ; ii < numberOfTimers; ++ii)
# 152 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   {
# 153 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
      if (perfTimer[ii].count > 0) {fprintf(__stdoutp, "%-16s%6d:%10.4f  %6d:%10.4f  %10.4f  %10.4f\n", timerName[ii], perfTimer[ii].minRank, perfTimer[ii].minValue * tick, perfTimer[ii].maxRank, perfTimer[ii].maxValue * tick, perfTimer[ii].average * tick, perfTimer[ii].stdev * tick); };
# 159 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   } }
# 160 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   alias_group_changed(1, (size_t)(10568076854246273095UL)); lbl_5: double atomsPerTask; register_stack_var("printPerformanceResults|atomsPerTask|0", "double", (void *)(&atomsPerTask), (size_t)8, 0, 0, 0); if (____chimes_replaying) { switch(get_next_call()) { case(2): { goto call_lbl_2; } case(3): { goto call_lbl_3; } case(6): { goto call_lbl_6; } case(9): { goto call_lbl_9; } case(15): { goto call_lbl_15; } case(20): { goto call_lbl_20; } default: { chimes_error(); } } } call_lbl_20: calling((void*)&getNRanks, 20, 0UL, 0); atomsPerTask = (nGlobalAtoms / (real_t)getNRanks()) ;
# 161 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   perfGlobal.atomRate = perfTimer[timestepTimer].average * tick * 1e6 /
# 162 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
      (atomsPerTask * perfTimer[timestepTimer].count * printRate);
# 163 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   perfGlobal.atomAllRate = perfTimer[timestepTimer].average * tick * 1e6 /
# 164 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
      (nGlobalAtoms * perfTimer[timestepTimer].count * printRate);
# 165 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   perfGlobal.atomsPerUSec = 1.0 / perfGlobal.atomAllRate;
# 166 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 167 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   fprintf(__stdoutp, "\n---------------------------------------------------\n");
# 168 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   fprintf(__stdoutp, " Average atom update rate:     %6.2f us/atom/task\n", perfGlobal.atomRate);
# 169 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   fprintf(__stdoutp, "---------------------------------------------------\n\n");
# 170 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 171 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   fprintf(__stdoutp, "\n---------------------------------------------------\n");
# 172 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   fprintf(__stdoutp, " Average all atom update rate: %6.2f us/atom\n", perfGlobal.atomAllRate);
# 173 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   fprintf(__stdoutp, "---------------------------------------------------\n\n");
# 174 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 175 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   fprintf(__stdoutp, "\n---------------------------------------------------\n");
# 176 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   fprintf(__stdoutp, " Average atom rate:            %6.2f atoms/us\n", perfGlobal.atomsPerUSec);
# 177 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   fprintf(__stdoutp, "---------------------------------------------------\n\n");
# 178 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
alias_group_changed(2, (size_t)(10568076854246273096UL), (size_t)(10568076854246273759UL)); rm_stack(false, 0UL); }
# 179 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 180 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
void printPerformanceResultsYaml(FILE* file)
# 181 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
{new_stack((void *)(&printPerformanceResultsYaml), 1, 1, (size_t)(10568076854246273724UL), "printPerformanceResultsYaml|file|0", "%struct.__sFILE*", (void *)(&file), (size_t)8, 1, 0, 0); if (____chimes_replaying) { goto lbl_0; }
# 182 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   alias_group_changed(1, (size_t)(10568076854246273528UL)); call_lbl_2: calling((void*)&printRank, 2, 0UL, 0); if (!printRank()) {alias_group_changed(3, (size_t)(10568076854246273531UL), (size_t)(10568076854246273532UL), (size_t)(10568076854246273533UL)); rm_stack(false, 0UL); return;; };
# 184 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 185 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
     lbl_0: double tick; register_stack_var("printPerformanceResultsYaml|tick|0", "double", (void *)(&tick), (size_t)8, 0, 0, 0); if (____chimes_replaying) { goto lbl_1; } call_lbl_5: calling((void*)&getTick, 5, 0UL, 0); tick = (getTick()) ;
# 186 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
     lbl_1: double loopTime; register_stack_var("printPerformanceResultsYaml|loopTime|0", "double", (void *)(&loopTime), (size_t)8, 0, 0, 0); if (____chimes_replaying) { goto lbl_2; } loopTime = (perfTimer[loopTimer].total * tick) ;
# 187 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 188 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   fprintf(file,"\nPerformance Results:\n");
# 189 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   alias_group_changed(2, (size_t)(10568076854246273529UL), (size_t)(10568076854246273530UL)); call_lbl_9: calling((void*)&getNRanks, 9, 0UL, 0); fprintf(file, "  TotalRanks: %d\n", getNRanks());
# 190 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   fprintf(file, "  ReportingTimeUnits: seconds\n");
# 191 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
    call_lbl_12: calling((void*)&getMyRank, 12, 0UL, 0); fprintf(file, "Performance Results For Rank %d:\n", getMyRank());
# 192 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   { lbl_2: int ii; register_stack_var("printPerformanceResultsYaml|ii|0", "i32", (void *)(&ii), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_3; } for ( ii = (0) ; ii < numberOfTimers; ii++)
# 193 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   {
# 194 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
      if (perfTimer[ii].count > 0)
# 195 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
      {
# 196 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
           lbl_3: double totalTime; register_stack_var("printPerformanceResultsYaml|totalTime|0", "double", (void *)(&totalTime), (size_t)8, 0, 0, 0); if (____chimes_replaying) { goto lbl_4; } totalTime = (perfTimer[ii].total * tick) ;
# 197 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
         fprintf(file, "  Timer: %s\n", timerName[ii]);
# 198 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
         fprintf(file, "    CallCount:  %""ll" "u""\n", perfTimer[ii].count);
# 199 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
         fprintf(file, "    AvgPerCall: %8.4f\n", totalTime/(double)perfTimer[ii].count);
# 200 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
         fprintf(file, "    Total:      %8.4f\n", totalTime);
# 201 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
         fprintf(file, "    PercentLoop: %8.2f\n", totalTime/loopTime*100);
# 202 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
      }
# 203 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   } }
# 204 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 205 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   fprintf(file, "Performance Results Across Ranks:\n");
# 206 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   { lbl_4: int ii; register_stack_var("printPerformanceResultsYaml|ii|1", "i32", (void *)(&ii), (size_t)4, 0, 0, 0); if (____chimes_replaying) { switch(get_next_call()) { case(2): { goto call_lbl_2; } case(5): { goto call_lbl_5; } case(9): { goto call_lbl_9; } case(12): { goto call_lbl_12; } default: { chimes_error(); } } } for ( ii = (0) ; ii < numberOfTimers; ii++)
# 207 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   {
# 208 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
      if (perfTimer[ii].count > 0)
# 209 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
      {
# 210 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
         fprintf(file, "  Timer: %s\n", timerName[ii]);
# 211 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
         fprintf(file, "    MinRank: %d\n", perfTimer[ii].minRank);
# 212 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
         fprintf(file, "    MinTime: %8.4f\n", perfTimer[ii].minValue*tick);
# 213 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
         fprintf(file, "    MaxRank: %d\n", perfTimer[ii].maxRank);
# 214 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
         fprintf(file, "    MaxTime: %8.4f\n", perfTimer[ii].maxValue*tick);
# 215 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
         fprintf(file, "    AvgTime: %8.4f\n", perfTimer[ii].average*tick);
# 216 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
         fprintf(file, "    StdevTime: %8.4f\n", perfTimer[ii].stdev*tick);
# 217 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
      }
# 218 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   } }
# 219 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 220 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   fprintf(file,"Performance Global Update Rates:\n");
# 221 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   fprintf(file, "  AtomUpdateRate:\n");
# 222 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   fprintf(file, "    AverageRate: %6.2f\n", perfGlobal.atomRate);
# 223 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   fprintf(file, "    Units: us/atom/task\n");
# 224 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   fprintf(file, "  AllAtomUpdateRate:\n");
# 225 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   fprintf(file, "    AverageRate: %6.2f\n", perfGlobal.atomAllRate);
# 226 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   fprintf(file, "    Units: us/atom\n");
# 227 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   fprintf(file, "  AtomRate:\n");
# 228 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   fprintf(file, "    AverageRate: %6.2f\n", perfGlobal.atomsPerUSec);
# 229 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   fprintf(file, "    Units: atoms/us\n");
# 230 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 231 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   fprintf(file, "\n");
# 232 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
alias_group_changed(3, (size_t)(10568076854246273531UL), (size_t)(10568076854246273532UL), (size_t)(10568076854246273533UL)); rm_stack(false, 0UL); }
# 243 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 243 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
static uint64_t getTime(void)
# 244 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
{new_stack((void *)(&getTime), 0, 0); if (____chimes_replaying) { goto lbl_0; }
# 245 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
     lbl_0: struct timeval ptime; register_stack_var("getTime|ptime|0", "%struct.timeval = type { i64, i32 }", (void *)(&ptime), (size_t)16, 0, 1, 0); if (____chimes_replaying) { goto lbl_1; } ;
# 246 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
     lbl_1: uint64_t t; register_stack_var("getTime|t|0", "i64", (void *)(&t), (size_t)8, 0, 0, 0); if (____chimes_replaying) { switch(get_next_call()) { case(2): { goto call_lbl_2; } default: { chimes_error(); } } } t = (0) ;
# 247 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   alias_group_changed(1, (size_t)(10568076854246273009UL)); call_lbl_2: calling((void*)&gettimeofday, 2, 0UL, 2, (size_t)(10568076854246273008UL), (size_t)(10568076854246273790UL)); gettimeofday(&ptime, (struct timezone *)__null);
# 248 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   t = ((uint64_t)1000000)*(uint64_t)ptime.tv_sec + (uint64_t)ptime.tv_usec;
# 249 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 250 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   alias_group_changed(1, (size_t)(10568076854246273009UL)); rm_stack(false, 0UL); return t;
# 251 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
}
# 252 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 253 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 254 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 255 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 256 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 257 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
static double getTick(void)
# 258 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
{new_stack((void *)(&getTick), 0, 0); if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } }
# 259 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
    double seconds_per_cycle; seconds_per_cycle = (9.9999999999999995E-7) ;
# 260 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   alias_group_changed(1, (size_t)(10568076854246273084UL)); rm_stack(false, 0UL); return seconds_per_cycle;
# 261 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
}
# 262 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 263 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 264 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
void timerStats(void)
# 265 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
{new_stack((void *)(&timerStats), 0, 0); if (____chimes_replaying) { goto lbl_0; }
# 266 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
    lbl_0: double sendBuf[11]; register_stack_var("timerStats|sendBuf|0", "[11 x double]", (void *)(sendBuf), (size_t)88, 0, 0, 0); if (____chimes_replaying) { goto lbl_1; } lbl_1: double recvBuf[11]; register_stack_var("timerStats|recvBuf|0", "[11 x double]", (void *)(recvBuf), (size_t)88, 0, 0, 0); if (____chimes_replaying) { goto lbl_2; } ;
# 267 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 268 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 269 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   { lbl_2: int ii; register_stack_var("timerStats|ii|0", "i32", (void *)(&ii), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_3; } for ( ii = (0) ;ii < numberOfTimers; ii++) { sendBuf[ii] = (double)perfTimer[ii].total; } };
# 271 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   alias_group_changed(2, (size_t)(10568076854246273307UL), (size_t)(10568076854246273309UL)); call_lbl_2: calling((void*)&addDoubleParallel, 2, 0UL, 3, (size_t)(10568076854246273307UL), (size_t)(10568076854246273308UL), (size_t)(0UL)); addDoubleParallel(sendBuf, recvBuf, numberOfTimers);
# 272 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 273 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   { lbl_3: int ii; register_stack_var("timerStats|ii|1", "i32", (void *)(&ii), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_4; } for ( ii = (0) ;ii < numberOfTimers; ii++) { alias_group_changed(4, (size_t)(10568076854246273310UL), (size_t)(10568076854246273311UL), (size_t)(10568076854246273313UL), (size_t)(10568076854246273749UL)); call_lbl_4: calling((void*)&getNRanks, 4, 0UL, 0); perfTimer[ii].average = recvBuf[ii] / (double)getNRanks(); } };
# 275 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 276 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 277 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 278 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
     lbl_4: RankReduceData reduceSendBuf[11]; register_stack_var("timerStats|reduceSendBuf|0", "[11 x %struct.RankReduceDataSt]", (void *)(reduceSendBuf), (size_t)176, 0, 0, 0); if (____chimes_replaying) { goto lbl_5; } lbl_5: RankReduceData reduceRecvBuf[11]; register_stack_var("timerStats|reduceRecvBuf|0", "[11 x %struct.RankReduceDataSt]", (void *)(reduceRecvBuf), (size_t)176, 0, 0, 0); if (____chimes_replaying) { goto lbl_6; } ;
# 279 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   { lbl_6: int ii; register_stack_var("timerStats|ii|2", "i32", (void *)(&ii), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_7; } for ( ii = (0) ; ii < numberOfTimers; ii++)
# 280 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   {
# 281 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
      reduceSendBuf[ii].val = (double)perfTimer[ii].total;
# 282 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
      alias_group_changed(4, (size_t)(10568076854246273310UL), (size_t)(10568076854246273311UL), (size_t)(10568076854246273313UL), (size_t)(10568076854246273749UL)); call_lbl_6: calling((void*)&getMyRank, 6, 0UL, 0); reduceSendBuf[ii].rank = getMyRank();
# 283 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   } }
# 284 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   alias_group_changed(4, (size_t)(10568076854246273310UL), (size_t)(10568076854246273311UL), (size_t)(10568076854246273313UL), (size_t)(10568076854246273749UL)); call_lbl_8: calling((void*)&minRankDoubleParallel, 8, 0UL, 3, (size_t)(10568076854246273311UL), (size_t)(10568076854246273312UL), (size_t)(0UL)); minRankDoubleParallel(reduceSendBuf, reduceRecvBuf, numberOfTimers);
# 285 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   { lbl_7: int ii; register_stack_var("timerStats|ii|3", "i32", (void *)(&ii), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_8; } for ( ii = (0) ; ii < numberOfTimers; ii++)
# 286 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   {
# 287 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
      perfTimer[ii].minValue = reduceRecvBuf[ii].val;
# 288 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
      perfTimer[ii].minRank = reduceRecvBuf[ii].rank;
# 289 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   } }
# 290 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   alias_group_changed(2, (size_t)(10568076854246273314UL), (size_t)(10568076854246273749UL)); call_lbl_10: calling((void*)&maxRankDoubleParallel, 10, 0UL, 3, (size_t)(10568076854246273311UL), (size_t)(10568076854246273312UL), (size_t)(0UL)); maxRankDoubleParallel(reduceSendBuf, reduceRecvBuf, numberOfTimers);
# 291 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   { lbl_8: int ii; register_stack_var("timerStats|ii|4", "i32", (void *)(&ii), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_9; } for ( ii = (0) ; ii < numberOfTimers; ii++)
# 292 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   {
# 293 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
      perfTimer[ii].maxValue = reduceRecvBuf[ii].val;
# 294 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
      perfTimer[ii].maxRank = reduceRecvBuf[ii].rank;
# 295 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   } }
# 296 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 297 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 298 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   { lbl_9: int ii; register_stack_var("timerStats|ii|5", "i32", (void *)(&ii), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_10; } for ( ii = (0) ; ii < numberOfTimers; ii++)
# 299 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   {
# 300 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
        lbl_10: double temp; register_stack_var("timerStats|temp|0", "double", (void *)(&temp), (size_t)8, 0, 0, 0); if (____chimes_replaying) { goto lbl_11; } temp = ((double)perfTimer[ii].total - perfTimer[ii].average) ;
# 301 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
      sendBuf[ii] = temp * temp;
# 302 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   } }
# 303 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   alias_group_changed(5, (size_t)(10568076854246273307UL), (size_t)(10568076854246273315UL), (size_t)(10568076854246273316UL), (size_t)(10568076854246273317UL), (size_t)(10568076854246273749UL)); call_lbl_12: calling((void*)&addDoubleParallel, 12, 0UL, 3, (size_t)(10568076854246273307UL), (size_t)(10568076854246273308UL), (size_t)(0UL)); addDoubleParallel(sendBuf, recvBuf, numberOfTimers);
# 304 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   { lbl_11: int ii; register_stack_var("timerStats|ii|6", "i32", (void *)(&ii), (size_t)4, 0, 0, 0); if (____chimes_replaying) { switch(get_next_call()) { case(2): { goto call_lbl_2; } case(4): { goto call_lbl_4; } case(6): { goto call_lbl_6; } case(8): { goto call_lbl_8; } case(10): { goto call_lbl_10; } case(12): { goto call_lbl_12; } case(14): { goto call_lbl_14; } case(15): { goto call_lbl_15; } default: { chimes_error(); } } } for ( ii = (0) ; ii < numberOfTimers; ii++)
# 305 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   {
# 306 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
      alias_group_changed(2, (size_t)(10568076854246273318UL), (size_t)(10568076854246273749UL)); call_lbl_14: calling((void*)&sqrt, 14, 0UL, 1, (size_t)(0UL)); call_lbl_15: calling((void*)&getNRanks, 15, 0UL, 0); perfTimer[ii].stdev = sqrt(recvBuf[ii] / (double) getNRanks());
# 307 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   } }
# 308 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
alias_group_changed(2, (size_t)(10568076854246273318UL), (size_t)(10568076854246273749UL)); rm_stack(false, 0UL); }


static int module_init() {
    init_module(10568076854246272994UL, 3, 8, 10568076854246272994UL + 534UL, 10568076854246272994UL + 730UL, 10568076854246272994UL + 756UL, 10568076854246272994UL + 181UL, 10568076854246272994UL + 754UL, 10568076854246272994UL + 155UL, "RankReduceDataSt", 2, (int)__builtin_offsetof (struct RankReduceDataSt, val), (int)__builtin_offsetof (struct RankReduceDataSt, rank), "TimerGlobalSt", 3, (int)__builtin_offsetof (struct TimerGlobalSt, atomRate), (int)__builtin_offsetof (struct TimerGlobalSt, atomAllRate), (int)__builtin_offsetof (struct TimerGlobalSt, atomsPerUSec), "TimerHandle", 0, "TimersSt", 10, (int)__builtin_offsetof (struct TimersSt, start), (int)__builtin_offsetof (struct TimersSt, total), (int)__builtin_offsetof (struct TimersSt, count), (int)__builtin_offsetof (struct TimersSt, elapsed), (int)__builtin_offsetof (struct TimersSt, minRank), (int)__builtin_offsetof (struct TimersSt, maxRank), (int)__builtin_offsetof (struct TimersSt, minValue), (int)__builtin_offsetof (struct TimersSt, maxValue), (int)__builtin_offsetof (struct TimersSt, average), (int)__builtin_offsetof (struct TimersSt, stdev), "__sFILE", 20, (int)__builtin_offsetof (struct __sFILE, _p), (int)__builtin_offsetof (struct __sFILE, _r), (int)__builtin_offsetof (struct __sFILE, _w), (int)__builtin_offsetof (struct __sFILE, _flags), (int)__builtin_offsetof (struct __sFILE, _file), (int)__builtin_offsetof (struct __sFILE, _bf), (int)__builtin_offsetof (struct __sFILE, _lbfsize), (int)__builtin_offsetof (struct __sFILE, _cookie), (int)__builtin_offsetof (struct __sFILE, _close), (int)__builtin_offsetof (struct __sFILE, _read), (int)__builtin_offsetof (struct __sFILE, _seek), (int)__builtin_offsetof (struct __sFILE, _write), (int)__builtin_offsetof (struct __sFILE, _ub), (int)__builtin_offsetof (struct __sFILE, _extra), (int)__builtin_offsetof (struct __sFILE, _ur), (int)__builtin_offsetof (struct __sFILE, _ubuf), (int)__builtin_offsetof (struct __sFILE, _nbuf), (int)__builtin_offsetof (struct __sFILE, _lb), (int)__builtin_offsetof (struct __sFILE, _blksize), (int)__builtin_offsetof (struct __sFILE, _offset), "__sFILEX", 0, "__sbuf", 2, (int)__builtin_offsetof (struct __sbuf, _base), (int)__builtin_offsetof (struct __sbuf, _size), "timeval", 2, (int)__builtin_offsetof (struct timeval, tv_sec), (int)__builtin_offsetof (struct timeval, tv_usec));
    register_global_var("global|timerName", "[11 x i8*]*", (void *)(&timerName), 8, 1, 0, 0);
    register_global_var("global|perfTimer", "[11 x %struct.TimersSt]*", (void *)(&perfTimer), 8, 1, 0, 0);
    register_global_var("global|perfGlobal", "%struct.TimerGlobalSt*", (void *)(&perfGlobal), 8, 1, 0, 0);
    return 0;
}

static int __libchimes_module_init = module_init();
