# 1 "common.cpp.pre.transformed.cpp"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/local/lib/gcc/x86_64-apple-darwin14.0.0/4.9.2/include/stddef.h" 1 3 4
# 147 "/usr/local/lib/gcc/x86_64-apple-darwin14.0.0/4.9.2/include/stddef.h" 3 4
typedef long int ptrdiff_t;
# 212 "/usr/local/lib/gcc/x86_64-apple-darwin14.0.0/4.9.2/include/stddef.h" 3 4
typedef long unsigned int size_t;
# 1 "<command-line>" 2
# 1 "common.cpp.pre.transformed.cpp"
static int ____chimes_does_checkpoint_seconds_npm = 1;
static int ____chimes_does_checkpoint_ricker_wavelet_npm = 1;
static int ____chimes_does_checkpoint_parse_source_npm = 1;
static int ____chimes_does_checkpoint_config_sources_npm = 1;
static int ____chimes_does_checkpoint_sample_sources_npm = 1;
static int ____chimes_does_checkpoint_init_progress_npm = 1;
static int ____chimes_does_checkpoint_update_progress_npm = 1;
static int ____chimes_does_checkpoint_finish_progress_npm = 1;

static int ____must_checkpoint_seconds_tp_0 = 2;

static int ____must_manage_config_sources = 2;
static int ____must_manage_init_progress = 2;
static int ____must_manage_seconds = 2;
static int ____must_manage_finish_progress = 2;
static int ____must_manage_update_progress = 2;
static int ____must_manage_ricker_wavelet = 2;
static int ____must_manage_parse_source = 2;
static int ____must_manage_sample_sources = 2;

static unsigned ____alias_loc_id_0;
static unsigned ____alias_loc_id_1;
static unsigned ____alias_loc_id_2;
static unsigned ____alias_loc_id_3;
static unsigned ____alias_loc_id_4;
static unsigned ____alias_loc_id_5;
static unsigned ____alias_loc_id_6;
# 1 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
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
# 1 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
# 33 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
# 1 "/usr/include/sys/time.h" 1 3 4
# 67 "/usr/include/sys/time.h" 3 4
# 1 "/usr/include/sys/cdefs.h" 1 3 4
# 506 "/usr/include/sys/cdefs.h" 3 4
# 1 "/usr/include/sys/_symbol_aliasing.h" 1 3 4
# 507 "/usr/include/sys/cdefs.h" 2 3 4
# 572 "/usr/include/sys/cdefs.h" 3 4
# 1 "/usr/include/sys/_posix_availability.h" 1 3 4
# 573 "/usr/include/sys/cdefs.h" 2 3 4
# 68 "/usr/include/sys/time.h" 2 3 4
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
# 69 "/usr/include/sys/time.h" 2 3 4
# 1 "/usr/include/Availability.h" 1 3 4
# 153 "/usr/include/Availability.h" 3 4
# 1 "/usr/include/AvailabilityInternal.h" 1 3 4
# 154 "/usr/include/Availability.h" 2 3 4
# 70 "/usr/include/sys/time.h" 2 3 4





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
# 66 "/usr/include/time.h" 3 4
# 1 "/usr/include/_types.h" 1 3 4
# 39 "/usr/include/_types.h" 3 4
typedef int __darwin_nl_item;
typedef int __darwin_wctrans_t;

typedef __uint32_t __darwin_wctype_t;
# 67 "/usr/include/time.h" 2 3 4
# 1 "/usr/include/sys/_types/_clock_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_clock_t.h" 3 4
typedef __darwin_clock_t clock_t;
# 68 "/usr/include/time.h" 2 3 4
# 1 "/usr/include/sys/_types/_null.h" 1 3 4
# 69 "/usr/include/time.h" 2 3 4
# 1 "/usr/include/sys/_types/_size_t.h" 1 3 4
# 70 "/usr/include/time.h" 2 3 4



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
# 34 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp" 2
# 1 "/Users/jmg3/chimes/src/examples/cpp/include/common.h" 1
# 26 "/Users/jmg3/chimes/src/examples/cpp/include/common.h"
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
# 27 "/Users/jmg3/chimes/src/examples/cpp/include/common.h" 2
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
# 28 "/Users/jmg3/chimes/src/examples/cpp/include/common.h" 2
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
# 29 "/Users/jmg3/chimes/src/examples/cpp/include/common.h" 2
# 1 "/Users/jmg3/chimes/src/examples/cpp/include/common_cuda.h" 1




extern "C" {


extern int getNumCUDADevices();


}
# 30 "/Users/jmg3/chimes/src/examples/cpp/include/common.h" 2

typedef struct _source {
    int x, y;
    float freq;
    int t;
} source;

extern double seconds();
extern void ricker_wavelet(float *source, int nsteps, float dt, float freq);
extern void parse_source(char *optarg, source *out);
extern void config_sources(source **srcs, int *nsrcs, int dimx, int dimy,
        int nsteps);
extern float **sample_sources(source *srcs, int nsrcs, int nsteps, float dt);

