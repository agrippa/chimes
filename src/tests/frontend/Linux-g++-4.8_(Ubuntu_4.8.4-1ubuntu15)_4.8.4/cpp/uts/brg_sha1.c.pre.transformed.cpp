# 1 "brg_sha1.c.pre.transformed.cpp"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include/stddef.h" 1 3 4
# 147 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include/stddef.h" 3 4
typedef long int ptrdiff_t;
# 212 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include/stddef.h" 3 4
typedef long unsigned int size_t;
# 1 "<command-line>" 2
# 1 "brg_sha1.c.pre.transformed.cpp"
static int ____chimes_does_checkpoint_sha1_npm = 1;
static int ____chimes_does_checkpoint_rng_nextrand_npm = 1;
static int ____chimes_does_checkpoint_rng_showstate_npm = 1;
static int ____chimes_does_checkpoint_rng_init_npm = 1;
static int ____chimes_does_checkpoint_rng_spawn_npm = 1;
static int ____chimes_does_checkpoint_sha1_hash_npm = 1;
static int ____chimes_does_checkpoint_sha1_end_npm = 1;
static int ____chimes_does_checkpoint_rng_rand_npm = 1;
static int ____chimes_does_checkpoint_sha1_compile_npm = 1;
static int ____chimes_does_checkpoint_sha1_begin_npm = 1;
static int ____chimes_does_checkpoint_rng_showtype_npm = 1;

static int ____must_checkpoint_rng_init_ctx_0 = 2;
static int ____must_checkpoint_rng_spawn_ctx_0 = 2;
static int ____must_checkpoint_rng_nextrand_ctx_0 = 2;
static int ____must_checkpoint_sha1_cx_0 = 2;

static int ____must_manage_sha1 = 2;
static int ____must_manage_rng_nextrand = 2;
static int ____must_manage_rng_showstate = 2;
static int ____must_manage_rng_init = 2;
static int ____must_manage_rng_spawn = 2;
static int ____must_manage_sha1_hash = 2;
static int ____must_manage_sha1_end = 2;
static int ____must_manage_rng_rand = 2;
static int ____must_manage_sha1_compile = 2;
static int ____must_manage_sha1_begin = 2;
static int ____must_manage_rng_showtype = 2;

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
static unsigned ____alias_loc_id_10;
# 1 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
# 1 "/tmp/chimes-frontend//"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "/home/mg1/chimes/src/libchimes/libchimes.h" 1



# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include/stddef.h" 1 3 4
# 147 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include/stddef.h" 3 4
typedef long int ptrdiff_t;
# 212 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include/stddef.h" 3 4
typedef long unsigned int size_t;
# 5 "/home/mg1/chimes/src/libchimes/libchimes.h" 2


extern void init_chimes(int argc, char **argv);
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
        const char *funcname, int *conditional, unsigned loc_id, int disabled,
        bool is_allocator);
extern void register_stack_var(const char *mangled_name, int *cond_registration,
        const char *full_type, void *ptr, size_t size, int is_ptr,
        int is_struct, int n_ptr_fields, ...);
extern void register_stack_vars(int nvars, ...);
extern void register_global_var(const char *mangled_name, const char *full_type,
        void *ptr, size_t size, int is_ptr, int is_struct, size_t group, int n_ptr_fields,
        ...);
extern void register_constant(size_t const_id, void *address,
        size_t length);
extern int alias_group_changed(unsigned loc_id);
extern void malloc_helper(const void *ptr, size_t nbytes, size_t group, int is_ptr,
        int is_struct, ...);
extern void calloc_helper(const void *ptr, size_t num, size_t size, size_t group, int is_ptr,
        int is_struct, ...);
extern void realloc_helper(const void *new_ptr, const void *old_ptr,
        void *header, size_t nbytes, size_t group, int is_ptr, int is_struct,
        ...);
extern void free_helper(const void *ptr, size_t group);
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
# 76 "/home/mg1/chimes/src/libchimes/libchimes.h"
inline unsigned LIBCHIMES_THREAD_NUM() { return 0; }
inline unsigned LIBCHIMES_NUM_THREADS() { return 1; }


extern int ____chimes_replaying;
# 1 "<command-line>" 2
# 1 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
# 36 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
# 1 "/usr/include/string.h" 1 3 4
# 25 "/usr/include/string.h" 3 4
# 1 "/usr/include/features.h" 1 3 4
# 364 "/usr/include/features.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 1 3 4
# 402 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 403 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 2 3 4
# 365 "/usr/include/features.h" 2 3 4
# 388 "/usr/include/features.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/gnu/stubs.h" 1 3 4
# 10 "/usr/include/x86_64-linux-gnu/gnu/stubs.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/gnu/stubs-64.h" 1 3 4
# 11 "/usr/include/x86_64-linux-gnu/gnu/stubs.h" 2 3 4
# 389 "/usr/include/features.h" 2 3 4
# 26 "/usr/include/string.h" 2 3 4

extern "C" {




# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include/stddef.h" 1 3 4
# 33 "/usr/include/string.h" 2 3 4
# 44 "/usr/include/string.h" 3 4


extern void *memcpy (void *__restrict __dest, const void *__restrict __src,
       size_t __n) throw () __attribute__ ((__nonnull__ (1, 2)));


extern void *memmove (void *__dest, const void *__src, size_t __n)
     throw () __attribute__ ((__nonnull__ (1, 2)));






extern void *memccpy (void *__restrict __dest, const void *__restrict __src,
        int __c, size_t __n)
     throw () __attribute__ ((__nonnull__ (1, 2)));





extern void *memset (void *__s, int __c, size_t __n) throw () __attribute__ ((__nonnull__ (1)));


extern int memcmp (const void *__s1, const void *__s2, size_t __n)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));



extern "C++"
{
extern void *memchr (void *__s, int __c, size_t __n)
      throw () __asm ("memchr") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern const void *memchr (const void *__s, int __c, size_t __n)
      throw () __asm ("memchr") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));


extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) void *
memchr (void *__s, int __c, size_t __n) throw ()
{
  return __builtin_memchr (__s, __c, __n);
}

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) const void *
memchr (const void *__s, int __c, size_t __n) throw ()
{
  return __builtin_memchr (__s, __c, __n);
}

}
# 105 "/usr/include/string.h" 3 4
extern "C++" void *rawmemchr (void *__s, int __c)
     throw () __asm ("rawmemchr") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern "C++" const void *rawmemchr (const void *__s, int __c)
     throw () __asm ("rawmemchr") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));







extern "C++" void *memrchr (void *__s, int __c, size_t __n)
      throw () __asm ("memrchr") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern "C++" const void *memrchr (const void *__s, int __c, size_t __n)
      throw () __asm ("memrchr") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
# 129 "/usr/include/string.h" 3 4
extern char *strcpy (char *__restrict __dest, const char *__restrict __src)
     throw () __attribute__ ((__nonnull__ (1, 2)));

extern char *strncpy (char *__restrict __dest,
        const char *__restrict __src, size_t __n)
     throw () __attribute__ ((__nonnull__ (1, 2)));


extern char *strcat (char *__restrict __dest, const char *__restrict __src)
     throw () __attribute__ ((__nonnull__ (1, 2)));

extern char *strncat (char *__restrict __dest, const char *__restrict __src,
        size_t __n) throw () __attribute__ ((__nonnull__ (1, 2)));


extern int strcmp (const char *__s1, const char *__s2)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));

extern int strncmp (const char *__s1, const char *__s2, size_t __n)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern int strcoll (const char *__s1, const char *__s2)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));

extern size_t strxfrm (char *__restrict __dest,
         const char *__restrict __src, size_t __n)
     throw () __attribute__ ((__nonnull__ (2)));






# 1 "/usr/include/xlocale.h" 1 3 4
# 27 "/usr/include/xlocale.h" 3 4
typedef struct __locale_struct
{

  struct __locale_data *__locales[13];


  const unsigned short int *__ctype_b;
  const int *__ctype_tolower;
  const int *__ctype_toupper;


  const char *__names[13];
} *__locale_t;


typedef __locale_t locale_t;
# 164 "/usr/include/string.h" 2 3 4


extern int strcoll_l (const char *__s1, const char *__s2, __locale_t __l)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2, 3)));

extern size_t strxfrm_l (char *__dest, const char *__src, size_t __n,
    __locale_t __l) throw () __attribute__ ((__nonnull__ (2, 4)));




extern char *strdup (const char *__s)
     throw () __attribute__ ((__malloc__)) __attribute__ ((__nonnull__ (1)));






extern char *strndup (const char *__string, size_t __n)
     throw () __attribute__ ((__malloc__)) __attribute__ ((__nonnull__ (1)));
# 210 "/usr/include/string.h" 3 4



extern "C++"
{
extern char *strchr (char *__s, int __c)
     throw () __asm ("strchr") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern const char *strchr (const char *__s, int __c)
     throw () __asm ("strchr") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));


extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) char *
strchr (char *__s, int __c) throw ()
{
  return __builtin_strchr (__s, __c);
}

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) const char *
strchr (const char *__s, int __c) throw ()
{
  return __builtin_strchr (__s, __c);
}

}






extern "C++"
{
extern char *strrchr (char *__s, int __c)
     throw () __asm ("strrchr") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern const char *strrchr (const char *__s, int __c)
     throw () __asm ("strrchr") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));


extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) char *
strrchr (char *__s, int __c) throw ()
{
  return __builtin_strrchr (__s, __c);
}

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) const char *
strrchr (const char *__s, int __c) throw ()
{
  return __builtin_strrchr (__s, __c);
}

}
# 271 "/usr/include/string.h" 3 4
extern "C++" char *strchrnul (char *__s, int __c)
     throw () __asm ("strchrnul") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern "C++" const char *strchrnul (const char *__s, int __c)
     throw () __asm ("strchrnul") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
# 284 "/usr/include/string.h" 3 4
extern size_t strcspn (const char *__s, const char *__reject)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern size_t strspn (const char *__s, const char *__accept)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern "C++"
{
extern char *strpbrk (char *__s, const char *__accept)
     throw () __asm ("strpbrk") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern const char *strpbrk (const char *__s, const char *__accept)
     throw () __asm ("strpbrk") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) char *
strpbrk (char *__s, const char *__accept) throw ()
{
  return __builtin_strpbrk (__s, __accept);
}

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) const char *
strpbrk (const char *__s, const char *__accept) throw ()
{
  return __builtin_strpbrk (__s, __accept);
}

}






extern "C++"
{
extern char *strstr (char *__haystack, const char *__needle)
     throw () __asm ("strstr") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern const char *strstr (const char *__haystack, const char *__needle)
     throw () __asm ("strstr") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) char *
strstr (char *__haystack, const char *__needle) throw ()
{
  return __builtin_strstr (__haystack, __needle);
}

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) const char *
strstr (const char *__haystack, const char *__needle) throw ()
{
  return __builtin_strstr (__haystack, __needle);
}

}







extern char *strtok (char *__restrict __s, const char *__restrict __delim)
     throw () __attribute__ ((__nonnull__ (2)));




extern char *__strtok_r (char *__restrict __s,
    const char *__restrict __delim,
    char **__restrict __save_ptr)
     throw () __attribute__ ((__nonnull__ (2, 3)));

extern char *strtok_r (char *__restrict __s, const char *__restrict __delim,
         char **__restrict __save_ptr)
     throw () __attribute__ ((__nonnull__ (2, 3)));





extern "C++" char *strcasestr (char *__haystack, const char *__needle)
     throw () __asm ("strcasestr") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern "C++" const char *strcasestr (const char *__haystack,
         const char *__needle)
     throw () __asm ("strcasestr") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 381 "/usr/include/string.h" 3 4
extern void *memmem (const void *__haystack, size_t __haystacklen,
       const void *__needle, size_t __needlelen)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 3)));



extern void *__mempcpy (void *__restrict __dest,
   const void *__restrict __src, size_t __n)
     throw () __attribute__ ((__nonnull__ (1, 2)));
extern void *mempcpy (void *__restrict __dest,
        const void *__restrict __src, size_t __n)
     throw () __attribute__ ((__nonnull__ (1, 2)));





extern size_t strlen (const char *__s)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));





extern size_t strnlen (const char *__string, size_t __maxlen)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));





extern char *strerror (int __errnum) throw ();
# 437 "/usr/include/string.h" 3 4
extern char *strerror_r (int __errnum, char *__buf, size_t __buflen)
     throw () __attribute__ ((__nonnull__ (2))) ;





extern char *strerror_l (int __errnum, __locale_t __l) throw ();





extern void __bzero (void *__s, size_t __n) throw () __attribute__ ((__nonnull__ (1)));



extern void bcopy (const void *__src, void *__dest, size_t __n)
     throw () __attribute__ ((__nonnull__ (1, 2)));


extern void bzero (void *__s, size_t __n) throw () __attribute__ ((__nonnull__ (1)));


extern int bcmp (const void *__s1, const void *__s2, size_t __n)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));



extern "C++"
{
extern char *index (char *__s, int __c)
     throw () __asm ("index") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern const char *index (const char *__s, int __c)
     throw () __asm ("index") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));


extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) char *
index (char *__s, int __c) throw ()
{
  return __builtin_index (__s, __c);
}

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) const char *
index (const char *__s, int __c) throw ()
{
  return __builtin_index (__s, __c);
}

}







extern "C++"
{
extern char *rindex (char *__s, int __c)
     throw () __asm ("rindex") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern const char *rindex (const char *__s, int __c)
     throw () __asm ("rindex") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));


extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) char *
rindex (char *__s, int __c) throw ()
{
  return __builtin_rindex (__s, __c);
}

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) const char *
rindex (const char *__s, int __c) throw ()
{
  return __builtin_rindex (__s, __c);
}

}







extern int ffs (int __i) throw () __attribute__ ((__const__));




extern int ffsl (long int __l) throw () __attribute__ ((__const__));
__extension__ extern int ffsll (long long int __ll)
     throw () __attribute__ ((__const__));



extern int strcasecmp (const char *__s1, const char *__s2)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern int strncasecmp (const char *__s1, const char *__s2, size_t __n)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));





extern int strcasecmp_l (const char *__s1, const char *__s2,
    __locale_t __loc)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2, 3)));

extern int strncasecmp_l (const char *__s1, const char *__s2,
     size_t __n, __locale_t __loc)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2, 4)));





extern char *strsep (char **__restrict __stringp,
       const char *__restrict __delim)
     throw () __attribute__ ((__nonnull__ (1, 2)));




extern char *strsignal (int __sig) throw ();


extern char *__stpcpy (char *__restrict __dest, const char *__restrict __src)
     throw () __attribute__ ((__nonnull__ (1, 2)));
extern char *stpcpy (char *__restrict __dest, const char *__restrict __src)
     throw () __attribute__ ((__nonnull__ (1, 2)));



extern char *__stpncpy (char *__restrict __dest,
   const char *__restrict __src, size_t __n)
     throw () __attribute__ ((__nonnull__ (1, 2)));
extern char *stpncpy (char *__restrict __dest,
        const char *__restrict __src, size_t __n)
     throw () __attribute__ ((__nonnull__ (1, 2)));




extern int strverscmp (const char *__s1, const char *__s2)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern char *strfry (char *__string) throw () __attribute__ ((__nonnull__ (1)));


extern void *memfrob (void *__s, size_t __n) throw () __attribute__ ((__nonnull__ (1)));







extern "C++" char *basename (char *__filename)
     throw () __asm ("basename") __attribute__ ((__nonnull__ (1)));
extern "C++" const char *basename (const char *__filename)
     throw () __asm ("basename") __attribute__ ((__nonnull__ (1)));
# 643 "/usr/include/string.h" 3 4
}
# 37 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c" 2
# 1 "/usr/include/stdio.h" 1 3 4
# 29 "/usr/include/stdio.h" 3 4
extern "C" {



# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include/stddef.h" 1 3 4
# 34 "/usr/include/stdio.h" 2 3 4

# 1 "/usr/include/x86_64-linux-gnu/bits/types.h" 1 3 4
# 27 "/usr/include/x86_64-linux-gnu/bits/types.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 28 "/usr/include/x86_64-linux-gnu/bits/types.h" 2 3 4


typedef unsigned char __u_char;
typedef unsigned short int __u_short;
typedef unsigned int __u_int;
typedef unsigned long int __u_long;


typedef signed char __int8_t;
typedef unsigned char __uint8_t;
typedef signed short int __int16_t;
typedef unsigned short int __uint16_t;
typedef signed int __int32_t;
typedef unsigned int __uint32_t;

typedef signed long int __int64_t;
typedef unsigned long int __uint64_t;







typedef long int __quad_t;
typedef unsigned long int __u_quad_t;
# 121 "/usr/include/x86_64-linux-gnu/bits/types.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/typesizes.h" 1 3 4
# 122 "/usr/include/x86_64-linux-gnu/bits/types.h" 2 3 4


typedef unsigned long int __dev_t;
typedef unsigned int __uid_t;
typedef unsigned int __gid_t;
typedef unsigned long int __ino_t;
typedef unsigned long int __ino64_t;
typedef unsigned int __mode_t;
typedef unsigned long int __nlink_t;
typedef long int __off_t;
typedef long int __off64_t;
typedef int __pid_t;
typedef struct { int __val[2]; } __fsid_t;
typedef long int __clock_t;
typedef unsigned long int __rlim_t;
typedef unsigned long int __rlim64_t;
typedef unsigned int __id_t;
typedef long int __time_t;
typedef unsigned int __useconds_t;
typedef long int __suseconds_t;

typedef int __daddr_t;
typedef int __key_t;


typedef int __clockid_t;


typedef void * __timer_t;


typedef long int __blksize_t;




typedef long int __blkcnt_t;
typedef long int __blkcnt64_t;


typedef unsigned long int __fsblkcnt_t;
typedef unsigned long int __fsblkcnt64_t;


typedef unsigned long int __fsfilcnt_t;
typedef unsigned long int __fsfilcnt64_t;


typedef long int __fsword_t;

typedef long int __ssize_t;


typedef long int __syscall_slong_t;

typedef unsigned long int __syscall_ulong_t;



typedef __off64_t __loff_t;
typedef __quad_t *__qaddr_t;
typedef char *__caddr_t;


typedef long int __intptr_t;


typedef unsigned int __socklen_t;
# 36 "/usr/include/stdio.h" 2 3 4
# 44 "/usr/include/stdio.h" 3 4
struct _IO_FILE;



typedef struct _IO_FILE FILE;
# 64 "/usr/include/stdio.h" 3 4
typedef struct _IO_FILE __FILE;
# 74 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/libio.h" 1 3 4
# 31 "/usr/include/libio.h" 3 4
# 1 "/usr/include/_G_config.h" 1 3 4
# 15 "/usr/include/_G_config.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include/stddef.h" 1 3 4
# 16 "/usr/include/_G_config.h" 2 3 4




# 1 "/usr/include/wchar.h" 1 3 4
# 82 "/usr/include/wchar.h" 3 4
typedef struct
{
  int __count;
  union
  {

    unsigned int __wch;



    char __wchb[4];
  } __value;
} __mbstate_t;
# 21 "/usr/include/_G_config.h" 2 3 4
typedef struct
{
  __off_t __pos;
  __mbstate_t __state;
} _G_fpos_t;
typedef struct
{
  __off64_t __pos;
  __mbstate_t __state;
} _G_fpos64_t;
# 32 "/usr/include/libio.h" 2 3 4
# 49 "/usr/include/libio.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include/stdarg.h" 1 3 4
# 40 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include/stdarg.h" 3 4
typedef __builtin_va_list __gnuc_va_list;
# 50 "/usr/include/libio.h" 2 3 4
# 144 "/usr/include/libio.h" 3 4
struct _IO_jump_t; struct _IO_FILE;
# 154 "/usr/include/libio.h" 3 4
typedef void _IO_lock_t;





struct _IO_marker {
  struct _IO_marker *_next;
  struct _IO_FILE *_sbuf;



  int _pos;
# 177 "/usr/include/libio.h" 3 4
};


enum __codecvt_result
{
  __codecvt_ok,
  __codecvt_partial,
  __codecvt_error,
  __codecvt_noconv
};
# 245 "/usr/include/libio.h" 3 4
struct _IO_FILE {
  int _flags;




  char* _IO_read_ptr;
  char* _IO_read_end;
  char* _IO_read_base;
  char* _IO_write_base;
  char* _IO_write_ptr;
  char* _IO_write_end;
  char* _IO_buf_base;
  char* _IO_buf_end;

  char *_IO_save_base;
  char *_IO_backup_base;
  char *_IO_save_end;

  struct _IO_marker *_markers;

  struct _IO_FILE *_chain;

  int _fileno;



  int _flags2;

  __off_t _old_offset;



  unsigned short _cur_column;
  signed char _vtable_offset;
  char _shortbuf[1];



  _IO_lock_t *_lock;
# 293 "/usr/include/libio.h" 3 4
  __off64_t _offset;
# 302 "/usr/include/libio.h" 3 4
  void *__pad1;
  void *__pad2;
  void *__pad3;
  void *__pad4;
  size_t __pad5;

  int _mode;

  char _unused2[15 * sizeof (int) - 4 * sizeof (void *) - sizeof (size_t)];

};





struct _IO_FILE_plus;

extern struct _IO_FILE_plus _IO_2_1_stdin_;
extern struct _IO_FILE_plus _IO_2_1_stdout_;
extern struct _IO_FILE_plus _IO_2_1_stderr_;
# 338 "/usr/include/libio.h" 3 4
typedef __ssize_t __io_read_fn (void *__cookie, char *__buf, size_t __nbytes);







typedef __ssize_t __io_write_fn (void *__cookie, const char *__buf,
     size_t __n);







typedef int __io_seek_fn (void *__cookie, __off64_t *__pos, int __w);


typedef int __io_close_fn (void *__cookie);




typedef __io_read_fn cookie_read_function_t;
typedef __io_write_fn cookie_write_function_t;
typedef __io_seek_fn cookie_seek_function_t;
typedef __io_close_fn cookie_close_function_t;


typedef struct
{
  __io_read_fn *read;
  __io_write_fn *write;
  __io_seek_fn *seek;
  __io_close_fn *close;
} _IO_cookie_io_functions_t;
typedef _IO_cookie_io_functions_t cookie_io_functions_t;

struct _IO_cookie_file;


extern void _IO_cookie_init (struct _IO_cookie_file *__cfile, int __read_write,
        void *__cookie, _IO_cookie_io_functions_t __fns);




extern "C" {


extern int __underflow (_IO_FILE *);
extern int __uflow (_IO_FILE *);
extern int __overflow (_IO_FILE *, int);
# 434 "/usr/include/libio.h" 3 4
extern int _IO_getc (_IO_FILE *__fp);
extern int _IO_putc (int __c, _IO_FILE *__fp);
extern int _IO_feof (_IO_FILE *__fp) throw ();
extern int _IO_ferror (_IO_FILE *__fp) throw ();

extern int _IO_peekc_locked (_IO_FILE *__fp);





extern void _IO_flockfile (_IO_FILE *) throw ();
extern void _IO_funlockfile (_IO_FILE *) throw ();
extern int _IO_ftrylockfile (_IO_FILE *) throw ();
# 464 "/usr/include/libio.h" 3 4
extern int _IO_vfscanf (_IO_FILE * __restrict, const char * __restrict,
   __gnuc_va_list, int *__restrict);
extern int _IO_vfprintf (_IO_FILE *__restrict, const char *__restrict,
    __gnuc_va_list);
extern __ssize_t _IO_padn (_IO_FILE *, int, __ssize_t);
extern size_t _IO_sgetn (_IO_FILE *, void *, size_t);

extern __off64_t _IO_seekoff (_IO_FILE *, __off64_t, int, int);
extern __off64_t _IO_seekpos (_IO_FILE *, __off64_t, int);

extern void _IO_free_backup_area (_IO_FILE *) throw ();
# 526 "/usr/include/libio.h" 3 4
}
# 75 "/usr/include/stdio.h" 2 3 4




typedef __gnuc_va_list va_list;
# 90 "/usr/include/stdio.h" 3 4
typedef __off_t off_t;






typedef __off64_t off64_t;




typedef __ssize_t ssize_t;







typedef _G_fpos_t fpos_t;





typedef _G_fpos64_t fpos64_t;
# 164 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/stdio_lim.h" 1 3 4
# 165 "/usr/include/stdio.h" 2 3 4



extern struct _IO_FILE *stdin;
extern struct _IO_FILE *stdout;
extern struct _IO_FILE *stderr;







extern int remove (const char *__filename) throw ();

extern int rename (const char *__old, const char *__new) throw ();




extern int renameat (int __oldfd, const char *__old, int __newfd,
       const char *__new) throw ();
# 195 "/usr/include/stdio.h" 3 4
extern FILE *tmpfile (void) ;
# 205 "/usr/include/stdio.h" 3 4
extern FILE *tmpfile64 (void) ;



extern char *tmpnam (char *__s) throw () ;





extern char *tmpnam_r (char *__s) throw () ;
# 227 "/usr/include/stdio.h" 3 4
extern char *tempnam (const char *__dir, const char *__pfx)
     throw () __attribute__ ((__malloc__)) ;
# 237 "/usr/include/stdio.h" 3 4
extern int fclose (FILE *__stream);




extern int fflush (FILE *__stream);
# 252 "/usr/include/stdio.h" 3 4
extern int fflush_unlocked (FILE *__stream);
# 262 "/usr/include/stdio.h" 3 4
extern int fcloseall (void);
# 272 "/usr/include/stdio.h" 3 4
extern FILE *fopen (const char *__restrict __filename,
      const char *__restrict __modes) ;




extern FILE *freopen (const char *__restrict __filename,
        const char *__restrict __modes,
        FILE *__restrict __stream) ;
# 295 "/usr/include/stdio.h" 3 4


extern FILE *fopen64 (const char *__restrict __filename,
        const char *__restrict __modes) ;
extern FILE *freopen64 (const char *__restrict __filename,
   const char *__restrict __modes,
   FILE *__restrict __stream) ;




extern FILE *fdopen (int __fd, const char *__modes) throw () ;





extern FILE *fopencookie (void *__restrict __magic_cookie,
     const char *__restrict __modes,
     _IO_cookie_io_functions_t __io_funcs) throw () ;




extern FILE *fmemopen (void *__s, size_t __len, const char *__modes)
  throw () ;




extern FILE *open_memstream (char **__bufloc, size_t *__sizeloc) throw () ;






extern void setbuf (FILE *__restrict __stream, char *__restrict __buf) throw ();



extern int setvbuf (FILE *__restrict __stream, char *__restrict __buf,
      int __modes, size_t __n) throw ();





extern void setbuffer (FILE *__restrict __stream, char *__restrict __buf,
         size_t __size) throw ();


extern void setlinebuf (FILE *__stream) throw ();
# 356 "/usr/include/stdio.h" 3 4
extern int fprintf (FILE *__restrict __stream,
      const char *__restrict __format, ...);




extern int printf (const char *__restrict __format, ...);

extern int sprintf (char *__restrict __s,
      const char *__restrict __format, ...) throw ();





extern int vfprintf (FILE *__restrict __s, const char *__restrict __format,
       __gnuc_va_list __arg);




extern int vprintf (const char *__restrict __format, __gnuc_va_list __arg);

extern int vsprintf (char *__restrict __s, const char *__restrict __format,
       __gnuc_va_list __arg) throw ();





extern int snprintf (char *__restrict __s, size_t __maxlen,
       const char *__restrict __format, ...)
     throw () __attribute__ ((__format__ (__printf__, 3, 4)));

extern int vsnprintf (char *__restrict __s, size_t __maxlen,
        const char *__restrict __format, __gnuc_va_list __arg)
     throw () __attribute__ ((__format__ (__printf__, 3, 0)));






extern int vasprintf (char **__restrict __ptr, const char *__restrict __f,
        __gnuc_va_list __arg)
     throw () __attribute__ ((__format__ (__printf__, 2, 0))) ;
extern int __asprintf (char **__restrict __ptr,
         const char *__restrict __fmt, ...)
     throw () __attribute__ ((__format__ (__printf__, 2, 3))) ;
extern int asprintf (char **__restrict __ptr,
       const char *__restrict __fmt, ...)
     throw () __attribute__ ((__format__ (__printf__, 2, 3))) ;




extern int vdprintf (int __fd, const char *__restrict __fmt,
       __gnuc_va_list __arg)
     __attribute__ ((__format__ (__printf__, 2, 0)));
extern int dprintf (int __fd, const char *__restrict __fmt, ...)
     __attribute__ ((__format__ (__printf__, 2, 3)));
# 425 "/usr/include/stdio.h" 3 4
extern int fscanf (FILE *__restrict __stream,
     const char *__restrict __format, ...) ;




extern int scanf (const char *__restrict __format, ...) ;

extern int sscanf (const char *__restrict __s,
     const char *__restrict __format, ...) throw ();
# 463 "/usr/include/stdio.h" 3 4
# 471 "/usr/include/stdio.h" 3 4
extern int vfscanf (FILE *__restrict __s, const char *__restrict __format,
      __gnuc_va_list __arg)
     __attribute__ ((__format__ (__scanf__, 2, 0))) ;





extern int vscanf (const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__format__ (__scanf__, 1, 0))) ;


extern int vsscanf (const char *__restrict __s,
      const char *__restrict __format, __gnuc_va_list __arg)
     throw () __attribute__ ((__format__ (__scanf__, 2, 0)));
# 522 "/usr/include/stdio.h" 3 4
# 531 "/usr/include/stdio.h" 3 4
extern int fgetc (FILE *__stream);
extern int getc (FILE *__stream);





extern int getchar (void);
# 550 "/usr/include/stdio.h" 3 4
extern int getc_unlocked (FILE *__stream);
extern int getchar_unlocked (void);
# 561 "/usr/include/stdio.h" 3 4
extern int fgetc_unlocked (FILE *__stream);
# 573 "/usr/include/stdio.h" 3 4
extern int fputc (int __c, FILE *__stream);
extern int putc (int __c, FILE *__stream);





extern int putchar (int __c);
# 594 "/usr/include/stdio.h" 3 4
extern int fputc_unlocked (int __c, FILE *__stream);







extern int putc_unlocked (int __c, FILE *__stream);
extern int putchar_unlocked (int __c);






extern int getw (FILE *__stream);


extern int putw (int __w, FILE *__stream);
# 622 "/usr/include/stdio.h" 3 4
extern char *fgets (char *__restrict __s, int __n, FILE *__restrict __stream)
     ;
# 638 "/usr/include/stdio.h" 3 4
extern char *gets (char *__s) __attribute__ ((__deprecated__));
# 649 "/usr/include/stdio.h" 3 4
extern char *fgets_unlocked (char *__restrict __s, int __n,
        FILE *__restrict __stream) ;
# 665 "/usr/include/stdio.h" 3 4
extern __ssize_t __getdelim (char **__restrict __lineptr,
          size_t *__restrict __n, int __delimiter,
          FILE *__restrict __stream) ;
extern __ssize_t getdelim (char **__restrict __lineptr,
        size_t *__restrict __n, int __delimiter,
        FILE *__restrict __stream) ;







extern __ssize_t getline (char **__restrict __lineptr,
       size_t *__restrict __n,
       FILE *__restrict __stream) ;
# 689 "/usr/include/stdio.h" 3 4
extern int fputs (const char *__restrict __s, FILE *__restrict __stream);





extern int puts (const char *__s);






extern int ungetc (int __c, FILE *__stream);






extern size_t fread (void *__restrict __ptr, size_t __size,
       size_t __n, FILE *__restrict __stream) ;




extern size_t fwrite (const void *__restrict __ptr, size_t __size,
        size_t __n, FILE *__restrict __s);
# 726 "/usr/include/stdio.h" 3 4
extern int fputs_unlocked (const char *__restrict __s,
      FILE *__restrict __stream);
# 737 "/usr/include/stdio.h" 3 4
extern size_t fread_unlocked (void *__restrict __ptr, size_t __size,
         size_t __n, FILE *__restrict __stream) ;
extern size_t fwrite_unlocked (const void *__restrict __ptr, size_t __size,
          size_t __n, FILE *__restrict __stream);
# 749 "/usr/include/stdio.h" 3 4
extern int fseek (FILE *__stream, long int __off, int __whence);




extern long int ftell (FILE *__stream) ;




extern void rewind (FILE *__stream);
# 773 "/usr/include/stdio.h" 3 4
extern int fseeko (FILE *__stream, __off_t __off, int __whence);




extern __off_t ftello (FILE *__stream) ;
# 792 "/usr/include/stdio.h" 3 4






extern int fgetpos (FILE *__restrict __stream, fpos_t *__restrict __pos);




extern int fsetpos (FILE *__stream, const fpos_t *__pos);
# 815 "/usr/include/stdio.h" 3 4



extern int fseeko64 (FILE *__stream, __off64_t __off, int __whence);
extern __off64_t ftello64 (FILE *__stream) ;
extern int fgetpos64 (FILE *__restrict __stream, fpos64_t *__restrict __pos);
extern int fsetpos64 (FILE *__stream, const fpos64_t *__pos);




extern void clearerr (FILE *__stream) throw ();