extern void init_progress(int length, int goal, int disabled);
extern void update_progress(int progress);
extern void finish_progress();
# 35 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp" 2
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
# 36 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp" 2
# 1 "/usr/include/assert.h" 1 3 4
# 75 "/usr/include/assert.h" 3 4
extern "C" {
void __assert_rtn(const char *, const char *, int, const char *) __attribute__((noreturn));



}
# 37 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp" 2
# 37 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
# 38 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
static char *progress_buffer = __null;
# 39 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
static int progress_length = -1;
# 40 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
static int progress_goal = -1;
# 41 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
static int progress_num_ticks = -1;
# 42 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
static int progress_disabled = 0;
# 43 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
# 44 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
double seconds_npm();
double seconds_quick(); double seconds();
double seconds_resumable() {const int ____chimes_did_disable0 = new_stack((void *)(&seconds), "seconds", &____must_manage_seconds, 0, 0) ; struct timeval tp;
 if (____must_checkpoint_seconds_tp_0) { register_stack_vars(1, "seconds|tp|0", &____must_checkpoint_seconds_tp_0, "%struct.timeval = type { i64, i32 }", (void *)(&tp), (size_t)16, 0, 1, 0); } if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 45 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
      ;
# 46 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
     struct timezone tzp; ;
# 47 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
     int i; i = (gettimeofday(&tp, &tzp)) ;
# 48 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
    rm_stack(false, 0UL, "seconds", &____must_manage_seconds, ____alias_loc_id_0, ____chimes_did_disable0); return ((double)tp.tv_sec + (double)tp.tv_usec * 1.e-6);
# 49 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
}
# 50 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
# 51 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
void ricker_wavelet_npm(float *source, int nsteps, float dt, float freq);
void ricker_wavelet_quick(float *source, int nsteps, float dt, float freq); void ricker_wavelet(float *source, int nsteps, float dt, float freq);
void ricker_wavelet_resumable(float *source, int nsteps, float dt, float freq) {const int ____chimes_did_disable1 = new_stack((void *)(&ricker_wavelet), "ricker_wavelet", &____must_manage_ricker_wavelet, 4, 0, (size_t)(14184401387504191415UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL)) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 52 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
     float shift; shift = (-1.55939996F / freq) ;
# 53 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
# 54 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
    { int i; for ( i = (0) ; i < nsteps; i++) {
# 55 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
         float time; time = (i * dt + shift) ;
# 56 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
         float pi_freq_t; pi_freq_t = (3.14151692F * freq * time) ;
# 57 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
         float sqr_pi_freq_t; sqr_pi_freq_t = (pi_freq_t * pi_freq_t) ;
# 58 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
        source[i] = 1e5f * (1.f - 2 * sqr_pi_freq_t) * exp(-sqr_pi_freq_t);
# 59 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
    } }
# 60 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
rm_stack(false, 0UL, "ricker_wavelet", &____must_manage_ricker_wavelet, ____alias_loc_id_1, ____chimes_did_disable1); }
# 61 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
# 62 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
void parse_source_npm(char *optarg, source *out);
void parse_source_quick(char *optarg, source *out); void parse_source(char *optarg, source *out);
void parse_source_resumable(char *optarg, source *out) {const int ____chimes_did_disable2 = new_stack((void *)(&parse_source), "parse_source", &____must_manage_parse_source, 2, 0, (size_t)(14184401387504191509UL), (size_t)(14184401387504191510UL)) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 63 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
     char *x_str; x_str = (optarg) ;
# 64 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
     char *first_comma; first_comma = (strchr(x_str, ',')) ;
# 65 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
    if (first_comma == __null) {
# 66 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
        fprintf(__stderrp, "Improperly formatted argument to -p, must "
# 67 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
                "be x,y,f,t\n");
# 68 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
        exit(1);
# 69 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
    }
# 70 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
     char *y_str; y_str = (first_comma + 1) ;
# 71 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
     char *second_comma; second_comma = (strchr(y_str, ',')) ;
# 72 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
    if (second_comma == __null) {
# 73 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
        fprintf(__stderrp, "Improperly formatted argument to -p, must "
# 74 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
                "be x,y,f,t\n");
# 75 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
        exit(1);
# 76 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
    }
# 77 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
     char *freq_str; freq_str = (second_comma + 1) ;
# 78 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
     char *third_comma; third_comma = (strchr(freq_str, ',')) ;
# 79 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
    if (third_comma == __null) {
# 80 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
        fprintf(__stderrp, "Improperly formatted argument to -p, must "
# 81 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
                "be x,y,f,t\n");
# 82 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
        exit(1);
# 83 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
    }
# 84 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
     char *time_str; time_str = (third_comma + 1) ;
# 85 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
    *first_comma = '\0';
# 86 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
    *second_comma = '\0';
# 87 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
    *third_comma = '\0';
# 88 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
# 89 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
    out->x = atoi(x_str);
# 90 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
    out->y = atoi(y_str);
# 91 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
    out->freq = atof(freq_str);
# 92 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
    out->t = atoi(time_str);
# 93 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
rm_stack(false, 0UL, "parse_source", &____must_manage_parse_source, ____alias_loc_id_2, ____chimes_did_disable2); }
# 94 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
# 95 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
void config_sources_npm(source **srcs, int *nsrcs, int nx, int ny, int nsteps);
void config_sources_quick(source **srcs, int *nsrcs, int nx, int ny, int nsteps); void config_sources(source **srcs, int *nsrcs, int nx, int ny, int nsteps);
void config_sources_resumable(source **srcs, int *nsrcs, int nx, int ny, int nsteps) {const int ____chimes_did_disable3 = new_stack((void *)(&config_sources), "config_sources", &____must_manage_config_sources, 5, 0, (size_t)(14184401387504191640UL), (size_t)(14184401387504191641UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL)) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 96 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
    if (*nsrcs == 0) {
# 97 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
        *srcs = (source *)malloc_wrapper(sizeof(source), 14184401387504191584UL, 0, 1, (int)sizeof(struct _source), 0);
# 98 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
        if (*srcs == __null) {
# 99 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
            fprintf(__stderrp, "Allocation failed\n");
# 100 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
            exit(1);
# 101 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
        }
# 102 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
        (*srcs)->x = nx / 2;
# 103 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
        (*srcs)->y = ny / 2;
# 104 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
        (*srcs)->freq = 15.0f;
# 105 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
        (*srcs)->t = 0;
# 106 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
        *nsrcs = 1;
# 107 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
    }
# 108 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
# 109 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
# 110 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
    { int i; for ( i = (0) ; i < *nsrcs; i++) {
# 111 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
         source *curr; curr = ((*srcs) + i) ;
# 112 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
        if (curr->x < 0 || curr->x >= nx) {
# 113 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
            fprintf(__stderrp, "Invalid x value for source\n");
# 114 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
            exit(1);
# 115 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
        }
# 116 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
        if (curr->y < 0 || curr->y >= ny) {
# 117 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
            fprintf(__stderrp, "Invalid y value for source\n");
# 118 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
            exit(1);
# 119 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
        }
# 120 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
        if (curr->t < 0 || curr->t >= nsteps) {
# 121 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
            fprintf(__stderrp, "Invalid t value for source\n");
# 122 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
            exit(1);
# 123 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
        }
# 124 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
    } }
# 125 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
rm_stack(false, 0UL, "config_sources", &____must_manage_config_sources, ____alias_loc_id_3, ____chimes_did_disable3); }
# 126 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
# 127 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
float **sample_sources_npm(source *srcs, int nsrcs, int nsteps, float dt);
float **sample_sources_quick(source *srcs, int nsrcs, int nsteps, float dt); float **sample_sources(source *srcs, int nsrcs, int nsteps, float dt);
float **sample_sources_resumable(source *srcs, int nsrcs, int nsteps, float dt) {const int ____chimes_did_disable4 = new_stack((void *)(&sample_sources), "sample_sources", &____must_manage_sample_sources, 4, 0, (size_t)(14184401387504191723UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL)) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 128 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
     float **src_samples; src_samples = ((float **)malloc_wrapper(nsrcs * sizeof(float *), 14184401387504191664UL, 1, 0)) ;
# 129 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
    if (src_samples == __null) {
# 130 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
        fprintf(__stderrp, "Allocation failed\n");
# 131 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
        exit(1);
# 132 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
    }
# 133 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
# 134 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
    { int i; for ( i = (0) ; i < nsrcs; i++) {
# 135 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
        src_samples[i] = (float *)malloc_wrapper(nsteps * sizeof(float), 14184401387504191684UL, 0, 0);
# 136 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
        if (src_samples[i] == __null) {
# 137 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
            fprintf(__stderrp, "Allocation failed\n");
# 138 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
            exit(1);
# 139 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
        }
# 140 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
        ({ calling_npm("ricker_wavelet", 0); ricker_wavelet_npm(src_samples[i], nsteps, dt, srcs[i].freq); });
# 141 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
    } }
# 142 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
    rm_stack(true, 14184401387504191664UL, "sample_sources", &____must_manage_sample_sources, ____alias_loc_id_4, ____chimes_did_disable4); return src_samples;
# 143 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
}
# 144 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
# 145 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
void init_progress_npm(int length, int goal, int disabled);
void init_progress_quick(int length, int goal, int disabled); void init_progress(int length, int goal, int disabled);
void init_progress_resumable(int length, int goal, int disabled) {const int ____chimes_did_disable5 = new_stack((void *)(&init_progress), "init_progress", &____must_manage_init_progress, 3, 0, (size_t)(0UL), (size_t)(0UL), (size_t)(0UL)) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 146 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
    int i; ;
# 147 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
    if (progress_buffer != __null) {
# 148 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
        fprintf(__stderrp, "Progress initialized multiple times\n");
# 149 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
        exit(1);
# 150 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
    }
# 151 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
# 152 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
    if (length > 100) {
# 153 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
        fprintf(__stderrp, "Invalid progress length, must be <= 100\n");
# 154 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
        exit(1);
# 155 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
    }
# 156 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
# 157 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
    progress_disabled = disabled;
# 158 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
# 159 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
    if (disabled) {rm_stack(false, 0UL, "init_progress", &____must_manage_init_progress, ____alias_loc_id_5, ____chimes_did_disable5); return; };
# 160 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
# 161 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
    progress_buffer = (char *)malloc_wrapper(sizeof(char) * (length + 3), 14184401387504191780UL, 0, 0);
# 162 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
    (__builtin_expect(!(progress_buffer != __null), 0) ? __assert_rtn(__func__, "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp", 162, "progress_buffer != NULL") : (void)0);
# 163 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
    progress_length = length;
# 164 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
    progress_goal = goal;
# 165 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
    progress_num_ticks = 0;
# 166 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
# 167 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
    progress_buffer[0] = '|';
# 168 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
    progress_buffer[length + 1] = '|';
# 169 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
    progress_buffer[length + 2] = '\0';
# 170 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
# 171 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
    for (i = 1; i <= length; i++) {
# 172 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
        progress_buffer[i] = '-';
# 173 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
    }
# 174 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
# 175 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
    fprintf(__stderrp, "%s", progress_buffer);
# 176 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
rm_stack(false, 0UL, "init_progress", &____must_manage_init_progress, ____alias_loc_id_5, ____chimes_did_disable5); }
# 177 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
# 178 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
void update_progress_npm(int progress);
void update_progress_quick(int progress); void update_progress(int progress);
void update_progress_resumable(int progress) {const int ____chimes_did_disable6 = new_stack((void *)(&update_progress), "update_progress", &____must_manage_update_progress, 1, 0, (size_t)(0UL)) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 179 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
    int i; ;
# 180 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
# 181 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
    if (progress_disabled) {
# 182 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
        rm_stack(false, 0UL, "update_progress", &____must_manage_update_progress, ____alias_loc_id_6, ____chimes_did_disable6); return;
# 183 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
    }
# 184 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
# 185 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
    if (progress_buffer == __null) {
# 186 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
        fprintf(__stderrp, "Calling update_progress without having called "
# 187 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
                "init_progress\n");
# 188 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
        exit(1);
# 189 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
    }
# 190 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
# 191 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
     double perc_progress; perc_progress = ((double)progress / (double)progress_goal) ;
# 192 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
     int ticks; ticks = ((int)(perc_progress * progress_length)) ;
# 193 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
    if (ticks > progress_length) {
# 194 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
        ticks = progress_length;
# 195 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
    }
# 196 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
# 197 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
    if (ticks < progress_num_ticks) {
# 198 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
        fprintf(__stderrp, "Ticks went backwards?\n");
# 199 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
        exit(1);
# 200 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
    }
# 201 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
# 202 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
    if (ticks > progress_num_ticks) {
# 203 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
        for (i = 1; i < 1 + ticks; i++) {
# 204 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
            progress_buffer[i] = '=';
# 205 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
        }
# 206 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
# 207 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
        for (i = 0; i < progress_length + 2; i++) {
# 208 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
            fprintf(__stderrp, "\b");
# 209 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
        }
# 210 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
# 211 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
        fprintf(__stderrp, "%s", progress_buffer);
# 212 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
    }
# 213 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
# 214 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
    progress_num_ticks = ticks;
# 215 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
rm_stack(false, 0UL, "update_progress", &____must_manage_update_progress, ____alias_loc_id_6, ____chimes_did_disable6); }
# 216 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
# 217 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
void finish_progress_npm();
void finish_progress_quick(); void finish_progress();
void finish_progress_resumable() {const int ____chimes_did_disable7 = new_stack((void *)(&finish_progress), "finish_progress", &____must_manage_finish_progress, 0, 0) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 218 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
    if (progress_disabled) {
# 219 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
        rm_stack(false, 0UL, "finish_progress", &____must_manage_finish_progress, 0, ____chimes_did_disable7); return;
# 220 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
    }
# 221 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
# 222 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
    ({ calling_npm("update_progress", 0); update_progress_npm(progress_goal); });
# 223 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
    fprintf(__stderrp, "\n");
# 224 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
# 225 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
    free_wrapper(progress_buffer, 14184401387504191780UL);
# 226 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
rm_stack(false, 0UL, "finish_progress", &____must_manage_finish_progress, 0, ____chimes_did_disable7); }
double seconds_quick() {const int ____chimes_did_disable0 = new_stack((void *)(&seconds), "seconds", &____must_manage_seconds, 0, 0) ; struct timeval tp;
 if (____must_checkpoint_seconds_tp_0) { register_stack_vars(1, "seconds|tp|0", &____must_checkpoint_seconds_tp_0, "%struct.timeval = type { i64, i32 }", (void *)(&tp), (size_t)16, 0, 1, 0); } ; ;
# 45 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
      ;
# 46 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
     struct timezone tzp; ;
# 47 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
     int i; i = (gettimeofday(&tp, &tzp)) ;
# 48 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
    rm_stack(false, 0UL, "seconds", &____must_manage_seconds, ____alias_loc_id_0, ____chimes_did_disable0); return ((double)tp.tv_sec + (double)tp.tv_usec * 1.e-6);
# 49 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
}

double seconds() { return (____chimes_replaying ? seconds_resumable() : seconds_quick()); }

void ricker_wavelet_quick(float *source, int nsteps, float dt, float freq) {const int ____chimes_did_disable1 = new_stack((void *)(&ricker_wavelet), "ricker_wavelet", &____must_manage_ricker_wavelet, 4, 0, (size_t)(14184401387504191415UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL)) ; ; ;
# 52 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
     float shift; shift = (-1.55939996F / freq) ;
# 53 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
# 54 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
    { int i; for ( i = (0) ; i < nsteps; i++) {
# 55 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
         float time; time = (i * dt + shift) ;
# 56 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
         float pi_freq_t; pi_freq_t = (3.14151692F * freq * time) ;
# 57 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
         float sqr_pi_freq_t; sqr_pi_freq_t = (pi_freq_t * pi_freq_t) ;
# 58 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
        source[i] = 1e5f * (1.f - 2 * sqr_pi_freq_t) * exp(-sqr_pi_freq_t);
# 59 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
    } }
# 60 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
rm_stack(false, 0UL, "ricker_wavelet", &____must_manage_ricker_wavelet, ____alias_loc_id_1, ____chimes_did_disable1); }

void ricker_wavelet(float *source, int nsteps, float dt, float freq) { (____chimes_replaying ? ricker_wavelet_resumable(source, nsteps, dt, freq) : ricker_wavelet_quick(source, nsteps, dt, freq)); }