extern int feof (FILE *__stream) throw () ;

extern int ferror (FILE *__stream) throw () ;




extern void clearerr_unlocked (FILE *__stream) throw ();
extern int feof_unlocked (FILE *__stream) throw () ;
extern int ferror_unlocked (FILE *__stream) throw () ;
# 846 "/usr/include/stdio.h" 3 4
extern void perror (const char *__s);






# 1 "/usr/include/x86_64-linux-gnu/bits/sys_errlist.h" 1 3 4
# 26 "/usr/include/x86_64-linux-gnu/bits/sys_errlist.h" 3 4
extern int sys_nerr;
extern const char *const sys_errlist[];


extern int _sys_nerr;
extern const char *const _sys_errlist[];
# 854 "/usr/include/stdio.h" 2 3 4




extern int fileno (FILE *__stream) throw () ;




extern int fileno_unlocked (FILE *__stream) throw () ;
# 872 "/usr/include/stdio.h" 3 4
extern FILE *popen (const char *__command, const char *__modes) ;





extern int pclose (FILE *__stream);





extern char *ctermid (char *__s) throw ();





extern char *cuserid (char *__s);




struct obstack;


extern int obstack_printf (struct obstack *__restrict __obstack,
      const char *__restrict __format, ...)
     throw () __attribute__ ((__format__ (__printf__, 2, 3)));
extern int obstack_vprintf (struct obstack *__restrict __obstack,
       const char *__restrict __format,
       __gnuc_va_list __args)
     throw () __attribute__ ((__format__ (__printf__, 2, 0)));







extern void flockfile (FILE *__stream) throw ();



extern int ftrylockfile (FILE *__stream) throw () ;


extern void funlockfile (FILE *__stream) throw ();
# 933 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/stdio.h" 1 3 4
# 35 "/usr/include/x86_64-linux-gnu/bits/stdio.h" 3 4
extern __inline __attribute__ ((__gnu_inline__)) int
vprintf (const char *__restrict __fmt, __gnuc_va_list __arg)
{
  return vfprintf (stdout, __fmt, __arg);
}



extern __inline __attribute__ ((__gnu_inline__)) int
getchar (void)
{
  return _IO_getc (stdin);
}




extern __inline __attribute__ ((__gnu_inline__)) int
fgetc_unlocked (FILE *__fp)
{
  return (__builtin_expect (((__fp)->_IO_read_ptr >= (__fp)->_IO_read_end), 0) ? __uflow (__fp) : *(unsigned char *) (__fp)->_IO_read_ptr++);
}





extern __inline __attribute__ ((__gnu_inline__)) int
getc_unlocked (FILE *__fp)
{
  return (__builtin_expect (((__fp)->_IO_read_ptr >= (__fp)->_IO_read_end), 0) ? __uflow (__fp) : *(unsigned char *) (__fp)->_IO_read_ptr++);
}


extern __inline __attribute__ ((__gnu_inline__)) int
getchar_unlocked (void)
{
  return (__builtin_expect (((stdin)->_IO_read_ptr >= (stdin)->_IO_read_end), 0) ? __uflow (stdin) : *(unsigned char *) (stdin)->_IO_read_ptr++);
}




extern __inline __attribute__ ((__gnu_inline__)) int
putchar (int __c)
{
  return _IO_putc (__c, stdout);
}




extern __inline __attribute__ ((__gnu_inline__)) int
fputc_unlocked (int __c, FILE *__stream)
{
  return (__builtin_expect (((__stream)->_IO_write_ptr >= (__stream)->_IO_write_end), 0) ? __overflow (__stream, (unsigned char) (__c)) : (unsigned char) (*(__stream)->_IO_write_ptr++ = (__c)));
}





extern __inline __attribute__ ((__gnu_inline__)) int
putc_unlocked (int __c, FILE *__stream)
{
  return (__builtin_expect (((__stream)->_IO_write_ptr >= (__stream)->_IO_write_end), 0) ? __overflow (__stream, (unsigned char) (__c)) : (unsigned char) (*(__stream)->_IO_write_ptr++ = (__c)));
}


extern __inline __attribute__ ((__gnu_inline__)) int
putchar_unlocked (int __c)
{
  return (__builtin_expect (((stdout)->_IO_write_ptr >= (stdout)->_IO_write_end), 0) ? __overflow (stdout, (unsigned char) (__c)) : (unsigned char) (*(stdout)->_IO_write_ptr++ = (__c)));
}





extern __inline __attribute__ ((__gnu_inline__)) __ssize_t
getline (char **__lineptr, size_t *__n, FILE *__stream)
{
  return __getdelim (__lineptr, __n, '\n', __stream);
}





extern __inline __attribute__ ((__gnu_inline__)) int
__attribute__ ((__leaf__)) feof_unlocked (FILE *__stream) throw ()
{
  return (((__stream)->_flags & 0x10) != 0);
}


extern __inline __attribute__ ((__gnu_inline__)) int
__attribute__ ((__leaf__)) ferror_unlocked (FILE *__stream) throw ()
{
  return (((__stream)->_flags & 0x20) != 0);
}
# 934 "/usr/include/stdio.h" 2 3 4
# 942 "/usr/include/stdio.h" 3 4
}
# 38 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c" 2
# 38 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"

# 1 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.h" 1
# 36 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.h"
# 1 "/usr/include/stdlib.h" 1 3 4
# 32 "/usr/include/stdlib.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include/stddef.h" 1 3 4
# 33 "/usr/include/stdlib.h" 2 3 4

extern "C" {






# 1 "/usr/include/x86_64-linux-gnu/bits/waitflags.h" 1 3 4
# 50 "/usr/include/x86_64-linux-gnu/bits/waitflags.h" 3 4
typedef enum
{
  P_ALL,
  P_PID,
  P_PGID
} idtype_t;
# 42 "/usr/include/stdlib.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/waitstatus.h" 1 3 4
# 64 "/usr/include/x86_64-linux-gnu/bits/waitstatus.h" 3 4
# 1 "/usr/include/endian.h" 1 3 4
# 36 "/usr/include/endian.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/endian.h" 1 3 4
# 37 "/usr/include/endian.h" 2 3 4
# 60 "/usr/include/endian.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 1 3 4
# 28 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 29 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 2 3 4






# 1 "/usr/include/x86_64-linux-gnu/bits/byteswap-16.h" 1 3 4
# 36 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 2 3 4
# 44 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 3 4
static __inline unsigned int
__bswap_32 (unsigned int __bsx)
{
  return __builtin_bswap32 (__bsx);
}
# 108 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 3 4
static __inline __uint64_t
__bswap_64 (__uint64_t __bsx)
{
  return __builtin_bswap64 (__bsx);
}
# 61 "/usr/include/endian.h" 2 3 4
# 65 "/usr/include/x86_64-linux-gnu/bits/waitstatus.h" 2 3 4

union wait
  {
    int w_status;
    struct
      {

 unsigned int __w_termsig:7;
 unsigned int __w_coredump:1;
 unsigned int __w_retcode:8;
 unsigned int:16;







      } __wait_terminated;
    struct
      {

 unsigned int __w_stopval:8;
 unsigned int __w_stopsig:8;
 unsigned int:16;






      } __wait_stopped;
  };
# 43 "/usr/include/stdlib.h" 2 3 4
# 95 "/usr/include/stdlib.h" 3 4


typedef struct
  {
    int quot;
    int rem;
  } div_t;



typedef struct
  {
    long int quot;
    long int rem;
  } ldiv_t;







__extension__ typedef struct
  {
    long long int quot;
    long long int rem;
  } lldiv_t;
# 139 "/usr/include/stdlib.h" 3 4
extern size_t __ctype_get_mb_cur_max (void) throw () ;




extern double atof (const char *__nptr)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;

extern int atoi (const char *__nptr)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;

extern long int atol (const char *__nptr)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;





__extension__ extern long long int atoll (const char *__nptr)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;





extern double strtod (const char *__restrict __nptr,
        char **__restrict __endptr)
     throw () __attribute__ ((__nonnull__ (1)));





extern float strtof (const char *__restrict __nptr,
       char **__restrict __endptr) throw () __attribute__ ((__nonnull__ (1)));

extern long double strtold (const char *__restrict __nptr,
       char **__restrict __endptr)
     throw () __attribute__ ((__nonnull__ (1)));





extern long int strtol (const char *__restrict __nptr,
   char **__restrict __endptr, int __base)
     throw () __attribute__ ((__nonnull__ (1)));

extern unsigned long int strtoul (const char *__restrict __nptr,
      char **__restrict __endptr, int __base)
     throw () __attribute__ ((__nonnull__ (1)));




__extension__
extern long long int strtoq (const char *__restrict __nptr,
        char **__restrict __endptr, int __base)
     throw () __attribute__ ((__nonnull__ (1)));

__extension__
extern unsigned long long int strtouq (const char *__restrict __nptr,
           char **__restrict __endptr, int __base)
     throw () __attribute__ ((__nonnull__ (1)));





__extension__
extern long long int strtoll (const char *__restrict __nptr,
         char **__restrict __endptr, int __base)
     throw () __attribute__ ((__nonnull__ (1)));

__extension__
extern unsigned long long int strtoull (const char *__restrict __nptr,
     char **__restrict __endptr, int __base)
     throw () __attribute__ ((__nonnull__ (1)));
# 239 "/usr/include/stdlib.h" 3 4
extern long int strtol_l (const char *__restrict __nptr,
     char **__restrict __endptr, int __base,
     __locale_t __loc) throw () __attribute__ ((__nonnull__ (1, 4)));

extern unsigned long int strtoul_l (const char *__restrict __nptr,
        char **__restrict __endptr,
        int __base, __locale_t __loc)
     throw () __attribute__ ((__nonnull__ (1, 4)));

__extension__
extern long long int strtoll_l (const char *__restrict __nptr,
    char **__restrict __endptr, int __base,
    __locale_t __loc)
     throw () __attribute__ ((__nonnull__ (1, 4)));

__extension__
extern unsigned long long int strtoull_l (const char *__restrict __nptr,
       char **__restrict __endptr,
       int __base, __locale_t __loc)
     throw () __attribute__ ((__nonnull__ (1, 4)));

extern double strtod_l (const char *__restrict __nptr,
   char **__restrict __endptr, __locale_t __loc)
     throw () __attribute__ ((__nonnull__ (1, 3)));

extern float strtof_l (const char *__restrict __nptr,
         char **__restrict __endptr, __locale_t __loc)
     throw () __attribute__ ((__nonnull__ (1, 3)));

extern long double strtold_l (const char *__restrict __nptr,
         char **__restrict __endptr,
         __locale_t __loc)
     throw () __attribute__ ((__nonnull__ (1, 3)));





extern __inline __attribute__ ((__gnu_inline__)) int
__attribute__ ((__leaf__)) atoi (const char *__nptr) throw ()
{
  return (int) strtol (__nptr, (char **) __null, 10);
}
extern __inline __attribute__ ((__gnu_inline__)) long int
__attribute__ ((__leaf__)) atol (const char *__nptr) throw ()
{
  return strtol (__nptr, (char **) __null, 10);
}




__extension__ extern __inline __attribute__ ((__gnu_inline__)) long long int
__attribute__ ((__leaf__)) atoll (const char *__nptr) throw ()
{
  return strtoll (__nptr, (char **) __null, 10);
}
# 305 "/usr/include/stdlib.h" 3 4
extern char *l64a (long int __n) throw () ;


extern long int a64l (const char *__s)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;




# 1 "/usr/include/x86_64-linux-gnu/sys/types.h" 1 3 4
# 27 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
extern "C" {





typedef __u_char u_char;
typedef __u_short u_short;
typedef __u_int u_int;
typedef __u_long u_long;
typedef __quad_t quad_t;
typedef __u_quad_t u_quad_t;
typedef __fsid_t fsid_t;




typedef __loff_t loff_t;



typedef __ino_t ino_t;






typedef __ino64_t ino64_t;




typedef __dev_t dev_t;




typedef __gid_t gid_t;




typedef __mode_t mode_t;




typedef __nlink_t nlink_t;




typedef __uid_t uid_t;
# 98 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
typedef __pid_t pid_t;





typedef __id_t id_t;
# 115 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
typedef __daddr_t daddr_t;
typedef __caddr_t caddr_t;





typedef __key_t key_t;
# 132 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
# 1 "/usr/include/time.h" 1 3 4
# 57 "/usr/include/time.h" 3 4


typedef __clock_t clock_t;
# 73 "/usr/include/time.h" 3 4


typedef __time_t time_t;
# 91 "/usr/include/time.h" 3 4
typedef __clockid_t clockid_t;
# 103 "/usr/include/time.h" 3 4
typedef __timer_t timer_t;
# 133 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4



typedef __useconds_t useconds_t;



typedef __suseconds_t suseconds_t;





# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include/stddef.h" 1 3 4
# 147 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4



typedef unsigned long int ulong;
typedef unsigned short int ushort;
typedef unsigned int uint;
# 194 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
typedef int int8_t __attribute__ ((__mode__ (__QI__)));
typedef int int16_t __attribute__ ((__mode__ (__HI__)));
typedef int int32_t __attribute__ ((__mode__ (__SI__)));
typedef int int64_t __attribute__ ((__mode__ (__DI__)));


typedef unsigned int u_int8_t __attribute__ ((__mode__ (__QI__)));
typedef unsigned int u_int16_t __attribute__ ((__mode__ (__HI__)));
typedef unsigned int u_int32_t __attribute__ ((__mode__ (__SI__)));
typedef unsigned int u_int64_t __attribute__ ((__mode__ (__DI__)));

typedef int register_t __attribute__ ((__mode__ (__word__)));
# 219 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/sys/select.h" 1 3 4
# 30 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/select.h" 1 3 4
# 22 "/usr/include/x86_64-linux-gnu/bits/select.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 23 "/usr/include/x86_64-linux-gnu/bits/select.h" 2 3 4
# 31 "/usr/include/x86_64-linux-gnu/sys/select.h" 2 3 4


# 1 "/usr/include/x86_64-linux-gnu/bits/sigset.h" 1 3 4
# 22 "/usr/include/x86_64-linux-gnu/bits/sigset.h" 3 4
typedef int __sig_atomic_t;




typedef struct
  {
    unsigned long int __val[(1024 / (8 * sizeof (unsigned long int)))];
  } __sigset_t;
# 34 "/usr/include/x86_64-linux-gnu/sys/select.h" 2 3 4



typedef __sigset_t sigset_t;





# 1 "/usr/include/time.h" 1 3 4
# 120 "/usr/include/time.h" 3 4
struct timespec
  {
    __time_t tv_sec;
    __syscall_slong_t tv_nsec;
  };
# 44 "/usr/include/x86_64-linux-gnu/sys/select.h" 2 3 4

# 1 "/usr/include/x86_64-linux-gnu/bits/time.h" 1 3 4
# 30 "/usr/include/x86_64-linux-gnu/bits/time.h" 3 4
struct timeval
  {
    __time_t tv_sec;
    __suseconds_t tv_usec;
  };
# 46 "/usr/include/x86_64-linux-gnu/sys/select.h" 2 3 4
# 54 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4
typedef long int __fd_mask;
# 64 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4
typedef struct
  {



    __fd_mask fds_bits[1024 / (8 * (int) sizeof (__fd_mask))];





  } fd_set;






typedef __fd_mask fd_mask;
# 96 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4
extern "C" {
# 106 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4
extern int select (int __nfds, fd_set *__restrict __readfds,
     fd_set *__restrict __writefds,
     fd_set *__restrict __exceptfds,
     struct timeval *__restrict __timeout);
# 118 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4
extern int pselect (int __nfds, fd_set *__restrict __readfds,
      fd_set *__restrict __writefds,
      fd_set *__restrict __exceptfds,
      const struct timespec *__restrict __timeout,
      const __sigset_t *__restrict __sigmask);
# 131 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4
}
# 220 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4


# 1 "/usr/include/x86_64-linux-gnu/sys/sysmacros.h" 1 3 4
# 24 "/usr/include/x86_64-linux-gnu/sys/sysmacros.h" 3 4
extern "C" {

__extension__
extern unsigned int gnu_dev_major (unsigned long long int __dev)
     throw () __attribute__ ((__const__));
__extension__
extern unsigned int gnu_dev_minor (unsigned long long int __dev)
     throw () __attribute__ ((__const__));
__extension__
extern unsigned long long int gnu_dev_makedev (unsigned int __major,
            unsigned int __minor)
     throw () __attribute__ ((__const__));


__extension__ extern __inline __attribute__ ((__gnu_inline__)) __attribute__ ((__const__)) unsigned int
__attribute__ ((__leaf__)) gnu_dev_major (unsigned long long int __dev) throw ()
{
  return ((__dev >> 8) & 0xfff) | ((unsigned int) (__dev >> 32) & ~0xfff);
}

__extension__ extern __inline __attribute__ ((__gnu_inline__)) __attribute__ ((__const__)) unsigned int
__attribute__ ((__leaf__)) gnu_dev_minor (unsigned long long int __dev) throw ()
{
  return (__dev & 0xff) | ((unsigned int) (__dev >> 12) & ~0xff);
}

__extension__ extern __inline __attribute__ ((__gnu_inline__)) __attribute__ ((__const__)) unsigned long long int
__attribute__ ((__leaf__)) gnu_dev_makedev (unsigned int __major, unsigned int __minor) throw ()
{
  return ((__minor & 0xff) | ((__major & 0xfff) << 8)
   | (((unsigned long long int) (__minor & ~0xff)) << 12)
   | (((unsigned long long int) (__major & ~0xfff)) << 32));
}

}
# 223 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4





typedef __blksize_t blksize_t;






typedef __blkcnt_t blkcnt_t;



typedef __fsblkcnt_t fsblkcnt_t;



typedef __fsfilcnt_t fsfilcnt_t;
# 262 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
typedef __blkcnt64_t blkcnt64_t;
typedef __fsblkcnt64_t fsblkcnt64_t;
typedef __fsfilcnt64_t fsfilcnt64_t;





# 1 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 1 3 4
# 21 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 22 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 2 3 4
# 60 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3 4
typedef unsigned long int pthread_t;


union pthread_attr_t
{
  char __size[56];
  long int __align;
};

typedef union pthread_attr_t pthread_attr_t;





typedef struct __pthread_internal_list
{
  struct __pthread_internal_list *__prev;
  struct __pthread_internal_list *__next;
} __pthread_list_t;
# 90 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3 4
typedef union
{
  struct __pthread_mutex_s
  {
    int __lock;
    unsigned int __count;
    int __owner;

    unsigned int __nusers;



    int __kind;

    short __spins;
    short __elision;
    __pthread_list_t __list;
# 125 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3 4
  } __data;
  char __size[40];
  long int __align;
} pthread_mutex_t;

typedef union
{
  char __size[4];
  int __align;
} pthread_mutexattr_t;




typedef union
{
  struct
  {
    int __lock;
    unsigned int __futex;
    __extension__ unsigned long long int __total_seq;
    __extension__ unsigned long long int __wakeup_seq;
    __extension__ unsigned long long int __woken_seq;
    void *__mutex;
    unsigned int __nwaiters;
    unsigned int __broadcast_seq;
  } __data;
  char __size[48];
  __extension__ long long int __align;
} pthread_cond_t;

typedef union
{
  char __size[4];
  int __align;
} pthread_condattr_t;



typedef unsigned int pthread_key_t;



typedef int pthread_once_t;





typedef union
{

  struct
  {
    int __lock;
    unsigned int __nr_readers;
    unsigned int __readers_wakeup;
    unsigned int __writer_wakeup;
    unsigned int __nr_readers_queued;
    unsigned int __nr_writers_queued;
    int __writer;
    int __shared;
    signed char __rwelision;




    unsigned char __pad1[7];


    unsigned long int __pad2;


    unsigned int __flags;

  } __data;
# 220 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3 4
  char __size[56];
  long int __align;
} pthread_rwlock_t;

typedef union
{
  char __size[8];
  long int __align;
} pthread_rwlockattr_t;





typedef volatile int pthread_spinlock_t;




typedef union
{
  char __size[32];
  long int __align;
} pthread_barrier_t;

typedef union
{
  char __size[4];
  int __align;
} pthread_barrierattr_t;
# 271 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4


}
# 315 "/usr/include/stdlib.h" 2 3 4






extern long int random (void) throw ();


extern void srandom (unsigned int __seed) throw ();





extern char *initstate (unsigned int __seed, char *__statebuf,
   size_t __statelen) throw () __attribute__ ((__nonnull__ (2)));



extern char *setstate (char *__statebuf) throw () __attribute__ ((__nonnull__ (1)));







struct random_data
  {
    int32_t *fptr;
    int32_t *rptr;
    int32_t *state;
    int rand_type;
    int rand_deg;
    int rand_sep;
    int32_t *end_ptr;
  };

extern int random_r (struct random_data *__restrict __buf,
       int32_t *__restrict __result) throw () __attribute__ ((__nonnull__ (1, 2)));

extern int srandom_r (unsigned int __seed, struct random_data *__buf)
     throw () __attribute__ ((__nonnull__ (2)));

extern int initstate_r (unsigned int __seed, char *__restrict __statebuf,
   size_t __statelen,
   struct random_data *__restrict __buf)
     throw () __attribute__ ((__nonnull__ (2, 4)));

extern int setstate_r (char *__restrict __statebuf,
         struct random_data *__restrict __buf)
     throw () __attribute__ ((__nonnull__ (1, 2)));






extern int rand (void) throw ();

extern void srand (unsigned int __seed) throw ();




extern int rand_r (unsigned int *__seed) throw ();







extern double drand48 (void) throw ();
extern double erand48 (unsigned short int __xsubi[3]) throw () __attribute__ ((__nonnull__ (1)));


extern long int lrand48 (void) throw ();
extern long int nrand48 (unsigned short int __xsubi[3])
     throw () __attribute__ ((__nonnull__ (1)));


extern long int mrand48 (void) throw ();
extern long int jrand48 (unsigned short int __xsubi[3])
     throw () __attribute__ ((__nonnull__ (1)));


extern void srand48 (long int __seedval) throw ();
extern unsigned short int *seed48 (unsigned short int __seed16v[3])
     throw () __attribute__ ((__nonnull__ (1)));
extern void lcong48 (unsigned short int __param[7]) throw () __attribute__ ((__nonnull__ (1)));





struct drand48_data
  {
    unsigned short int __x[3];
    unsigned short int __old_x[3];
    unsigned short int __c;
    unsigned short int __init;
    __extension__ unsigned long long int __a;

  };


extern int drand48_r (struct drand48_data *__restrict __buffer,
        double *__restrict __result) throw () __attribute__ ((__nonnull__ (1, 2)));
extern int erand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        double *__restrict __result) throw () __attribute__ ((__nonnull__ (1, 2)));