void parse_source_quick(char *optarg, source *out) {const int ____chimes_did_disable2 = new_stack((void *)(&parse_source), "parse_source", &____must_manage_parse_source, 2, 0, (size_t)(14184401387504191509UL), (size_t)(14184401387504191510UL)) ; ; ;
# 63 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
     char *x_str; x_str = (optarg) ;
# 64 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
     char *first_comma; first_comma = (strchr(x_str, ',')) ;
# 65 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
    if (first_comma == __null) {
# 66 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
        fprintf(__stderrp, "Improperly formatted argument to -p, must "
# 67 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
                "be x,y,f,t\n");
# 68 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
        exit(1);
# 69 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
    }
# 70 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
     char *y_str; y_str = (first_comma + 1) ;
# 71 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
     char *second_comma; second_comma = (strchr(y_str, ',')) ;
# 72 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
    if (second_comma == __null) {
# 73 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
        fprintf(__stderrp, "Improperly formatted argument to -p, must "
# 74 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
                "be x,y,f,t\n");
# 75 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
        exit(1);
# 76 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
    }
# 77 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
     char *freq_str; freq_str = (second_comma + 1) ;
# 78 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
     char *third_comma; third_comma = (strchr(freq_str, ',')) ;
# 79 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
    if (third_comma == __null) {
# 80 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
        fprintf(__stderrp, "Improperly formatted argument to -p, must "
# 81 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
                "be x,y,f,t\n");
# 82 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
        exit(1);
# 83 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
    }
# 84 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
     char *time_str; time_str = (third_comma + 1) ;
# 85 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
    *first_comma = '\0';
# 86 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
    *second_comma = '\0';
# 87 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
    *third_comma = '\0';
# 88 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
# 89 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
    out->x = atoi(x_str);
# 90 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
    out->y = atoi(y_str);
# 91 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
    out->freq = atof(freq_str);
# 92 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
    out->t = atoi(time_str);
# 93 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
rm_stack(false, 0UL, "parse_source", &____must_manage_parse_source, ____alias_loc_id_2, ____chimes_did_disable2); }

void parse_source(char *optarg, source *out) { (____chimes_replaying ? parse_source_resumable(optarg, out) : parse_source_quick(optarg, out)); }

void config_sources_quick(source **srcs, int *nsrcs, int nx, int ny, int nsteps) {const int ____chimes_did_disable3 = new_stack((void *)(&config_sources), "config_sources", &____must_manage_config_sources, 5, 0, (size_t)(14184401387504191640UL), (size_t)(14184401387504191641UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL)) ; ; ;
# 96 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
    if (*nsrcs == 0) {
# 97 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
        *srcs = (source *)malloc_wrapper(sizeof(source), 14184401387504191584UL, 0, 1, (int)sizeof(struct _source), 0);
# 98 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
        if (*srcs == __null) {
# 99 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
            fprintf(__stderrp, "Allocation failed\n");
# 100 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
            exit(1);
# 101 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
        }
# 102 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
        (*srcs)->x = nx / 2;
# 103 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
        (*srcs)->y = ny / 2;
# 104 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
        (*srcs)->freq = 15.0f;
# 105 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
        (*srcs)->t = 0;
# 106 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
        *nsrcs = 1;
# 107 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
    }
# 108 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
# 109 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
# 110 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
    { int i; for ( i = (0) ; i < *nsrcs; i++) {
# 111 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
         source *curr; curr = ((*srcs) + i) ;
# 112 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
        if (curr->x < 0 || curr->x >= nx) {
# 113 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
            fprintf(__stderrp, "Invalid x value for source\n");
# 114 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
            exit(1);
# 115 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
        }
# 116 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
        if (curr->y < 0 || curr->y >= ny) {
# 117 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
            fprintf(__stderrp, "Invalid y value for source\n");
# 118 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
            exit(1);
# 119 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
        }
# 120 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
        if (curr->t < 0 || curr->t >= nsteps) {
# 121 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
            fprintf(__stderrp, "Invalid t value for source\n");
# 122 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
            exit(1);
# 123 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
        }
# 124 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
    } }
# 125 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
rm_stack(false, 0UL, "config_sources", &____must_manage_config_sources, ____alias_loc_id_3, ____chimes_did_disable3); }

void config_sources(source **srcs, int *nsrcs, int nx, int ny, int nsteps) { (____chimes_replaying ? config_sources_resumable(srcs, nsrcs, nx, ny, nsteps) : config_sources_quick(srcs, nsrcs, nx, ny, nsteps)); }

float **sample_sources_quick(source *srcs, int nsrcs, int nsteps, float dt) {const int ____chimes_did_disable4 = new_stack((void *)(&sample_sources), "sample_sources", &____must_manage_sample_sources, 4, 0, (size_t)(14184401387504191723UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL)) ; ; ;
# 128 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
     float **src_samples; src_samples = ((float **)malloc_wrapper(nsrcs * sizeof(float *), 14184401387504191664UL, 1, 0)) ;
# 129 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
    if (src_samples == __null) {
# 130 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
        fprintf(__stderrp, "Allocation failed\n");
# 131 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
        exit(1);
# 132 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
    }
# 133 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
# 134 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
    { int i; for ( i = (0) ; i < nsrcs; i++) {
# 135 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
        src_samples[i] = (float *)malloc_wrapper(nsteps * sizeof(float), 14184401387504191684UL, 0, 0);
# 136 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
        if (src_samples[i] == __null) {
# 137 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
            fprintf(__stderrp, "Allocation failed\n");
# 138 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
            exit(1);
# 139 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
        }
# 140 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
        ({ calling_npm("ricker_wavelet", 0); ricker_wavelet_npm(src_samples[i], nsteps, dt, srcs[i].freq); });
# 141 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
    } }
# 142 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
    rm_stack(true, 14184401387504191664UL, "sample_sources", &____must_manage_sample_sources, ____alias_loc_id_4, ____chimes_did_disable4); return src_samples;
# 143 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
}

float **sample_sources(source *srcs, int nsrcs, int nsteps, float dt) { return (____chimes_replaying ? sample_sources_resumable(srcs, nsrcs, nsteps, dt) : sample_sources_quick(srcs, nsrcs, nsteps, dt)); }

void init_progress_quick(int length, int goal, int disabled) {const int ____chimes_did_disable5 = new_stack((void *)(&init_progress), "init_progress", &____must_manage_init_progress, 3, 0, (size_t)(0UL), (size_t)(0UL), (size_t)(0UL)) ; ; ;
# 146 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
    int i; ;
# 147 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
    if (progress_buffer != __null) {
# 148 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
        fprintf(__stderrp, "Progress initialized multiple times\n");
# 149 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
        exit(1);
# 150 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
    }
# 151 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
# 152 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
    if (length > 100) {
# 153 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
        fprintf(__stderrp, "Invalid progress length, must be <= 100\n");
# 154 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
        exit(1);
# 155 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
    }
# 156 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
# 157 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
    progress_disabled = disabled;
# 158 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
# 159 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
    if (disabled) {rm_stack(false, 0UL, "init_progress", &____must_manage_init_progress, ____alias_loc_id_5, ____chimes_did_disable5); return; };
# 160 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
# 161 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
    progress_buffer = (char *)malloc_wrapper(sizeof(char) * (length + 3), 14184401387504191780UL, 0, 0);
# 162 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
    (__builtin_expect(!(progress_buffer != __null), 0) ? __assert_rtn(__func__, "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp", 162, "progress_buffer != NULL") : (void)0);
# 163 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
    progress_length = length;
# 164 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
    progress_goal = goal;
# 165 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
    progress_num_ticks = 0;
# 166 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
# 167 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
    progress_buffer[0] = '|';
# 168 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
    progress_buffer[length + 1] = '|';
# 169 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
    progress_buffer[length + 2] = '\0';
# 170 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
# 171 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
    for (i = 1; i <= length; i++) {
# 172 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
        progress_buffer[i] = '-';
# 173 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
    }
# 174 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
# 175 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
    fprintf(__stderrp, "%s", progress_buffer);
# 176 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
rm_stack(false, 0UL, "init_progress", &____must_manage_init_progress, ____alias_loc_id_5, ____chimes_did_disable5); }

void init_progress(int length, int goal, int disabled) { (____chimes_replaying ? init_progress_resumable(length, goal, disabled) : init_progress_quick(length, goal, disabled)); }

void update_progress_quick(int progress) {const int ____chimes_did_disable6 = new_stack((void *)(&update_progress), "update_progress", &____must_manage_update_progress, 1, 0, (size_t)(0UL)) ; ; ;
# 179 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
    int i; ;
# 180 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
# 181 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
    if (progress_disabled) {
# 182 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
        rm_stack(false, 0UL, "update_progress", &____must_manage_update_progress, ____alias_loc_id_6, ____chimes_did_disable6); return;
# 183 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
    }
# 184 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
# 185 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
    if (progress_buffer == __null) {
# 186 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
        fprintf(__stderrp, "Calling update_progress without having called "
# 187 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
                "init_progress\n");
# 188 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
        exit(1);
# 189 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
    }
# 190 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
# 191 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
     double perc_progress; perc_progress = ((double)progress / (double)progress_goal) ;
# 192 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
     int ticks; ticks = ((int)(perc_progress * progress_length)) ;
# 193 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
    if (ticks > progress_length) {
# 194 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
        ticks = progress_length;
# 195 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
    }
# 196 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
# 197 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
    if (ticks < progress_num_ticks) {
# 198 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
        fprintf(__stderrp, "Ticks went backwards?\n");
# 199 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
        exit(1);
# 200 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
    }
# 201 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
# 202 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
    if (ticks > progress_num_ticks) {
# 203 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
        for (i = 1; i < 1 + ticks; i++) {
# 204 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
            progress_buffer[i] = '=';
# 205 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
        }
# 206 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
# 207 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
        for (i = 0; i < progress_length + 2; i++) {
# 208 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
            fprintf(__stderrp, "\b");
# 209 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
        }
# 210 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
# 211 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
        fprintf(__stderrp, "%s", progress_buffer);
# 212 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
    }
# 213 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
# 214 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
    progress_num_ticks = ticks;
# 215 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
rm_stack(false, 0UL, "update_progress", &____must_manage_update_progress, ____alias_loc_id_6, ____chimes_did_disable6); }

void update_progress(int progress) { (____chimes_replaying ? update_progress_resumable(progress) : update_progress_quick(progress)); }

void finish_progress_quick() {const int ____chimes_did_disable7 = new_stack((void *)(&finish_progress), "finish_progress", &____must_manage_finish_progress, 0, 0) ; ; ;
# 218 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
    if (progress_disabled) {
# 219 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
        rm_stack(false, 0UL, "finish_progress", &____must_manage_finish_progress, 0, ____chimes_did_disable7); return;
# 220 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
    }
# 221 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
# 222 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
    ({ calling_npm("update_progress", 0); update_progress_npm(progress_goal); });
# 223 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
    fprintf(__stderrp, "\n");
# 224 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
# 225 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
    free_wrapper(progress_buffer, 14184401387504191780UL);
# 226 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
rm_stack(false, 0UL, "finish_progress", &____must_manage_finish_progress, 0, ____chimes_did_disable7); }

void finish_progress() { (____chimes_replaying ? finish_progress_resumable() : finish_progress_quick()); }



double seconds_npm() {
# 45 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
    struct timeval tp;
# 46 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
    struct timezone tzp;
# 47 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
    int i = gettimeofday(&tp, &tzp);
# 48 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
    return ((double)tp.tv_sec + (double)tp.tv_usec * 1.e-6);
# 49 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
}

void ricker_wavelet_npm(float *source, int nsteps, float dt, float freq) {
# 52 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
    float shift = -1.5594f / freq;
# 53 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
# 54 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
    for (int i = 0; i < nsteps; i++) {
# 55 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
        float time = i*dt + shift;
# 56 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
        float pi_freq_t = 3.141517f * freq * time;
# 57 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
        float sqr_pi_freq_t = pi_freq_t * pi_freq_t;
# 58 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
        source[i] = 1e5f * (1.f - 2 * sqr_pi_freq_t) * exp(-sqr_pi_freq_t);
# 59 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
    }
# 60 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
}