extern int lrand48_r (struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     throw () __attribute__ ((__nonnull__ (1, 2)));
extern int nrand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     throw () __attribute__ ((__nonnull__ (1, 2)));


extern int mrand48_r (struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     throw () __attribute__ ((__nonnull__ (1, 2)));
extern int jrand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     throw () __attribute__ ((__nonnull__ (1, 2)));


extern int srand48_r (long int __seedval, struct drand48_data *__buffer)
     throw () __attribute__ ((__nonnull__ (2)));

extern int seed48_r (unsigned short int __seed16v[3],
       struct drand48_data *__buffer) throw () __attribute__ ((__nonnull__ (1, 2)));

extern int lcong48_r (unsigned short int __param[7],
        struct drand48_data *__buffer)
     throw () __attribute__ ((__nonnull__ (1, 2)));
# 466 "/usr/include/stdlib.h" 3 4
extern void *malloc (size_t __size) throw () __attribute__ ((__malloc__)) ;

extern void *calloc (size_t __nmemb, size_t __size)
     throw () __attribute__ ((__malloc__)) ;
# 480 "/usr/include/stdlib.h" 3 4
extern void *realloc (void *__ptr, size_t __size)
     throw () __attribute__ ((__warn_unused_result__));

extern void free (void *__ptr) throw ();




extern void cfree (void *__ptr) throw ();



# 1 "/usr/include/alloca.h" 1 3 4
# 24 "/usr/include/alloca.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include/stddef.h" 1 3 4
# 25 "/usr/include/alloca.h" 2 3 4

extern "C" {





extern void *alloca (size_t __size) throw ();





}
# 493 "/usr/include/stdlib.h" 2 3 4





extern void *valloc (size_t __size) throw () __attribute__ ((__malloc__)) ;




extern int posix_memalign (void **__memptr, size_t __alignment, size_t __size)
     throw () __attribute__ ((__nonnull__ (1))) ;




extern void *aligned_alloc (size_t __alignment, size_t __size)
     throw () __attribute__ ((__malloc__)) __attribute__ ((__alloc_size__ (2))) ;




extern void abort (void) throw () __attribute__ ((__noreturn__));



extern int atexit (void (*__func) (void)) throw () __attribute__ ((__nonnull__ (1)));




extern "C++" int at_quick_exit (void (*__func) (void))
     throw () __asm ("at_quick_exit") __attribute__ ((__nonnull__ (1)));
# 535 "/usr/include/stdlib.h" 3 4
extern int on_exit (void (*__func) (int __status, void *__arg), void *__arg)
     throw () __attribute__ ((__nonnull__ (1)));






extern void exit (int __status) throw () __attribute__ ((__noreturn__));





extern void quick_exit (int __status) throw () __attribute__ ((__noreturn__));







extern void _Exit (int __status) throw () __attribute__ ((__noreturn__));






extern char *getenv (const char *__name) throw () __attribute__ ((__nonnull__ (1))) ;





extern char *secure_getenv (const char *__name)
     throw () __attribute__ ((__nonnull__ (1))) ;






extern int putenv (char *__string) throw () __attribute__ ((__nonnull__ (1)));





extern int setenv (const char *__name, const char *__value, int __replace)
     throw () __attribute__ ((__nonnull__ (2)));


extern int unsetenv (const char *__name) throw () __attribute__ ((__nonnull__ (1)));






extern int clearenv (void) throw ();
# 606 "/usr/include/stdlib.h" 3 4
extern char *mktemp (char *__template) throw () __attribute__ ((__nonnull__ (1)));
# 619 "/usr/include/stdlib.h" 3 4
extern int mkstemp (char *__template) __attribute__ ((__nonnull__ (1))) ;
# 629 "/usr/include/stdlib.h" 3 4
extern int mkstemp64 (char *__template) __attribute__ ((__nonnull__ (1))) ;
# 641 "/usr/include/stdlib.h" 3 4
extern int mkstemps (char *__template, int __suffixlen) __attribute__ ((__nonnull__ (1))) ;
# 651 "/usr/include/stdlib.h" 3 4
extern int mkstemps64 (char *__template, int __suffixlen)
     __attribute__ ((__nonnull__ (1))) ;
# 662 "/usr/include/stdlib.h" 3 4
extern char *mkdtemp (char *__template) throw () __attribute__ ((__nonnull__ (1))) ;
# 673 "/usr/include/stdlib.h" 3 4
extern int mkostemp (char *__template, int __flags) __attribute__ ((__nonnull__ (1))) ;
# 683 "/usr/include/stdlib.h" 3 4
extern int mkostemp64 (char *__template, int __flags) __attribute__ ((__nonnull__ (1))) ;
# 693 "/usr/include/stdlib.h" 3 4
extern int mkostemps (char *__template, int __suffixlen, int __flags)
     __attribute__ ((__nonnull__ (1))) ;
# 705 "/usr/include/stdlib.h" 3 4
extern int mkostemps64 (char *__template, int __suffixlen, int __flags)
     __attribute__ ((__nonnull__ (1))) ;
# 716 "/usr/include/stdlib.h" 3 4
extern int system (const char *__command) ;






extern char *canonicalize_file_name (const char *__name)
     throw () __attribute__ ((__nonnull__ (1))) ;
# 733 "/usr/include/stdlib.h" 3 4
extern char *realpath (const char *__restrict __name,
         char *__restrict __resolved) throw () ;






typedef int (*__compar_fn_t) (const void *, const void *);


typedef __compar_fn_t comparison_fn_t;



typedef int (*__compar_d_fn_t) (const void *, const void *, void *);





extern void *bsearch (const void *__key, const void *__base,
        size_t __nmemb, size_t __size, __compar_fn_t __compar)
     __attribute__ ((__nonnull__ (1, 2, 5))) ;


# 1 "/usr/include/x86_64-linux-gnu/bits/stdlib-bsearch.h" 1 3 4
# 19 "/usr/include/x86_64-linux-gnu/bits/stdlib-bsearch.h" 3 4
extern __inline __attribute__ ((__gnu_inline__)) void *
bsearch (const void *__key, const void *__base, size_t __nmemb, size_t __size,
  __compar_fn_t __compar)
{
  size_t __l, __u, __idx;
  const void *__p;
  int __comparison;

  __l = 0;
  __u = __nmemb;
  while (__l < __u)
    {
      __idx = (__l + __u) / 2;
      __p = (void *) (((const char *) __base) + (__idx * __size));
      __comparison = (*__compar) (__key, __p);
      if (__comparison < 0)
 __u = __idx;
      else if (__comparison > 0)
 __l = __idx + 1;
      else
 return (void *) __p;
    }

  return __null;
}
# 760 "/usr/include/stdlib.h" 2 3 4




extern void qsort (void *__base, size_t __nmemb, size_t __size,
     __compar_fn_t __compar) __attribute__ ((__nonnull__ (1, 4)));

extern void qsort_r (void *__base, size_t __nmemb, size_t __size,
       __compar_d_fn_t __compar, void *__arg)
  __attribute__ ((__nonnull__ (1, 4)));




extern int abs (int __x) throw () __attribute__ ((__const__)) ;
extern long int labs (long int __x) throw () __attribute__ ((__const__)) ;



__extension__ extern long long int llabs (long long int __x)
     throw () __attribute__ ((__const__)) ;







extern div_t div (int __numer, int __denom)
     throw () __attribute__ ((__const__)) ;
extern ldiv_t ldiv (long int __numer, long int __denom)
     throw () __attribute__ ((__const__)) ;




__extension__ extern lldiv_t lldiv (long long int __numer,
        long long int __denom)
     throw () __attribute__ ((__const__)) ;
# 811 "/usr/include/stdlib.h" 3 4
extern char *ecvt (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign) throw () __attribute__ ((__nonnull__ (3, 4))) ;




extern char *fcvt (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign) throw () __attribute__ ((__nonnull__ (3, 4))) ;




extern char *gcvt (double __value, int __ndigit, char *__buf)
     throw () __attribute__ ((__nonnull__ (3))) ;




extern char *qecvt (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign)
     throw () __attribute__ ((__nonnull__ (3, 4))) ;
extern char *qfcvt (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign)
     throw () __attribute__ ((__nonnull__ (3, 4))) ;
extern char *qgcvt (long double __value, int __ndigit, char *__buf)
     throw () __attribute__ ((__nonnull__ (3))) ;




extern int ecvt_r (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign, char *__restrict __buf,
     size_t __len) throw () __attribute__ ((__nonnull__ (3, 4, 5)));
extern int fcvt_r (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign, char *__restrict __buf,
     size_t __len) throw () __attribute__ ((__nonnull__ (3, 4, 5)));

extern int qecvt_r (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign,
      char *__restrict __buf, size_t __len)
     throw () __attribute__ ((__nonnull__ (3, 4, 5)));
extern int qfcvt_r (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign,
      char *__restrict __buf, size_t __len)
     throw () __attribute__ ((__nonnull__ (3, 4, 5)));






extern int mblen (const char *__s, size_t __n) throw ();


extern int mbtowc (wchar_t *__restrict __pwc,
     const char *__restrict __s, size_t __n) throw ();


extern int wctomb (char *__s, wchar_t __wchar) throw ();



extern size_t mbstowcs (wchar_t *__restrict __pwcs,
   const char *__restrict __s, size_t __n) throw ();

extern size_t wcstombs (char *__restrict __s,
   const wchar_t *__restrict __pwcs, size_t __n)
     throw ();
# 887 "/usr/include/stdlib.h" 3 4
extern int rpmatch (const char *__response) throw () __attribute__ ((__nonnull__ (1))) ;
# 898 "/usr/include/stdlib.h" 3 4
extern int getsubopt (char **__restrict __optionp,
        char *const *__restrict __tokens,
        char **__restrict __valuep)
     throw () __attribute__ ((__nonnull__ (1, 2, 3))) ;





extern void setkey (const char *__key) throw () __attribute__ ((__nonnull__ (1)));







extern int posix_openpt (int __oflag) ;







extern int grantpt (int __fd) throw ();



extern int unlockpt (int __fd) throw ();




extern char *ptsname (int __fd) throw () ;






extern int ptsname_r (int __fd, char *__buf, size_t __buflen)
     throw () __attribute__ ((__nonnull__ (2)));


extern int getpt (void);






extern int getloadavg (double __loadavg[], int __nelem)
     throw () __attribute__ ((__nonnull__ (1)));


# 1 "/usr/include/x86_64-linux-gnu/bits/stdlib-float.h" 1 3 4
# 24 "/usr/include/x86_64-linux-gnu/bits/stdlib-float.h" 3 4

extern __inline __attribute__ ((__gnu_inline__)) double
__attribute__ ((__leaf__)) atof (const char *__nptr) throw ()
{
  return strtod (__nptr, (char **) __null);
}
# 955 "/usr/include/stdlib.h" 2 3 4
# 967 "/usr/include/stdlib.h" 3 4
}
# 37 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.h" 2
# 1 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_types.h" 1
# 48 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_types.h"
extern "C" {


# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include-fixed/limits.h" 1 3 4
# 34 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include-fixed/limits.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include-fixed/syslimits.h" 1 3 4






# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include-fixed/limits.h" 1 3 4
# 168 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include-fixed/limits.h" 3 4
# 1 "/usr/include/limits.h" 1 3 4
# 143 "/usr/include/limits.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/posix1_lim.h" 1 3 4
# 160 "/usr/include/x86_64-linux-gnu/bits/posix1_lim.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/local_lim.h" 1 3 4
# 38 "/usr/include/x86_64-linux-gnu/bits/local_lim.h" 3 4
# 1 "/usr/include/linux/limits.h" 1 3 4
# 39 "/usr/include/x86_64-linux-gnu/bits/local_lim.h" 2 3 4
# 161 "/usr/include/x86_64-linux-gnu/bits/posix1_lim.h" 2 3 4
# 144 "/usr/include/limits.h" 2 3 4



# 1 "/usr/include/x86_64-linux-gnu/bits/posix2_lim.h" 1 3 4
# 148 "/usr/include/limits.h" 2 3 4



# 1 "/usr/include/x86_64-linux-gnu/bits/xopen_lim.h" 1 3 4
# 33 "/usr/include/x86_64-linux-gnu/bits/xopen_lim.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/stdio_lim.h" 1 3 4
# 34 "/usr/include/x86_64-linux-gnu/bits/xopen_lim.h" 2 3 4
# 152 "/usr/include/limits.h" 2 3 4
# 169 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include-fixed/limits.h" 2 3 4
# 8 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include-fixed/syslimits.h" 2 3 4
# 35 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include-fixed/limits.h" 2 3 4
# 52 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_types.h" 2
# 70 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_types.h"
     typedef unsigned char uint_8t;
# 79 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_types.h"
     typedef unsigned short uint_16t;
# 89 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_types.h"
     typedef unsigned int uint_32t;
# 123 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_types.h"
       typedef unsigned long uint_64t;
# 197 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_types.h"
}
# 38 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.h" 2
# 54 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.h"
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
# 95 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.h"
void sha1_compile(sha1_ctx ctx[1]);

void sha1_begin(sha1_ctx ctx[1]);
void sha1_hash(const unsigned char data[], unsigned long len, sha1_ctx ctx[1]);
void sha1_end(unsigned char hval[], sha1_ctx ctx[1]);
void sha1(unsigned char hval[], const unsigned char data[], unsigned long len);
# 40 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c" 2
# 1 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_endian.h" 1
# 49 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_endian.h"
# 1 "/usr/include/byteswap.h" 1 3 4
# 24 "/usr/include/byteswap.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 1 3 4
# 25 "/usr/include/byteswap.h" 2 3 4
# 50 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_endian.h" 2
# 41 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c" 2
# 49 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
# 49 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
void rng_init_npm(RNG_state *newstate, int seed);void sha1_begin_npm(sha1_ctx ctx[1]);void sha1_hash_npm(const unsigned char data[], unsigned long len, sha1_ctx ctx[1]);void sha1_end_npm(unsigned char hval[], sha1_ctx ctx[1]);
void rng_init_quick(RNG_state *newstate, int seed); void rng_init(RNG_state *newstate, int seed);void sha1_begin_quick(sha1_ctx ctx[1]); void sha1_begin(sha1_ctx ctx[1]);void sha1_hash_quick(const unsigned char data[], unsigned long len, sha1_ctx ctx[1]); void sha1_hash(const unsigned char data[], unsigned long len, sha1_ctx ctx[1]);void sha1_end_quick(unsigned char hval[], sha1_ctx ctx[1]); void sha1_end(unsigned char hval[], sha1_ctx ctx[1]);
void rng_init_resumable(RNG_state *newstate, int seed)
# 50 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
{const int ____chimes_did_disable0 = new_stack((void *)(&rng_init), "rng_init", &____must_manage_rng_init, 2, 0, (size_t)(14039954671321870958UL), (size_t)(0UL)) ; struct sha1_ctx_s ctx;
# 50 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
 if (____must_checkpoint_rng_init_ctx_0) { register_stack_vars(1, "rng_init|ctx|0", &____must_checkpoint_rng_init_ctx_0, "%struct.sha1_ctx_s = type { [2 x i32], [5 x i32], [16 x i32] }", (void *)(&ctx), (size_t)92, 0, 1, 0); } if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 51 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
    ;
# 52 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
   struct state_t gen; ;
# 53 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
  int i; ;
# 54 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
# 55 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
  for (i=0; i < 16; i++) { gen.state[i] = 0; };
# 57 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
  gen.state[16] = 0xFF & (seed >> 24);
# 58 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
  gen.state[17] = 0xFF & (seed >> 16);
# 59 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
  gen.state[18] = 0xFF & (seed >> 8);
# 60 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
  gen.state[19] = 0xFF & (seed >> 0);
# 61 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
# 62 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
   call_lbl_0: ({ calling_npm("sha1_begin", 0); sha1_begin_npm(&ctx); });
# 63 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
   call_lbl_1: ({ calling_npm("sha1_hash", 0); sha1_hash_npm(gen.state, 20, &ctx); });
# 64 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
   call_lbl_2: ({ calling_npm("sha1_end", 0); sha1_end_npm(newstate, &ctx); });
# 65 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
rm_stack(false, 0UL, "rng_init", &____must_manage_rng_init, ____alias_loc_id_0, ____chimes_did_disable0, false); }
# 66 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
# 67 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
void rng_spawn_npm(RNG_state *mystate, RNG_state *newstate, int spawnnumber);
void rng_spawn_quick(RNG_state *mystate, RNG_state *newstate, int spawnnumber); void rng_spawn(RNG_state *mystate, RNG_state *newstate, int spawnnumber);
void rng_spawn_resumable(RNG_state *mystate, RNG_state *newstate, int spawnnumber)
# 68 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
{const int ____chimes_did_disable1 = new_stack((void *)(&rng_spawn), "rng_spawn", &____must_manage_rng_spawn, 3, 0, (size_t)(14039954671321871374UL), (size_t)(14039954671321871375UL), (size_t)(0UL)) ; uint8 bytes[4];
# 68 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
struct sha1_ctx_s ctx;
# 68 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
 if (____must_checkpoint_rng_spawn_ctx_0) { register_stack_vars(1, "rng_spawn|ctx|0", &____must_checkpoint_rng_spawn_ctx_0, "%struct.sha1_ctx_s = type { [2 x i32], [5 x i32], [16 x i32] }", (void *)(&ctx), (size_t)92, 0, 1, 0); } if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 69 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
   ;
# 70 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
  ;
# 71 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
# 72 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
 bytes[0] = 0xFF & (spawnnumber >> 24);
# 73 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
 bytes[1] = 0xFF & (spawnnumber >> 16);
# 74 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
 bytes[2] = 0xFF & (spawnnumber >> 8);
# 75 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
 bytes[3] = 0xFF & spawnnumber;
# 76 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
# 77 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
  call_lbl_0: ({ calling_npm("sha1_begin", 0); sha1_begin_npm(&ctx); });
# 78 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
  call_lbl_1: ({ calling_npm("sha1_hash", 0); sha1_hash_npm(mystate, 20, &ctx); });
# 79 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
  call_lbl_2: ({ calling_npm("sha1_hash", 0); sha1_hash_npm(bytes, 4, &ctx); });
# 80 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
  call_lbl_3: ({ calling_npm("sha1_end", 0); sha1_end_npm(newstate, &ctx); });
# 81 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
rm_stack(false, 0UL, "rng_spawn", &____must_manage_rng_spawn, ____alias_loc_id_4, ____chimes_did_disable1, false); }
# 82 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
# 83 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
int rng_rand_npm(RNG_state *mystate);
int rng_rand_quick(RNG_state *mystate); int rng_rand(RNG_state *mystate);
int rng_rand_resumable(RNG_state *mystate){const int ____chimes_did_disable2 = new_stack((void *)(&rng_rand), "rng_rand", &____must_manage_rng_rand, 1, 0, (size_t)(14039954671321871419UL)) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 84 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
        int r; ;
# 85 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
  uint32 b; b = ((mystate[16] << 24) | (mystate[17] << 16)
# 86 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
  | (mystate[18] << 8) | (mystate[19] << 0)) ;
# 87 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
 b = b & 0x7fffffff;
# 88 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
# 89 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
 r = (int) b;
# 90 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
# 91 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
  int ____chimes_ret_var_0; ; ____chimes_ret_var_0 = (r); rm_stack(false, 0UL, "rng_rand", &____must_manage_rng_rand, ____alias_loc_id_5, ____chimes_did_disable2, false); return ____chimes_ret_var_0; ;
# 92 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
rm_stack(false, 0UL, "rng_rand", &____must_manage_rng_rand, ____alias_loc_id_5, ____chimes_did_disable2, false); }
# 93 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
# 94 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
int rng_nextrand_npm(RNG_state *mystate);
int rng_nextrand_quick(RNG_state *mystate); int rng_nextrand(RNG_state *mystate);
int rng_nextrand_resumable(RNG_state *mystate){const int ____chimes_did_disable3 = new_stack((void *)(&rng_nextrand), "rng_nextrand", &____must_manage_rng_nextrand, 1, 0, (size_t)(14039954671321871469UL)) ; struct sha1_ctx_s ctx;
# 94 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
 if (____must_checkpoint_rng_nextrand_ctx_0) { register_stack_vars(1, "rng_nextrand|ctx|0", &____must_checkpoint_rng_nextrand_ctx_0, "%struct.sha1_ctx_s = type { [2 x i32], [5 x i32], [16 x i32] }", (void *)(&ctx), (size_t)92, 0, 1, 0); } if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 95 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
   ;
# 96 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
 int r; ;
# 97 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
 uint32 b; ;
# 98 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
# 99 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
  call_lbl_0: ({ calling_npm("sha1_begin", 0); sha1_begin_npm(&ctx); });
# 100 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
  call_lbl_1: ({ calling_npm("sha1_hash", 0); sha1_hash_npm(mystate, 20, &ctx); });
# 101 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
  call_lbl_2: ({ calling_npm("sha1_end", 0); sha1_end_npm(mystate, &ctx); });
# 102 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
 b = (mystate[16] << 24) | (mystate[17] << 16)
# 103 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
  | (mystate[18] << 8) | (mystate[19] << 0);
# 104 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
 b = b & 0x7fffffff;
# 105 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
# 106 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
 r = (int) b;
# 107 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
  int ____chimes_ret_var_1; ; ____chimes_ret_var_1 = (r); rm_stack(false, 0UL, "rng_nextrand", &____must_manage_rng_nextrand, ____alias_loc_id_6, ____chimes_did_disable3, false); return ____chimes_ret_var_1; ;
# 108 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
rm_stack(false, 0UL, "rng_nextrand", &____must_manage_rng_nextrand, ____alias_loc_id_6, ____chimes_did_disable3, false); }
# 109 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
# 110 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
# 111 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
char * rng_showstate_npm(RNG_state *state, char *s);
char * rng_showstate_quick(RNG_state *state, char *s); char * rng_showstate(RNG_state *state, char *s);
char * rng_showstate_resumable(RNG_state *state, char *s){const int ____chimes_did_disable4 = new_stack((void *)(&rng_showstate), "rng_showstate", &____must_manage_rng_showstate, 2, 0, (size_t)(14039954671321871492UL), (size_t)(14039954671321871493UL)) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 112 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
  sprintf(s,"%.2X%.2X...", state[0],state[1]);
# 113 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
   char *____chimes_ret_var_2; ; ____chimes_ret_var_2 = (s); rm_stack(true, 14039954671321871493UL, "rng_showstate", &____must_manage_rng_showstate, ____alias_loc_id_7, ____chimes_did_disable4, false); return ____chimes_ret_var_2; ;
# 114 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
rm_stack(true, 14039954671321871493UL, "rng_showstate", &____must_manage_rng_showstate, ____alias_loc_id_7, ____chimes_did_disable4, false); }
# 115 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
# 116 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
# 117 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
int rng_showtype_npm(char *strBuf, int ind);
int rng_showtype_quick(char *strBuf, int ind); int rng_showtype(char *strBuf, int ind);
int rng_showtype_resumable(char *strBuf, int ind) {const int ____chimes_did_disable5 = new_stack((void *)(&rng_showtype), "rng_showtype", &____must_manage_rng_showtype, 2, 0, (size_t)(14039954671321871516UL), (size_t)(0UL)) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 118 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
  ind += sprintf(strBuf+ind, "SHA-1 (state size = %luB)",
# 119 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
                 sizeof(struct state_t));
# 120 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
   int ____chimes_ret_var_3; ; ____chimes_ret_var_3 = (ind); rm_stack(false, 0UL, "rng_showtype", &____must_manage_rng_showtype, ____alias_loc_id_8, ____chimes_did_disable5, false); return ____chimes_ret_var_3; ;
# 121 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
rm_stack(false, 0UL, "rng_showtype", &____must_manage_rng_showtype, ____alias_loc_id_8, ____chimes_did_disable5, false); }
# 195 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
# 195 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
void sha1_compile_npm(sha1_ctx ctx[1]);
void sha1_compile_quick(sha1_ctx ctx[1]); void sha1_compile(sha1_ctx ctx[1]);
void sha1_compile_resumable(sha1_ctx ctx[1])
# 196 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
{const int ____chimes_did_disable6 = new_stack((void *)(&sha1_compile), "sha1_compile", &____must_manage_sha1_compile, 1, 0, (size_t)(14039954671321875830UL)) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ; uint_32t *w; w = (ctx->wbuf) ;
# 197 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
# 198 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
# 199 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
# 200 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
# 201 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
# 202 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
    uint_32t v0; uint_32t v1; uint_32t v2; uint_32t v3; uint_32t v4; ;
# 203 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
    v0 = ctx->hash[0]; v1 = ctx->hash[1];
# 204 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
    v2 = ctx->hash[2]; v3 = ctx->hash[3];
# 205 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
    v4 = ctx->hash[4];
# 206 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
# 207 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
# 208 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
# 209 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
# 210 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
    v4 += (((v0) >> 27) | ((v0) << (32 - 27))) + ((v3) ^ ((v1) & ((v2) ^ (v3)))) + 0x5a827999 + w[0]; v1 = (((v1) >> 2) | ((v1) << (32 - 2))); v3 += (((v4) >> 27) | ((v4) << (32 - 27))) + ((v2) ^ ((v0) & ((v1) ^ (v2)))) + 0x5a827999 + w[0 +1]; v0 = (((v0) >> 2) | ((v0) << (32 - 2))); v2 += (((v3) >> 27) | ((v3) << (32 - 27))) + ((v1) ^ ((v4) & ((v0) ^ (v1)))) + 0x5a827999 + w[0 +2]; v4 = (((v4) >> 2) | ((v4) << (32 - 2))); v1 += (((v2) >> 27) | ((v2) << (32 - 27))) + ((v0) ^ ((v3) & ((v4) ^ (v0)))) + 0x5a827999 + w[0 +3]; v3 = (((v3) >> 2) | ((v3) << (32 - 2))); v0 += (((v1) >> 27) | ((v1) << (32 - 27))) + ((v4) ^ ((v2) & ((v3) ^ (v4)))) + 0x5a827999 + w[0 +4]; v2 = (((v2) >> 2) | ((v2) << (32 - 2)));
# 211 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
    v4 += (((v0) >> 27) | ((v0) << (32 - 27))) + ((v3) ^ ((v1) & ((v2) ^ (v3)))) + 0x5a827999 + w[5]; v1 = (((v1) >> 2) | ((v1) << (32 - 2))); v3 += (((v4) >> 27) | ((v4) << (32 - 27))) + ((v2) ^ ((v0) & ((v1) ^ (v2)))) + 0x5a827999 + w[5 +1]; v0 = (((v0) >> 2) | ((v0) << (32 - 2))); v2 += (((v3) >> 27) | ((v3) << (32 - 27))) + ((v1) ^ ((v4) & ((v0) ^ (v1)))) + 0x5a827999 + w[5 +2]; v4 = (((v4) >> 2) | ((v4) << (32 - 2))); v1 += (((v2) >> 27) | ((v2) << (32 - 27))) + ((v0) ^ ((v3) & ((v4) ^ (v0)))) + 0x5a827999 + w[5 +3]; v3 = (((v3) >> 2) | ((v3) << (32 - 2))); v0 += (((v1) >> 27) | ((v1) << (32 - 27))) + ((v4) ^ ((v2) & ((v3) ^ (v4)))) + 0x5a827999 + w[5 +4]; v2 = (((v2) >> 2) | ((v2) << (32 - 2)));
# 212 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
    v4 += (((v0) >> 27) | ((v0) << (32 - 27))) + ((v3) ^ ((v1) & ((v2) ^ (v3)))) + 0x5a827999 + w[10]; v1 = (((v1) >> 2) | ((v1) << (32 - 2))); v3 += (((v4) >> 27) | ((v4) << (32 - 27))) + ((v2) ^ ((v0) & ((v1) ^ (v2)))) + 0x5a827999 + w[10 +1]; v0 = (((v0) >> 2) | ((v0) << (32 - 2))); v2 += (((v3) >> 27) | ((v3) << (32 - 27))) + ((v1) ^ ((v4) & ((v0) ^ (v1)))) + 0x5a827999 + w[10 +2]; v4 = (((v4) >> 2) | ((v4) << (32 - 2))); v1 += (((v2) >> 27) | ((v2) << (32 - 27))) + ((v0) ^ ((v3) & ((v4) ^ (v0)))) + 0x5a827999 + w[10 +3]; v3 = (((v3) >> 2) | ((v3) << (32 - 2))); v0 += (((v1) >> 27) | ((v1) << (32 - 27))) + ((v4) ^ ((v2) & ((v3) ^ (v4)))) + 0x5a827999 + w[10 +4]; v2 = (((v2) >> 2) | ((v2) << (32 - 2)));
# 213 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
    v4 += (((v0) >> 27) | ((v0) << (32 - 27))) + ((v3) ^ ((v1) & ((v2) ^ (v3)))) + 0x5a827999 + w[15]; v1 = (((v1) >> 2) | ((v1) << (32 - 2)));
# 214 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
# 215 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
# 216 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
# 217 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
# 218 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
# 219 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
# 220 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
    v3 += (((v4) >> 27) | ((v4) << (32 - 27))) + ((v2) ^ ((v0) & ((v1) ^ (v2)))) + 0x5a827999 + (w[(16) & 15] = (((w[((16) + 13) & 15] ^ w[((16) + 8) & 15] ^ w[((16) + 2) & 15] ^ w[(16) & 15]) << 1) | ((w[((16) + 13) & 15] ^ w[((16) + 8) & 15] ^ w[((16) + 2) & 15] ^ w[(16) & 15]) >> (32 - 1)))); v0 = (((v0) >> 2) | ((v0) << (32 - 2)));
# 221 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
    v2 += (((v3) >> 27) | ((v3) << (32 - 27))) + ((v1) ^ ((v4) & ((v0) ^ (v1)))) + 0x5a827999 + (w[(17) & 15] = (((w[((17) + 13) & 15] ^ w[((17) + 8) & 15] ^ w[((17) + 2) & 15] ^ w[(17) & 15]) << 1) | ((w[((17) + 13) & 15] ^ w[((17) + 8) & 15] ^ w[((17) + 2) & 15] ^ w[(17) & 15]) >> (32 - 1)))); v4 = (((v4) >> 2) | ((v4) << (32 - 2)));
# 222 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
    v1 += (((v2) >> 27) | ((v2) << (32 - 27))) + ((v0) ^ ((v3) & ((v4) ^ (v0)))) + 0x5a827999 + (w[(18) & 15] = (((w[((18) + 13) & 15] ^ w[((18) + 8) & 15] ^ w[((18) + 2) & 15] ^ w[(18) & 15]) << 1) | ((w[((18) + 13) & 15] ^ w[((18) + 8) & 15] ^ w[((18) + 2) & 15] ^ w[(18) & 15]) >> (32 - 1)))); v3 = (((v3) >> 2) | ((v3) << (32 - 2)));
# 223 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
    v0 += (((v1) >> 27) | ((v1) << (32 - 27))) + ((v4) ^ ((v2) & ((v3) ^ (v4)))) + 0x5a827999 + (w[(19) & 15] = (((w[((19) + 13) & 15] ^ w[((19) + 8) & 15] ^ w[((19) + 2) & 15] ^ w[(19) & 15]) << 1) | ((w[((19) + 13) & 15] ^ w[((19) + 8) & 15] ^ w[((19) + 2) & 15] ^ w[(19) & 15]) >> (32 - 1)))); v2 = (((v2) >> 2) | ((v2) << (32 - 2)));
# 224 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
# 225 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
    v4 += (((v0) >> 27) | ((v0) << (32 - 27))) + ((v1) ^ (v2) ^ (v3)) + 0x6ed9eba1 + (w[(20) & 15] = (((w[((20) + 13) & 15] ^ w[((20) + 8) & 15] ^ w[((20) + 2) & 15] ^ w[(20) & 15]) << 1) | ((w[((20) + 13) & 15] ^ w[((20) + 8) & 15] ^ w[((20) + 2) & 15] ^ w[(20) & 15]) >> (32 - 1)))); v1 = (((v1) >> 2) | ((v1) << (32 - 2))); v3 += (((v4) >> 27) | ((v4) << (32 - 27))) + ((v0) ^ (v1) ^ (v2)) + 0x6ed9eba1 + (w[(20 +1) & 15] = (((w[((20 +1) + 13) & 15] ^ w[((20 +1) + 8) & 15] ^ w[((20 +1) + 2) & 15] ^ w[(20 +1) & 15]) << 1) | ((w[((20 +1) + 13) & 15] ^ w[((20 +1) + 8) & 15] ^ w[((20 +1) + 2) & 15] ^ w[(20 +1) & 15]) >> (32 - 1)))); v0 = (((v0) >> 2) | ((v0) << (32 - 2))); v2 += (((v3) >> 27) | ((v3) << (32 - 27))) + ((v4) ^ (v0) ^ (v1)) + 0x6ed9eba1 + (w[(20 +2) & 15] = (((w[((20 +2) + 13) & 15] ^ w[((20 +2) + 8) & 15] ^ w[((20 +2) + 2) & 15] ^ w[(20 +2) & 15]) << 1) | ((w[((20 +2) + 13) & 15] ^ w[((20 +2) + 8) & 15] ^ w[((20 +2) + 2) & 15] ^ w[(20 +2) & 15]) >> (32 - 1)))); v4 = (((v4) >> 2) | ((v4) << (32 - 2))); v1 += (((v2) >> 27) | ((v2) << (32 - 27))) + ((v3) ^ (v4) ^ (v0)) + 0x6ed9eba1 + (w[(20 +3) & 15] = (((w[((20 +3) + 13) & 15] ^ w[((20 +3) + 8) & 15] ^ w[((20 +3) + 2) & 15] ^ w[(20 +3) & 15]) << 1) | ((w[((20 +3) + 13) & 15] ^ w[((20 +3) + 8) & 15] ^ w[((20 +3) + 2) & 15] ^ w[(20 +3) & 15]) >> (32 - 1)))); v3 = (((v3) >> 2) | ((v3) << (32 - 2))); v0 += (((v1) >> 27) | ((v1) << (32 - 27))) + ((v2) ^ (v3) ^ (v4)) + 0x6ed9eba1 + (w[(20 +4) & 15] = (((w[((20 +4) + 13) & 15] ^ w[((20 +4) + 8) & 15] ^ w[((20 +4) + 2) & 15] ^ w[(20 +4) & 15]) << 1) | ((w[((20 +4) + 13) & 15] ^ w[((20 +4) + 8) & 15] ^ w[((20 +4) + 2) & 15] ^ w[(20 +4) & 15]) >> (32 - 1)))); v2 = (((v2) >> 2) | ((v2) << (32 - 2)));
# 226 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
    v4 += (((v0) >> 27) | ((v0) << (32 - 27))) + ((v1) ^ (v2) ^ (v3)) + 0x6ed9eba1 + (w[(25) & 15] = (((w[((25) + 13) & 15] ^ w[((25) + 8) & 15] ^ w[((25) + 2) & 15] ^ w[(25) & 15]) << 1) | ((w[((25) + 13) & 15] ^ w[((25) + 8) & 15] ^ w[((25) + 2) & 15] ^ w[(25) & 15]) >> (32 - 1)))); v1 = (((v1) >> 2) | ((v1) << (32 - 2))); v3 += (((v4) >> 27) | ((v4) << (32 - 27))) + ((v0) ^ (v1) ^ (v2)) + 0x6ed9eba1 + (w[(25 +1) & 15] = (((w[((25 +1) + 13) & 15] ^ w[((25 +1) + 8) & 15] ^ w[((25 +1) + 2) & 15] ^ w[(25 +1) & 15]) << 1) | ((w[((25 +1) + 13) & 15] ^ w[((25 +1) + 8) & 15] ^ w[((25 +1) + 2) & 15] ^ w[(25 +1) & 15]) >> (32 - 1)))); v0 = (((v0) >> 2) | ((v0) << (32 - 2))); v2 += (((v3) >> 27) | ((v3) << (32 - 27))) + ((v4) ^ (v0) ^ (v1)) + 0x6ed9eba1 + (w[(25 +2) & 15] = (((w[((25 +2) + 13) & 15] ^ w[((25 +2) + 8) & 15] ^ w[((25 +2) + 2) & 15] ^ w[(25 +2) & 15]) << 1) | ((w[((25 +2) + 13) & 15] ^ w[((25 +2) + 8) & 15] ^ w[((25 +2) + 2) & 15] ^ w[(25 +2) & 15]) >> (32 - 1)))); v4 = (((v4) >> 2) | ((v4) << (32 - 2))); v1 += (((v2) >> 27) | ((v2) << (32 - 27))) + ((v3) ^ (v4) ^ (v0)) + 0x6ed9eba1 + (w[(25 +3) & 15] = (((w[((25 +3) + 13) & 15] ^ w[((25 +3) + 8) & 15] ^ w[((25 +3) + 2) & 15] ^ w[(25 +3) & 15]) << 1) | ((w[((25 +3) + 13) & 15] ^ w[((25 +3) + 8) & 15] ^ w[((25 +3) + 2) & 15] ^ w[(25 +3) & 15]) >> (32 - 1)))); v3 = (((v3) >> 2) | ((v3) << (32 - 2))); v0 += (((v1) >> 27) | ((v1) << (32 - 27))) + ((v2) ^ (v3) ^ (v4)) + 0x6ed9eba1 + (w[(25 +4) & 15] = (((w[((25 +4) + 13) & 15] ^ w[((25 +4) + 8) & 15] ^ w[((25 +4) + 2) & 15] ^ w[(25 +4) & 15]) << 1) | ((w[((25 +4) + 13) & 15] ^ w[((25 +4) + 8) & 15] ^ w[((25 +4) + 2) & 15] ^ w[(25 +4) & 15]) >> (32 - 1)))); v2 = (((v2) >> 2) | ((v2) << (32 - 2)));
# 227 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
    v4 += (((v0) >> 27) | ((v0) << (32 - 27))) + ((v1) ^ (v2) ^ (v3)) + 0x6ed9eba1 + (w[(30) & 15] = (((w[((30) + 13) & 15] ^ w[((30) + 8) & 15] ^ w[((30) + 2) & 15] ^ w[(30) & 15]) << 1) | ((w[((30) + 13) & 15] ^ w[((30) + 8) & 15] ^ w[((30) + 2) & 15] ^ w[(30) & 15]) >> (32 - 1)))); v1 = (((v1) >> 2) | ((v1) << (32 - 2))); v3 += (((v4) >> 27) | ((v4) << (32 - 27))) + ((v0) ^ (v1) ^ (v2)) + 0x6ed9eba1 + (w[(30 +1) & 15] = (((w[((30 +1) + 13) & 15] ^ w[((30 +1) + 8) & 15] ^ w[((30 +1) + 2) & 15] ^ w[(30 +1) & 15]) << 1) | ((w[((30 +1) + 13) & 15] ^ w[((30 +1) + 8) & 15] ^ w[((30 +1) + 2) & 15] ^ w[(30 +1) & 15]) >> (32 - 1)))); v0 = (((v0) >> 2) | ((v0) << (32 - 2))); v2 += (((v3) >> 27) | ((v3) << (32 - 27))) + ((v4) ^ (v0) ^ (v1)) + 0x6ed9eba1 + (w[(30 +2) & 15] = (((w[((30 +2) + 13) & 15] ^ w[((30 +2) + 8) & 15] ^ w[((30 +2) + 2) & 15] ^ w[(30 +2) & 15]) << 1) | ((w[((30 +2) + 13) & 15] ^ w[((30 +2) + 8) & 15] ^ w[((30 +2) + 2) & 15] ^ w[(30 +2) & 15]) >> (32 - 1)))); v4 = (((v4) >> 2) | ((v4) << (32 - 2))); v1 += (((v2) >> 27) | ((v2) << (32 - 27))) + ((v3) ^ (v4) ^ (v0)) + 0x6ed9eba1 + (w[(30 +3) & 15] = (((w[((30 +3) + 13) & 15] ^ w[((30 +3) + 8) & 15] ^ w[((30 +3) + 2) & 15] ^ w[(30 +3) & 15]) << 1) | ((w[((30 +3) + 13) & 15] ^ w[((30 +3) + 8) & 15] ^ w[((30 +3) + 2) & 15] ^ w[(30 +3) & 15]) >> (32 - 1)))); v3 = (((v3) >> 2) | ((v3) << (32 - 2))); v0 += (((v1) >> 27) | ((v1) << (32 - 27))) + ((v2) ^ (v3) ^ (v4)) + 0x6ed9eba1 + (w[(30 +4) & 15] = (((w[((30 +4) + 13) & 15] ^ w[((30 +4) + 8) & 15] ^ w[((30 +4) + 2) & 15] ^ w[(30 +4) & 15]) << 1) | ((w[((30 +4) + 13) & 15] ^ w[((30 +4) + 8) & 15] ^ w[((30 +4) + 2) & 15] ^ w[(30 +4) & 15]) >> (32 - 1)))); v2 = (((v2) >> 2) | ((v2) << (32 - 2)));
# 228 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
    v4 += (((v0) >> 27) | ((v0) << (32 - 27))) + ((v1) ^ (v2) ^ (v3)) + 0x6ed9eba1 + (w[(35) & 15] = (((w[((35) + 13) & 15] ^ w[((35) + 8) & 15] ^ w[((35) + 2) & 15] ^ w[(35) & 15]) << 1) | ((w[((35) + 13) & 15] ^ w[((35) + 8) & 15] ^ w[((35) + 2) & 15] ^ w[(35) & 15]) >> (32 - 1)))); v1 = (((v1) >> 2) | ((v1) << (32 - 2))); v3 += (((v4) >> 27) | ((v4) << (32 - 27))) + ((v0) ^ (v1) ^ (v2)) + 0x6ed9eba1 + (w[(35 +1) & 15] = (((w[((35 +1) + 13) & 15] ^ w[((35 +1) + 8) & 15] ^ w[((35 +1) + 2) & 15] ^ w[(35 +1) & 15]) << 1) | ((w[((35 +1) + 13) & 15] ^ w[((35 +1) + 8) & 15] ^ w[((35 +1) + 2) & 15] ^ w[(35 +1) & 15]) >> (32 - 1)))); v0 = (((v0) >> 2) | ((v0) << (32 - 2))); v2 += (((v3) >> 27) | ((v3) << (32 - 27))) + ((v4) ^ (v0) ^ (v1)) + 0x6ed9eba1 + (w[(35 +2) & 15] = (((w[((35 +2) + 13) & 15] ^ w[((35 +2) + 8) & 15] ^ w[((35 +2) + 2) & 15] ^ w[(35 +2) & 15]) << 1) | ((w[((35 +2) + 13) & 15] ^ w[((35 +2) + 8) & 15] ^ w[((35 +2) + 2) & 15] ^ w[(35 +2) & 15]) >> (32 - 1)))); v4 = (((v4) >> 2) | ((v4) << (32 - 2))); v1 += (((v2) >> 27) | ((v2) << (32 - 27))) + ((v3) ^ (v4) ^ (v0)) + 0x6ed9eba1 + (w[(35 +3) & 15] = (((w[((35 +3) + 13) & 15] ^ w[((35 +3) + 8) & 15] ^ w[((35 +3) + 2) & 15] ^ w[(35 +3) & 15]) << 1) | ((w[((35 +3) + 13) & 15] ^ w[((35 +3) + 8) & 15] ^ w[((35 +3) + 2) & 15] ^ w[(35 +3) & 15]) >> (32 - 1)))); v3 = (((v3) >> 2) | ((v3) << (32 - 2))); v0 += (((v1) >> 27) | ((v1) << (32 - 27))) + ((v2) ^ (v3) ^ (v4)) + 0x6ed9eba1 + (w[(35 +4) & 15] = (((w[((35 +4) + 13) & 15] ^ w[((35 +4) + 8) & 15] ^ w[((35 +4) + 2) & 15] ^ w[(35 +4) & 15]) << 1) | ((w[((35 +4) + 13) & 15] ^ w[((35 +4) + 8) & 15] ^ w[((35 +4) + 2) & 15] ^ w[(35 +4) & 15]) >> (32 - 1)))); v2 = (((v2) >> 2) | ((v2) << (32 - 2)));
# 229 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
# 230 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
    v4 += (((v0) >> 27) | ((v0) << (32 - 27))) + (((v1) & (v2)) | ((v3) & ((v1) ^ (v2)))) + 0x8f1bbcdc + (w[(40) & 15] = (((w[((40) + 13) & 15] ^ w[((40) + 8) & 15] ^ w[((40) + 2) & 15] ^ w[(40) & 15]) << 1) | ((w[((40) + 13) & 15] ^ w[((40) + 8) & 15] ^ w[((40) + 2) & 15] ^ w[(40) & 15]) >> (32 - 1)))); v1 = (((v1) >> 2) | ((v1) << (32 - 2))); v3 += (((v4) >> 27) | ((v4) << (32 - 27))) + (((v0) & (v1)) | ((v2) & ((v0) ^ (v1)))) + 0x8f1bbcdc + (w[(40 +1) & 15] = (((w[((40 +1) + 13) & 15] ^ w[((40 +1) + 8) & 15] ^ w[((40 +1) + 2) & 15] ^ w[(40 +1) & 15]) << 1) | ((w[((40 +1) + 13) & 15] ^ w[((40 +1) + 8) & 15] ^ w[((40 +1) + 2) & 15] ^ w[(40 +1) & 15]) >> (32 - 1)))); v0 = (((v0) >> 2) | ((v0) << (32 - 2))); v2 += (((v3) >> 27) | ((v3) << (32 - 27))) + (((v4) & (v0)) | ((v1) & ((v4) ^ (v0)))) + 0x8f1bbcdc + (w[(40 +2) & 15] = (((w[((40 +2) + 13) & 15] ^ w[((40 +2) + 8) & 15] ^ w[((40 +2) + 2) & 15] ^ w[(40 +2) & 15]) << 1) | ((w[((40 +2) + 13) & 15] ^ w[((40 +2) + 8) & 15] ^ w[((40 +2) + 2) & 15] ^ w[(40 +2) & 15]) >> (32 - 1)))); v4 = (((v4) >> 2) | ((v4) << (32 - 2))); v1 += (((v2) >> 27) | ((v2) << (32 - 27))) + (((v3) & (v4)) | ((v0) & ((v3) ^ (v4)))) + 0x8f1bbcdc + (w[(40 +3) & 15] = (((w[((40 +3) + 13) & 15] ^ w[((40 +3) + 8) & 15] ^ w[((40 +3) + 2) & 15] ^ w[(40 +3) & 15]) << 1) | ((w[((40 +3) + 13) & 15] ^ w[((40 +3) + 8) & 15] ^ w[((40 +3) + 2) & 15] ^ w[(40 +3) & 15]) >> (32 - 1)))); v3 = (((v3) >> 2) | ((v3) << (32 - 2))); v0 += (((v1) >> 27) | ((v1) << (32 - 27))) + (((v2) & (v3)) | ((v4) & ((v2) ^ (v3)))) + 0x8f1bbcdc + (w[(40 +4) & 15] = (((w[((40 +4) + 13) & 15] ^ w[((40 +4) + 8) & 15] ^ w[((40 +4) + 2) & 15] ^ w[(40 +4) & 15]) << 1) | ((w[((40 +4) + 13) & 15] ^ w[((40 +4) + 8) & 15] ^ w[((40 +4) + 2) & 15] ^ w[(40 +4) & 15]) >> (32 - 1)))); v2 = (((v2) >> 2) | ((v2) << (32 - 2)));
# 231 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
    v4 += (((v0) >> 27) | ((v0) << (32 - 27))) + (((v1) & (v2)) | ((v3) & ((v1) ^ (v2)))) + 0x8f1bbcdc + (w[(45) & 15] = (((w[((45) + 13) & 15] ^ w[((45) + 8) & 15] ^ w[((45) + 2) & 15] ^ w[(45) & 15]) << 1) | ((w[((45) + 13) & 15] ^ w[((45) + 8) & 15] ^ w[((45) + 2) & 15] ^ w[(45) & 15]) >> (32 - 1)))); v1 = (((v1) >> 2) | ((v1) << (32 - 2))); v3 += (((v4) >> 27) | ((v4) << (32 - 27))) + (((v0) & (v1)) | ((v2) & ((v0) ^ (v1)))) + 0x8f1bbcdc + (w[(45 +1) & 15] = (((w[((45 +1) + 13) & 15] ^ w[((45 +1) + 8) & 15] ^ w[((45 +1) + 2) & 15] ^ w[(45 +1) & 15]) << 1) | ((w[((45 +1) + 13) & 15] ^ w[((45 +1) + 8) & 15] ^ w[((45 +1) + 2) & 15] ^ w[(45 +1) & 15]) >> (32 - 1)))); v0 = (((v0) >> 2) | ((v0) << (32 - 2))); v2 += (((v3) >> 27) | ((v3) << (32 - 27))) + (((v4) & (v0)) | ((v1) & ((v4) ^ (v0)))) + 0x8f1bbcdc + (w[(45 +2) & 15] = (((w[((45 +2) + 13) & 15] ^ w[((45 +2) + 8) & 15] ^ w[((45 +2) + 2) & 15] ^ w[(45 +2) & 15]) << 1) | ((w[((45 +2) + 13) & 15] ^ w[((45 +2) + 8) & 15] ^ w[((45 +2) + 2) & 15] ^ w[(45 +2) & 15]) >> (32 - 1)))); v4 = (((v4) >> 2) | ((v4) << (32 - 2))); v1 += (((v2) >> 27) | ((v2) << (32 - 27))) + (((v3) & (v4)) | ((v0) & ((v3) ^ (v4)))) + 0x8f1bbcdc + (w[(45 +3) & 15] = (((w[((45 +3) + 13) & 15] ^ w[((45 +3) + 8) & 15] ^ w[((45 +3) + 2) & 15] ^ w[(45 +3) & 15]) << 1) | ((w[((45 +3) + 13) & 15] ^ w[((45 +3) + 8) & 15] ^ w[((45 +3) + 2) & 15] ^ w[(45 +3) & 15]) >> (32 - 1)))); v3 = (((v3) >> 2) | ((v3) << (32 - 2))); v0 += (((v1) >> 27) | ((v1) << (32 - 27))) + (((v2) & (v3)) | ((v4) & ((v2) ^ (v3)))) + 0x8f1bbcdc + (w[(45 +4) & 15] = (((w[((45 +4) + 13) & 15] ^ w[((45 +4) + 8) & 15] ^ w[((45 +4) + 2) & 15] ^ w[(45 +4) & 15]) << 1) | ((w[((45 +4) + 13) & 15] ^ w[((45 +4) + 8) & 15] ^ w[((45 +4) + 2) & 15] ^ w[(45 +4) & 15]) >> (32 - 1)))); v2 = (((v2) >> 2) | ((v2) << (32 - 2)));
# 232 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
    v4 += (((v0) >> 27) | ((v0) << (32 - 27))) + (((v1) & (v2)) | ((v3) & ((v1) ^ (v2)))) + 0x8f1bbcdc + (w[(50) & 15] = (((w[((50) + 13) & 15] ^ w[((50) + 8) & 15] ^ w[((50) + 2) & 15] ^ w[(50) & 15]) << 1) | ((w[((50) + 13) & 15] ^ w[((50) + 8) & 15] ^ w[((50) + 2) & 15] ^ w[(50) & 15]) >> (32 - 1)))); v1 = (((v1) >> 2) | ((v1) << (32 - 2))); v3 += (((v4) >> 27) | ((v4) << (32 - 27))) + (((v0) & (v1)) | ((v2) & ((v0) ^ (v1)))) + 0x8f1bbcdc + (w[(50 +1) & 15] = (((w[((50 +1) + 13) & 15] ^ w[((50 +1) + 8) & 15] ^ w[((50 +1) + 2) & 15] ^ w[(50 +1) & 15]) << 1) | ((w[((50 +1) + 13) & 15] ^ w[((50 +1) + 8) & 15] ^ w[((50 +1) + 2) & 15] ^ w[(50 +1) & 15]) >> (32 - 1)))); v0 = (((v0) >> 2) | ((v0) << (32 - 2))); v2 += (((v3) >> 27) | ((v3) << (32 - 27))) + (((v4) & (v0)) | ((v1) & ((v4) ^ (v0)))) + 0x8f1bbcdc + (w[(50 +2) & 15] = (((w[((50 +2) + 13) & 15] ^ w[((50 +2) + 8) & 15] ^ w[((50 +2) + 2) & 15] ^ w[(50 +2) & 15]) << 1) | ((w[((50 +2) + 13) & 15] ^ w[((50 +2) + 8) & 15] ^ w[((50 +2) + 2) & 15] ^ w[(50 +2) & 15]) >> (32 - 1)))); v4 = (((v4) >> 2) | ((v4) << (32 - 2))); v1 += (((v2) >> 27) | ((v2) << (32 - 27))) + (((v3) & (v4)) | ((v0) & ((v3) ^ (v4)))) + 0x8f1bbcdc + (w[(50 +3) & 15] = (((w[((50 +3) + 13) & 15] ^ w[((50 +3) + 8) & 15] ^ w[((50 +3) + 2) & 15] ^ w[(50 +3) & 15]) << 1) | ((w[((50 +3) + 13) & 15] ^ w[((50 +3) + 8) & 15] ^ w[((50 +3) + 2) & 15] ^ w[(50 +3) & 15]) >> (32 - 1)))); v3 = (((v3) >> 2) | ((v3) << (32 - 2))); v0 += (((v1) >> 27) | ((v1) << (32 - 27))) + (((v2) & (v3)) | ((v4) & ((v2) ^ (v3)))) + 0x8f1bbcdc + (w[(50 +4) & 15] = (((w[((50 +4) + 13) & 15] ^ w[((50 +4) + 8) & 15] ^ w[((50 +4) + 2) & 15] ^ w[(50 +4) & 15]) << 1) | ((w[((50 +4) + 13) & 15] ^ w[((50 +4) + 8) & 15] ^ w[((50 +4) + 2) & 15] ^ w[(50 +4) & 15]) >> (32 - 1)))); v2 = (((v2) >> 2) | ((v2) << (32 - 2)));
# 233 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
    v4 += (((v0) >> 27) | ((v0) << (32 - 27))) + (((v1) & (v2)) | ((v3) & ((v1) ^ (v2)))) + 0x8f1bbcdc + (w[(55) & 15] = (((w[((55) + 13) & 15] ^ w[((55) + 8) & 15] ^ w[((55) + 2) & 15] ^ w[(55) & 15]) << 1) | ((w[((55) + 13) & 15] ^ w[((55) + 8) & 15] ^ w[((55) + 2) & 15] ^ w[(55) & 15]) >> (32 - 1)))); v1 = (((v1) >> 2) | ((v1) << (32 - 2))); v3 += (((v4) >> 27) | ((v4) << (32 - 27))) + (((v0) & (v1)) | ((v2) & ((v0) ^ (v1)))) + 0x8f1bbcdc + (w[(55 +1) & 15] = (((w[((55 +1) + 13) & 15] ^ w[((55 +1) + 8) & 15] ^ w[((55 +1) + 2) & 15] ^ w[(55 +1) & 15]) << 1) | ((w[((55 +1) + 13) & 15] ^ w[((55 +1) + 8) & 15] ^ w[((55 +1) + 2) & 15] ^ w[(55 +1) & 15]) >> (32 - 1)))); v0 = (((v0) >> 2) | ((v0) << (32 - 2))); v2 += (((v3) >> 27) | ((v3) << (32 - 27))) + (((v4) & (v0)) | ((v1) & ((v4) ^ (v0)))) + 0x8f1bbcdc + (w[(55 +2) & 15] = (((w[((55 +2) + 13) & 15] ^ w[((55 +2) + 8) & 15] ^ w[((55 +2) + 2) & 15] ^ w[(55 +2) & 15]) << 1) | ((w[((55 +2) + 13) & 15] ^ w[((55 +2) + 8) & 15] ^ w[((55 +2) + 2) & 15] ^ w[(55 +2) & 15]) >> (32 - 1)))); v4 = (((v4) >> 2) | ((v4) << (32 - 2))); v1 += (((v2) >> 27) | ((v2) << (32 - 27))) + (((v3) & (v4)) | ((v0) & ((v3) ^ (v4)))) + 0x8f1bbcdc + (w[(55 +3) & 15] = (((w[((55 +3) + 13) & 15] ^ w[((55 +3) + 8) & 15] ^ w[((55 +3) + 2) & 15] ^ w[(55 +3) & 15]) << 1) | ((w[((55 +3) + 13) & 15] ^ w[((55 +3) + 8) & 15] ^ w[((55 +3) + 2) & 15] ^ w[(55 +3) & 15]) >> (32 - 1)))); v3 = (((v3) >> 2) | ((v3) << (32 - 2))); v0 += (((v1) >> 27) | ((v1) << (32 - 27))) + (((v2) & (v3)) | ((v4) & ((v2) ^ (v3)))) + 0x8f1bbcdc + (w[(55 +4) & 15] = (((w[((55 +4) + 13) & 15] ^ w[((55 +4) + 8) & 15] ^ w[((55 +4) + 2) & 15] ^ w[(55 +4) & 15]) << 1) | ((w[((55 +4) + 13) & 15] ^ w[((55 +4) + 8) & 15] ^ w[((55 +4) + 2) & 15] ^ w[(55 +4) & 15]) >> (32 - 1)))); v2 = (((v2) >> 2) | ((v2) << (32 - 2)));
# 234 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
# 235 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
    v4 += (((v0) >> 27) | ((v0) << (32 - 27))) + ((v1) ^ (v2) ^ (v3)) + 0xca62c1d6 + (w[(60) & 15] = (((w[((60) + 13) & 15] ^ w[((60) + 8) & 15] ^ w[((60) + 2) & 15] ^ w[(60) & 15]) << 1) | ((w[((60) + 13) & 15] ^ w[((60) + 8) & 15] ^ w[((60) + 2) & 15] ^ w[(60) & 15]) >> (32 - 1)))); v1 = (((v1) >> 2) | ((v1) << (32 - 2))); v3 += (((v4) >> 27) | ((v4) << (32 - 27))) + ((v0) ^ (v1) ^ (v2)) + 0xca62c1d6 + (w[(60 +1) & 15] = (((w[((60 +1) + 13) & 15] ^ w[((60 +1) + 8) & 15] ^ w[((60 +1) + 2) & 15] ^ w[(60 +1) & 15]) << 1) | ((w[((60 +1) + 13) & 15] ^ w[((60 +1) + 8) & 15] ^ w[((60 +1) + 2) & 15] ^ w[(60 +1) & 15]) >> (32 - 1)))); v0 = (((v0) >> 2) | ((v0) << (32 - 2))); v2 += (((v3) >> 27) | ((v3) << (32 - 27))) + ((v4) ^ (v0) ^ (v1)) + 0xca62c1d6 + (w[(60 +2) & 15] = (((w[((60 +2) + 13) & 15] ^ w[((60 +2) + 8) & 15] ^ w[((60 +2) + 2) & 15] ^ w[(60 +2) & 15]) << 1) | ((w[((60 +2) + 13) & 15] ^ w[((60 +2) + 8) & 15] ^ w[((60 +2) + 2) & 15] ^ w[(60 +2) & 15]) >> (32 - 1)))); v4 = (((v4) >> 2) | ((v4) << (32 - 2))); v1 += (((v2) >> 27) | ((v2) << (32 - 27))) + ((v3) ^ (v4) ^ (v0)) + 0xca62c1d6 + (w[(60 +3) & 15] = (((w[((60 +3) + 13) & 15] ^ w[((60 +3) + 8) & 15] ^ w[((60 +3) + 2) & 15] ^ w[(60 +3) & 15]) << 1) | ((w[((60 +3) + 13) & 15] ^ w[((60 +3) + 8) & 15] ^ w[((60 +3) + 2) & 15] ^ w[(60 +3) & 15]) >> (32 - 1)))); v3 = (((v3) >> 2) | ((v3) << (32 - 2))); v0 += (((v1) >> 27) | ((v1) << (32 - 27))) + ((v2) ^ (v3) ^ (v4)) + 0xca62c1d6 + (w[(60 +4) & 15] = (((w[((60 +4) + 13) & 15] ^ w[((60 +4) + 8) & 15] ^ w[((60 +4) + 2) & 15] ^ w[(60 +4) & 15]) << 1) | ((w[((60 +4) + 13) & 15] ^ w[((60 +4) + 8) & 15] ^ w[((60 +4) + 2) & 15] ^ w[(60 +4) & 15]) >> (32 - 1)))); v2 = (((v2) >> 2) | ((v2) << (32 - 2)));
# 236 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
    v4 += (((v0) >> 27) | ((v0) << (32 - 27))) + ((v1) ^ (v2) ^ (v3)) + 0xca62c1d6 + (w[(65) & 15] = (((w[((65) + 13) & 15] ^ w[((65) + 8) & 15] ^ w[((65) + 2) & 15] ^ w[(65) & 15]) << 1) | ((w[((65) + 13) & 15] ^ w[((65) + 8) & 15] ^ w[((65) + 2) & 15] ^ w[(65) & 15]) >> (32 - 1)))); v1 = (((v1) >> 2) | ((v1) << (32 - 2))); v3 += (((v4) >> 27) | ((v4) << (32 - 27))) + ((v0) ^ (v1) ^ (v2)) + 0xca62c1d6 + (w[(65 +1) & 15] = (((w[((65 +1) + 13) & 15] ^ w[((65 +1) + 8) & 15] ^ w[((65 +1) + 2) & 15] ^ w[(65 +1) & 15]) << 1) | ((w[((65 +1) + 13) & 15] ^ w[((65 +1) + 8) & 15] ^ w[((65 +1) + 2) & 15] ^ w[(65 +1) & 15]) >> (32 - 1)))); v0 = (((v0) >> 2) | ((v0) << (32 - 2))); v2 += (((v3) >> 27) | ((v3) << (32 - 27))) + ((v4) ^ (v0) ^ (v1)) + 0xca62c1d6 + (w[(65 +2) & 15] = (((w[((65 +2) + 13) & 15] ^ w[((65 +2) + 8) & 15] ^ w[((65 +2) + 2) & 15] ^ w[(65 +2) & 15]) << 1) | ((w[((65 +2) + 13) & 15] ^ w[((65 +2) + 8) & 15] ^ w[((65 +2) + 2) & 15] ^ w[(65 +2) & 15]) >> (32 - 1)))); v4 = (((v4) >> 2) | ((v4) << (32 - 2))); v1 += (((v2) >> 27) | ((v2) << (32 - 27))) + ((v3) ^ (v4) ^ (v0)) + 0xca62c1d6 + (w[(65 +3) & 15] = (((w[((65 +3) + 13) & 15] ^ w[((65 +3) + 8) & 15] ^ w[((65 +3) + 2) & 15] ^ w[(65 +3) & 15]) << 1) | ((w[((65 +3) + 13) & 15] ^ w[((65 +3) + 8) & 15] ^ w[((65 +3) + 2) & 15] ^ w[(65 +3) & 15]) >> (32 - 1)))); v3 = (((v3) >> 2) | ((v3) << (32 - 2))); v0 += (((v1) >> 27) | ((v1) << (32 - 27))) + ((v2) ^ (v3) ^ (v4)) + 0xca62c1d6 + (w[(65 +4) & 15] = (((w[((65 +4) + 13) & 15] ^ w[((65 +4) + 8) & 15] ^ w[((65 +4) + 2) & 15] ^ w[(65 +4) & 15]) << 1) | ((w[((65 +4) + 13) & 15] ^ w[((65 +4) + 8) & 15] ^ w[((65 +4) + 2) & 15] ^ w[(65 +4) & 15]) >> (32 - 1)))); v2 = (((v2) >> 2) | ((v2) << (32 - 2)));
# 237 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
    v4 += (((v0) >> 27) | ((v0) << (32 - 27))) + ((v1) ^ (v2) ^ (v3)) + 0xca62c1d6 + (w[(70) & 15] = (((w[((70) + 13) & 15] ^ w[((70) + 8) & 15] ^ w[((70) + 2) & 15] ^ w[(70) & 15]) << 1) | ((w[((70) + 13) & 15] ^ w[((70) + 8) & 15] ^ w[((70) + 2) & 15] ^ w[(70) & 15]) >> (32 - 1)))); v1 = (((v1) >> 2) | ((v1) << (32 - 2))); v3 += (((v4) >> 27) | ((v4) << (32 - 27))) + ((v0) ^ (v1) ^ (v2)) + 0xca62c1d6 + (w[(70 +1) & 15] = (((w[((70 +1) + 13) & 15] ^ w[((70 +1) + 8) & 15] ^ w[((70 +1) + 2) & 15] ^ w[(70 +1) & 15]) << 1) | ((w[((70 +1) + 13) & 15] ^ w[((70 +1) + 8) & 15] ^ w[((70 +1) + 2) & 15] ^ w[(70 +1) & 15]) >> (32 - 1)))); v0 = (((v0) >> 2) | ((v0) << (32 - 2))); v2 += (((v3) >> 27) | ((v3) << (32 - 27))) + ((v4) ^ (v0) ^ (v1)) + 0xca62c1d6 + (w[(70 +2) & 15] = (((w[((70 +2) + 13) & 15] ^ w[((70 +2) + 8) & 15] ^ w[((70 +2) + 2) & 15] ^ w[(70 +2) & 15]) << 1) | ((w[((70 +2) + 13) & 15] ^ w[((70 +2) + 8) & 15] ^ w[((70 +2) + 2) & 15] ^ w[(70 +2) & 15]) >> (32 - 1)))); v4 = (((v4) >> 2) | ((v4) << (32 - 2))); v1 += (((v2) >> 27) | ((v2) << (32 - 27))) + ((v3) ^ (v4) ^ (v0)) + 0xca62c1d6 + (w[(70 +3) & 15] = (((w[((70 +3) + 13) & 15] ^ w[((70 +3) + 8) & 15] ^ w[((70 +3) + 2) & 15] ^ w[(70 +3) & 15]) << 1) | ((w[((70 +3) + 13) & 15] ^ w[((70 +3) + 8) & 15] ^ w[((70 +3) + 2) & 15] ^ w[(70 +3) & 15]) >> (32 - 1)))); v3 = (((v3) >> 2) | ((v3) << (32 - 2))); v0 += (((v1) >> 27) | ((v1) << (32 - 27))) + ((v2) ^ (v3) ^ (v4)) + 0xca62c1d6 + (w[(70 +4) & 15] = (((w[((70 +4) + 13) & 15] ^ w[((70 +4) + 8) & 15] ^ w[((70 +4) + 2) & 15] ^ w[(70 +4) & 15]) << 1) | ((w[((70 +4) + 13) & 15] ^ w[((70 +4) + 8) & 15] ^ w[((70 +4) + 2) & 15] ^ w[(70 +4) & 15]) >> (32 - 1)))); v2 = (((v2) >> 2) | ((v2) << (32 - 2)));
# 238 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
    v4 += (((v0) >> 27) | ((v0) << (32 - 27))) + ((v1) ^ (v2) ^ (v3)) + 0xca62c1d6 + (w[(75) & 15] = (((w[((75) + 13) & 15] ^ w[((75) + 8) & 15] ^ w[((75) + 2) & 15] ^ w[(75) & 15]) << 1) | ((w[((75) + 13) & 15] ^ w[((75) + 8) & 15] ^ w[((75) + 2) & 15] ^ w[(75) & 15]) >> (32 - 1)))); v1 = (((v1) >> 2) | ((v1) << (32 - 2))); v3 += (((v4) >> 27) | ((v4) << (32 - 27))) + ((v0) ^ (v1) ^ (v2)) + 0xca62c1d6 + (w[(75 +1) & 15] = (((w[((75 +1) + 13) & 15] ^ w[((75 +1) + 8) & 15] ^ w[((75 +1) + 2) & 15] ^ w[(75 +1) & 15]) << 1) | ((w[((75 +1) + 13) & 15] ^ w[((75 +1) + 8) & 15] ^ w[((75 +1) + 2) & 15] ^ w[(75 +1) & 15]) >> (32 - 1)))); v0 = (((v0) >> 2) | ((v0) << (32 - 2))); v2 += (((v3) >> 27) | ((v3) << (32 - 27))) + ((v4) ^ (v0) ^ (v1)) + 0xca62c1d6 + (w[(75 +2) & 15] = (((w[((75 +2) + 13) & 15] ^ w[((75 +2) + 8) & 15] ^ w[((75 +2) + 2) & 15] ^ w[(75 +2) & 15]) << 1) | ((w[((75 +2) + 13) & 15] ^ w[((75 +2) + 8) & 15] ^ w[((75 +2) + 2) & 15] ^ w[(75 +2) & 15]) >> (32 - 1)))); v4 = (((v4) >> 2) | ((v4) << (32 - 2))); v1 += (((v2) >> 27) | ((v2) << (32 - 27))) + ((v3) ^ (v4) ^ (v0)) + 0xca62c1d6 + (w[(75 +3) & 15] = (((w[((75 +3) + 13) & 15] ^ w[((75 +3) + 8) & 15] ^ w[((75 +3) + 2) & 15] ^ w[(75 +3) & 15]) << 1) | ((w[((75 +3) + 13) & 15] ^ w[((75 +3) + 8) & 15] ^ w[((75 +3) + 2) & 15] ^ w[(75 +3) & 15]) >> (32 - 1)))); v3 = (((v3) >> 2) | ((v3) << (32 - 2))); v0 += (((v1) >> 27) | ((v1) << (32 - 27))) + ((v2) ^ (v3) ^ (v4)) + 0xca62c1d6 + (w[(75 +4) & 15] = (((w[((75 +4) + 13) & 15] ^ w[((75 +4) + 8) & 15] ^ w[((75 +4) + 2) & 15] ^ w[(75 +4) & 15]) << 1) | ((w[((75 +4) + 13) & 15] ^ w[((75 +4) + 8) & 15] ^ w[((75 +4) + 2) & 15] ^ w[(75 +4) & 15]) >> (32 - 1)))); v2 = (((v2) >> 2) | ((v2) << (32 - 2)));
# 239 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
# 240 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
# 241 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
# 242 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
# 243 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
# 244 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
# 245 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
    ctx->hash[0] += v0; ctx->hash[1] += v1;
# 246 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
    ctx->hash[2] += v2; ctx->hash[3] += v3;
# 247 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
    ctx->hash[4] += v4;
# 248 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
# 249 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
rm_stack(false, 0UL, "sha1_compile", &____must_manage_sha1_compile, ____alias_loc_id_9, ____chimes_did_disable6, false); }
# 250 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
# 251 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
void sha1_begin_resumable(sha1_ctx ctx[1])
# 252 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
{const int ____chimes_did_disable7 = new_stack((void *)(&sha1_begin), "sha1_begin", &____must_manage_sha1_begin, 1, 0, (size_t)(14039954671321870994UL)) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 253 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
    ctx->count[0] = ctx->count[1] = 0;
# 254 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
    ctx->hash[0] = 0x67452301;
# 255 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
    ctx->hash[1] = 0xefcdab89;
# 256 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
    ctx->hash[2] = 0x98badcfe;
# 257 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
    ctx->hash[3] = 0x10325476;
# 258 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
    ctx->hash[4] = 0xc3d2e1f0;
# 259 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
rm_stack(false, 0UL, "sha1_begin", &____must_manage_sha1_begin, ____alias_loc_id_1, ____chimes_did_disable7, false); }
# 260 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
# 261 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
# 262 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
# 263 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
# 264 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
void sha1_hash_resumable(const unsigned char data[], unsigned long len, sha1_ctx ctx[1])
# 265 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
{const int ____chimes_did_disable8 = new_stack((void *)(&sha1_hash), "sha1_hash", &____must_manage_sha1_hash, 3, 0, (size_t)(14039954671321871138UL), (size_t)(0UL), (size_t)(14039954671321871140UL)) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ; uint_32t pos; uint_32t space; pos = ((uint_32t)(ctx->count[0] & (64 - 1))) ; space = (64 - pos) ;
# 267 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
     const unsigned char *sp; sp = (data) ;
# 268 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
# 269 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
    if ((ctx->count[0] += len) < len) {++(ctx->count[1]); };
# 271 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
# 272 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
    while(len >= space)
# 273 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
    {
# 274 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
        memcpy(((unsigned char*)ctx->wbuf) + pos, sp, space);
# 275 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
        sp += space; len -= space; space = 64; pos = 0;
# 276 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
        { int _i; _i = ((64 >> 2)) ; while(_i--) ((uint_32t*)ctx->wbuf)[_i] = ((((((((uint_32t*)ctx->wbuf)[_i])) >> 24) | (((((uint_32t*)ctx->wbuf)[_i])) << (32 - 24))) & 0x00ff00ff) | (((((((uint_32t*)ctx->wbuf)[_i])) >> 8) | (((((uint_32t*)ctx->wbuf)[_i])) << (32 - 8))) & 0xff00ff00)); };
# 277 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
         call_lbl_0: ({ calling_npm("sha1_compile", 0); sha1_compile_npm(ctx); });
# 278 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
    }
# 279 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
# 280 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
    memcpy(((unsigned char*)ctx->wbuf) + pos, sp, len);
# 281 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
rm_stack(false, 0UL, "sha1_hash", &____must_manage_sha1_hash, ____alias_loc_id_2, ____chimes_did_disable8, false); }
# 282 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
# 283 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
# 284 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
# 285 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
void sha1_end_resumable(unsigned char hval[], sha1_ctx ctx[1])
# 286 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
{const int ____chimes_did_disable9 = new_stack((void *)(&sha1_end), "sha1_end", &____must_manage_sha1_end, 2, 0, (size_t)(14039954671321871328UL), (size_t)(14039954671321871329UL)) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ; uint_32t i; i = ((uint_32t)(ctx->count[0] & (64 - 1))) ;
# 287 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
# 288 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
# 289 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
# 290 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
# 291 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
    { int _i; _i = (((i + 3) >> 2)) ; while(_i--) ((uint_32t*)ctx->wbuf)[_i] = ((((((((uint_32t*)ctx->wbuf)[_i])) >> 24) | (((((uint_32t*)ctx->wbuf)[_i])) << (32 - 24))) & 0x00ff00ff) | (((((((uint_32t*)ctx->wbuf)[_i])) >> 8) | (((((uint_32t*)ctx->wbuf)[_i])) << (32 - 8))) & 0xff00ff00)); };
# 292 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
# 293 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
# 294 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
# 295 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
# 296 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
# 297 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
    ctx->wbuf[i >> 2] &= 0xffffff80 << 8 * (~i & 3);
# 298 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
    ctx->wbuf[i >> 2] |= 0x00000080 << 8 * (~i & 3);
# 299 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
# 300 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
# 301 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
# 302 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
# 303 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
    if (i > 64 - 9) {{
# 305 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
        if (i < 60) {ctx->wbuf[15] = 0; };
# 306 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
         call_lbl_0: ({ calling_npm("sha1_compile", 0); sha1_compile_npm(ctx); });
# 307 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
        i = 0;
# 308 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
    }; } else {i = (i >> 2) + 1; } ;
# 311 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
# 312 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
    while(i < 14)
# 313 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
        ctx->wbuf[i++] = 0;
# 314 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
# 315 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
# 316 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
# 317 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
# 318 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
# 319 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
    ctx->wbuf[14] = (ctx->count[1] << 3) | (ctx->count[0] >> 29);
# 320 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
    ctx->wbuf[15] = ctx->count[0] << 3;
# 321 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
     call_lbl_1: ({ calling_npm("sha1_compile", 0); sha1_compile_npm(ctx); });
# 322 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
# 323 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
# 324 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
# 325 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
    for (i = 0; i < 20; ++i) { hval[i] = (unsigned char)(ctx->hash[i >> 2] >> (8 * (~i & 3))); };
# 327 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
rm_stack(false, 0UL, "sha1_end", &____must_manage_sha1_end, ____alias_loc_id_3, ____chimes_did_disable9, false); }
# 328 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
# 329 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
void sha1_npm(unsigned char hval[], const unsigned char data[], unsigned long len);
void sha1_quick(unsigned char hval[], const unsigned char data[], unsigned long len); void sha1(unsigned char hval[], const unsigned char data[], unsigned long len);
void sha1_resumable(unsigned char hval[], const unsigned char data[], unsigned long len)
# 330 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
{const int ____chimes_did_disable10 = new_stack((void *)(&sha1), "sha1", &____must_manage_sha1, 3, 0, (size_t)(14039954671321875857UL), (size_t)(14039954671321875858UL), (size_t)(0UL)) ; sha1_ctx cx[1];
# 330 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
 if (____must_checkpoint_sha1_cx_0) { register_stack_vars(1, "sha1|cx|0", &____must_checkpoint_sha1_cx_0, "[1 x %struct.sha1_ctx_s]", (void *)(cx), (size_t)92, 0, 0, 0); } if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ; ;
# 331 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
# 332 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
     call_lbl_0: ({ calling_npm("sha1_begin", 0); sha1_begin_npm(cx); }); call_lbl_1: ({ calling_npm("sha1_hash", 0); sha1_hash_npm(data, len, cx); }); call_lbl_2: ({ calling_npm("sha1_end", 0); sha1_end_npm(hval, cx); });
# 333 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
rm_stack(false, 0UL, "sha1", &____must_manage_sha1, ____alias_loc_id_10, ____chimes_did_disable10, false); }
# 49 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
void rng_init_quick(RNG_state *newstate, int seed)
# 50 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
{const int ____chimes_did_disable0 = new_stack((void *)(&rng_init), "rng_init", &____must_manage_rng_init, 2, 0, (size_t)(14039954671321870958UL), (size_t)(0UL)) ; struct sha1_ctx_s ctx;
# 50 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
 if (____must_checkpoint_rng_init_ctx_0) { register_stack_vars(1, "rng_init|ctx|0", &____must_checkpoint_rng_init_ctx_0, "%struct.sha1_ctx_s = type { [2 x i32], [5 x i32], [16 x i32] }", (void *)(&ctx), (size_t)92, 0, 1, 0); } ; ;
# 51 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
    ;
# 52 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
   struct state_t gen; ;
# 53 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
  int i; ;
# 54 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
# 55 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
  for (i=0; i < 16; i++) { gen.state[i] = 0; };
# 57 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
  gen.state[16] = 0xFF & (seed >> 24);
# 58 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
  gen.state[17] = 0xFF & (seed >> 16);
# 59 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
  gen.state[18] = 0xFF & (seed >> 8);
# 60 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
  gen.state[19] = 0xFF & (seed >> 0);
# 61 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
# 62 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
   call_lbl_0: ({ calling_npm("sha1_begin", 0); sha1_begin_npm(&ctx); });
# 63 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
   call_lbl_1: ({ calling_npm("sha1_hash", 0); sha1_hash_npm(gen.state, 20, &ctx); });
# 64 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
   call_lbl_2: ({ calling_npm("sha1_end", 0); sha1_end_npm(newstate, &ctx); });
# 65 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
rm_stack(false, 0UL, "rng_init", &____must_manage_rng_init, ____alias_loc_id_0, ____chimes_did_disable0, false); }

void rng_init(RNG_state *newstate, int seed) { (____chimes_replaying ? rng_init_resumable(newstate, seed) : rng_init_quick(newstate, seed)); }
# 67 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
void rng_spawn_quick(RNG_state *mystate, RNG_state *newstate, int spawnnumber)
# 68 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
{const int ____chimes_did_disable1 = new_stack((void *)(&rng_spawn), "rng_spawn", &____must_manage_rng_spawn, 3, 0, (size_t)(14039954671321871374UL), (size_t)(14039954671321871375UL), (size_t)(0UL)) ; uint8 bytes[4];
# 68 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
struct sha1_ctx_s ctx;
# 68 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
 if (____must_checkpoint_rng_spawn_ctx_0) { register_stack_vars(1, "rng_spawn|ctx|0", &____must_checkpoint_rng_spawn_ctx_0, "%struct.sha1_ctx_s = type { [2 x i32], [5 x i32], [16 x i32] }", (void *)(&ctx), (size_t)92, 0, 1, 0); } ; ;
# 69 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
   ;
# 70 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
  ;
# 71 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
# 72 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
 bytes[0] = 0xFF & (spawnnumber >> 24);
# 73 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
 bytes[1] = 0xFF & (spawnnumber >> 16);
# 74 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
 bytes[2] = 0xFF & (spawnnumber >> 8);
# 75 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
 bytes[3] = 0xFF & spawnnumber;
# 76 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
# 77 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
  call_lbl_0: ({ calling_npm("sha1_begin", 0); sha1_begin_npm(&ctx); });
# 78 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
  call_lbl_1: ({ calling_npm("sha1_hash", 0); sha1_hash_npm(mystate, 20, &ctx); });
# 79 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
  call_lbl_2: ({ calling_npm("sha1_hash", 0); sha1_hash_npm(bytes, 4, &ctx); });
# 80 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
  call_lbl_3: ({ calling_npm("sha1_end", 0); sha1_end_npm(newstate, &ctx); });
# 81 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
rm_stack(false, 0UL, "rng_spawn", &____must_manage_rng_spawn, ____alias_loc_id_4, ____chimes_did_disable1, false); }

void rng_spawn(RNG_state *mystate, RNG_state *newstate, int spawnnumber) { (____chimes_replaying ? rng_spawn_resumable(mystate, newstate, spawnnumber) : rng_spawn_quick(mystate, newstate, spawnnumber)); }
# 83 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
int rng_rand_quick(RNG_state *mystate){const int ____chimes_did_disable2 = new_stack((void *)(&rng_rand), "rng_rand", &____must_manage_rng_rand, 1, 0, (size_t)(14039954671321871419UL)) ; ; ;
# 84 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
        int r; ;
# 85 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
  uint32 b; b = ((mystate[16] << 24) | (mystate[17] << 16)
# 86 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
  | (mystate[18] << 8) | (mystate[19] << 0)) ;
# 87 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
 b = b & 0x7fffffff;
# 88 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
# 89 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
 r = (int) b;
# 90 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
# 91 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
  int ____chimes_ret_var_0; ; ____chimes_ret_var_0 = (r); rm_stack(false, 0UL, "rng_rand", &____must_manage_rng_rand, ____alias_loc_id_5, ____chimes_did_disable2, false); return ____chimes_ret_var_0; ;
# 92 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
rm_stack(false, 0UL, "rng_rand", &____must_manage_rng_rand, ____alias_loc_id_5, ____chimes_did_disable2, false); }

int rng_rand(RNG_state *mystate) { return (____chimes_replaying ? rng_rand_resumable(mystate) : rng_rand_quick(mystate)); }
# 94 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
int rng_nextrand_quick(RNG_state *mystate){const int ____chimes_did_disable3 = new_stack((void *)(&rng_nextrand), "rng_nextrand", &____must_manage_rng_nextrand, 1, 0, (size_t)(14039954671321871469UL)) ; struct sha1_ctx_s ctx;
# 94 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
 if (____must_checkpoint_rng_nextrand_ctx_0) { register_stack_vars(1, "rng_nextrand|ctx|0", &____must_checkpoint_rng_nextrand_ctx_0, "%struct.sha1_ctx_s = type { [2 x i32], [5 x i32], [16 x i32] }", (void *)(&ctx), (size_t)92, 0, 1, 0); } ; ;
# 95 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
   ;
# 96 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
 int r; ;
# 97 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
 uint32 b; ;
# 98 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
# 99 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
  call_lbl_0: ({ calling_npm("sha1_begin", 0); sha1_begin_npm(&ctx); });
# 100 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
  call_lbl_1: ({ calling_npm("sha1_hash", 0); sha1_hash_npm(mystate, 20, &ctx); });
# 101 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
  call_lbl_2: ({ calling_npm("sha1_end", 0); sha1_end_npm(mystate, &ctx); });
# 102 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
 b = (mystate[16] << 24) | (mystate[17] << 16)
# 103 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
  | (mystate[18] << 8) | (mystate[19] << 0);
# 104 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
 b = b & 0x7fffffff;
# 105 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
# 106 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
 r = (int) b;
# 107 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
  int ____chimes_ret_var_1; ; ____chimes_ret_var_1 = (r); rm_stack(false, 0UL, "rng_nextrand", &____must_manage_rng_nextrand, ____alias_loc_id_6, ____chimes_did_disable3, false); return ____chimes_ret_var_1; ;
# 108 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
rm_stack(false, 0UL, "rng_nextrand", &____must_manage_rng_nextrand, ____alias_loc_id_6, ____chimes_did_disable3, false); }

int rng_nextrand(RNG_state *mystate) { return (____chimes_replaying ? rng_nextrand_resumable(mystate) : rng_nextrand_quick(mystate)); }
# 111 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
char * rng_showstate_quick(RNG_state *state, char *s){const int ____chimes_did_disable4 = new_stack((void *)(&rng_showstate), "rng_showstate", &____must_manage_rng_showstate, 2, 0, (size_t)(14039954671321871492UL), (size_t)(14039954671321871493UL)) ; ; ;
# 112 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
  sprintf(s,"%.2X%.2X...", state[0],state[1]);
# 113 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
   char *____chimes_ret_var_2; ; ____chimes_ret_var_2 = (s); rm_stack(true, 14039954671321871493UL, "rng_showstate", &____must_manage_rng_showstate, ____alias_loc_id_7, ____chimes_did_disable4, false); return ____chimes_ret_var_2; ;
# 114 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
rm_stack(true, 14039954671321871493UL, "rng_showstate", &____must_manage_rng_showstate, ____alias_loc_id_7, ____chimes_did_disable4, false); }

char * rng_showstate(RNG_state *state, char *s) { return (____chimes_replaying ? rng_showstate_resumable(state, s) : rng_showstate_quick(state, s)); }
# 117 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
int rng_showtype_quick(char *strBuf, int ind) {const int ____chimes_did_disable5 = new_stack((void *)(&rng_showtype), "rng_showtype", &____must_manage_rng_showtype, 2, 0, (size_t)(14039954671321871516UL), (size_t)(0UL)) ; ; ;
# 118 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
  ind += sprintf(strBuf+ind, "SHA-1 (state size = %luB)",
# 119 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
                 sizeof(struct state_t));
# 120 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
   int ____chimes_ret_var_3; ; ____chimes_ret_var_3 = (ind); rm_stack(false, 0UL, "rng_showtype", &____must_manage_rng_showtype, ____alias_loc_id_8, ____chimes_did_disable5, false); return ____chimes_ret_var_3; ;
# 121 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
rm_stack(false, 0UL, "rng_showtype", &____must_manage_rng_showtype, ____alias_loc_id_8, ____chimes_did_disable5, false); }

int rng_showtype(char *strBuf, int ind) { return (____chimes_replaying ? rng_showtype_resumable(strBuf, ind) : rng_showtype_quick(strBuf, ind)); }
# 195 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
void sha1_compile_quick(sha1_ctx ctx[1])
# 196 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
{const int ____chimes_did_disable6 = new_stack((void *)(&sha1_compile), "sha1_compile", &____must_manage_sha1_compile, 1, 0, (size_t)(14039954671321875830UL)) ; ; ; uint_32t *w; w = (ctx->wbuf) ;
# 197 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
# 198 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
# 199 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
# 200 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
# 201 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
# 202 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
    uint_32t v0; uint_32t v1; uint_32t v2; uint_32t v3; uint_32t v4; ;
# 203 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
    v0 = ctx->hash[0]; v1 = ctx->hash[1];
# 204 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
    v2 = ctx->hash[2]; v3 = ctx->hash[3];
# 205 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
    v4 = ctx->hash[4];
# 206 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
# 207 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
# 208 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
# 209 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
# 210 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
    v4 += (((v0) >> 27) | ((v0) << (32 - 27))) + ((v3) ^ ((v1) & ((v2) ^ (v3)))) + 0x5a827999 + w[0]; v1 = (((v1) >> 2) | ((v1) << (32 - 2))); v3 += (((v4) >> 27) | ((v4) << (32 - 27))) + ((v2) ^ ((v0) & ((v1) ^ (v2)))) + 0x5a827999 + w[0 +1]; v0 = (((v0) >> 2) | ((v0) << (32 - 2))); v2 += (((v3) >> 27) | ((v3) << (32 - 27))) + ((v1) ^ ((v4) & ((v0) ^ (v1)))) + 0x5a827999 + w[0 +2]; v4 = (((v4) >> 2) | ((v4) << (32 - 2))); v1 += (((v2) >> 27) | ((v2) << (32 - 27))) + ((v0) ^ ((v3) & ((v4) ^ (v0)))) + 0x5a827999 + w[0 +3]; v3 = (((v3) >> 2) | ((v3) << (32 - 2))); v0 += (((v1) >> 27) | ((v1) << (32 - 27))) + ((v4) ^ ((v2) & ((v3) ^ (v4)))) + 0x5a827999 + w[0 +4]; v2 = (((v2) >> 2) | ((v2) << (32 - 2)));
# 211 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
    v4 += (((v0) >> 27) | ((v0) << (32 - 27))) + ((v3) ^ ((v1) & ((v2) ^ (v3)))) + 0x5a827999 + w[5]; v1 = (((v1) >> 2) | ((v1) << (32 - 2))); v3 += (((v4) >> 27) | ((v4) << (32 - 27))) + ((v2) ^ ((v0) & ((v1) ^ (v2)))) + 0x5a827999 + w[5 +1]; v0 = (((v0) >> 2) | ((v0) << (32 - 2))); v2 += (((v3) >> 27) | ((v3) << (32 - 27))) + ((v1) ^ ((v4) & ((v0) ^ (v1)))) + 0x5a827999 + w[5 +2]; v4 = (((v4) >> 2) | ((v4) << (32 - 2))); v1 += (((v2) >> 27) | ((v2) << (32 - 27))) + ((v0) ^ ((v3) & ((v4) ^ (v0)))) + 0x5a827999 + w[5 +3]; v3 = (((v3) >> 2) | ((v3) << (32 - 2))); v0 += (((v1) >> 27) | ((v1) << (32 - 27))) + ((v4) ^ ((v2) & ((v3) ^ (v4)))) + 0x5a827999 + w[5 +4]; v2 = (((v2) >> 2) | ((v2) << (32 - 2)));
# 212 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
    v4 += (((v0) >> 27) | ((v0) << (32 - 27))) + ((v3) ^ ((v1) & ((v2) ^ (v3)))) + 0x5a827999 + w[10]; v1 = (((v1) >> 2) | ((v1) << (32 - 2))); v3 += (((v4) >> 27) | ((v4) << (32 - 27))) + ((v2) ^ ((v0) & ((v1) ^ (v2)))) + 0x5a827999 + w[10 +1]; v0 = (((v0) >> 2) | ((v0) << (32 - 2))); v2 += (((v3) >> 27) | ((v3) << (32 - 27))) + ((v1) ^ ((v4) & ((v0) ^ (v1)))) + 0x5a827999 + w[10 +2]; v4 = (((v4) >> 2) | ((v4) << (32 - 2))); v1 += (((v2) >> 27) | ((v2) << (32 - 27))) + ((v0) ^ ((v3) & ((v4) ^ (v0)))) + 0x5a827999 + w[10 +3]; v3 = (((v3) >> 2) | ((v3) << (32 - 2))); v0 += (((v1) >> 27) | ((v1) << (32 - 27))) + ((v4) ^ ((v2) & ((v3) ^ (v4)))) + 0x5a827999 + w[10 +4]; v2 = (((v2) >> 2) | ((v2) << (32 - 2)));
# 213 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
    v4 += (((v0) >> 27) | ((v0) << (32 - 27))) + ((v3) ^ ((v1) & ((v2) ^ (v3)))) + 0x5a827999 + w[15]; v1 = (((v1) >> 2) | ((v1) << (32 - 2)));
# 214 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
# 215 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
# 216 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
# 217 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
# 218 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
# 219 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
# 220 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
    v3 += (((v4) >> 27) | ((v4) << (32 - 27))) + ((v2) ^ ((v0) & ((v1) ^ (v2)))) + 0x5a827999 + (w[(16) & 15] = (((w[((16) + 13) & 15] ^ w[((16) + 8) & 15] ^ w[((16) + 2) & 15] ^ w[(16) & 15]) << 1) | ((w[((16) + 13) & 15] ^ w[((16) + 8) & 15] ^ w[((16) + 2) & 15] ^ w[(16) & 15]) >> (32 - 1)))); v0 = (((v0) >> 2) | ((v0) << (32 - 2)));
# 221 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
    v2 += (((v3) >> 27) | ((v3) << (32 - 27))) + ((v1) ^ ((v4) & ((v0) ^ (v1)))) + 0x5a827999 + (w[(17) & 15] = (((w[((17) + 13) & 15] ^ w[((17) + 8) & 15] ^ w[((17) + 2) & 15] ^ w[(17) & 15]) << 1) | ((w[((17) + 13) & 15] ^ w[((17) + 8) & 15] ^ w[((17) + 2) & 15] ^ w[(17) & 15]) >> (32 - 1)))); v4 = (((v4) >> 2) | ((v4) << (32 - 2)));
# 222 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
    v1 += (((v2) >> 27) | ((v2) << (32 - 27))) + ((v0) ^ ((v3) & ((v4) ^ (v0)))) + 0x5a827999 + (w[(18) & 15] = (((w[((18) + 13) & 15] ^ w[((18) + 8) & 15] ^ w[((18) + 2) & 15] ^ w[(18) & 15]) << 1) | ((w[((18) + 13) & 15] ^ w[((18) + 8) & 15] ^ w[((18) + 2) & 15] ^ w[(18) & 15]) >> (32 - 1)))); v3 = (((v3) >> 2) | ((v3) << (32 - 2)));
# 223 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
    v0 += (((v1) >> 27) | ((v1) << (32 - 27))) + ((v4) ^ ((v2) & ((v3) ^ (v4)))) + 0x5a827999 + (w[(19) & 15] = (((w[((19) + 13) & 15] ^ w[((19) + 8) & 15] ^ w[((19) + 2) & 15] ^ w[(19) & 15]) << 1) | ((w[((19) + 13) & 15] ^ w[((19) + 8) & 15] ^ w[((19) + 2) & 15] ^ w[(19) & 15]) >> (32 - 1)))); v2 = (((v2) >> 2) | ((v2) << (32 - 2)));
# 224 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
# 225 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
    v4 += (((v0) >> 27) | ((v0) << (32 - 27))) + ((v1) ^ (v2) ^ (v3)) + 0x6ed9eba1 + (w[(20) & 15] = (((w[((20) + 13) & 15] ^ w[((20) + 8) & 15] ^ w[((20) + 2) & 15] ^ w[(20) & 15]) << 1) | ((w[((20) + 13) & 15] ^ w[((20) + 8) & 15] ^ w[((20) + 2) & 15] ^ w[(20) & 15]) >> (32 - 1)))); v1 = (((v1) >> 2) | ((v1) << (32 - 2))); v3 += (((v4) >> 27) | ((v4) << (32 - 27))) + ((v0) ^ (v1) ^ (v2)) + 0x6ed9eba1 + (w[(20 +1) & 15] = (((w[((20 +1) + 13) & 15] ^ w[((20 +1) + 8) & 15] ^ w[((20 +1) + 2) & 15] ^ w[(20 +1) & 15]) << 1) | ((w[((20 +1) + 13) & 15] ^ w[((20 +1) + 8) & 15] ^ w[((20 +1) + 2) & 15] ^ w[(20 +1) & 15]) >> (32 - 1)))); v0 = (((v0) >> 2) | ((v0) << (32 - 2))); v2 += (((v3) >> 27) | ((v3) << (32 - 27))) + ((v4) ^ (v0) ^ (v1)) + 0x6ed9eba1 + (w[(20 +2) & 15] = (((w[((20 +2) + 13) & 15] ^ w[((20 +2) + 8) & 15] ^ w[((20 +2) + 2) & 15] ^ w[(20 +2) & 15]) << 1) | ((w[((20 +2) + 13) & 15] ^ w[((20 +2) + 8) & 15] ^ w[((20 +2) + 2) & 15] ^ w[(20 +2) & 15]) >> (32 - 1)))); v4 = (((v4) >> 2) | ((v4) << (32 - 2))); v1 += (((v2) >> 27) | ((v2) << (32 - 27))) + ((v3) ^ (v4) ^ (v0)) + 0x6ed9eba1 + (w[(20 +3) & 15] = (((w[((20 +3) + 13) & 15] ^ w[((20 +3) + 8) & 15] ^ w[((20 +3) + 2) & 15] ^ w[(20 +3) & 15]) << 1) | ((w[((20 +3) + 13) & 15] ^ w[((20 +3) + 8) & 15] ^ w[((20 +3) + 2) & 15] ^ w[(20 +3) & 15]) >> (32 - 1)))); v3 = (((v3) >> 2) | ((v3) << (32 - 2))); v0 += (((v1) >> 27) | ((v1) << (32 - 27))) + ((v2) ^ (v3) ^ (v4)) + 0x6ed9eba1 + (w[(20 +4) & 15] = (((w[((20 +4) + 13) & 15] ^ w[((20 +4) + 8) & 15] ^ w[((20 +4) + 2) & 15] ^ w[(20 +4) & 15]) << 1) | ((w[((20 +4) + 13) & 15] ^ w[((20 +4) + 8) & 15] ^ w[((20 +4) + 2) & 15] ^ w[(20 +4) & 15]) >> (32 - 1)))); v2 = (((v2) >> 2) | ((v2) << (32 - 2)));
# 226 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
    v4 += (((v0) >> 27) | ((v0) << (32 - 27))) + ((v1) ^ (v2) ^ (v3)) + 0x6ed9eba1 + (w[(25) & 15] = (((w[((25) + 13) & 15] ^ w[((25) + 8) & 15] ^ w[((25) + 2) & 15] ^ w[(25) & 15]) << 1) | ((w[((25) + 13) & 15] ^ w[((25) + 8) & 15] ^ w[((25) + 2) & 15] ^ w[(25) & 15]) >> (32 - 1)))); v1 = (((v1) >> 2) | ((v1) << (32 - 2))); v3 += (((v4) >> 27) | ((v4) << (32 - 27))) + ((v0) ^ (v1) ^ (v2)) + 0x6ed9eba1 + (w[(25 +1) & 15] = (((w[((25 +1) + 13) & 15] ^ w[((25 +1) + 8) & 15] ^ w[((25 +1) + 2) & 15] ^ w[(25 +1) & 15]) << 1) | ((w[((25 +1) + 13) & 15] ^ w[((25 +1) + 8) & 15] ^ w[((25 +1) + 2) & 15] ^ w[(25 +1) & 15]) >> (32 - 1)))); v0 = (((v0) >> 2) | ((v0) << (32 - 2))); v2 += (((v3) >> 27) | ((v3) << (32 - 27))) + ((v4) ^ (v0) ^ (v1)) + 0x6ed9eba1 + (w[(25 +2) & 15] = (((w[((25 +2) + 13) & 15] ^ w[((25 +2) + 8) & 15] ^ w[((25 +2) + 2) & 15] ^ w[(25 +2) & 15]) << 1) | ((w[((25 +2) + 13) & 15] ^ w[((25 +2) + 8) & 15] ^ w[((25 +2) + 2) & 15] ^ w[(25 +2) & 15]) >> (32 - 1)))); v4 = (((v4) >> 2) | ((v4) << (32 - 2))); v1 += (((v2) >> 27) | ((v2) << (32 - 27))) + ((v3) ^ (v4) ^ (v0)) + 0x6ed9eba1 + (w[(25 +3) & 15] = (((w[((25 +3) + 13) & 15] ^ w[((25 +3) + 8) & 15] ^ w[((25 +3) + 2) & 15] ^ w[(25 +3) & 15]) << 1) | ((w[((25 +3) + 13) & 15] ^ w[((25 +3) + 8) & 15] ^ w[((25 +3) + 2) & 15] ^ w[(25 +3) & 15]) >> (32 - 1)))); v3 = (((v3) >> 2) | ((v3) << (32 - 2))); v0 += (((v1) >> 27) | ((v1) << (32 - 27))) + ((v2) ^ (v3) ^ (v4)) + 0x6ed9eba1 + (w[(25 +4) & 15] = (((w[((25 +4) + 13) & 15] ^ w[((25 +4) + 8) & 15] ^ w[((25 +4) + 2) & 15] ^ w[(25 +4) & 15]) << 1) | ((w[((25 +4) + 13) & 15] ^ w[((25 +4) + 8) & 15] ^ w[((25 +4) + 2) & 15] ^ w[(25 +4) & 15]) >> (32 - 1)))); v2 = (((v2) >> 2) | ((v2) << (32 - 2)));
# 227 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
    v4 += (((v0) >> 27) | ((v0) << (32 - 27))) + ((v1) ^ (v2) ^ (v3)) + 0x6ed9eba1 + (w[(30) & 15] = (((w[((30) + 13) & 15] ^ w[((30) + 8) & 15] ^ w[((30) + 2) & 15] ^ w[(30) & 15]) << 1) | ((w[((30) + 13) & 15] ^ w[((30) + 8) & 15] ^ w[((30) + 2) & 15] ^ w[(30) & 15]) >> (32 - 1)))); v1 = (((v1) >> 2) | ((v1) << (32 - 2))); v3 += (((v4) >> 27) | ((v4) << (32 - 27))) + ((v0) ^ (v1) ^ (v2)) + 0x6ed9eba1 + (w[(30 +1) & 15] = (((w[((30 +1) + 13) & 15] ^ w[((30 +1) + 8) & 15] ^ w[((30 +1) + 2) & 15] ^ w[(30 +1) & 15]) << 1) | ((w[((30 +1) + 13) & 15] ^ w[((30 +1) + 8) & 15] ^ w[((30 +1) + 2) & 15] ^ w[(30 +1) & 15]) >> (32 - 1)))); v0 = (((v0) >> 2) | ((v0) << (32 - 2))); v2 += (((v3) >> 27) | ((v3) << (32 - 27))) + ((v4) ^ (v0) ^ (v1)) + 0x6ed9eba1 + (w[(30 +2) & 15] = (((w[((30 +2) + 13) & 15] ^ w[((30 +2) + 8) & 15] ^ w[((30 +2) + 2) & 15] ^ w[(30 +2) & 15]) << 1) | ((w[((30 +2) + 13) & 15] ^ w[((30 +2) + 8) & 15] ^ w[((30 +2) + 2) & 15] ^ w[(30 +2) & 15]) >> (32 - 1)))); v4 = (((v4) >> 2) | ((v4) << (32 - 2))); v1 += (((v2) >> 27) | ((v2) << (32 - 27))) + ((v3) ^ (v4) ^ (v0)) + 0x6ed9eba1 + (w[(30 +3) & 15] = (((w[((30 +3) + 13) & 15] ^ w[((30 +3) + 8) & 15] ^ w[((30 +3) + 2) & 15] ^ w[(30 +3) & 15]) << 1) | ((w[((30 +3) + 13) & 15] ^ w[((30 +3) + 8) & 15] ^ w[((30 +3) + 2) & 15] ^ w[(30 +3) & 15]) >> (32 - 1)))); v3 = (((v3) >> 2) | ((v3) << (32 - 2))); v0 += (((v1) >> 27) | ((v1) << (32 - 27))) + ((v2) ^ (v3) ^ (v4)) + 0x6ed9eba1 + (w[(30 +4) & 15] = (((w[((30 +4) + 13) & 15] ^ w[((30 +4) + 8) & 15] ^ w[((30 +4) + 2) & 15] ^ w[(30 +4) & 15]) << 1) | ((w[((30 +4) + 13) & 15] ^ w[((30 +4) + 8) & 15] ^ w[((30 +4) + 2) & 15] ^ w[(30 +4) & 15]) >> (32 - 1)))); v2 = (((v2) >> 2) | ((v2) << (32 - 2)));
# 228 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
    v4 += (((v0) >> 27) | ((v0) << (32 - 27))) + ((v1) ^ (v2) ^ (v3)) + 0x6ed9eba1 + (w[(35) & 15] = (((w[((35) + 13) & 15] ^ w[((35) + 8) & 15] ^ w[((35) + 2) & 15] ^ w[(35) & 15]) << 1) | ((w[((35) + 13) & 15] ^ w[((35) + 8) & 15] ^ w[((35) + 2) & 15] ^ w[(35) & 15]) >> (32 - 1)))); v1 = (((v1) >> 2) | ((v1) << (32 - 2))); v3 += (((v4) >> 27) | ((v4) << (32 - 27))) + ((v0) ^ (v1) ^ (v2)) + 0x6ed9eba1 + (w[(35 +1) & 15] = (((w[((35 +1) + 13) & 15] ^ w[((35 +1) + 8) & 15] ^ w[((35 +1) + 2) & 15] ^ w[(35 +1) & 15]) << 1) | ((w[((35 +1) + 13) & 15] ^ w[((35 +1) + 8) & 15] ^ w[((35 +1) + 2) & 15] ^ w[(35 +1) & 15]) >> (32 - 1)))); v0 = (((v0) >> 2) | ((v0) << (32 - 2))); v2 += (((v3) >> 27) | ((v3) << (32 - 27))) + ((v4) ^ (v0) ^ (v1)) + 0x6ed9eba1 + (w[(35 +2) & 15] = (((w[((35 +2) + 13) & 15] ^ w[((35 +2) + 8) & 15] ^ w[((35 +2) + 2) & 15] ^ w[(35 +2) & 15]) << 1) | ((w[((35 +2) + 13) & 15] ^ w[((35 +2) + 8) & 15] ^ w[((35 +2) + 2) & 15] ^ w[(35 +2) & 15]) >> (32 - 1)))); v4 = (((v4) >> 2) | ((v4) << (32 - 2))); v1 += (((v2) >> 27) | ((v2) << (32 - 27))) + ((v3) ^ (v4) ^ (v0)) + 0x6ed9eba1 + (w[(35 +3) & 15] = (((w[((35 +3) + 13) & 15] ^ w[((35 +3) + 8) & 15] ^ w[((35 +3) + 2) & 15] ^ w[(35 +3) & 15]) << 1) | ((w[((35 +3) + 13) & 15] ^ w[((35 +3) + 8) & 15] ^ w[((35 +3) + 2) & 15] ^ w[(35 +3) & 15]) >> (32 - 1)))); v3 = (((v3) >> 2) | ((v3) << (32 - 2))); v0 += (((v1) >> 27) | ((v1) << (32 - 27))) + ((v2) ^ (v3) ^ (v4)) + 0x6ed9eba1 + (w[(35 +4) & 15] = (((w[((35 +4) + 13) & 15] ^ w[((35 +4) + 8) & 15] ^ w[((35 +4) + 2) & 15] ^ w[(35 +4) & 15]) << 1) | ((w[((35 +4) + 13) & 15] ^ w[((35 +4) + 8) & 15] ^ w[((35 +4) + 2) & 15] ^ w[(35 +4) & 15]) >> (32 - 1)))); v2 = (((v2) >> 2) | ((v2) << (32 - 2)));
# 229 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
# 230 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
    v4 += (((v0) >> 27) | ((v0) << (32 - 27))) + (((v1) & (v2)) | ((v3) & ((v1) ^ (v2)))) + 0x8f1bbcdc + (w[(40) & 15] = (((w[((40) + 13) & 15] ^ w[((40) + 8) & 15] ^ w[((40) + 2) & 15] ^ w[(40) & 15]) << 1) | ((w[((40) + 13) & 15] ^ w[((40) + 8) & 15] ^ w[((40) + 2) & 15] ^ w[(40) & 15]) >> (32 - 1)))); v1 = (((v1) >> 2) | ((v1) << (32 - 2))); v3 += (((v4) >> 27) | ((v4) << (32 - 27))) + (((v0) & (v1)) | ((v2) & ((v0) ^ (v1)))) + 0x8f1bbcdc + (w[(40 +1) & 15] = (((w[((40 +1) + 13) & 15] ^ w[((40 +1) + 8) & 15] ^ w[((40 +1) + 2) & 15] ^ w[(40 +1) & 15]) << 1) | ((w[((40 +1) + 13) & 15] ^ w[((40 +1) + 8) & 15] ^ w[((40 +1) + 2) & 15] ^ w[(40 +1) & 15]) >> (32 - 1)))); v0 = (((v0) >> 2) | ((v0) << (32 - 2))); v2 += (((v3) >> 27) | ((v3) << (32 - 27))) + (((v4) & (v0)) | ((v1) & ((v4) ^ (v0)))) + 0x8f1bbcdc + (w[(40 +2) & 15] = (((w[((40 +2) + 13) & 15] ^ w[((40 +2) + 8) & 15] ^ w[((40 +2) + 2) & 15] ^ w[(40 +2) & 15]) << 1) | ((w[((40 +2) + 13) & 15] ^ w[((40 +2) + 8) & 15] ^ w[((40 +2) + 2) & 15] ^ w[(40 +2) & 15]) >> (32 - 1)))); v4 = (((v4) >> 2) | ((v4) << (32 - 2))); v1 += (((v2) >> 27) | ((v2) << (32 - 27))) + (((v3) & (v4)) | ((v0) & ((v3) ^ (v4)))) + 0x8f1bbcdc + (w[(40 +3) & 15] = (((w[((40 +3) + 13) & 15] ^ w[((40 +3) + 8) & 15] ^ w[((40 +3) + 2) & 15] ^ w[(40 +3) & 15]) << 1) | ((w[((40 +3) + 13) & 15] ^ w[((40 +3) + 8) & 15] ^ w[((40 +3) + 2) & 15] ^ w[(40 +3) & 15]) >> (32 - 1)))); v3 = (((v3) >> 2) | ((v3) << (32 - 2))); v0 += (((v1) >> 27) | ((v1) << (32 - 27))) + (((v2) & (v3)) | ((v4) & ((v2) ^ (v3)))) + 0x8f1bbcdc + (w[(40 +4) & 15] = (((w[((40 +4) + 13) & 15] ^ w[((40 +4) + 8) & 15] ^ w[((40 +4) + 2) & 15] ^ w[(40 +4) & 15]) << 1) | ((w[((40 +4) + 13) & 15] ^ w[((40 +4) + 8) & 15] ^ w[((40 +4) + 2) & 15] ^ w[(40 +4) & 15]) >> (32 - 1)))); v2 = (((v2) >> 2) | ((v2) << (32 - 2)));
# 231 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
    v4 += (((v0) >> 27) | ((v0) << (32 - 27))) + (((v1) & (v2)) | ((v3) & ((v1) ^ (v2)))) + 0x8f1bbcdc + (w[(45) & 15] = (((w[((45) + 13) & 15] ^ w[((45) + 8) & 15] ^ w[((45) + 2) & 15] ^ w[(45) & 15]) << 1) | ((w[((45) + 13) & 15] ^ w[((45) + 8) & 15] ^ w[((45) + 2) & 15] ^ w[(45) & 15]) >> (32 - 1)))); v1 = (((v1) >> 2) | ((v1) << (32 - 2))); v3 += (((v4) >> 27) | ((v4) << (32 - 27))) + (((v0) & (v1)) | ((v2) & ((v0) ^ (v1)))) + 0x8f1bbcdc + (w[(45 +1) & 15] = (((w[((45 +1) + 13) & 15] ^ w[((45 +1) + 8) & 15] ^ w[((45 +1) + 2) & 15] ^ w[(45 +1) & 15]) << 1) | ((w[((45 +1) + 13) & 15] ^ w[((45 +1) + 8) & 15] ^ w[((45 +1) + 2) & 15] ^ w[(45 +1) & 15]) >> (32 - 1)))); v0 = (((v0) >> 2) | ((v0) << (32 - 2))); v2 += (((v3) >> 27) | ((v3) << (32 - 27))) + (((v4) & (v0)) | ((v1) & ((v4) ^ (v0)))) + 0x8f1bbcdc + (w[(45 +2) & 15] = (((w[((45 +2) + 13) & 15] ^ w[((45 +2) + 8) & 15] ^ w[((45 +2) + 2) & 15] ^ w[(45 +2) & 15]) << 1) | ((w[((45 +2) + 13) & 15] ^ w[((45 +2) + 8) & 15] ^ w[((45 +2) + 2) & 15] ^ w[(45 +2) & 15]) >> (32 - 1)))); v4 = (((v4) >> 2) | ((v4) << (32 - 2))); v1 += (((v2) >> 27) | ((v2) << (32 - 27))) + (((v3) & (v4)) | ((v0) & ((v3) ^ (v4)))) + 0x8f1bbcdc + (w[(45 +3) & 15] = (((w[((45 +3) + 13) & 15] ^ w[((45 +3) + 8) & 15] ^ w[((45 +3) + 2) & 15] ^ w[(45 +3) & 15]) << 1) | ((w[((45 +3) + 13) & 15] ^ w[((45 +3) + 8) & 15] ^ w[((45 +3) + 2) & 15] ^ w[(45 +3) & 15]) >> (32 - 1)))); v3 = (((v3) >> 2) | ((v3) << (32 - 2))); v0 += (((v1) >> 27) | ((v1) << (32 - 27))) + (((v2) & (v3)) | ((v4) & ((v2) ^ (v3)))) + 0x8f1bbcdc + (w[(45 +4) & 15] = (((w[((45 +4) + 13) & 15] ^ w[((45 +4) + 8) & 15] ^ w[((45 +4) + 2) & 15] ^ w[(45 +4) & 15]) << 1) | ((w[((45 +4) + 13) & 15] ^ w[((45 +4) + 8) & 15] ^ w[((45 +4) + 2) & 15] ^ w[(45 +4) & 15]) >> (32 - 1)))); v2 = (((v2) >> 2) | ((v2) << (32 - 2)));
# 232 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
    v4 += (((v0) >> 27) | ((v0) << (32 - 27))) + (((v1) & (v2)) | ((v3) & ((v1) ^ (v2)))) + 0x8f1bbcdc + (w[(50) & 15] = (((w[((50) + 13) & 15] ^ w[((50) + 8) & 15] ^ w[((50) + 2) & 15] ^ w[(50) & 15]) << 1) | ((w[((50) + 13) & 15] ^ w[((50) + 8) & 15] ^ w[((50) + 2) & 15] ^ w[(50) & 15]) >> (32 - 1)))); v1 = (((v1) >> 2) | ((v1) << (32 - 2))); v3 += (((v4) >> 27) | ((v4) << (32 - 27))) + (((v0) & (v1)) | ((v2) & ((v0) ^ (v1)))) + 0x8f1bbcdc + (w[(50 +1) & 15] = (((w[((50 +1) + 13) & 15] ^ w[((50 +1) + 8) & 15] ^ w[((50 +1) + 2) & 15] ^ w[(50 +1) & 15]) << 1) | ((w[((50 +1) + 13) & 15] ^ w[((50 +1) + 8) & 15] ^ w[((50 +1) + 2) & 15] ^ w[(50 +1) & 15]) >> (32 - 1)))); v0 = (((v0) >> 2) | ((v0) << (32 - 2))); v2 += (((v3) >> 27) | ((v3) << (32 - 27))) + (((v4) & (v0)) | ((v1) & ((v4) ^ (v0)))) + 0x8f1bbcdc + (w[(50 +2) & 15] = (((w[((50 +2) + 13) & 15] ^ w[((50 +2) + 8) & 15] ^ w[((50 +2) + 2) & 15] ^ w[(50 +2) & 15]) << 1) | ((w[((50 +2) + 13) & 15] ^ w[((50 +2) + 8) & 15] ^ w[((50 +2) + 2) & 15] ^ w[(50 +2) & 15]) >> (32 - 1)))); v4 = (((v4) >> 2) | ((v4) << (32 - 2))); v1 += (((v2) >> 27) | ((v2) << (32 - 27))) + (((v3) & (v4)) | ((v0) & ((v3) ^ (v4)))) + 0x8f1bbcdc + (w[(50 +3) & 15] = (((w[((50 +3) + 13) & 15] ^ w[((50 +3) + 8) & 15] ^ w[((50 +3) + 2) & 15] ^ w[(50 +3) & 15]) << 1) | ((w[((50 +3) + 13) & 15] ^ w[((50 +3) + 8) & 15] ^ w[((50 +3) + 2) & 15] ^ w[(50 +3) & 15]) >> (32 - 1)))); v3 = (((v3) >> 2) | ((v3) << (32 - 2))); v0 += (((v1) >> 27) | ((v1) << (32 - 27))) + (((v2) & (v3)) | ((v4) & ((v2) ^ (v3)))) + 0x8f1bbcdc + (w[(50 +4) & 15] = (((w[((50 +4) + 13) & 15] ^ w[((50 +4) + 8) & 15] ^ w[((50 +4) + 2) & 15] ^ w[(50 +4) & 15]) << 1) | ((w[((50 +4) + 13) & 15] ^ w[((50 +4) + 8) & 15] ^ w[((50 +4) + 2) & 15] ^ w[(50 +4) & 15]) >> (32 - 1)))); v2 = (((v2) >> 2) | ((v2) << (32 - 2)));
# 233 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
    v4 += (((v0) >> 27) | ((v0) << (32 - 27))) + (((v1) & (v2)) | ((v3) & ((v1) ^ (v2)))) + 0x8f1bbcdc + (w[(55) & 15] = (((w[((55) + 13) & 15] ^ w[((55) + 8) & 15] ^ w[((55) + 2) & 15] ^ w[(55) & 15]) << 1) | ((w[((55) + 13) & 15] ^ w[((55) + 8) & 15] ^ w[((55) + 2) & 15] ^ w[(55) & 15]) >> (32 - 1)))); v1 = (((v1) >> 2) | ((v1) << (32 - 2))); v3 += (((v4) >> 27) | ((v4) << (32 - 27))) + (((v0) & (v1)) | ((v2) & ((v0) ^ (v1)))) + 0x8f1bbcdc + (w[(55 +1) & 15] = (((w[((55 +1) + 13) & 15] ^ w[((55 +1) + 8) & 15] ^ w[((55 +1) + 2) & 15] ^ w[(55 +1) & 15]) << 1) | ((w[((55 +1) + 13) & 15] ^ w[((55 +1) + 8) & 15] ^ w[((55 +1) + 2) & 15] ^ w[(55 +1) & 15]) >> (32 - 1)))); v0 = (((v0) >> 2) | ((v0) << (32 - 2))); v2 += (((v3) >> 27) | ((v3) << (32 - 27))) + (((v4) & (v0)) | ((v1) & ((v4) ^ (v0)))) + 0x8f1bbcdc + (w[(55 +2) & 15] = (((w[((55 +2) + 13) & 15] ^ w[((55 +2) + 8) & 15] ^ w[((55 +2) + 2) & 15] ^ w[(55 +2) & 15]) << 1) | ((w[((55 +2) + 13) & 15] ^ w[((55 +2) + 8) & 15] ^ w[((55 +2) + 2) & 15] ^ w[(55 +2) & 15]) >> (32 - 1)))); v4 = (((v4) >> 2) | ((v4) << (32 - 2))); v1 += (((v2) >> 27) | ((v2) << (32 - 27))) + (((v3) & (v4)) | ((v0) & ((v3) ^ (v4)))) + 0x8f1bbcdc + (w[(55 +3) & 15] = (((w[((55 +3) + 13) & 15] ^ w[((55 +3) + 8) & 15] ^ w[((55 +3) + 2) & 15] ^ w[(55 +3) & 15]) << 1) | ((w[((55 +3) + 13) & 15] ^ w[((55 +3) + 8) & 15] ^ w[((55 +3) + 2) & 15] ^ w[(55 +3) & 15]) >> (32 - 1)))); v3 = (((v3) >> 2) | ((v3) << (32 - 2))); v0 += (((v1) >> 27) | ((v1) << (32 - 27))) + (((v2) & (v3)) | ((v4) & ((v2) ^ (v3)))) + 0x8f1bbcdc + (w[(55 +4) & 15] = (((w[((55 +4) + 13) & 15] ^ w[((55 +4) + 8) & 15] ^ w[((55 +4) + 2) & 15] ^ w[(55 +4) & 15]) << 1) | ((w[((55 +4) + 13) & 15] ^ w[((55 +4) + 8) & 15] ^ w[((55 +4) + 2) & 15] ^ w[(55 +4) & 15]) >> (32 - 1)))); v2 = (((v2) >> 2) | ((v2) << (32 - 2)));
# 234 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
# 235 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
    v4 += (((v0) >> 27) | ((v0) << (32 - 27))) + ((v1) ^ (v2) ^ (v3)) + 0xca62c1d6 + (w[(60) & 15] = (((w[((60) + 13) & 15] ^ w[((60) + 8) & 15] ^ w[((60) + 2) & 15] ^ w[(60) & 15]) << 1) | ((w[((60) + 13) & 15] ^ w[((60) + 8) & 15] ^ w[((60) + 2) & 15] ^ w[(60) & 15]) >> (32 - 1)))); v1 = (((v1) >> 2) | ((v1) << (32 - 2))); v3 += (((v4) >> 27) | ((v4) << (32 - 27))) + ((v0) ^ (v1) ^ (v2)) + 0xca62c1d6 + (w[(60 +1) & 15] = (((w[((60 +1) + 13) & 15] ^ w[((60 +1) + 8) & 15] ^ w[((60 +1) + 2) & 15] ^ w[(60 +1) & 15]) << 1) | ((w[((60 +1) + 13) & 15] ^ w[((60 +1) + 8) & 15] ^ w[((60 +1) + 2) & 15] ^ w[(60 +1) & 15]) >> (32 - 1)))); v0 = (((v0) >> 2) | ((v0) << (32 - 2))); v2 += (((v3) >> 27) | ((v3) << (32 - 27))) + ((v4) ^ (v0) ^ (v1)) + 0xca62c1d6 + (w[(60 +2) & 15] = (((w[((60 +2) + 13) & 15] ^ w[((60 +2) + 8) & 15] ^ w[((60 +2) + 2) & 15] ^ w[(60 +2) & 15]) << 1) | ((w[((60 +2) + 13) & 15] ^ w[((60 +2) + 8) & 15] ^ w[((60 +2) + 2) & 15] ^ w[(60 +2) & 15]) >> (32 - 1)))); v4 = (((v4) >> 2) | ((v4) << (32 - 2))); v1 += (((v2) >> 27) | ((v2) << (32 - 27))) + ((v3) ^ (v4) ^ (v0)) + 0xca62c1d6 + (w[(60 +3) & 15] = (((w[((60 +3) + 13) & 15] ^ w[((60 +3) + 8) & 15] ^ w[((60 +3) + 2) & 15] ^ w[(60 +3) & 15]) << 1) | ((w[((60 +3) + 13) & 15] ^ w[((60 +3) + 8) & 15] ^ w[((60 +3) + 2) & 15] ^ w[(60 +3) & 15]) >> (32 - 1)))); v3 = (((v3) >> 2) | ((v3) << (32 - 2))); v0 += (((v1) >> 27) | ((v1) << (32 - 27))) + ((v2) ^ (v3) ^ (v4)) + 0xca62c1d6 + (w[(60 +4) & 15] = (((w[((60 +4) + 13) & 15] ^ w[((60 +4) + 8) & 15] ^ w[((60 +4) + 2) & 15] ^ w[(60 +4) & 15]) << 1) | ((w[((60 +4) + 13) & 15] ^ w[((60 +4) + 8) & 15] ^ w[((60 +4) + 2) & 15] ^ w[(60 +4) & 15]) >> (32 - 1)))); v2 = (((v2) >> 2) | ((v2) << (32 - 2)));
# 236 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
    v4 += (((v0) >> 27) | ((v0) << (32 - 27))) + ((v1) ^ (v2) ^ (v3)) + 0xca62c1d6 + (w[(65) & 15] = (((w[((65) + 13) & 15] ^ w[((65) + 8) & 15] ^ w[((65) + 2) & 15] ^ w[(65) & 15]) << 1) | ((w[((65) + 13) & 15] ^ w[((65) + 8) & 15] ^ w[((65) + 2) & 15] ^ w[(65) & 15]) >> (32 - 1)))); v1 = (((v1) >> 2) | ((v1) << (32 - 2))); v3 += (((v4) >> 27) | ((v4) << (32 - 27))) + ((v0) ^ (v1) ^ (v2)) + 0xca62c1d6 + (w[(65 +1) & 15] = (((w[((65 +1) + 13) & 15] ^ w[((65 +1) + 8) & 15] ^ w[((65 +1) + 2) & 15] ^ w[(65 +1) & 15]) << 1) | ((w[((65 +1) + 13) & 15] ^ w[((65 +1) + 8) & 15] ^ w[((65 +1) + 2) & 15] ^ w[(65 +1) & 15]) >> (32 - 1)))); v0 = (((v0) >> 2) | ((v0) << (32 - 2))); v2 += (((v3) >> 27) | ((v3) << (32 - 27))) + ((v4) ^ (v0) ^ (v1)) + 0xca62c1d6 + (w[(65 +2) & 15] = (((w[((65 +2) + 13) & 15] ^ w[((65 +2) + 8) & 15] ^ w[((65 +2) + 2) & 15] ^ w[(65 +2) & 15]) << 1) | ((w[((65 +2) + 13) & 15] ^ w[((65 +2) + 8) & 15] ^ w[((65 +2) + 2) & 15] ^ w[(65 +2) & 15]) >> (32 - 1)))); v4 = (((v4) >> 2) | ((v4) << (32 - 2))); v1 += (((v2) >> 27) | ((v2) << (32 - 27))) + ((v3) ^ (v4) ^ (v0)) + 0xca62c1d6 + (w[(65 +3) & 15] = (((w[((65 +3) + 13) & 15] ^ w[((65 +3) + 8) & 15] ^ w[((65 +3) + 2) & 15] ^ w[(65 +3) & 15]) << 1) | ((w[((65 +3) + 13) & 15] ^ w[((65 +3) + 8) & 15] ^ w[((65 +3) + 2) & 15] ^ w[(65 +3) & 15]) >> (32 - 1)))); v3 = (((v3) >> 2) | ((v3) << (32 - 2))); v0 += (((v1) >> 27) | ((v1) << (32 - 27))) + ((v2) ^ (v3) ^ (v4)) + 0xca62c1d6 + (w[(65 +4) & 15] = (((w[((65 +4) + 13) & 15] ^ w[((65 +4) + 8) & 15] ^ w[((65 +4) + 2) & 15] ^ w[(65 +4) & 15]) << 1) | ((w[((65 +4) + 13) & 15] ^ w[((65 +4) + 8) & 15] ^ w[((65 +4) + 2) & 15] ^ w[(65 +4) & 15]) >> (32 - 1)))); v2 = (((v2) >> 2) | ((v2) << (32 - 2)));
# 237 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
    v4 += (((v0) >> 27) | ((v0) << (32 - 27))) + ((v1) ^ (v2) ^ (v3)) + 0xca62c1d6 + (w[(70) & 15] = (((w[((70) + 13) & 15] ^ w[((70) + 8) & 15] ^ w[((70) + 2) & 15] ^ w[(70) & 15]) << 1) | ((w[((70) + 13) & 15] ^ w[((70) + 8) & 15] ^ w[((70) + 2) & 15] ^ w[(70) & 15]) >> (32 - 1)))); v1 = (((v1) >> 2) | ((v1) << (32 - 2))); v3 += (((v4) >> 27) | ((v4) << (32 - 27))) + ((v0) ^ (v1) ^ (v2)) + 0xca62c1d6 + (w[(70 +1) & 15] = (((w[((70 +1) + 13) & 15] ^ w[((70 +1) + 8) & 15] ^ w[((70 +1) + 2) & 15] ^ w[(70 +1) & 15]) << 1) | ((w[((70 +1) + 13) & 15] ^ w[((70 +1) + 8) & 15] ^ w[((70 +1) + 2) & 15] ^ w[(70 +1) & 15]) >> (32 - 1)))); v0 = (((v0) >> 2) | ((v0) << (32 - 2))); v2 += (((v3) >> 27) | ((v3) << (32 - 27))) + ((v4) ^ (v0) ^ (v1)) + 0xca62c1d6 + (w[(70 +2) & 15] = (((w[((70 +2) + 13) & 15] ^ w[((70 +2) + 8) & 15] ^ w[((70 +2) + 2) & 15] ^ w[(70 +2) & 15]) << 1) | ((w[((70 +2) + 13) & 15] ^ w[((70 +2) + 8) & 15] ^ w[((70 +2) + 2) & 15] ^ w[(70 +2) & 15]) >> (32 - 1)))); v4 = (((v4) >> 2) | ((v4) << (32 - 2))); v1 += (((v2) >> 27) | ((v2) << (32 - 27))) + ((v3) ^ (v4) ^ (v0)) + 0xca62c1d6 + (w[(70 +3) & 15] = (((w[((70 +3) + 13) & 15] ^ w[((70 +3) + 8) & 15] ^ w[((70 +3) + 2) & 15] ^ w[(70 +3) & 15]) << 1) | ((w[((70 +3) + 13) & 15] ^ w[((70 +3) + 8) & 15] ^ w[((70 +3) + 2) & 15] ^ w[(70 +3) & 15]) >> (32 - 1)))); v3 = (((v3) >> 2) | ((v3) << (32 - 2))); v0 += (((v1) >> 27) | ((v1) << (32 - 27))) + ((v2) ^ (v3) ^ (v4)) + 0xca62c1d6 + (w[(70 +4) & 15] = (((w[((70 +4) + 13) & 15] ^ w[((70 +4) + 8) & 15] ^ w[((70 +4) + 2) & 15] ^ w[(70 +4) & 15]) << 1) | ((w[((70 +4) + 13) & 15] ^ w[((70 +4) + 8) & 15] ^ w[((70 +4) + 2) & 15] ^ w[(70 +4) & 15]) >> (32 - 1)))); v2 = (((v2) >> 2) | ((v2) << (32 - 2)));
# 238 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
    v4 += (((v0) >> 27) | ((v0) << (32 - 27))) + ((v1) ^ (v2) ^ (v3)) + 0xca62c1d6 + (w[(75) & 15] = (((w[((75) + 13) & 15] ^ w[((75) + 8) & 15] ^ w[((75) + 2) & 15] ^ w[(75) & 15]) << 1) | ((w[((75) + 13) & 15] ^ w[((75) + 8) & 15] ^ w[((75) + 2) & 15] ^ w[(75) & 15]) >> (32 - 1)))); v1 = (((v1) >> 2) | ((v1) << (32 - 2))); v3 += (((v4) >> 27) | ((v4) << (32 - 27))) + ((v0) ^ (v1) ^ (v2)) + 0xca62c1d6 + (w[(75 +1) & 15] = (((w[((75 +1) + 13) & 15] ^ w[((75 +1) + 8) & 15] ^ w[((75 +1) + 2) & 15] ^ w[(75 +1) & 15]) << 1) | ((w[((75 +1) + 13) & 15] ^ w[((75 +1) + 8) & 15] ^ w[((75 +1) + 2) & 15] ^ w[(75 +1) & 15]) >> (32 - 1)))); v0 = (((v0) >> 2) | ((v0) << (32 - 2))); v2 += (((v3) >> 27) | ((v3) << (32 - 27))) + ((v4) ^ (v0) ^ (v1)) + 0xca62c1d6 + (w[(75 +2) & 15] = (((w[((75 +2) + 13) & 15] ^ w[((75 +2) + 8) & 15] ^ w[((75 +2) + 2) & 15] ^ w[(75 +2) & 15]) << 1) | ((w[((75 +2) + 13) & 15] ^ w[((75 +2) + 8) & 15] ^ w[((75 +2) + 2) & 15] ^ w[(75 +2) & 15]) >> (32 - 1)))); v4 = (((v4) >> 2) | ((v4) << (32 - 2))); v1 += (((v2) >> 27) | ((v2) << (32 - 27))) + ((v3) ^ (v4) ^ (v0)) + 0xca62c1d6 + (w[(75 +3) & 15] = (((w[((75 +3) + 13) & 15] ^ w[((75 +3) + 8) & 15] ^ w[((75 +3) + 2) & 15] ^ w[(75 +3) & 15]) << 1) | ((w[((75 +3) + 13) & 15] ^ w[((75 +3) + 8) & 15] ^ w[((75 +3) + 2) & 15] ^ w[(75 +3) & 15]) >> (32 - 1)))); v3 = (((v3) >> 2) | ((v3) << (32 - 2))); v0 += (((v1) >> 27) | ((v1) << (32 - 27))) + ((v2) ^ (v3) ^ (v4)) + 0xca62c1d6 + (w[(75 +4) & 15] = (((w[((75 +4) + 13) & 15] ^ w[((75 +4) + 8) & 15] ^ w[((75 +4) + 2) & 15] ^ w[(75 +4) & 15]) << 1) | ((w[((75 +4) + 13) & 15] ^ w[((75 +4) + 8) & 15] ^ w[((75 +4) + 2) & 15] ^ w[(75 +4) & 15]) >> (32 - 1)))); v2 = (((v2) >> 2) | ((v2) << (32 - 2)));
# 239 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
# 240 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
# 241 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
# 242 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
# 243 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
# 244 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
# 245 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
    ctx->hash[0] += v0; ctx->hash[1] += v1;
# 246 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
    ctx->hash[2] += v2; ctx->hash[3] += v3;
# 247 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
    ctx->hash[4] += v4;
# 248 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
# 249 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
rm_stack(false, 0UL, "sha1_compile", &____must_manage_sha1_compile, ____alias_loc_id_9, ____chimes_did_disable6, false); }

void sha1_compile(sha1_ctx ctx[1]) { (____chimes_replaying ? sha1_compile_resumable(ctx) : sha1_compile_quick(ctx)); }
# 251 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
void sha1_begin_quick(sha1_ctx ctx[1])
# 252 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
{const int ____chimes_did_disable7 = new_stack((void *)(&sha1_begin), "sha1_begin", &____must_manage_sha1_begin, 1, 0, (size_t)(14039954671321870994UL)) ; ; ;
# 253 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
    ctx->count[0] = ctx->count[1] = 0;
# 254 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
    ctx->hash[0] = 0x67452301;
# 255 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
    ctx->hash[1] = 0xefcdab89;
# 256 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
    ctx->hash[2] = 0x98badcfe;
# 257 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
    ctx->hash[3] = 0x10325476;
# 258 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
    ctx->hash[4] = 0xc3d2e1f0;
# 259 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
rm_stack(false, 0UL, "sha1_begin", &____must_manage_sha1_begin, ____alias_loc_id_1, ____chimes_did_disable7, false); }

void sha1_begin(sha1_ctx ctx[1]) { (____chimes_replaying ? sha1_begin_resumable(ctx) : sha1_begin_quick(ctx)); }
# 264 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
void sha1_hash_quick(const unsigned char data[], unsigned long len, sha1_ctx ctx[1])
# 265 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
{const int ____chimes_did_disable8 = new_stack((void *)(&sha1_hash), "sha1_hash", &____must_manage_sha1_hash, 3, 0, (size_t)(14039954671321871138UL), (size_t)(0UL), (size_t)(14039954671321871140UL)) ; ; ; uint_32t pos; uint_32t space; pos = ((uint_32t)(ctx->count[0] & (64 - 1))) ; space = (64 - pos) ;
# 267 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
     const unsigned char *sp; sp = (data) ;
# 268 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
# 269 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
    if ((ctx->count[0] += len) < len) {++(ctx->count[1]); };
# 271 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
# 272 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
    while(len >= space)
# 273 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
    {
# 274 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
        memcpy(((unsigned char*)ctx->wbuf) + pos, sp, space);
# 275 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
        sp += space; len -= space; space = 64; pos = 0;
# 276 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
        { int _i; _i = ((64 >> 2)) ; while(_i--) ((uint_32t*)ctx->wbuf)[_i] = ((((((((uint_32t*)ctx->wbuf)[_i])) >> 24) | (((((uint_32t*)ctx->wbuf)[_i])) << (32 - 24))) & 0x00ff00ff) | (((((((uint_32t*)ctx->wbuf)[_i])) >> 8) | (((((uint_32t*)ctx->wbuf)[_i])) << (32 - 8))) & 0xff00ff00)); };
# 277 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
         call_lbl_0: ({ calling_npm("sha1_compile", 0); sha1_compile_npm(ctx); });
# 278 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
    }
# 279 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
# 280 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
    memcpy(((unsigned char*)ctx->wbuf) + pos, sp, len);
# 281 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
rm_stack(false, 0UL, "sha1_hash", &____must_manage_sha1_hash, ____alias_loc_id_2, ____chimes_did_disable8, false); }

void sha1_hash(const unsigned char data[], unsigned long len, sha1_ctx ctx[1]) { (____chimes_replaying ? sha1_hash_resumable(data, len, ctx) : sha1_hash_quick(data, len, ctx)); }
# 285 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
void sha1_end_quick(unsigned char hval[], sha1_ctx ctx[1])
# 286 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
{const int ____chimes_did_disable9 = new_stack((void *)(&sha1_end), "sha1_end", &____must_manage_sha1_end, 2, 0, (size_t)(14039954671321871328UL), (size_t)(14039954671321871329UL)) ; ; ; uint_32t i; i = ((uint_32t)(ctx->count[0] & (64 - 1))) ;
# 287 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
# 288 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
# 289 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
# 290 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
# 291 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
    { int _i; _i = (((i + 3) >> 2)) ; while(_i--) ((uint_32t*)ctx->wbuf)[_i] = ((((((((uint_32t*)ctx->wbuf)[_i])) >> 24) | (((((uint_32t*)ctx->wbuf)[_i])) << (32 - 24))) & 0x00ff00ff) | (((((((uint_32t*)ctx->wbuf)[_i])) >> 8) | (((((uint_32t*)ctx->wbuf)[_i])) << (32 - 8))) & 0xff00ff00)); };
# 292 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
# 293 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
# 294 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
# 295 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
# 296 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
# 297 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
    ctx->wbuf[i >> 2] &= 0xffffff80 << 8 * (~i & 3);
# 298 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
    ctx->wbuf[i >> 2] |= 0x00000080 << 8 * (~i & 3);
# 299 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
# 300 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
# 301 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
# 302 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
# 303 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
    if (i > 64 - 9) {{
# 305 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
        if (i < 60) {ctx->wbuf[15] = 0; };
# 306 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
         call_lbl_0: ({ calling_npm("sha1_compile", 0); sha1_compile_npm(ctx); });
# 307 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
        i = 0;
# 308 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
    }; } else {i = (i >> 2) + 1; } ;
# 311 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
# 312 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
    while(i < 14)
# 313 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
        ctx->wbuf[i++] = 0;
# 314 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
# 315 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
# 316 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
# 317 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
# 318 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
# 319 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
    ctx->wbuf[14] = (ctx->count[1] << 3) | (ctx->count[0] >> 29);
# 320 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
    ctx->wbuf[15] = ctx->count[0] << 3;
# 321 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
     call_lbl_1: ({ calling_npm("sha1_compile", 0); sha1_compile_npm(ctx); });
# 322 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
# 323 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
# 324 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
# 325 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
    for (i = 0; i < 20; ++i) { hval[i] = (unsigned char)(ctx->hash[i >> 2] >> (8 * (~i & 3))); };
# 327 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
rm_stack(false, 0UL, "sha1_end", &____must_manage_sha1_end, ____alias_loc_id_3, ____chimes_did_disable9, false); }

void sha1_end(unsigned char hval[], sha1_ctx ctx[1]) { (____chimes_replaying ? sha1_end_resumable(hval, ctx) : sha1_end_quick(hval, ctx)); }
# 329 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
void sha1_quick(unsigned char hval[], const unsigned char data[], unsigned long len)
# 330 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
{const int ____chimes_did_disable10 = new_stack((void *)(&sha1), "sha1", &____must_manage_sha1, 3, 0, (size_t)(14039954671321875857UL), (size_t)(14039954671321875858UL), (size_t)(0UL)) ; sha1_ctx cx[1];
# 330 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
 if (____must_checkpoint_sha1_cx_0) { register_stack_vars(1, "sha1|cx|0", &____must_checkpoint_sha1_cx_0, "[1 x %struct.sha1_ctx_s]", (void *)(cx), (size_t)92, 0, 0, 0); } ; ; ;
# 331 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
# 332 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
     call_lbl_0: ({ calling_npm("sha1_begin", 0); sha1_begin_npm(cx); }); call_lbl_1: ({ calling_npm("sha1_hash", 0); sha1_hash_npm(data, len, cx); }); call_lbl_2: ({ calling_npm("sha1_end", 0); sha1_end_npm(hval, cx); });
# 333 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
rm_stack(false, 0UL, "sha1", &____must_manage_sha1, ____alias_loc_id_10, ____chimes_did_disable10, false); }

void sha1(unsigned char hval[], const unsigned char data[], unsigned long len) { (____chimes_replaying ? sha1_resumable(hval, data, len) : sha1_quick(hval, data, len)); }
# 49 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
void rng_init_npm(RNG_state *newstate, int seed)
# 50 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
{
# 51 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
  struct sha1_ctx_s ctx;
# 52 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
  struct state_t gen;
# 53 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
  int i;
# 54 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
# 55 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
  for (i=0; i < 16; i++) { gen.state[i] = 0; };
# 57 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
  gen.state[16] = 0xFF & (seed >> 24);
# 58 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
  gen.state[17] = 0xFF & (seed >> 16);
# 59 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
  gen.state[18] = 0xFF & (seed >> 8);
# 60 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
  gen.state[19] = 0xFF & (seed >> 0);
# 61 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
# 62 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
  sha1_begin_npm(&ctx);
# 63 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
  sha1_hash_npm(gen.state, 20, &ctx);
# 64 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
  sha1_end_npm(newstate, &ctx);
# 65 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
}
# 67 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
void rng_spawn_npm(RNG_state *mystate, RNG_state *newstate, int spawnnumber)
# 68 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
{
# 69 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
 struct sha1_ctx_s ctx;
# 70 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
 uint8 bytes[4];
# 71 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
# 72 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
 bytes[0] = 0xFF & (spawnnumber >> 24);
# 73 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
 bytes[1] = 0xFF & (spawnnumber >> 16);
# 74 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
 bytes[2] = 0xFF & (spawnnumber >> 8);
# 75 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
 bytes[3] = 0xFF & spawnnumber;
# 76 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
# 77 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
 sha1_begin_npm(&ctx);
# 78 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
 sha1_hash_npm(mystate, 20, &ctx);
# 79 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
 sha1_hash_npm(bytes, 4, &ctx);
# 80 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
 sha1_end_npm(newstate, &ctx);
# 81 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
}
# 83 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
int rng_rand_npm(RNG_state *mystate){
# 84 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
        int r;
# 85 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
 uint32 b = (mystate[16] << 24) | (mystate[17] << 16)
# 86 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
  | (mystate[18] << 8) | (mystate[19] << 0);
# 87 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
 b = b & 0x7fffffff;
# 88 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
# 89 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
 r = (int) b;
# 90 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
# 91 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
  int ____chimes_ret_var_0; ____chimes_ret_var_0 = (r); return ____chimes_ret_var_0; ;
# 92 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
}
# 94 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
int rng_nextrand_npm(RNG_state *mystate){
# 95 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
 struct sha1_ctx_s ctx;
# 96 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
 int r;
# 97 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
 uint32 b;
# 98 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
# 99 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
 sha1_begin_npm(&ctx);
# 100 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
 sha1_hash_npm(mystate, 20, &ctx);
# 101 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
 sha1_end_npm(mystate, &ctx);
# 102 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
 b = (mystate[16] << 24) | (mystate[17] << 16)
# 103 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
  | (mystate[18] << 8) | (mystate[19] << 0);
# 104 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
 b = b & 0x7fffffff;
# 105 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
# 106 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
 r = (int) b;
# 107 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
  int ____chimes_ret_var_1; ____chimes_ret_var_1 = (r); return ____chimes_ret_var_1; ;
# 108 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
}
# 111 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
char * rng_showstate_npm(RNG_state *state, char *s){
# 112 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
  sprintf(s,"%.2X%.2X...", state[0],state[1]);
# 113 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
   char * ____chimes_ret_var_2; ____chimes_ret_var_2 = (s); return ____chimes_ret_var_2; ;
# 114 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
}
# 117 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
int rng_showtype_npm(char *strBuf, int ind) {
# 118 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
  ind += sprintf(strBuf+ind, "SHA-1 (state size = %luB)",
# 119 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
                 sizeof(struct state_t));
# 120 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
   int ____chimes_ret_var_3; ____chimes_ret_var_3 = (ind); return ____chimes_ret_var_3; ;
# 121 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
}
# 195 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
void sha1_compile_npm(sha1_ctx ctx[1])
# 196 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
{ uint_32t *w = ctx->wbuf;
# 197 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
# 198 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
# 199 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
# 200 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
# 201 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
# 202 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
    uint_32t v0, v1, v2, v3, v4;
# 203 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
    v0 = ctx->hash[0]; v1 = ctx->hash[1];
# 204 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
    v2 = ctx->hash[2]; v3 = ctx->hash[3];
# 205 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
    v4 = ctx->hash[4];
# 206 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
# 207 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
# 208 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
# 209 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
# 210 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
    v4 += (((v0) >> 27) | ((v0) << (32 - 27))) + ((v3) ^ ((v1) & ((v2) ^ (v3)))) + 0x5a827999 + w[0]; v1 = (((v1) >> 2) | ((v1) << (32 - 2))); v3 += (((v4) >> 27) | ((v4) << (32 - 27))) + ((v2) ^ ((v0) & ((v1) ^ (v2)))) + 0x5a827999 + w[0 +1]; v0 = (((v0) >> 2) | ((v0) << (32 - 2))); v2 += (((v3) >> 27) | ((v3) << (32 - 27))) + ((v1) ^ ((v4) & ((v0) ^ (v1)))) + 0x5a827999 + w[0 +2]; v4 = (((v4) >> 2) | ((v4) << (32 - 2))); v1 += (((v2) >> 27) | ((v2) << (32 - 27))) + ((v0) ^ ((v3) & ((v4) ^ (v0)))) + 0x5a827999 + w[0 +3]; v3 = (((v3) >> 2) | ((v3) << (32 - 2))); v0 += (((v1) >> 27) | ((v1) << (32 - 27))) + ((v4) ^ ((v2) & ((v3) ^ (v4)))) + 0x5a827999 + w[0 +4]; v2 = (((v2) >> 2) | ((v2) << (32 - 2)));
# 211 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
    v4 += (((v0) >> 27) | ((v0) << (32 - 27))) + ((v3) ^ ((v1) & ((v2) ^ (v3)))) + 0x5a827999 + w[5]; v1 = (((v1) >> 2) | ((v1) << (32 - 2))); v3 += (((v4) >> 27) | ((v4) << (32 - 27))) + ((v2) ^ ((v0) & ((v1) ^ (v2)))) + 0x5a827999 + w[5 +1]; v0 = (((v0) >> 2) | ((v0) << (32 - 2))); v2 += (((v3) >> 27) | ((v3) << (32 - 27))) + ((v1) ^ ((v4) & ((v0) ^ (v1)))) + 0x5a827999 + w[5 +2]; v4 = (((v4) >> 2) | ((v4) << (32 - 2))); v1 += (((v2) >> 27) | ((v2) << (32 - 27))) + ((v0) ^ ((v3) & ((v4) ^ (v0)))) + 0x5a827999 + w[5 +3]; v3 = (((v3) >> 2) | ((v3) << (32 - 2))); v0 += (((v1) >> 27) | ((v1) << (32 - 27))) + ((v4) ^ ((v2) & ((v3) ^ (v4)))) + 0x5a827999 + w[5 +4]; v2 = (((v2) >> 2) | ((v2) << (32 - 2)));
# 212 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
    v4 += (((v0) >> 27) | ((v0) << (32 - 27))) + ((v3) ^ ((v1) & ((v2) ^ (v3)))) + 0x5a827999 + w[10]; v1 = (((v1) >> 2) | ((v1) << (32 - 2))); v3 += (((v4) >> 27) | ((v4) << (32 - 27))) + ((v2) ^ ((v0) & ((v1) ^ (v2)))) + 0x5a827999 + w[10 +1]; v0 = (((v0) >> 2) | ((v0) << (32 - 2))); v2 += (((v3) >> 27) | ((v3) << (32 - 27))) + ((v1) ^ ((v4) & ((v0) ^ (v1)))) + 0x5a827999 + w[10 +2]; v4 = (((v4) >> 2) | ((v4) << (32 - 2))); v1 += (((v2) >> 27) | ((v2) << (32 - 27))) + ((v0) ^ ((v3) & ((v4) ^ (v0)))) + 0x5a827999 + w[10 +3]; v3 = (((v3) >> 2) | ((v3) << (32 - 2))); v0 += (((v1) >> 27) | ((v1) << (32 - 27))) + ((v4) ^ ((v2) & ((v3) ^ (v4)))) + 0x5a827999 + w[10 +4]; v2 = (((v2) >> 2) | ((v2) << (32 - 2)));
# 213 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
    v4 += (((v0) >> 27) | ((v0) << (32 - 27))) + ((v3) ^ ((v1) & ((v2) ^ (v3)))) + 0x5a827999 + w[15]; v1 = (((v1) >> 2) | ((v1) << (32 - 2)));
# 214 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
# 215 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
# 216 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
# 217 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
# 218 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
# 219 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
# 220 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
    v3 += (((v4) >> 27) | ((v4) << (32 - 27))) + ((v2) ^ ((v0) & ((v1) ^ (v2)))) + 0x5a827999 + (w[(16) & 15] = (((w[((16) + 13) & 15] ^ w[((16) + 8) & 15] ^ w[((16) + 2) & 15] ^ w[(16) & 15]) << 1) | ((w[((16) + 13) & 15] ^ w[((16) + 8) & 15] ^ w[((16) + 2) & 15] ^ w[(16) & 15]) >> (32 - 1)))); v0 = (((v0) >> 2) | ((v0) << (32 - 2)));
# 221 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
    v2 += (((v3) >> 27) | ((v3) << (32 - 27))) + ((v1) ^ ((v4) & ((v0) ^ (v1)))) + 0x5a827999 + (w[(17) & 15] = (((w[((17) + 13) & 15] ^ w[((17) + 8) & 15] ^ w[((17) + 2) & 15] ^ w[(17) & 15]) << 1) | ((w[((17) + 13) & 15] ^ w[((17) + 8) & 15] ^ w[((17) + 2) & 15] ^ w[(17) & 15]) >> (32 - 1)))); v4 = (((v4) >> 2) | ((v4) << (32 - 2)));
# 222 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
    v1 += (((v2) >> 27) | ((v2) << (32 - 27))) + ((v0) ^ ((v3) & ((v4) ^ (v0)))) + 0x5a827999 + (w[(18) & 15] = (((w[((18) + 13) & 15] ^ w[((18) + 8) & 15] ^ w[((18) + 2) & 15] ^ w[(18) & 15]) << 1) | ((w[((18) + 13) & 15] ^ w[((18) + 8) & 15] ^ w[((18) + 2) & 15] ^ w[(18) & 15]) >> (32 - 1)))); v3 = (((v3) >> 2) | ((v3) << (32 - 2)));
# 223 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
    v0 += (((v1) >> 27) | ((v1) << (32 - 27))) + ((v4) ^ ((v2) & ((v3) ^ (v4)))) + 0x5a827999 + (w[(19) & 15] = (((w[((19) + 13) & 15] ^ w[((19) + 8) & 15] ^ w[((19) + 2) & 15] ^ w[(19) & 15]) << 1) | ((w[((19) + 13) & 15] ^ w[((19) + 8) & 15] ^ w[((19) + 2) & 15] ^ w[(19) & 15]) >> (32 - 1)))); v2 = (((v2) >> 2) | ((v2) << (32 - 2)));
# 224 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
# 225 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
    v4 += (((v0) >> 27) | ((v0) << (32 - 27))) + ((v1) ^ (v2) ^ (v3)) + 0x6ed9eba1 + (w[(20) & 15] = (((w[((20) + 13) & 15] ^ w[((20) + 8) & 15] ^ w[((20) + 2) & 15] ^ w[(20) & 15]) << 1) | ((w[((20) + 13) & 15] ^ w[((20) + 8) & 15] ^ w[((20) + 2) & 15] ^ w[(20) & 15]) >> (32 - 1)))); v1 = (((v1) >> 2) | ((v1) << (32 - 2))); v3 += (((v4) >> 27) | ((v4) << (32 - 27))) + ((v0) ^ (v1) ^ (v2)) + 0x6ed9eba1 + (w[(20 +1) & 15] = (((w[((20 +1) + 13) & 15] ^ w[((20 +1) + 8) & 15] ^ w[((20 +1) + 2) & 15] ^ w[(20 +1) & 15]) << 1) | ((w[((20 +1) + 13) & 15] ^ w[((20 +1) + 8) & 15] ^ w[((20 +1) + 2) & 15] ^ w[(20 +1) & 15]) >> (32 - 1)))); v0 = (((v0) >> 2) | ((v0) << (32 - 2))); v2 += (((v3) >> 27) | ((v3) << (32 - 27))) + ((v4) ^ (v0) ^ (v1)) + 0x6ed9eba1 + (w[(20 +2) & 15] = (((w[((20 +2) + 13) & 15] ^ w[((20 +2) + 8) & 15] ^ w[((20 +2) + 2) & 15] ^ w[(20 +2) & 15]) << 1) | ((w[((20 +2) + 13) & 15] ^ w[((20 +2) + 8) & 15] ^ w[((20 +2) + 2) & 15] ^ w[(20 +2) & 15]) >> (32 - 1)))); v4 = (((v4) >> 2) | ((v4) << (32 - 2))); v1 += (((v2) >> 27) | ((v2) << (32 - 27))) + ((v3) ^ (v4) ^ (v0)) + 0x6ed9eba1 + (w[(20 +3) & 15] = (((w[((20 +3) + 13) & 15] ^ w[((20 +3) + 8) & 15] ^ w[((20 +3) + 2) & 15] ^ w[(20 +3) & 15]) << 1) | ((w[((20 +3) + 13) & 15] ^ w[((20 +3) + 8) & 15] ^ w[((20 +3) + 2) & 15] ^ w[(20 +3) & 15]) >> (32 - 1)))); v3 = (((v3) >> 2) | ((v3) << (32 - 2))); v0 += (((v1) >> 27) | ((v1) << (32 - 27))) + ((v2) ^ (v3) ^ (v4)) + 0x6ed9eba1 + (w[(20 +4) & 15] = (((w[((20 +4) + 13) & 15] ^ w[((20 +4) + 8) & 15] ^ w[((20 +4) + 2) & 15] ^ w[(20 +4) & 15]) << 1) | ((w[((20 +4) + 13) & 15] ^ w[((20 +4) + 8) & 15] ^ w[((20 +4) + 2) & 15] ^ w[(20 +4) & 15]) >> (32 - 1)))); v2 = (((v2) >> 2) | ((v2) << (32 - 2)));
# 226 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
    v4 += (((v0) >> 27) | ((v0) << (32 - 27))) + ((v1) ^ (v2) ^ (v3)) + 0x6ed9eba1 + (w[(25) & 15] = (((w[((25) + 13) & 15] ^ w[((25) + 8) & 15] ^ w[((25) + 2) & 15] ^ w[(25) & 15]) << 1) | ((w[((25) + 13) & 15] ^ w[((25) + 8) & 15] ^ w[((25) + 2) & 15] ^ w[(25) & 15]) >> (32 - 1)))); v1 = (((v1) >> 2) | ((v1) << (32 - 2))); v3 += (((v4) >> 27) | ((v4) << (32 - 27))) + ((v0) ^ (v1) ^ (v2)) + 0x6ed9eba1 + (w[(25 +1) & 15] = (((w[((25 +1) + 13) & 15] ^ w[((25 +1) + 8) & 15] ^ w[((25 +1) + 2) & 15] ^ w[(25 +1) & 15]) << 1) | ((w[((25 +1) + 13) & 15] ^ w[((25 +1) + 8) & 15] ^ w[((25 +1) + 2) & 15] ^ w[(25 +1) & 15]) >> (32 - 1)))); v0 = (((v0) >> 2) | ((v0) << (32 - 2))); v2 += (((v3) >> 27) | ((v3) << (32 - 27))) + ((v4) ^ (v0) ^ (v1)) + 0x6ed9eba1 + (w[(25 +2) & 15] = (((w[((25 +2) + 13) & 15] ^ w[((25 +2) + 8) & 15] ^ w[((25 +2) + 2) & 15] ^ w[(25 +2) & 15]) << 1) | ((w[((25 +2) + 13) & 15] ^ w[((25 +2) + 8) & 15] ^ w[((25 +2) + 2) & 15] ^ w[(25 +2) & 15]) >> (32 - 1)))); v4 = (((v4) >> 2) | ((v4) << (32 - 2))); v1 += (((v2) >> 27) | ((v2) << (32 - 27))) + ((v3) ^ (v4) ^ (v0)) + 0x6ed9eba1 + (w[(25 +3) & 15] = (((w[((25 +3) + 13) & 15] ^ w[((25 +3) + 8) & 15] ^ w[((25 +3) + 2) & 15] ^ w[(25 +3) & 15]) << 1) | ((w[((25 +3) + 13) & 15] ^ w[((25 +3) + 8) & 15] ^ w[((25 +3) + 2) & 15] ^ w[(25 +3) & 15]) >> (32 - 1)))); v3 = (((v3) >> 2) | ((v3) << (32 - 2))); v0 += (((v1) >> 27) | ((v1) << (32 - 27))) + ((v2) ^ (v3) ^ (v4)) + 0x6ed9eba1 + (w[(25 +4) & 15] = (((w[((25 +4) + 13) & 15] ^ w[((25 +4) + 8) & 15] ^ w[((25 +4) + 2) & 15] ^ w[(25 +4) & 15]) << 1) | ((w[((25 +4) + 13) & 15] ^ w[((25 +4) + 8) & 15] ^ w[((25 +4) + 2) & 15] ^ w[(25 +4) & 15]) >> (32 - 1)))); v2 = (((v2) >> 2) | ((v2) << (32 - 2)));
# 227 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
    v4 += (((v0) >> 27) | ((v0) << (32 - 27))) + ((v1) ^ (v2) ^ (v3)) + 0x6ed9eba1 + (w[(30) & 15] = (((w[((30) + 13) & 15] ^ w[((30) + 8) & 15] ^ w[((30) + 2) & 15] ^ w[(30) & 15]) << 1) | ((w[((30) + 13) & 15] ^ w[((30) + 8) & 15] ^ w[((30) + 2) & 15] ^ w[(30) & 15]) >> (32 - 1)))); v1 = (((v1) >> 2) | ((v1) << (32 - 2))); v3 += (((v4) >> 27) | ((v4) << (32 - 27))) + ((v0) ^ (v1) ^ (v2)) + 0x6ed9eba1 + (w[(30 +1) & 15] = (((w[((30 +1) + 13) & 15] ^ w[((30 +1) + 8) & 15] ^ w[((30 +1) + 2) & 15] ^ w[(30 +1) & 15]) << 1) | ((w[((30 +1) + 13) & 15] ^ w[((30 +1) + 8) & 15] ^ w[((30 +1) + 2) & 15] ^ w[(30 +1) & 15]) >> (32 - 1)))); v0 = (((v0) >> 2) | ((v0) << (32 - 2))); v2 += (((v3) >> 27) | ((v3) << (32 - 27))) + ((v4) ^ (v0) ^ (v1)) + 0x6ed9eba1 + (w[(30 +2) & 15] = (((w[((30 +2) + 13) & 15] ^ w[((30 +2) + 8) & 15] ^ w[((30 +2) + 2) & 15] ^ w[(30 +2) & 15]) << 1) | ((w[((30 +2) + 13) & 15] ^ w[((30 +2) + 8) & 15] ^ w[((30 +2) + 2) & 15] ^ w[(30 +2) & 15]) >> (32 - 1)))); v4 = (((v4) >> 2) | ((v4) << (32 - 2))); v1 += (((v2) >> 27) | ((v2) << (32 - 27))) + ((v3) ^ (v4) ^ (v0)) + 0x6ed9eba1 + (w[(30 +3) & 15] = (((w[((30 +3) + 13) & 15] ^ w[((30 +3) + 8) & 15] ^ w[((30 +3) + 2) & 15] ^ w[(30 +3) & 15]) << 1) | ((w[((30 +3) + 13) & 15] ^ w[((30 +3) + 8) & 15] ^ w[((30 +3) + 2) & 15] ^ w[(30 +3) & 15]) >> (32 - 1)))); v3 = (((v3) >> 2) | ((v3) << (32 - 2))); v0 += (((v1) >> 27) | ((v1) << (32 - 27))) + ((v2) ^ (v3) ^ (v4)) + 0x6ed9eba1 + (w[(30 +4) & 15] = (((w[((30 +4) + 13) & 15] ^ w[((30 +4) + 8) & 15] ^ w[((30 +4) + 2) & 15] ^ w[(30 +4) & 15]) << 1) | ((w[((30 +4) + 13) & 15] ^ w[((30 +4) + 8) & 15] ^ w[((30 +4) + 2) & 15] ^ w[(30 +4) & 15]) >> (32 - 1)))); v2 = (((v2) >> 2) | ((v2) << (32 - 2)));
# 228 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
    v4 += (((v0) >> 27) | ((v0) << (32 - 27))) + ((v1) ^ (v2) ^ (v3)) + 0x6ed9eba1 + (w[(35) & 15] = (((w[((35) + 13) & 15] ^ w[((35) + 8) & 15] ^ w[((35) + 2) & 15] ^ w[(35) & 15]) << 1) | ((w[((35) + 13) & 15] ^ w[((35) + 8) & 15] ^ w[((35) + 2) & 15] ^ w[(35) & 15]) >> (32 - 1)))); v1 = (((v1) >> 2) | ((v1) << (32 - 2))); v3 += (((v4) >> 27) | ((v4) << (32 - 27))) + ((v0) ^ (v1) ^ (v2)) + 0x6ed9eba1 + (w[(35 +1) & 15] = (((w[((35 +1) + 13) & 15] ^ w[((35 +1) + 8) & 15] ^ w[((35 +1) + 2) & 15] ^ w[(35 +1) & 15]) << 1) | ((w[((35 +1) + 13) & 15] ^ w[((35 +1) + 8) & 15] ^ w[((35 +1) + 2) & 15] ^ w[(35 +1) & 15]) >> (32 - 1)))); v0 = (((v0) >> 2) | ((v0) << (32 - 2))); v2 += (((v3) >> 27) | ((v3) << (32 - 27))) + ((v4) ^ (v0) ^ (v1)) + 0x6ed9eba1 + (w[(35 +2) & 15] = (((w[((35 +2) + 13) & 15] ^ w[((35 +2) + 8) & 15] ^ w[((35 +2) + 2) & 15] ^ w[(35 +2) & 15]) << 1) | ((w[((35 +2) + 13) & 15] ^ w[((35 +2) + 8) & 15] ^ w[((35 +2) + 2) & 15] ^ w[(35 +2) & 15]) >> (32 - 1)))); v4 = (((v4) >> 2) | ((v4) << (32 - 2))); v1 += (((v2) >> 27) | ((v2) << (32 - 27))) + ((v3) ^ (v4) ^ (v0)) + 0x6ed9eba1 + (w[(35 +3) & 15] = (((w[((35 +3) + 13) & 15] ^ w[((35 +3) + 8) & 15] ^ w[((35 +3) + 2) & 15] ^ w[(35 +3) & 15]) << 1) | ((w[((35 +3) + 13) & 15] ^ w[((35 +3) + 8) & 15] ^ w[((35 +3) + 2) & 15] ^ w[(35 +3) & 15]) >> (32 - 1)))); v3 = (((v3) >> 2) | ((v3) << (32 - 2))); v0 += (((v1) >> 27) | ((v1) << (32 - 27))) + ((v2) ^ (v3) ^ (v4)) + 0x6ed9eba1 + (w[(35 +4) & 15] = (((w[((35 +4) + 13) & 15] ^ w[((35 +4) + 8) & 15] ^ w[((35 +4) + 2) & 15] ^ w[(35 +4) & 15]) << 1) | ((w[((35 +4) + 13) & 15] ^ w[((35 +4) + 8) & 15] ^ w[((35 +4) + 2) & 15] ^ w[(35 +4) & 15]) >> (32 - 1)))); v2 = (((v2) >> 2) | ((v2) << (32 - 2)));
# 229 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
# 230 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
    v4 += (((v0) >> 27) | ((v0) << (32 - 27))) + (((v1) & (v2)) | ((v3) & ((v1) ^ (v2)))) + 0x8f1bbcdc + (w[(40) & 15] = (((w[((40) + 13) & 15] ^ w[((40) + 8) & 15] ^ w[((40) + 2) & 15] ^ w[(40) & 15]) << 1) | ((w[((40) + 13) & 15] ^ w[((40) + 8) & 15] ^ w[((40) + 2) & 15] ^ w[(40) & 15]) >> (32 - 1)))); v1 = (((v1) >> 2) | ((v1) << (32 - 2))); v3 += (((v4) >> 27) | ((v4) << (32 - 27))) + (((v0) & (v1)) | ((v2) & ((v0) ^ (v1)))) + 0x8f1bbcdc + (w[(40 +1) & 15] = (((w[((40 +1) + 13) & 15] ^ w[((40 +1) + 8) & 15] ^ w[((40 +1) + 2) & 15] ^ w[(40 +1) & 15]) << 1) | ((w[((40 +1) + 13) & 15] ^ w[((40 +1) + 8) & 15] ^ w[((40 +1) + 2) & 15] ^ w[(40 +1) & 15]) >> (32 - 1)))); v0 = (((v0) >> 2) | ((v0) << (32 - 2))); v2 += (((v3) >> 27) | ((v3) << (32 - 27))) + (((v4) & (v0)) | ((v1) & ((v4) ^ (v0)))) + 0x8f1bbcdc + (w[(40 +2) & 15] = (((w[((40 +2) + 13) & 15] ^ w[((40 +2) + 8) & 15] ^ w[((40 +2) + 2) & 15] ^ w[(40 +2) & 15]) << 1) | ((w[((40 +2) + 13) & 15] ^ w[((40 +2) + 8) & 15] ^ w[((40 +2) + 2) & 15] ^ w[(40 +2) & 15]) >> (32 - 1)))); v4 = (((v4) >> 2) | ((v4) << (32 - 2))); v1 += (((v2) >> 27) | ((v2) << (32 - 27))) + (((v3) & (v4)) | ((v0) & ((v3) ^ (v4)))) + 0x8f1bbcdc + (w[(40 +3) & 15] = (((w[((40 +3) + 13) & 15] ^ w[((40 +3) + 8) & 15] ^ w[((40 +3) + 2) & 15] ^ w[(40 +3) & 15]) << 1) | ((w[((40 +3) + 13) & 15] ^ w[((40 +3) + 8) & 15] ^ w[((40 +3) + 2) & 15] ^ w[(40 +3) & 15]) >> (32 - 1)))); v3 = (((v3) >> 2) | ((v3) << (32 - 2))); v0 += (((v1) >> 27) | ((v1) << (32 - 27))) + (((v2) & (v3)) | ((v4) & ((v2) ^ (v3)))) + 0x8f1bbcdc + (w[(40 +4) & 15] = (((w[((40 +4) + 13) & 15] ^ w[((40 +4) + 8) & 15] ^ w[((40 +4) + 2) & 15] ^ w[(40 +4) & 15]) << 1) | ((w[((40 +4) + 13) & 15] ^ w[((40 +4) + 8) & 15] ^ w[((40 +4) + 2) & 15] ^ w[(40 +4) & 15]) >> (32 - 1)))); v2 = (((v2) >> 2) | ((v2) << (32 - 2)));
# 231 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
    v4 += (((v0) >> 27) | ((v0) << (32 - 27))) + (((v1) & (v2)) | ((v3) & ((v1) ^ (v2)))) + 0x8f1bbcdc + (w[(45) & 15] = (((w[((45) + 13) & 15] ^ w[((45) + 8) & 15] ^ w[((45) + 2) & 15] ^ w[(45) & 15]) << 1) | ((w[((45) + 13) & 15] ^ w[((45) + 8) & 15] ^ w[((45) + 2) & 15] ^ w[(45) & 15]) >> (32 - 1)))); v1 = (((v1) >> 2) | ((v1) << (32 - 2))); v3 += (((v4) >> 27) | ((v4) << (32 - 27))) + (((v0) & (v1)) | ((v2) & ((v0) ^ (v1)))) + 0x8f1bbcdc + (w[(45 +1) & 15] = (((w[((45 +1) + 13) & 15] ^ w[((45 +1) + 8) & 15] ^ w[((45 +1) + 2) & 15] ^ w[(45 +1) & 15]) << 1) | ((w[((45 +1) + 13) & 15] ^ w[((45 +1) + 8) & 15] ^ w[((45 +1) + 2) & 15] ^ w[(45 +1) & 15]) >> (32 - 1)))); v0 = (((v0) >> 2) | ((v0) << (32 - 2))); v2 += (((v3) >> 27) | ((v3) << (32 - 27))) + (((v4) & (v0)) | ((v1) & ((v4) ^ (v0)))) + 0x8f1bbcdc + (w[(45 +2) & 15] = (((w[((45 +2) + 13) & 15] ^ w[((45 +2) + 8) & 15] ^ w[((45 +2) + 2) & 15] ^ w[(45 +2) & 15]) << 1) | ((w[((45 +2) + 13) & 15] ^ w[((45 +2) + 8) & 15] ^ w[((45 +2) + 2) & 15] ^ w[(45 +2) & 15]) >> (32 - 1)))); v4 = (((v4) >> 2) | ((v4) << (32 - 2))); v1 += (((v2) >> 27) | ((v2) << (32 - 27))) + (((v3) & (v4)) | ((v0) & ((v3) ^ (v4)))) + 0x8f1bbcdc + (w[(45 +3) & 15] = (((w[((45 +3) + 13) & 15] ^ w[((45 +3) + 8) & 15] ^ w[((45 +3) + 2) & 15] ^ w[(45 +3) & 15]) << 1) | ((w[((45 +3) + 13) & 15] ^ w[((45 +3) + 8) & 15] ^ w[((45 +3) + 2) & 15] ^ w[(45 +3) & 15]) >> (32 - 1)))); v3 = (((v3) >> 2) | ((v3) << (32 - 2))); v0 += (((v1) >> 27) | ((v1) << (32 - 27))) + (((v2) & (v3)) | ((v4) & ((v2) ^ (v3)))) + 0x8f1bbcdc + (w[(45 +4) & 15] = (((w[((45 +4) + 13) & 15] ^ w[((45 +4) + 8) & 15] ^ w[((45 +4) + 2) & 15] ^ w[(45 +4) & 15]) << 1) | ((w[((45 +4) + 13) & 15] ^ w[((45 +4) + 8) & 15] ^ w[((45 +4) + 2) & 15] ^ w[(45 +4) & 15]) >> (32 - 1)))); v2 = (((v2) >> 2) | ((v2) << (32 - 2)));
# 232 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
    v4 += (((v0) >> 27) | ((v0) << (32 - 27))) + (((v1) & (v2)) | ((v3) & ((v1) ^ (v2)))) + 0x8f1bbcdc + (w[(50) & 15] = (((w[((50) + 13) & 15] ^ w[((50) + 8) & 15] ^ w[((50) + 2) & 15] ^ w[(50) & 15]) << 1) | ((w[((50) + 13) & 15] ^ w[((50) + 8) & 15] ^ w[((50) + 2) & 15] ^ w[(50) & 15]) >> (32 - 1)))); v1 = (((v1) >> 2) | ((v1) << (32 - 2))); v3 += (((v4) >> 27) | ((v4) << (32 - 27))) + (((v0) & (v1)) | ((v2) & ((v0) ^ (v1)))) + 0x8f1bbcdc + (w[(50 +1) & 15] = (((w[((50 +1) + 13) & 15] ^ w[((50 +1) + 8) & 15] ^ w[((50 +1) + 2) & 15] ^ w[(50 +1) & 15]) << 1) | ((w[((50 +1) + 13) & 15] ^ w[((50 +1) + 8) & 15] ^ w[((50 +1) + 2) & 15] ^ w[(50 +1) & 15]) >> (32 - 1)))); v0 = (((v0) >> 2) | ((v0) << (32 - 2))); v2 += (((v3) >> 27) | ((v3) << (32 - 27))) + (((v4) & (v0)) | ((v1) & ((v4) ^ (v0)))) + 0x8f1bbcdc + (w[(50 +2) & 15] = (((w[((50 +2) + 13) & 15] ^ w[((50 +2) + 8) & 15] ^ w[((50 +2) + 2) & 15] ^ w[(50 +2) & 15]) << 1) | ((w[((50 +2) + 13) & 15] ^ w[((50 +2) + 8) & 15] ^ w[((50 +2) + 2) & 15] ^ w[(50 +2) & 15]) >> (32 - 1)))); v4 = (((v4) >> 2) | ((v4) << (32 - 2))); v1 += (((v2) >> 27) | ((v2) << (32 - 27))) + (((v3) & (v4)) | ((v0) & ((v3) ^ (v4)))) + 0x8f1bbcdc + (w[(50 +3) & 15] = (((w[((50 +3) + 13) & 15] ^ w[((50 +3) + 8) & 15] ^ w[((50 +3) + 2) & 15] ^ w[(50 +3) & 15]) << 1) | ((w[((50 +3) + 13) & 15] ^ w[((50 +3) + 8) & 15] ^ w[((50 +3) + 2) & 15] ^ w[(50 +3) & 15]) >> (32 - 1)))); v3 = (((v3) >> 2) | ((v3) << (32 - 2))); v0 += (((v1) >> 27) | ((v1) << (32 - 27))) + (((v2) & (v3)) | ((v4) & ((v2) ^ (v3)))) + 0x8f1bbcdc + (w[(50 +4) & 15] = (((w[((50 +4) + 13) & 15] ^ w[((50 +4) + 8) & 15] ^ w[((50 +4) + 2) & 15] ^ w[(50 +4) & 15]) << 1) | ((w[((50 +4) + 13) & 15] ^ w[((50 +4) + 8) & 15] ^ w[((50 +4) + 2) & 15] ^ w[(50 +4) & 15]) >> (32 - 1)))); v2 = (((v2) >> 2) | ((v2) << (32 - 2)));
# 233 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
    v4 += (((v0) >> 27) | ((v0) << (32 - 27))) + (((v1) & (v2)) | ((v3) & ((v1) ^ (v2)))) + 0x8f1bbcdc + (w[(55) & 15] = (((w[((55) + 13) & 15] ^ w[((55) + 8) & 15] ^ w[((55) + 2) & 15] ^ w[(55) & 15]) << 1) | ((w[((55) + 13) & 15] ^ w[((55) + 8) & 15] ^ w[((55) + 2) & 15] ^ w[(55) & 15]) >> (32 - 1)))); v1 = (((v1) >> 2) | ((v1) << (32 - 2))); v3 += (((v4) >> 27) | ((v4) << (32 - 27))) + (((v0) & (v1)) | ((v2) & ((v0) ^ (v1)))) + 0x8f1bbcdc + (w[(55 +1) & 15] = (((w[((55 +1) + 13) & 15] ^ w[((55 +1) + 8) & 15] ^ w[((55 +1) + 2) & 15] ^ w[(55 +1) & 15]) << 1) | ((w[((55 +1) + 13) & 15] ^ w[((55 +1) + 8) & 15] ^ w[((55 +1) + 2) & 15] ^ w[(55 +1) & 15]) >> (32 - 1)))); v0 = (((v0) >> 2) | ((v0) << (32 - 2))); v2 += (((v3) >> 27) | ((v3) << (32 - 27))) + (((v4) & (v0)) | ((v1) & ((v4) ^ (v0)))) + 0x8f1bbcdc + (w[(55 +2) & 15] = (((w[((55 +2) + 13) & 15] ^ w[((55 +2) + 8) & 15] ^ w[((55 +2) + 2) & 15] ^ w[(55 +2) & 15]) << 1) | ((w[((55 +2) + 13) & 15] ^ w[((55 +2) + 8) & 15] ^ w[((55 +2) + 2) & 15] ^ w[(55 +2) & 15]) >> (32 - 1)))); v4 = (((v4) >> 2) | ((v4) << (32 - 2))); v1 += (((v2) >> 27) | ((v2) << (32 - 27))) + (((v3) & (v4)) | ((v0) & ((v3) ^ (v4)))) + 0x8f1bbcdc + (w[(55 +3) & 15] = (((w[((55 +3) + 13) & 15] ^ w[((55 +3) + 8) & 15] ^ w[((55 +3) + 2) & 15] ^ w[(55 +3) & 15]) << 1) | ((w[((55 +3) + 13) & 15] ^ w[((55 +3) + 8) & 15] ^ w[((55 +3) + 2) & 15] ^ w[(55 +3) & 15]) >> (32 - 1)))); v3 = (((v3) >> 2) | ((v3) << (32 - 2))); v0 += (((v1) >> 27) | ((v1) << (32 - 27))) + (((v2) & (v3)) | ((v4) & ((v2) ^ (v3)))) + 0x8f1bbcdc + (w[(55 +4) & 15] = (((w[((55 +4) + 13) & 15] ^ w[((55 +4) + 8) & 15] ^ w[((55 +4) + 2) & 15] ^ w[(55 +4) & 15]) << 1) | ((w[((55 +4) + 13) & 15] ^ w[((55 +4) + 8) & 15] ^ w[((55 +4) + 2) & 15] ^ w[(55 +4) & 15]) >> (32 - 1)))); v2 = (((v2) >> 2) | ((v2) << (32 - 2)));
# 234 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
# 235 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
    v4 += (((v0) >> 27) | ((v0) << (32 - 27))) + ((v1) ^ (v2) ^ (v3)) + 0xca62c1d6 + (w[(60) & 15] = (((w[((60) + 13) & 15] ^ w[((60) + 8) & 15] ^ w[((60) + 2) & 15] ^ w[(60) & 15]) << 1) | ((w[((60) + 13) & 15] ^ w[((60) + 8) & 15] ^ w[((60) + 2) & 15] ^ w[(60) & 15]) >> (32 - 1)))); v1 = (((v1) >> 2) | ((v1) << (32 - 2))); v3 += (((v4) >> 27) | ((v4) << (32 - 27))) + ((v0) ^ (v1) ^ (v2)) + 0xca62c1d6 + (w[(60 +1) & 15] = (((w[((60 +1) + 13) & 15] ^ w[((60 +1) + 8) & 15] ^ w[((60 +1) + 2) & 15] ^ w[(60 +1) & 15]) << 1) | ((w[((60 +1) + 13) & 15] ^ w[((60 +1) + 8) & 15] ^ w[((60 +1) + 2) & 15] ^ w[(60 +1) & 15]) >> (32 - 1)))); v0 = (((v0) >> 2) | ((v0) << (32 - 2))); v2 += (((v3) >> 27) | ((v3) << (32 - 27))) + ((v4) ^ (v0) ^ (v1)) + 0xca62c1d6 + (w[(60 +2) & 15] = (((w[((60 +2) + 13) & 15] ^ w[((60 +2) + 8) & 15] ^ w[((60 +2) + 2) & 15] ^ w[(60 +2) & 15]) << 1) | ((w[((60 +2) + 13) & 15] ^ w[((60 +2) + 8) & 15] ^ w[((60 +2) + 2) & 15] ^ w[(60 +2) & 15]) >> (32 - 1)))); v4 = (((v4) >> 2) | ((v4) << (32 - 2))); v1 += (((v2) >> 27) | ((v2) << (32 - 27))) + ((v3) ^ (v4) ^ (v0)) + 0xca62c1d6 + (w[(60 +3) & 15] = (((w[((60 +3) + 13) & 15] ^ w[((60 +3) + 8) & 15] ^ w[((60 +3) + 2) & 15] ^ w[(60 +3) & 15]) << 1) | ((w[((60 +3) + 13) & 15] ^ w[((60 +3) + 8) & 15] ^ w[((60 +3) + 2) & 15] ^ w[(60 +3) & 15]) >> (32 - 1)))); v3 = (((v3) >> 2) | ((v3) << (32 - 2))); v0 += (((v1) >> 27) | ((v1) << (32 - 27))) + ((v2) ^ (v3) ^ (v4)) + 0xca62c1d6 + (w[(60 +4) & 15] = (((w[((60 +4) + 13) & 15] ^ w[((60 +4) + 8) & 15] ^ w[((60 +4) + 2) & 15] ^ w[(60 +4) & 15]) << 1) | ((w[((60 +4) + 13) & 15] ^ w[((60 +4) + 8) & 15] ^ w[((60 +4) + 2) & 15] ^ w[(60 +4) & 15]) >> (32 - 1)))); v2 = (((v2) >> 2) | ((v2) << (32 - 2)));
# 236 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
    v4 += (((v0) >> 27) | ((v0) << (32 - 27))) + ((v1) ^ (v2) ^ (v3)) + 0xca62c1d6 + (w[(65) & 15] = (((w[((65) + 13) & 15] ^ w[((65) + 8) & 15] ^ w[((65) + 2) & 15] ^ w[(65) & 15]) << 1) | ((w[((65) + 13) & 15] ^ w[((65) + 8) & 15] ^ w[((65) + 2) & 15] ^ w[(65) & 15]) >> (32 - 1)))); v1 = (((v1) >> 2) | ((v1) << (32 - 2))); v3 += (((v4) >> 27) | ((v4) << (32 - 27))) + ((v0) ^ (v1) ^ (v2)) + 0xca62c1d6 + (w[(65 +1) & 15] = (((w[((65 +1) + 13) & 15] ^ w[((65 +1) + 8) & 15] ^ w[((65 +1) + 2) & 15] ^ w[(65 +1) & 15]) << 1) | ((w[((65 +1) + 13) & 15] ^ w[((65 +1) + 8) & 15] ^ w[((65 +1) + 2) & 15] ^ w[(65 +1) & 15]) >> (32 - 1)))); v0 = (((v0) >> 2) | ((v0) << (32 - 2))); v2 += (((v3) >> 27) | ((v3) << (32 - 27))) + ((v4) ^ (v0) ^ (v1)) + 0xca62c1d6 + (w[(65 +2) & 15] = (((w[((65 +2) + 13) & 15] ^ w[((65 +2) + 8) & 15] ^ w[((65 +2) + 2) & 15] ^ w[(65 +2) & 15]) << 1) | ((w[((65 +2) + 13) & 15] ^ w[((65 +2) + 8) & 15] ^ w[((65 +2) + 2) & 15] ^ w[(65 +2) & 15]) >> (32 - 1)))); v4 = (((v4) >> 2) | ((v4) << (32 - 2))); v1 += (((v2) >> 27) | ((v2) << (32 - 27))) + ((v3) ^ (v4) ^ (v0)) + 0xca62c1d6 + (w[(65 +3) & 15] = (((w[((65 +3) + 13) & 15] ^ w[((65 +3) + 8) & 15] ^ w[((65 +3) + 2) & 15] ^ w[(65 +3) & 15]) << 1) | ((w[((65 +3) + 13) & 15] ^ w[((65 +3) + 8) & 15] ^ w[((65 +3) + 2) & 15] ^ w[(65 +3) & 15]) >> (32 - 1)))); v3 = (((v3) >> 2) | ((v3) << (32 - 2))); v0 += (((v1) >> 27) | ((v1) << (32 - 27))) + ((v2) ^ (v3) ^ (v4)) + 0xca62c1d6 + (w[(65 +4) & 15] = (((w[((65 +4) + 13) & 15] ^ w[((65 +4) + 8) & 15] ^ w[((65 +4) + 2) & 15] ^ w[(65 +4) & 15]) << 1) | ((w[((65 +4) + 13) & 15] ^ w[((65 +4) + 8) & 15] ^ w[((65 +4) + 2) & 15] ^ w[(65 +4) & 15]) >> (32 - 1)))); v2 = (((v2) >> 2) | ((v2) << (32 - 2)));
# 237 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
    v4 += (((v0) >> 27) | ((v0) << (32 - 27))) + ((v1) ^ (v2) ^ (v3)) + 0xca62c1d6 + (w[(70) & 15] = (((w[((70) + 13) & 15] ^ w[((70) + 8) & 15] ^ w[((70) + 2) & 15] ^ w[(70) & 15]) << 1) | ((w[((70) + 13) & 15] ^ w[((70) + 8) & 15] ^ w[((70) + 2) & 15] ^ w[(70) & 15]) >> (32 - 1)))); v1 = (((v1) >> 2) | ((v1) << (32 - 2))); v3 += (((v4) >> 27) | ((v4) << (32 - 27))) + ((v0) ^ (v1) ^ (v2)) + 0xca62c1d6 + (w[(70 +1) & 15] = (((w[((70 +1) + 13) & 15] ^ w[((70 +1) + 8) & 15] ^ w[((70 +1) + 2) & 15] ^ w[(70 +1) & 15]) << 1) | ((w[((70 +1) + 13) & 15] ^ w[((70 +1) + 8) & 15] ^ w[((70 +1) + 2) & 15] ^ w[(70 +1) & 15]) >> (32 - 1)))); v0 = (((v0) >> 2) | ((v0) << (32 - 2))); v2 += (((v3) >> 27) | ((v3) << (32 - 27))) + ((v4) ^ (v0) ^ (v1)) + 0xca62c1d6 + (w[(70 +2) & 15] = (((w[((70 +2) + 13) & 15] ^ w[((70 +2) + 8) & 15] ^ w[((70 +2) + 2) & 15] ^ w[(70 +2) & 15]) << 1) | ((w[((70 +2) + 13) & 15] ^ w[((70 +2) + 8) & 15] ^ w[((70 +2) + 2) & 15] ^ w[(70 +2) & 15]) >> (32 - 1)))); v4 = (((v4) >> 2) | ((v4) << (32 - 2))); v1 += (((v2) >> 27) | ((v2) << (32 - 27))) + ((v3) ^ (v4) ^ (v0)) + 0xca62c1d6 + (w[(70 +3) & 15] = (((w[((70 +3) + 13) & 15] ^ w[((70 +3) + 8) & 15] ^ w[((70 +3) + 2) & 15] ^ w[(70 +3) & 15]) << 1) | ((w[((70 +3) + 13) & 15] ^ w[((70 +3) + 8) & 15] ^ w[((70 +3) + 2) & 15] ^ w[(70 +3) & 15]) >> (32 - 1)))); v3 = (((v3) >> 2) | ((v3) << (32 - 2))); v0 += (((v1) >> 27) | ((v1) << (32 - 27))) + ((v2) ^ (v3) ^ (v4)) + 0xca62c1d6 + (w[(70 +4) & 15] = (((w[((70 +4) + 13) & 15] ^ w[((70 +4) + 8) & 15] ^ w[((70 +4) + 2) & 15] ^ w[(70 +4) & 15]) << 1) | ((w[((70 +4) + 13) & 15] ^ w[((70 +4) + 8) & 15] ^ w[((70 +4) + 2) & 15] ^ w[(70 +4) & 15]) >> (32 - 1)))); v2 = (((v2) >> 2) | ((v2) << (32 - 2)));
# 238 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
    v4 += (((v0) >> 27) | ((v0) << (32 - 27))) + ((v1) ^ (v2) ^ (v3)) + 0xca62c1d6 + (w[(75) & 15] = (((w[((75) + 13) & 15] ^ w[((75) + 8) & 15] ^ w[((75) + 2) & 15] ^ w[(75) & 15]) << 1) | ((w[((75) + 13) & 15] ^ w[((75) + 8) & 15] ^ w[((75) + 2) & 15] ^ w[(75) & 15]) >> (32 - 1)))); v1 = (((v1) >> 2) | ((v1) << (32 - 2))); v3 += (((v4) >> 27) | ((v4) << (32 - 27))) + ((v0) ^ (v1) ^ (v2)) + 0xca62c1d6 + (w[(75 +1) & 15] = (((w[((75 +1) + 13) & 15] ^ w[((75 +1) + 8) & 15] ^ w[((75 +1) + 2) & 15] ^ w[(75 +1) & 15]) << 1) | ((w[((75 +1) + 13) & 15] ^ w[((75 +1) + 8) & 15] ^ w[((75 +1) + 2) & 15] ^ w[(75 +1) & 15]) >> (32 - 1)))); v0 = (((v0) >> 2) | ((v0) << (32 - 2))); v2 += (((v3) >> 27) | ((v3) << (32 - 27))) + ((v4) ^ (v0) ^ (v1)) + 0xca62c1d6 + (w[(75 +2) & 15] = (((w[((75 +2) + 13) & 15] ^ w[((75 +2) + 8) & 15] ^ w[((75 +2) + 2) & 15] ^ w[(75 +2) & 15]) << 1) | ((w[((75 +2) + 13) & 15] ^ w[((75 +2) + 8) & 15] ^ w[((75 +2) + 2) & 15] ^ w[(75 +2) & 15]) >> (32 - 1)))); v4 = (((v4) >> 2) | ((v4) << (32 - 2))); v1 += (((v2) >> 27) | ((v2) << (32 - 27))) + ((v3) ^ (v4) ^ (v0)) + 0xca62c1d6 + (w[(75 +3) & 15] = (((w[((75 +3) + 13) & 15] ^ w[((75 +3) + 8) & 15] ^ w[((75 +3) + 2) & 15] ^ w[(75 +3) & 15]) << 1) | ((w[((75 +3) + 13) & 15] ^ w[((75 +3) + 8) & 15] ^ w[((75 +3) + 2) & 15] ^ w[(75 +3) & 15]) >> (32 - 1)))); v3 = (((v3) >> 2) | ((v3) << (32 - 2))); v0 += (((v1) >> 27) | ((v1) << (32 - 27))) + ((v2) ^ (v3) ^ (v4)) + 0xca62c1d6 + (w[(75 +4) & 15] = (((w[((75 +4) + 13) & 15] ^ w[((75 +4) + 8) & 15] ^ w[((75 +4) + 2) & 15] ^ w[(75 +4) & 15]) << 1) | ((w[((75 +4) + 13) & 15] ^ w[((75 +4) + 8) & 15] ^ w[((75 +4) + 2) & 15] ^ w[(75 +4) & 15]) >> (32 - 1)))); v2 = (((v2) >> 2) | ((v2) << (32 - 2)));
# 239 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
# 240 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
# 241 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
# 242 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
# 243 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
# 244 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
# 245 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
    ctx->hash[0] += v0; ctx->hash[1] += v1;
# 246 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
    ctx->hash[2] += v2; ctx->hash[3] += v3;
# 247 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
    ctx->hash[4] += v4;
# 248 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
# 249 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
}
# 251 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
void sha1_begin_npm(sha1_ctx ctx[1])
# 252 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
{
# 253 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
    ctx->count[0] = ctx->count[1] = 0;
# 254 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
    ctx->hash[0] = 0x67452301;
# 255 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
    ctx->hash[1] = 0xefcdab89;
# 256 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
    ctx->hash[2] = 0x98badcfe;
# 257 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
    ctx->hash[3] = 0x10325476;
# 258 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
    ctx->hash[4] = 0xc3d2e1f0;
# 259 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
}
# 264 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
void sha1_hash_npm(const unsigned char data[], unsigned long len, sha1_ctx ctx[1])
# 265 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
{ uint_32t pos = (uint_32t)(ctx->count[0] & (64 - 1)),
# 266 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
            space = 64 - pos;
# 267 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
    const unsigned char *sp = data;
# 268 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
# 269 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
    if ((ctx->count[0] += len) < len) {++(ctx->count[1]); };
# 271 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
# 272 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
    while(len >= space)
# 273 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
    {
# 274 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
        memcpy(((unsigned char*)ctx->wbuf) + pos, sp, space);
# 275 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
        sp += space; len -= space; space = 64; pos = 0;
# 276 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
        { int _i = (64 >> 2); while(_i--) ((uint_32t*)ctx->wbuf)[_i] = ((((((((uint_32t*)ctx->wbuf)[_i])) >> 24) | (((((uint_32t*)ctx->wbuf)[_i])) << (32 - 24))) & 0x00ff00ff) | (((((((uint_32t*)ctx->wbuf)[_i])) >> 8) | (((((uint_32t*)ctx->wbuf)[_i])) << (32 - 8))) & 0xff00ff00)); };
# 277 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
        sha1_compile_npm(ctx);
# 278 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
    }
# 279 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
# 280 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
    memcpy(((unsigned char*)ctx->wbuf) + pos, sp, len);
# 281 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
}
# 285 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
void sha1_end_npm(unsigned char hval[], sha1_ctx ctx[1])
# 286 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
{ uint_32t i = (uint_32t)(ctx->count[0] & (64 - 1));
# 287 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
# 288 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
# 289 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
# 290 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
# 291 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
    { int _i = ((i + 3) >> 2); while(_i--) ((uint_32t*)ctx->wbuf)[_i] = ((((((((uint_32t*)ctx->wbuf)[_i])) >> 24) | (((((uint_32t*)ctx->wbuf)[_i])) << (32 - 24))) & 0x00ff00ff) | (((((((uint_32t*)ctx->wbuf)[_i])) >> 8) | (((((uint_32t*)ctx->wbuf)[_i])) << (32 - 8))) & 0xff00ff00)); };
# 292 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
# 293 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
# 294 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
# 295 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
# 296 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
# 297 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
    ctx->wbuf[i >> 2] &= 0xffffff80 << 8 * (~i & 3);
# 298 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
    ctx->wbuf[i >> 2] |= 0x00000080 << 8 * (~i & 3);
# 299 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
# 300 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
# 301 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
# 302 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
# 303 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
    if (i > 64 - 9) {{
# 305 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
        if (i < 60) {ctx->wbuf[15] = 0; };
# 306 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
        sha1_compile_npm(ctx);
# 307 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
        i = 0;
# 308 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
    }; } else {i = (i >> 2) + 1; } ;
# 311 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
# 312 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
    while(i < 14)
# 313 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
        ctx->wbuf[i++] = 0;
# 314 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
# 315 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
# 316 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
# 317 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
# 318 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
# 319 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
    ctx->wbuf[14] = (ctx->count[1] << 3) | (ctx->count[0] >> 29);
# 320 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
    ctx->wbuf[15] = ctx->count[0] << 3;
# 321 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
    sha1_compile_npm(ctx);
# 322 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
# 323 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
# 324 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
# 325 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
    for (i = 0; i < 20; ++i) { hval[i] = (unsigned char)(ctx->hash[i >> 2] >> (8 * (~i & 3))); };
# 327 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
}
# 329 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
void sha1_npm(unsigned char hval[], const unsigned char data[], unsigned long len)
# 330 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
{ sha1_ctx cx[1];
# 331 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
# 332 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
    sha1_begin_npm(cx); sha1_hash_npm(data, len, cx); sha1_end_npm(hval, cx);
# 333 "/home/mg1/chimes/src/examples/cpp/uts/rng/brg_sha1.c"
}





static int module_init() {
    init_module(14039954671321870895UL, 19, 11, 4, 11, 11, 0, 11, 16, 0, 2,
                           &____alias_loc_id_0, (unsigned)4, (unsigned)0, (unsigned)0, (14039954671321870895UL + 1UL), (14039954671321870895UL + 2UL), (14039954671321870895UL + 4UL), (14039954671321870895UL + 5UL),
                           &____alias_loc_id_1, (unsigned)2, (unsigned)0, (unsigned)0, (14039954671321870895UL + 67UL), (14039954671321870895UL + 99UL),
                           &____alias_loc_id_2, (unsigned)8, (unsigned)0, (unsigned)0, (14039954671321870895UL + 100UL), (14039954671321870895UL + 101UL), (14039954671321870895UL + 102UL), (14039954671321870895UL + 103UL), (14039954671321870895UL + 104UL), (14039954671321870895UL + 105UL), (14039954671321870895UL + 106UL), (14039954671321870895UL + 245UL),
                           &____alias_loc_id_3, (unsigned)6, (unsigned)0, (unsigned)0, (14039954671321870895UL + 246UL), (14039954671321870895UL + 247UL), (14039954671321870895UL + 248UL), (14039954671321870895UL + 249UL), (14039954671321870895UL + 433UL), (14039954671321870895UL + 434UL),
                           &____alias_loc_id_4, (unsigned)4, (unsigned)0, (unsigned)0, (14039954671321870895UL + 435UL), (14039954671321870895UL + 436UL), (14039954671321870895UL + 437UL), (14039954671321870895UL + 439UL),
                           &____alias_loc_id_5, (unsigned)4, (unsigned)0, (unsigned)0, (14039954671321870895UL + 482UL), (14039954671321870895UL + 483UL), (14039954671321870895UL + 484UL), (14039954671321870895UL + 485UL),
                           &____alias_loc_id_6, (unsigned)4, (unsigned)0, (unsigned)0, (14039954671321870895UL + 525UL), (14039954671321870895UL + 527UL), (14039954671321870895UL + 528UL), (14039954671321870895UL + 529UL),
                           &____alias_loc_id_7, (unsigned)3, (unsigned)0, (unsigned)0, (14039954671321870895UL + 575UL), (14039954671321870895UL + 576UL), (14039954671321870895UL + 577UL),
                           &____alias_loc_id_8, (unsigned)3, (unsigned)0, (unsigned)0, (14039954671321870895UL + 601UL), (14039954671321870895UL + 602UL), (14039954671321870895UL + 603UL),
                           &____alias_loc_id_9, (unsigned)8, (unsigned)0, (unsigned)0, (14039954671321870895UL + 623UL), (14039954671321870895UL + 624UL), (14039954671321870895UL + 625UL), (14039954671321870895UL + 626UL), (14039954671321870895UL + 627UL), (14039954671321870895UL + 628UL), (14039954671321870895UL + 629UL), (14039954671321870895UL + 4935UL),
                            &____alias_loc_id_10, (unsigned)3, (unsigned)0, (unsigned)0, (14039954671321870895UL + 4941UL), (14039954671321870895UL + 4942UL), (14039954671321870895UL + 4943UL),
                            "sha1", 0, "_Z4sha1PhPKhm", "_Z8sha1_npmPhPKhm", 0, 3, (14039954671321870895UL + 4962UL), (14039954671321870895UL + 4963UL), 0UL, 0UL, 3, "sha1_begin", 1, (14039954671321870895UL + 4944UL), 0UL, "sha1_hash", 3, (14039954671321870895UL + 4963UL), 0UL, (14039954671321870895UL + 4944UL), 0UL, "sha1_end", 2, (14039954671321870895UL + 4962UL), (14039954671321870895UL + 4944UL), 0UL,
                            "rng_nextrand", 0, "_Z12rng_nextrandPh", "_Z16rng_nextrand_npmPh", 0, 1, (14039954671321870895UL + 574UL), 0UL, 3, "sha1_begin", 1, (14039954671321870895UL + 526UL), 0UL, "sha1_hash", 3, (14039954671321870895UL + 574UL), 0UL, (14039954671321870895UL + 526UL), 0UL, "sha1_end", 2, (14039954671321870895UL + 574UL), (14039954671321870895UL + 526UL), 0UL,
                            "rng_showstate", 0, "_Z13rng_showstatePhPc", "_Z17rng_showstate_npmPhPc", 0, 2, (14039954671321870895UL + 597UL), (14039954671321870895UL + 598UL), (14039954671321870895UL + 598UL), 1, "sprintf", 4, (14039954671321870895UL + 598UL), (14039954671321870895UL + 4965UL), 0UL, 0UL, 0UL,
                            "rng_init", 0, "_Z8rng_initPhi", "_Z12rng_init_npmPhi", 0, 2, (14039954671321870895UL + 63UL), 0UL, 0UL, 3, "sha1_begin", 1, (14039954671321870895UL + 3UL), 0UL, "sha1_hash", 3, (14039954671321870895UL + 4UL), 0UL, (14039954671321870895UL + 3UL), 0UL, "sha1_end", 2, (14039954671321870895UL + 63UL), (14039954671321870895UL + 3UL), 0UL,
                            "rng_spawn", 0, "_Z9rng_spawnPhS_i", "_Z13rng_spawn_npmPhS_i", 0, 3, (14039954671321870895UL + 479UL), (14039954671321870895UL + 480UL), 0UL, 0UL, 4, "sha1_begin", 1, (14039954671321870895UL + 438UL), 0UL, "sha1_hash", 3, (14039954671321870895UL + 479UL), 0UL, (14039954671321870895UL + 438UL), 0UL, "sha1_hash", 3, (14039954671321870895UL + 439UL), 0UL, (14039954671321870895UL + 438UL), 0UL, "sha1_end", 2, (14039954671321870895UL + 480UL), (14039954671321870895UL + 438UL), 0UL,
                            "sha1_hash", 0, "_Z9sha1_hashPKhmP10sha1_ctx_s", "_Z13sha1_hash_npmPKhmP10sha1_ctx_s", 0, 3, (14039954671321870895UL + 243UL), 0UL, (14039954671321870895UL + 245UL), 0UL, 3, "memcpy", 3, (14039954671321870895UL + 245UL), (14039954671321870895UL + 243UL), 0UL, 0UL, "sha1_compile", 1, (14039954671321870895UL + 245UL), 0UL, "memcpy", 3, (14039954671321870895UL + 245UL), (14039954671321870895UL + 243UL), 0UL, 0UL,
                            "sha1_end", 0, "_Z8sha1_endPhP10sha1_ctx_s", "_Z12sha1_end_npmPhP10sha1_ctx_s", 0, 2, (14039954671321870895UL + 433UL), (14039954671321870895UL + 434UL), 0UL, 2, "sha1_compile", 1, (14039954671321870895UL + 434UL), 0UL, "sha1_compile", 1, (14039954671321870895UL + 434UL), 0UL,
                            "rng_rand", 0, "_Z8rng_randPh", "_Z12rng_rand_npmPh", 0, 1, (14039954671321870895UL + 524UL), 0UL, 0,
                            "sha1_compile", 0, "_Z12sha1_compileP10sha1_ctx_s", "_Z16sha1_compile_npmP10sha1_ctx_s", 0, 1, (14039954671321870895UL + 4935UL), 0UL, 0,
                            "sha1_begin", 0, "_Z10sha1_beginP10sha1_ctx_s", "_Z14sha1_begin_npmP10sha1_ctx_s", 0, 1, (14039954671321870895UL + 99UL), 0UL, 0,
                            "rng_showtype", 0, "_Z12rng_showtypePci", "_Z16rng_showtype_npmPci", 0, 2, (14039954671321870895UL + 621UL), 0UL, 0UL, 1, "sprintf", 3, (14039954671321870895UL + 621UL), (14039954671321870895UL + 4966UL), 0UL, 0UL,
                           "sha1", &(____chimes_does_checkpoint_sha1_npm),
                           "rng_nextrand", &(____chimes_does_checkpoint_rng_nextrand_npm),
                           "rng_showstate", &(____chimes_does_checkpoint_rng_showstate_npm),
                           "rng_init", &(____chimes_does_checkpoint_rng_init_npm),
                           "rng_spawn", &(____chimes_does_checkpoint_rng_spawn_npm),
                           "sha1_hash", &(____chimes_does_checkpoint_sha1_hash_npm),
                           "sha1_end", &(____chimes_does_checkpoint_sha1_end_npm),
                           "rng_rand", &(____chimes_does_checkpoint_rng_rand_npm),
                           "sha1_compile", &(____chimes_does_checkpoint_sha1_compile_npm),
                           "sha1_begin", &(____chimes_does_checkpoint_sha1_begin_npm),
                           "rng_showtype", &(____chimes_does_checkpoint_rng_showtype_npm),
                             (14039954671321870895UL + 623UL), (14039954671321870895UL + 4935UL),
                             (14039954671321870895UL + 4942UL), (14039954671321870895UL + 4963UL),
                             (14039954671321870895UL + 601UL), (14039954671321870895UL + 621UL),
                             (14039954671321870895UL + 525UL), (14039954671321870895UL + 574UL),
                             (14039954671321870895UL + 624UL), (14039954671321870895UL + 4935UL),
                             (14039954671321870895UL + 577UL), (14039954671321870895UL + 598UL),
                             (14039954671321870895UL + 576UL), (14039954671321870895UL + 598UL),
                             (14039954671321870895UL + 575UL), (14039954671321870895UL + 597UL),
                             (14039954671321870895UL + 1UL), (14039954671321870895UL + 63UL),
                             (14039954671321870895UL + 436UL), (14039954671321870895UL + 480UL),
                             (14039954671321870895UL + 247UL), (14039954671321870895UL + 434UL),
                             (14039954671321870895UL + 246UL), (14039954671321870895UL + 433UL),
                             (14039954671321870895UL + 67UL), (14039954671321870895UL + 99UL),
                             (14039954671321870895UL + 102UL), (14039954671321870895UL + 245UL),
                             (14039954671321870895UL + 4941UL), (14039954671321870895UL + 4962UL),
                             (14039954671321870895UL + 100UL), (14039954671321870895UL + 243UL),
                             (14039954671321870895UL + 435UL), (14039954671321870895UL + 479UL),
                             (14039954671321870895UL + 482UL), (14039954671321870895UL + 524UL),
                             (14039954671321870895UL + 105UL), (14039954671321870895UL + 243UL),
                     "sha1_ctx_s", 736UL, 3, "[ 2 x unsigned int ]", (int)__builtin_offsetof (struct sha1_ctx_s, count), "[ 5 x unsigned int ]", (int)__builtin_offsetof (struct sha1_ctx_s, hash), "[ 16 x unsigned int ]", (int)__builtin_offsetof (struct sha1_ctx_s, wbuf),
                     "state_t", 160UL, 1, "[ 20 x unsigned char ]", (int)__builtin_offsetof (struct state_t, state),
                             "sha1", "_Z4sha1PhPKhm", 0, 3, "sha1_begin", "sha1_hash", "sha1_end",
                             "rng_nextrand", "_Z12rng_nextrandPh", 0, 3, "sha1_begin", "sha1_hash", "sha1_end",
                             "rng_showstate", "_Z13rng_showstatePhPc", 0, 0,
                             "rng_init", "_Z8rng_initPhi", 0, 3, "sha1_begin", "sha1_hash", "sha1_end",
                             "rng_spawn", "_Z9rng_spawnPhS_i", 0, 4, "sha1_begin", "sha1_hash", "sha1_hash", "sha1_end",
                             "sha1_hash", "_Z9sha1_hashPKhmP10sha1_ctx_s", 0, 1, "sha1_compile",
                             "sha1_end", "_Z8sha1_endPhP10sha1_ctx_s", 0, 2, "sha1_compile", "sha1_compile",
                             "rng_rand", "_Z8rng_randPh", 0, 0,
                             "sha1_compile", "_Z12sha1_compileP10sha1_ctx_s", 0, 0,
                             "sha1_begin", "_Z10sha1_beginP10sha1_ctx_s", 0, 0,
                             "rng_showtype", "_Z12rng_showtypePci", 0, 0,
                        "rng_init|ctx|0", 1, "rng_init",
                        "rng_spawn|ctx|0", 1, "rng_spawn",
                        "rng_nextrand|ctx|0", 1, "rng_nextrand",
                        "sha1|cx|0", 1, "sha1",
        "sha1_begin", 0UL, (int)1, 14039954671321870898UL,
        "sha1_hash", 0UL, (int)3, 14039954671321870899UL, 0UL, 14039954671321870898UL,
        "sha1_end", 0UL, (int)2, 14039954671321870958UL, 14039954671321870898UL,
        "sha1_begin", 0UL, (int)1, 14039954671321871333UL,
        "sha1_hash", 0UL, (int)3, 14039954671321871374UL, 0UL, 14039954671321871333UL,
        "sha1_hash", 0UL, (int)3, 14039954671321871334UL, 0UL, 14039954671321871333UL,
        "sha1_end", 0UL, (int)2, 14039954671321871375UL, 14039954671321871333UL,
        "sha1_begin", 0UL, (int)1, 14039954671321871421UL,
        "sha1_hash", 0UL, (int)3, 14039954671321871469UL, 0UL, 14039954671321871421UL,
        "sha1_end", 0UL, (int)2, 14039954671321871469UL, 14039954671321871421UL,
        "sha1_compile", 0UL, (int)1, 14039954671321871140UL,
        "sha1_compile", 0UL, (int)1, 14039954671321871329UL,
        "sha1_compile", 0UL, (int)1, 14039954671321871329UL,
        "sha1_begin", 0UL, (int)1, 14039954671321875839UL,
        "sha1_hash", 0UL, (int)3, 14039954671321875858UL, 0UL, 14039954671321875839UL,
        "sha1_end", 0UL, (int)2, 14039954671321875857UL, 14039954671321875839UL);
    return 0;
}

static const int __libchimes_module_init = module_init();