void parse_source_npm(char *optarg, source *out) {
# 63 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
    char *x_str = optarg;
# 64 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
    char *first_comma = strchr(x_str, ',');
# 65 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
    if (first_comma == __null) {
# 66 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
        fprintf(__stderrp, "Improperly formatted argument to -p, must "
# 67 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
                "be x,y,f,t\n");
# 68 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
        exit(1);
# 69 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
    }
# 70 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
    char *y_str = first_comma + 1;
# 71 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
    char *second_comma = strchr(y_str, ',');
# 72 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
    if (second_comma == __null) {
# 73 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
        fprintf(__stderrp, "Improperly formatted argument to -p, must "
# 74 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
                "be x,y,f,t\n");
# 75 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
        exit(1);
# 76 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
    }
# 77 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
    char *freq_str = second_comma + 1;
# 78 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
    char *third_comma = strchr(freq_str, ',');
# 79 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
    if (third_comma == __null) {
# 80 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
        fprintf(__stderrp, "Improperly formatted argument to -p, must "
# 81 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
                "be x,y,f,t\n");
# 82 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
        exit(1);
# 83 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
    }
# 84 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
    char *time_str = third_comma + 1;
# 85 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
    *first_comma = '\0';
# 86 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
    *second_comma = '\0';
# 87 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
    *third_comma = '\0';
# 88 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
# 89 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
    out->x = atoi(x_str);
# 90 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
    out->y = atoi(y_str);
# 91 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
    out->freq = atof(freq_str);
# 92 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
    out->t = atoi(time_str);
# 93 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
}

void config_sources_npm(source **srcs, int *nsrcs, int nx, int ny, int nsteps) {
# 96 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
    if (*nsrcs == 0) {
# 97 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
        *srcs = (source *)malloc_wrapper(sizeof(source), 14184401387504191584UL, 0, 1, (int)sizeof(struct _source), 0);
# 98 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
        if (*srcs == __null) {
# 99 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
            fprintf(__stderrp, "Allocation failed\n");
# 100 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
            exit(1);
# 101 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
        }
# 102 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
        (*srcs)->x = nx / 2;
# 103 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
        (*srcs)->y = ny / 2;
# 104 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
        (*srcs)->freq = 15.0f;
# 105 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
        (*srcs)->t = 0;
# 106 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
        *nsrcs = 1;
# 107 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
    }
# 108 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
# 109 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
# 110 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
    for (int i = 0; i < *nsrcs; i++) {
# 111 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
        source *curr = (*srcs) + i;
# 112 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
        if (curr->x < 0 || curr->x >= nx) {
# 113 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
            fprintf(__stderrp, "Invalid x value for source\n");
# 114 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
            exit(1);
# 115 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
        }
# 116 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
        if (curr->y < 0 || curr->y >= ny) {
# 117 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
            fprintf(__stderrp, "Invalid y value for source\n");
# 118 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
            exit(1);
# 119 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
        }
# 120 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
        if (curr->t < 0 || curr->t >= nsteps) {
# 121 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
            fprintf(__stderrp, "Invalid t value for source\n");
# 122 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
            exit(1);
# 123 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
        }
# 124 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
    }
# 125 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
}

float **sample_sources_npm(source *srcs, int nsrcs, int nsteps, float dt) {
# 128 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
    float **src_samples = (float **)malloc_wrapper(nsrcs * sizeof(float *), 14184401387504191664UL, 1, 0);
# 129 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
    if (src_samples == __null) {
# 130 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
        fprintf(__stderrp, "Allocation failed\n");
# 131 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
        exit(1);
# 132 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
    }
# 133 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
# 134 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
    for (int i = 0; i < nsrcs; i++) {
# 135 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
        src_samples[i] = (float *)malloc_wrapper(nsteps * sizeof(float), 14184401387504191684UL, 0, 0);
# 136 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
        if (src_samples[i] == __null) {
# 137 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
            fprintf(__stderrp, "Allocation failed\n");
# 138 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
            exit(1);
# 139 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
        }
# 140 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
        ricker_wavelet_npm(src_samples[i], nsteps, dt, srcs[i].freq);
# 141 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
    }
# 142 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
    return src_samples;
# 143 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
}

void init_progress_npm(int length, int goal, int disabled) {
# 146 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
    int i;
# 147 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
    if (progress_buffer != __null) {
# 148 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
        fprintf(__stderrp, "Progress initialized multiple times\n");
# 149 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
        exit(1);
# 150 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
    }
# 151 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
# 152 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
    if (length > 100) {
# 153 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
        fprintf(__stderrp, "Invalid progress length, must be <= 100\n");
# 154 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
        exit(1);
# 155 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
    }
# 156 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
# 157 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
    progress_disabled = disabled;
# 158 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
# 159 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
    if (disabled) {return; };
# 160 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
# 161 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
    progress_buffer = (char *)malloc_wrapper(sizeof(char) * (length + 3), 14184401387504191780UL, 0, 0);
# 162 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
    (__builtin_expect(!(progress_buffer != __null), 0) ? __assert_rtn(__func__, "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp", 162, "progress_buffer != NULL") : (void)0);
# 163 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
    progress_length = length;
# 164 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
    progress_goal = goal;
# 165 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
    progress_num_ticks = 0;
# 166 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
# 167 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
    progress_buffer[0] = '|';
# 168 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
    progress_buffer[length + 1] = '|';
# 169 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
    progress_buffer[length + 2] = '\0';
# 170 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
# 171 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
    for (i = 1; i <= length; i++) {
# 172 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
        progress_buffer[i] = '-';
# 173 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
    }
# 174 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
# 175 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
    fprintf(__stderrp, "%s", progress_buffer);
# 176 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
}

void update_progress_npm(int progress) {
# 179 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
    int i;
# 180 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
# 181 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
    if (progress_disabled) {
# 182 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
        return;
# 183 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
    }
# 184 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
# 185 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
    if (progress_buffer == __null) {
# 186 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
        fprintf(__stderrp, "Calling update_progress without having called "
# 187 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
                "init_progress\n");
# 188 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
        exit(1);
# 189 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
    }
# 190 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
# 191 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
    double perc_progress = (double)progress / (double)progress_goal;
# 192 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
    int ticks = (int)(perc_progress * progress_length);
# 193 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
    if (ticks > progress_length) {
# 194 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
        ticks = progress_length;
# 195 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
    }
# 196 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
# 197 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
    if (ticks < progress_num_ticks) {
# 198 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
        fprintf(__stderrp, "Ticks went backwards?\n");
# 199 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
        exit(1);
# 200 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
    }
# 201 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
# 202 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
    if (ticks > progress_num_ticks) {
# 203 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
        for (i = 1; i < 1 + ticks; i++) {
# 204 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
            progress_buffer[i] = '=';
# 205 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
        }
# 206 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
# 207 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
        for (i = 0; i < progress_length + 2; i++) {
# 208 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
            fprintf(__stderrp, "\b");
# 209 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
        }
# 210 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
# 211 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
        fprintf(__stderrp, "%s", progress_buffer);
# 212 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
    }
# 213 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
# 214 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
    progress_num_ticks = ticks;
# 215 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
}

void finish_progress_npm() {
# 218 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
    if (progress_disabled) {
# 219 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
        return;
# 220 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
    }
# 221 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
# 222 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
    update_progress_npm(progress_goal);
# 223 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
    fprintf(__stderrp, "\n");
# 224 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
# 225 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
    free_wrapper(progress_buffer, 14184401387504191780UL);
# 226 "/Users/jmg3/chimes/src/examples/cpp/./lib/common.cpp"
}





static int module_init() {
    init_module(14184401387504191323UL, 19, 8, 1, 7, 8, 0, 8, 2, 0, 3,
                           &____alias_loc_id_0, (unsigned)2, (unsigned)0, (14184401387504191323UL + 1UL), (14184401387504191323UL + 3UL),
                           &____alias_loc_id_1, (unsigned)10, (unsigned)0, (14184401387504191323UL + 23UL), (14184401387504191323UL + 24UL), (14184401387504191323UL + 25UL), (14184401387504191323UL + 26UL), (14184401387504191323UL + 27UL), (14184401387504191323UL + 28UL), (14184401387504191323UL + 29UL), (14184401387504191323UL + 30UL), (14184401387504191323UL + 31UL), (14184401387504191323UL + 92UL),
                           &____alias_loc_id_2, (unsigned)13, (unsigned)0, (14184401387504191323UL + 97UL), (14184401387504191323UL + 98UL), (14184401387504191323UL + 99UL), (14184401387504191323UL + 100UL), (14184401387504191323UL + 101UL), (14184401387504191323UL + 102UL), (14184401387504191323UL + 103UL), (14184401387504191323UL + 104UL), (14184401387504191323UL + 105UL), (14184401387504191323UL + 115UL), (14184401387504191323UL + 155UL), (14184401387504191323UL + 174UL), (14184401387504191323UL + 187UL),
                           &____alias_loc_id_3, (unsigned)10, (unsigned)0, (14184401387504191323UL + 195UL), (14184401387504191323UL + 196UL), (14184401387504191323UL + 197UL), (14184401387504191323UL + 198UL), (14184401387504191323UL + 199UL), (14184401387504191323UL + 200UL), (14184401387504191323UL + 201UL), (14184401387504191323UL + 261UL), (14184401387504191323UL + 317UL), (14184401387504191323UL + 318UL),
                           &____alias_loc_id_4, (unsigned)7, (unsigned)1, (14184401387504191323UL + 323UL), (14184401387504191323UL + 324UL), (14184401387504191323UL + 325UL), (14184401387504191323UL + 326UL), (14184401387504191323UL + 327UL), (14184401387504191323UL + 328UL), (14184401387504191323UL + 341UL), "ricker_wavelet", (unsigned)1, (14184401387504191323UL + 361UL),
                           &____alias_loc_id_5, (unsigned)7, (unsigned)0, (14184401387504191323UL + 404UL), (14184401387504191323UL + 405UL), (14184401387504191323UL + 406UL), (14184401387504191323UL + 407UL), (14184401387504191323UL + 457UL), (14184401387504191323UL + 612UL), (14184401387504191323UL + 615UL),
                           &____alias_loc_id_6, (unsigned)6, (unsigned)0, (14184401387504191323UL + 457UL), (14184401387504191323UL + 502UL), (14184401387504191323UL + 503UL), (14184401387504191323UL + 504UL), (14184401387504191323UL + 505UL), (14184401387504191323UL + 615UL),
                            "seconds", (void *)(&seconds_npm), (void *)__null, 0, 0, 0UL, 1, "gettimeofday", 2, (14184401387504191323UL + 1UL), (14184401387504191323UL + 2UL), 0UL,
                            "ricker_wavelet", (void *)(&ricker_wavelet_npm), (void *)__null, 0, 4, (14184401387504191323UL + 92UL), 0UL, 0UL, 0UL, 0UL, 1, "exp", 1, 0UL, 0UL,
                            "parse_source", (void *)(&parse_source_npm), (void *)__null, 0, 2, (14184401387504191323UL + 186UL), (14184401387504191323UL + 187UL), 0UL, 13, "strchr", 2, (14184401387504191323UL + 186UL), 0UL, (14184401387504191323UL + 115UL), "fprintf", 2, (14184401387504191323UL + 120UL), (14184401387504191323UL + 607UL), 0UL, "exit", 1, 0UL, 0UL, "strchr", 2, (14184401387504191323UL + 115UL), 0UL, (14184401387504191323UL + 174UL), "fprintf", 2, (14184401387504191323UL + 120UL), (14184401387504191323UL + 607UL), 0UL, "exit", 1, 0UL, 0UL, "strchr", 2, (14184401387504191323UL + 174UL), 0UL, (14184401387504191323UL + 155UL), "fprintf", 2, (14184401387504191323UL + 120UL), (14184401387504191323UL + 607UL), 0UL, "exit", 1, 0UL, 0UL, "atoi", 1, (14184401387504191323UL + 186UL), 0UL, "atoi", 1, (14184401387504191323UL + 115UL), 0UL, "atof", 1, (14184401387504191323UL + 174UL), 0UL, "atoi", 1, (14184401387504191323UL + 155UL), 0UL,
                            "config_sources", (void *)(&config_sources_npm), (void *)__null, 0, 5, (14184401387504191323UL + 317UL), (14184401387504191323UL + 318UL), 0UL, 0UL, 0UL, 0UL, 9, "malloc", 1, 0UL, (14184401387504191323UL + 261UL), "fprintf", 2, (14184401387504191323UL + 120UL), (14184401387504191323UL + 608UL), 0UL, "exit", 1, 0UL, 0UL, "fprintf", 2, (14184401387504191323UL + 120UL), (14184401387504191323UL + 609UL), 0UL, "exit", 1, 0UL, 0UL, "fprintf", 2, (14184401387504191323UL + 120UL), (14184401387504191323UL + 609UL), 0UL, "exit", 1, 0UL, 0UL, "fprintf", 2, (14184401387504191323UL + 120UL), (14184401387504191323UL + 609UL), 0UL, "exit", 1, 0UL, 0UL,
                            "sample_sources", (void *)(&sample_sources_npm), (void *)__null, 0, 4, (14184401387504191323UL + 400UL), 0UL, 0UL, 0UL, (14184401387504191323UL + 341UL), 7, "malloc", 1, 0UL, (14184401387504191323UL + 341UL), "fprintf", 2, (14184401387504191323UL + 120UL), (14184401387504191323UL + 608UL), 0UL, "exit", 1, 0UL, 0UL, "malloc", 1, 0UL, (14184401387504191323UL + 361UL), "fprintf", 2, (14184401387504191323UL + 120UL), (14184401387504191323UL + 608UL), 0UL, "exit", 1, 0UL, 0UL, "ricker_wavelet", 4, (14184401387504191323UL + 361UL), 0UL, 0UL, 0UL, 0UL,
                            "init_progress", (void *)(&init_progress_npm), (void *)__null, 0, 3, 0UL, 0UL, 0UL, 0UL, 7, "fprintf", 2, (14184401387504191323UL + 120UL), (14184401387504191323UL + 613UL), 0UL, "exit", 1, 0UL, 0UL, "fprintf", 2, (14184401387504191323UL + 120UL), (14184401387504191323UL + 614UL), 0UL, "exit", 1, 0UL, 0UL, "malloc", 1, 0UL, (14184401387504191323UL + 457UL), "__assert_rtn", 4, (14184401387504191323UL + 616UL), (14184401387504191323UL + 617UL), 0UL, (14184401387504191323UL + 618UL), 0UL, "fprintf", 3, (14184401387504191323UL + 120UL), (14184401387504191323UL + 622UL), (14184401387504191323UL + 457UL), 0UL,
                            "update_progress", (void *)(&update_progress_npm), (void *)__null, 0, 1, 0UL, 0UL, 6, "fprintf", 2, (14184401387504191323UL + 120UL), (14184401387504191323UL + 623UL), 0UL, "exit", 1, 0UL, 0UL, "fprintf", 2, (14184401387504191323UL + 120UL), (14184401387504191323UL + 624UL), 0UL, "exit", 1, 0UL, 0UL, "fprintf", 2, (14184401387504191323UL + 120UL), (14184401387504191323UL + 625UL), 0UL, "fprintf", 3, (14184401387504191323UL + 120UL), (14184401387504191323UL + 622UL), (14184401387504191323UL + 457UL), 0UL,
                            "finish_progress", (void *)(&finish_progress_npm), (void *)__null, 0, 0, 0UL, 3, "update_progress", 1, 0UL, 0UL, "fprintf", 2, (14184401387504191323UL + 120UL), (14184401387504191323UL + 625UL), 0UL, "free", 1, (14184401387504191323UL + 457UL), 0UL,
                           "seconds", &(____chimes_does_checkpoint_seconds_npm),
                           "ricker_wavelet", &(____chimes_does_checkpoint_ricker_wavelet_npm),
                           "parse_source", &(____chimes_does_checkpoint_parse_source_npm),
                           "config_sources", &(____chimes_does_checkpoint_config_sources_npm),
                           "sample_sources", &(____chimes_does_checkpoint_sample_sources_npm),
                           "init_progress", &(____chimes_does_checkpoint_init_progress_npm),
                           "update_progress", &(____chimes_does_checkpoint_update_progress_npm),
                           "finish_progress", &(____chimes_does_checkpoint_finish_progress_npm),
                             (14184401387504191323UL + 201UL), (14184401387504191323UL + 261UL),
                             (14184401387504191323UL + 323UL), (14184401387504191323UL + 400UL),
                             (14184401387504191323UL + 606UL), (14184401387504191323UL + 120UL),
                             (14184401387504191323UL + 612UL), (14184401387504191323UL + 457UL),
                             (14184401387504191323UL + 23UL), (14184401387504191323UL + 92UL),
                             (14184401387504191323UL + 195UL), (14184401387504191323UL + 317UL),
                             (14184401387504191323UL + 196UL), (14184401387504191323UL + 318UL),
                             (14184401387504191323UL + 317UL), (14184401387504191323UL + 261UL),
                             (14184401387504191323UL + 99UL), (14184401387504191323UL + 186UL),
                             (14184401387504191323UL + 98UL), (14184401387504191323UL + 187UL),
                             (14184401387504191323UL + 327UL), (14184401387504191323UL + 341UL),
                             (14184401387504191323UL + 104UL), (14184401387504191323UL + 155UL),
                             (14184401387504191323UL + 102UL), (14184401387504191323UL + 174UL),
                             (14184401387504191323UL + 103UL), (14184401387504191323UL + 174UL),
                             (14184401387504191323UL + 100UL), (14184401387504191323UL + 115UL),
                             (14184401387504191323UL + 101UL), (14184401387504191323UL + 115UL),
                             (14184401387504191323UL + 341UL), (14184401387504191323UL + 361UL),
                             (14184401387504191323UL + 97UL), (14184401387504191323UL + 186UL),
                             (14184401387504191323UL + 105UL), (14184401387504191323UL + 155UL),
                     "_source", 4, "int", (int)__builtin_offsetof (struct _source, x), "int", (int)__builtin_offsetof (struct _source, y), "float", (int)__builtin_offsetof (struct _source, freq), "int", (int)__builtin_offsetof (struct _source, t),
                     "timeval", 2, "long int", (int)__builtin_offsetof (struct timeval, tv_sec), "int", (int)__builtin_offsetof (struct timeval, tv_usec),
                     "timezone", 2, "int", (int)__builtin_offsetof (struct timezone, tz_minuteswest), "int", (int)__builtin_offsetof (struct timezone, tz_dsttime),
                             "config_sources", "_Z14config_sourcesPP7_sourcePiiii", 0,
                             "init_progress", "_Z13init_progressiii", 0,
                             "seconds", "_Z7secondsv", 0,
                             "finish_progress", "_Z15finish_progressv", 1, "update_progress",
                             "update_progress", "_Z15update_progressi", 0,
                             "ricker_wavelet", "_Z14ricker_waveletPfiff", 0,
                             "parse_source", "_Z12parse_sourcePcP7_source", 0,
                             "sample_sources", "_Z14sample_sourcesP7_sourceiif", 1, "ricker_wavelet",
                        "seconds|tp|0", 1, "seconds",
        "ricker_wavelet", 0UL, (int)4, 14184401387504191684UL, 0UL, 0UL, 0UL,
        "update_progress", 0UL, (int)1, 0UL);
    register_global_var("global|progress_buffer", "i8*", (void *)(&progress_buffer), 8, 1, 0, 0);
    register_global_var("global|progress_disabled", "i32", (void *)(&progress_disabled), 4, 0, 0, 0);
    register_global_var("global|progress_length", "i32", (void *)(&progress_length), 4, 0, 0, 0);
    register_global_var("global|progress_goal", "i32", (void *)(&progress_goal), 4, 0, 0, 0);
    register_global_var("global|progress_num_ticks", "i32", (void *)(&progress_num_ticks), 4, 0, 0, 0);
    return 0;
}

static const int __libchimes_module_init = module_init();
