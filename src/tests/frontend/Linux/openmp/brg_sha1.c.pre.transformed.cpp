# 1 "brg_sha1.c.pre.transformed.cpp"
# 1 "<command-line>"
# 1 "/opt/apps/gcc/4.8.2/lib/gcc/x86_64-unknown-linux-gnu/4.8.2/include/stddef.h" 1 3 4
# 147 "/opt/apps/gcc/4.8.2/lib/gcc/x86_64-unknown-linux-gnu/4.8.2/include/stddef.h" 3 4
typedef long int ptrdiff_t;
# 212 "/opt/apps/gcc/4.8.2/lib/gcc/x86_64-unknown-linux-gnu/4.8.2/include/stddef.h" 3 4
typedef long unsigned int size_t;
# 1 "<command-line>" 2
# 1 "brg_sha1.c.pre.transformed.cpp"
extern char __executable_start;
extern char __etext;

static int ____must_checkpoint_rng_init_newstate_0 = 2;
static int ____must_checkpoint_rng_init_ctx_0 = 2;
static int ____must_checkpoint_sha1_hash_len_0 = 2;
static int ____must_checkpoint_sha1_hash_ctx_0 = 2;
static int ____must_checkpoint_sha1_hash_pos_0 = 2;
static int ____must_checkpoint_sha1_hash_space_0 = 2;
static int ____must_checkpoint_sha1_hash_sp_0 = 2;
static int ____must_checkpoint_sha1_hash__i_0 = 2;
static int ____must_checkpoint_sha1_hash___v_0 = 2;
static int ____must_checkpoint_sha1_hash___x_0 = 2;
static int ____must_checkpoint_sha1_end_hval_0 = 2;
static int ____must_checkpoint_sha1_end_ctx_0 = 2;
static int ____must_checkpoint_sha1_end_i_0 = 2;
static int ____must_checkpoint_sha1_end__i_0 = 2;
static int ____must_checkpoint_sha1_end___v_0 = 2;
static int ____must_checkpoint_sha1_end___x_0 = 2;
static int ____must_checkpoint_rng_spawn_newstate_0 = 2;
static int ____must_checkpoint_rng_spawn_ctx_0 = 2;
static int ____must_checkpoint_rng_nextrand_mystate_0 = 2;
static int ____must_checkpoint_rng_nextrand_ctx_0 = 2;
static int ____must_checkpoint_sha1_hval_0 = 2;
static int ____must_checkpoint_sha1_cx_0 = 2;

static int ____must_manage_sha1 = 2;
static int ____must_manage_rng_nextrand = 2;
static int ____must_manage_rng_showstate = 2;
static int ____must_manage_rng_init = 2;
static int ____must_manage_rng_spawn = 2;
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
static unsigned ____alias_loc_id_11;
static unsigned ____alias_loc_id_12;
static unsigned ____alias_loc_id_13;
static unsigned ____alias_loc_id_14;
static unsigned ____alias_loc_id_15;
static unsigned ____alias_loc_id_16;
# 1 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
# 1 "/tmp/chimes-frontend//"
# 1 "<command-line>"
# 1 "/home/jmg3/num-debug/src/libchimes/libchimes.h" 1



# 1 "/opt/apps/gcc/4.8.2/lib/gcc/x86_64-unknown-linux-gnu/4.8.2/include/stddef.h" 1 3 4
# 147 "/opt/apps/gcc/4.8.2/lib/gcc/x86_64-unknown-linux-gnu/4.8.2/include/stddef.h" 3 4
typedef long int ptrdiff_t;
# 212 "/opt/apps/gcc/4.8.2/lib/gcc/x86_64-unknown-linux-gnu/4.8.2/include/stddef.h" 3 4
typedef long unsigned int size_t;
# 5 "/home/jmg3/num-debug/src/libchimes/libchimes.h" 2


extern void init_chimes();
extern void checkpoint_transformed(int lbl, unsigned loc_id);

extern void *translate_fptr(void *fptr, int lbl, size_t return_alias,
        unsigned loc_id, int n_params, ...);
extern void calling_npm(const char *name, size_t return_alias, unsigned loc_id,
        int n_params, ...);
extern void calling(void *func_ptr, int lbl, size_t set_return_alias,
        unsigned loc_id, unsigned naliases, ...);
extern int get_next_call();
extern int new_stack(void *func_ptr, const char *funcname, int *conditional,
        unsigned n_local_arg_aliases, unsigned nargs, ...);
extern void init_module(size_t module_id, int n_contains_mappings,
        int nfunctions, int nvars, int n_change_locs,
        int n_provided_npm_functions, int n_external_npm_functions,
        int n_npm_conditionals, int nstructs, ...);
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
extern void register_text(void *start, size_t len);
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
# 67 "/home/jmg3/num-debug/src/libchimes/libchimes.h"
extern "C" {
extern int omp_get_thread_num (void) throw ();
extern int omp_get_num_threads(void) throw ();
}
inline unsigned LIBCHIMES_THREAD_NUM() { return omp_get_thread_num(); }
inline unsigned LIBCHIMES_NUM_THREADS() { return omp_get_num_threads(); }





extern int ____chimes_replaying;
# 1 "<command-line>" 2
# 1 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
# 36 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
# 1 "/usr/include/string.h" 1 3 4
# 27 "/usr/include/string.h" 3 4
# 1 "/usr/include/features.h" 1 3 4
# 361 "/usr/include/features.h" 3 4
# 1 "/usr/include/sys/cdefs.h" 1 3 4
# 365 "/usr/include/sys/cdefs.h" 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 366 "/usr/include/sys/cdefs.h" 2 3 4
# 362 "/usr/include/features.h" 2 3 4
# 385 "/usr/include/features.h" 3 4
# 1 "/usr/include/gnu/stubs.h" 1 3 4



# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 5 "/usr/include/gnu/stubs.h" 2 3 4




# 1 "/usr/include/gnu/stubs-64.h" 1 3 4
# 10 "/usr/include/gnu/stubs.h" 2 3 4
# 386 "/usr/include/features.h" 2 3 4
# 28 "/usr/include/string.h" 2 3 4

extern "C" {




# 1 "/opt/apps/gcc/4.8.2/lib/gcc/x86_64-unknown-linux-gnu/4.8.2/include/stddef.h" 1 3 4
# 35 "/usr/include/string.h" 2 3 4
# 44 "/usr/include/string.h" 3 4
extern void *memcpy (void *__restrict __dest,
       __const void *__restrict __src, size_t __n)
     throw () __attribute__ ((__nonnull__ (1, 2)));


extern void *memmove (void *__dest, __const void *__src, size_t __n)
     throw () __attribute__ ((__nonnull__ (1, 2)));






extern void *memccpy (void *__restrict __dest, __const void *__restrict __src,
        int __c, size_t __n)
     throw () __attribute__ ((__nonnull__ (1, 2)));





extern void *memset (void *__s, int __c, size_t __n) throw () __attribute__ ((__nonnull__ (1)));


extern int memcmp (__const void *__s1, __const void *__s2, size_t __n)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));



extern "C++"
{
extern void *memchr (void *__s, int __c, size_t __n)
      throw () __asm ("memchr") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern __const void *memchr (__const void *__s, int __c, size_t __n)
      throw () __asm ("memchr") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));


extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__, __artificial__)) void *
memchr (void *__s, int __c, size_t __n) throw ()
{
  return __builtin_memchr (__s, __c, __n);
}

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__, __artificial__)) __const void *
memchr (__const void *__s, int __c, size_t __n) throw ()
{
  return __builtin_memchr (__s, __c, __n);
}

}
# 104 "/usr/include/string.h" 3 4
extern "C++" void *rawmemchr (void *__s, int __c)
     throw () __asm ("rawmemchr") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern "C++" __const void *rawmemchr (__const void *__s, int __c)
     throw () __asm ("rawmemchr") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));







extern "C++" void *memrchr (void *__s, int __c, size_t __n)
      throw () __asm ("memrchr") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern "C++" __const void *memrchr (__const void *__s, int __c, size_t __n)
      throw () __asm ("memrchr") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
# 128 "/usr/include/string.h" 3 4
extern char *strcpy (char *__restrict __dest, __const char *__restrict __src)
     throw () __attribute__ ((__nonnull__ (1, 2)));

extern char *strncpy (char *__restrict __dest,
        __const char *__restrict __src, size_t __n)
     throw () __attribute__ ((__nonnull__ (1, 2)));


extern char *strcat (char *__restrict __dest, __const char *__restrict __src)
     throw () __attribute__ ((__nonnull__ (1, 2)));

extern char *strncat (char *__restrict __dest, __const char *__restrict __src,
        size_t __n) throw () __attribute__ ((__nonnull__ (1, 2)));


extern int strcmp (__const char *__s1, __const char *__s2)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));

extern int strncmp (__const char *__s1, __const char *__s2, size_t __n)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern int strcoll (__const char *__s1, __const char *__s2)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));

extern size_t strxfrm (char *__restrict __dest,
         __const char *__restrict __src, size_t __n)
     throw () __attribute__ ((__nonnull__ (2)));






# 1 "/usr/include/xlocale.h" 1 3 4
# 28 "/usr/include/xlocale.h" 3 4
typedef struct __locale_struct
{

  struct __locale_data *__locales[13];


  const unsigned short int *__ctype_b;
  const int *__ctype_tolower;
  const int *__ctype_toupper;


  const char *__names[13];
} *__locale_t;


typedef __locale_t locale_t;
# 163 "/usr/include/string.h" 2 3 4


extern int strcoll_l (__const char *__s1, __const char *__s2, __locale_t __l)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2, 3)));

extern size_t strxfrm_l (char *__dest, __const char *__src, size_t __n,
    __locale_t __l) throw () __attribute__ ((__nonnull__ (2, 4)));





extern char *strdup (__const char *__s)
     throw () __attribute__ ((__malloc__)) __attribute__ ((__nonnull__ (1)));






extern char *strndup (__const char *__string, size_t __n)
     throw () __attribute__ ((__malloc__)) __attribute__ ((__nonnull__ (1)));
# 210 "/usr/include/string.h" 3 4



extern "C++"
{
extern char *strchr (char *__s, int __c)
     throw () __asm ("strchr") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern __const char *strchr (__const char *__s, int __c)
     throw () __asm ("strchr") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));


extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__, __artificial__)) char *
strchr (char *__s, int __c) throw ()
{
  return __builtin_strchr (__s, __c);
}

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__, __artificial__)) __const char *
strchr (__const char *__s, int __c) throw ()
{
  return __builtin_strchr (__s, __c);
}

}






extern "C++"
{
extern char *strrchr (char *__s, int __c)
     throw () __asm ("strrchr") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern __const char *strrchr (__const char *__s, int __c)
     throw () __asm ("strrchr") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));


extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__, __artificial__)) char *
strrchr (char *__s, int __c) throw ()
{
  return __builtin_strrchr (__s, __c);
}

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__, __artificial__)) __const char *
strrchr (__const char *__s, int __c) throw ()
{
  return __builtin_strrchr (__s, __c);
}

}
# 271 "/usr/include/string.h" 3 4
extern "C++" char *strchrnul (char *__s, int __c)
     throw () __asm ("strchrnul") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern "C++" __const char *strchrnul (__const char *__s, int __c)
     throw () __asm ("strchrnul") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
# 284 "/usr/include/string.h" 3 4
extern size_t strcspn (__const char *__s, __const char *__reject)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern size_t strspn (__const char *__s, __const char *__accept)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern "C++"
{
extern char *strpbrk (char *__s, __const char *__accept)
     throw () __asm ("strpbrk") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern __const char *strpbrk (__const char *__s, __const char *__accept)
     throw () __asm ("strpbrk") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__, __artificial__)) char *
strpbrk (char *__s, __const char *__accept) throw ()
{
  return __builtin_strpbrk (__s, __accept);
}

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__, __artificial__)) __const char *
strpbrk (__const char *__s, __const char *__accept) throw ()
{
  return __builtin_strpbrk (__s, __accept);
}

}






extern "C++"
{
extern char *strstr (char *__haystack, __const char *__needle)
     throw () __asm ("strstr") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern __const char *strstr (__const char *__haystack,
        __const char *__needle)
     throw () __asm ("strstr") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__, __artificial__)) char *
strstr (char *__haystack, __const char *__needle) throw ()
{
  return __builtin_strstr (__haystack, __needle);
}

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__, __artificial__)) __const char *
strstr (__const char *__haystack, __const char *__needle) throw ()
{
  return __builtin_strstr (__haystack, __needle);
}

}







extern char *strtok (char *__restrict __s, __const char *__restrict __delim)
     throw () __attribute__ ((__nonnull__ (2)));




extern char *__strtok_r (char *__restrict __s,
    __const char *__restrict __delim,
    char **__restrict __save_ptr)
     throw () __attribute__ ((__nonnull__ (2, 3)));

extern char *strtok_r (char *__restrict __s, __const char *__restrict __delim,
         char **__restrict __save_ptr)
     throw () __attribute__ ((__nonnull__ (2, 3)));





extern "C++" char *strcasestr (char *__haystack, __const char *__needle)
     throw () __asm ("strcasestr") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern "C++" __const char *strcasestr (__const char *__haystack,
           __const char *__needle)
     throw () __asm ("strcasestr") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 382 "/usr/include/string.h" 3 4
extern void *memmem (__const void *__haystack, size_t __haystacklen,
       __const void *__needle, size_t __needlelen)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 3)));



extern void *__mempcpy (void *__restrict __dest,
   __const void *__restrict __src, size_t __n)
     throw () __attribute__ ((__nonnull__ (1, 2)));
extern void *mempcpy (void *__restrict __dest,
        __const void *__restrict __src, size_t __n)
     throw () __attribute__ ((__nonnull__ (1, 2)));





extern size_t strlen (__const char *__s)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));





extern size_t strnlen (__const char *__string, size_t __maxlen)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));





extern char *strerror (int __errnum) throw ();
# 438 "/usr/include/string.h" 3 4
extern char *strerror_r (int __errnum, char *__buf, size_t __buflen)
     throw () __attribute__ ((__nonnull__ (2)));





extern char *strerror_l (int __errnum, __locale_t __l) throw ();





extern void __bzero (void *__s, size_t __n) throw () __attribute__ ((__nonnull__ (1)));



extern void bcopy (__const void *__src, void *__dest, size_t __n)
     throw () __attribute__ ((__nonnull__ (1, 2)));


extern void bzero (void *__s, size_t __n) throw () __attribute__ ((__nonnull__ (1)));


extern int bcmp (__const void *__s1, __const void *__s2, size_t __n)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));



extern "C++"
{
extern char *index (char *__s, int __c)
     throw () __asm ("index") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern __const char *index (__const char *__s, int __c)
     throw () __asm ("index") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));


extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__, __artificial__)) char *
index (char *__s, int __c) throw ()
{
  return __builtin_index (__s, __c);
}

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__, __artificial__)) __const char *
index (__const char *__s, int __c) throw ()
{
  return __builtin_index (__s, __c);
}

}







extern "C++"
{
extern char *rindex (char *__s, int __c)
     throw () __asm ("rindex") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern __const char *rindex (__const char *__s, int __c)
     throw () __asm ("rindex") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));


extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__, __artificial__)) char *
rindex (char *__s, int __c) throw ()
{
  return __builtin_rindex (__s, __c);
}

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__, __artificial__)) __const char *
rindex (__const char *__s, int __c) throw ()
{
  return __builtin_rindex (__s, __c);
}

}







extern int ffs (int __i) throw () __attribute__ ((__const__));




extern int ffsl (long int __l) throw () __attribute__ ((__const__));

__extension__ extern int ffsll (long long int __ll)
     throw () __attribute__ ((__const__));




extern int strcasecmp (__const char *__s1, __const char *__s2)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern int strncasecmp (__const char *__s1, __const char *__s2, size_t __n)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));





extern int strcasecmp_l (__const char *__s1, __const char *__s2,
    __locale_t __loc)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2, 3)));

extern int strncasecmp_l (__const char *__s1, __const char *__s2,
     size_t __n, __locale_t __loc)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2, 4)));





extern char *strsep (char **__restrict __stringp,
       __const char *__restrict __delim)
     throw () __attribute__ ((__nonnull__ (1, 2)));




extern char *strsignal (int __sig) throw ();


extern char *__stpcpy (char *__restrict __dest, __const char *__restrict __src)
     throw () __attribute__ ((__nonnull__ (1, 2)));
extern char *stpcpy (char *__restrict __dest, __const char *__restrict __src)
     throw () __attribute__ ((__nonnull__ (1, 2)));



extern char *__stpncpy (char *__restrict __dest,
   __const char *__restrict __src, size_t __n)
     throw () __attribute__ ((__nonnull__ (1, 2)));
extern char *stpncpy (char *__restrict __dest,
        __const char *__restrict __src, size_t __n)
     throw () __attribute__ ((__nonnull__ (1, 2)));




extern int strverscmp (__const char *__s1, __const char *__s2)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern char *strfry (char *__string) throw () __attribute__ ((__nonnull__ (1)));


extern void *memfrob (void *__s, size_t __n) throw () __attribute__ ((__nonnull__ (1)));







extern "C++" char *basename (char *__filename)
     throw () __asm ("basename") __attribute__ ((__nonnull__ (1)));
extern "C++" __const char *basename (__const char *__filename)
     throw () __asm ("basename") __attribute__ ((__nonnull__ (1)));
# 646 "/usr/include/string.h" 3 4
}
# 37 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c" 2
# 1 "/usr/include/stdio.h" 1 3 4
# 30 "/usr/include/stdio.h" 3 4
extern "C" {



# 1 "/opt/apps/gcc/4.8.2/lib/gcc/x86_64-unknown-linux-gnu/4.8.2/include/stddef.h" 1 3 4
# 35 "/usr/include/stdio.h" 2 3 4

# 1 "/usr/include/bits/types.h" 1 3 4
# 28 "/usr/include/bits/types.h" 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 29 "/usr/include/bits/types.h" 2 3 4


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
# 131 "/usr/include/bits/types.h" 3 4
# 1 "/usr/include/bits/typesizes.h" 1 3 4
# 132 "/usr/include/bits/types.h" 2 3 4


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
typedef long int __swblk_t;
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

typedef long int __ssize_t;



typedef __off64_t __loff_t;
typedef __quad_t *__qaddr_t;
typedef char *__caddr_t;


typedef long int __intptr_t;


typedef unsigned int __socklen_t;
# 37 "/usr/include/stdio.h" 2 3 4
# 45 "/usr/include/stdio.h" 3 4
struct _IO_FILE;



typedef struct _IO_FILE FILE;
# 65 "/usr/include/stdio.h" 3 4
typedef struct _IO_FILE __FILE;
# 75 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/libio.h" 1 3 4
# 32 "/usr/include/libio.h" 3 4
# 1 "/usr/include/_G_config.h" 1 3 4
# 15 "/usr/include/_G_config.h" 3 4
# 1 "/opt/apps/gcc/4.8.2/lib/gcc/x86_64-unknown-linux-gnu/4.8.2/include/stddef.h" 1 3 4
# 16 "/usr/include/_G_config.h" 2 3 4




# 1 "/usr/include/wchar.h" 1 3 4
# 83 "/usr/include/wchar.h" 3 4
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
# 53 "/usr/include/_G_config.h" 3 4
typedef int _G_int16_t __attribute__ ((__mode__ (__HI__)));
typedef int _G_int32_t __attribute__ ((__mode__ (__SI__)));
typedef unsigned int _G_uint16_t __attribute__ ((__mode__ (__HI__)));
typedef unsigned int _G_uint32_t __attribute__ ((__mode__ (__SI__)));
# 33 "/usr/include/libio.h" 2 3 4
# 53 "/usr/include/libio.h" 3 4
# 1 "/opt/apps/gcc/4.8.2/lib/gcc/x86_64-unknown-linux-gnu/4.8.2/include/stdarg.h" 1 3 4
# 40 "/opt/apps/gcc/4.8.2/lib/gcc/x86_64-unknown-linux-gnu/4.8.2/include/stdarg.h" 3 4
typedef __builtin_va_list __gnuc_va_list;
# 54 "/usr/include/libio.h" 2 3 4
# 170 "/usr/include/libio.h" 3 4
struct _IO_jump_t; struct _IO_FILE;
# 180 "/usr/include/libio.h" 3 4
typedef void _IO_lock_t;





struct _IO_marker {
  struct _IO_marker *_next;
  struct _IO_FILE *_sbuf;



  int _pos;
# 203 "/usr/include/libio.h" 3 4
};


enum __codecvt_result
{
  __codecvt_ok,
  __codecvt_partial,
  __codecvt_error,
  __codecvt_noconv
};
# 271 "/usr/include/libio.h" 3 4
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
# 319 "/usr/include/libio.h" 3 4
  __off64_t _offset;
# 328 "/usr/include/libio.h" 3 4
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
# 364 "/usr/include/libio.h" 3 4
typedef __ssize_t __io_read_fn (void *__cookie, char *__buf, size_t __nbytes);







typedef __ssize_t __io_write_fn (void *__cookie, __const char *__buf,
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
# 460 "/usr/include/libio.h" 3 4
extern int _IO_getc (_IO_FILE *__fp);
extern int _IO_putc (int __c, _IO_FILE *__fp);
extern int _IO_feof (_IO_FILE *__fp) throw ();
extern int _IO_ferror (_IO_FILE *__fp) throw ();

extern int _IO_peekc_locked (_IO_FILE *__fp);





extern void _IO_flockfile (_IO_FILE *) throw ();
extern void _IO_funlockfile (_IO_FILE *) throw ();
extern int _IO_ftrylockfile (_IO_FILE *) throw ();
# 490 "/usr/include/libio.h" 3 4
extern int _IO_vfscanf (_IO_FILE * __restrict, const char * __restrict,
   __gnuc_va_list, int *__restrict);
extern int _IO_vfprintf (_IO_FILE *__restrict, const char *__restrict,
    __gnuc_va_list);
extern __ssize_t _IO_padn (_IO_FILE *, int, __ssize_t);
extern size_t _IO_sgetn (_IO_FILE *, void *, size_t);

extern __off64_t _IO_seekoff (_IO_FILE *, __off64_t, int, int);
extern __off64_t _IO_seekpos (_IO_FILE *, __off64_t, int);

extern void _IO_free_backup_area (_IO_FILE *) throw ();
# 552 "/usr/include/libio.h" 3 4
}
# 76 "/usr/include/stdio.h" 2 3 4




typedef __gnuc_va_list va_list;
# 91 "/usr/include/stdio.h" 3 4
typedef __off_t off_t;






typedef __off64_t off64_t;




typedef __ssize_t ssize_t;







typedef _G_fpos_t fpos_t;





typedef _G_fpos64_t fpos64_t;
# 161 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/bits/stdio_lim.h" 1 3 4
# 162 "/usr/include/stdio.h" 2 3 4



extern struct _IO_FILE *stdin;
extern struct _IO_FILE *stdout;
extern struct _IO_FILE *stderr;
# 177 "/usr/include/stdio.h" 3 4
extern int remove (__const char *__filename) throw ();

extern int rename (__const char *__old, __const char *__new) throw ();




extern int renameat (int __oldfd, __const char *__old, int __newfd,
       __const char *__new) throw ();
# 194 "/usr/include/stdio.h" 3 4
extern FILE *tmpfile (void) ;
# 204 "/usr/include/stdio.h" 3 4
extern FILE *tmpfile64 (void) ;



extern char *tmpnam (char *__s) throw () ;





extern char *tmpnam_r (char *__s) throw () ;
# 226 "/usr/include/stdio.h" 3 4
extern char *tempnam (__const char *__dir, __const char *__pfx)
     throw () __attribute__ ((__malloc__)) ;
# 236 "/usr/include/stdio.h" 3 4
extern int fclose (FILE *__stream);




extern int fflush (FILE *__stream);
# 251 "/usr/include/stdio.h" 3 4
extern int fflush_unlocked (FILE *__stream);
# 261 "/usr/include/stdio.h" 3 4
extern int fcloseall (void);
# 271 "/usr/include/stdio.h" 3 4
extern FILE *fopen (__const char *__restrict __filename,
      __const char *__restrict __modes) ;




extern FILE *freopen (__const char *__restrict __filename,
        __const char *__restrict __modes,
        FILE *__restrict __stream) ;
# 294 "/usr/include/stdio.h" 3 4


extern FILE *fopen64 (__const char *__restrict __filename,
        __const char *__restrict __modes) ;
extern FILE *freopen64 (__const char *__restrict __filename,
   __const char *__restrict __modes,
   FILE *__restrict __stream) ;




extern FILE *fdopen (int __fd, __const char *__modes) throw () ;





extern FILE *fopencookie (void *__restrict __magic_cookie,
     __const char *__restrict __modes,
     _IO_cookie_io_functions_t __io_funcs) throw () ;




extern FILE *fmemopen (void *__s, size_t __len, __const char *__modes)
  throw () ;




extern FILE *open_memstream (char **__bufloc, size_t *__sizeloc) throw () ;






extern void setbuf (FILE *__restrict __stream, char *__restrict __buf) throw ();



extern int setvbuf (FILE *__restrict __stream, char *__restrict __buf,
      int __modes, size_t __n) throw ();





extern void setbuffer (FILE *__restrict __stream, char *__restrict __buf,
         size_t __size) throw ();


extern void setlinebuf (FILE *__stream) throw ();
# 355 "/usr/include/stdio.h" 3 4
extern int fprintf (FILE *__restrict __stream,
      __const char *__restrict __format, ...);




extern int printf (__const char *__restrict __format, ...);

extern int sprintf (char *__restrict __s,
      __const char *__restrict __format, ...) throw ();





extern int vfprintf (FILE *__restrict __s, __const char *__restrict __format,
       __gnuc_va_list __arg);




extern int vprintf (__const char *__restrict __format, __gnuc_va_list __arg);

extern int vsprintf (char *__restrict __s, __const char *__restrict __format,
       __gnuc_va_list __arg) throw ();





extern int snprintf (char *__restrict __s, size_t __maxlen,
       __const char *__restrict __format, ...)
     throw () __attribute__ ((__format__ (__printf__, 3, 4)));

extern int vsnprintf (char *__restrict __s, size_t __maxlen,
        __const char *__restrict __format, __gnuc_va_list __arg)
     throw () __attribute__ ((__format__ (__printf__, 3, 0)));






extern int vasprintf (char **__restrict __ptr, __const char *__restrict __f,
        __gnuc_va_list __arg)
     throw () __attribute__ ((__format__ (__printf__, 2, 0))) ;
extern int __asprintf (char **__restrict __ptr,
         __const char *__restrict __fmt, ...)
     throw () __attribute__ ((__format__ (__printf__, 2, 3))) ;
extern int asprintf (char **__restrict __ptr,
       __const char *__restrict __fmt, ...)
     throw () __attribute__ ((__format__ (__printf__, 2, 3))) ;
# 416 "/usr/include/stdio.h" 3 4
extern int vdprintf (int __fd, __const char *__restrict __fmt,
       __gnuc_va_list __arg)
     __attribute__ ((__format__ (__printf__, 2, 0)));
extern int dprintf (int __fd, __const char *__restrict __fmt, ...)
     __attribute__ ((__format__ (__printf__, 2, 3)));
# 429 "/usr/include/stdio.h" 3 4
extern int fscanf (FILE *__restrict __stream,
     __const char *__restrict __format, ...) ;




extern int scanf (__const char *__restrict __format, ...) ;

extern int sscanf (__const char *__restrict __s,
     __const char *__restrict __format, ...) throw ();
# 467 "/usr/include/stdio.h" 3 4
# 475 "/usr/include/stdio.h" 3 4
extern int vfscanf (FILE *__restrict __s, __const char *__restrict __format,
      __gnuc_va_list __arg)
     __attribute__ ((__format__ (__scanf__, 2, 0))) ;





extern int vscanf (__const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__format__ (__scanf__, 1, 0))) ;


extern int vsscanf (__const char *__restrict __s,
      __const char *__restrict __format, __gnuc_va_list __arg)
     throw () __attribute__ ((__format__ (__scanf__, 2, 0)));
# 526 "/usr/include/stdio.h" 3 4
# 535 "/usr/include/stdio.h" 3 4
extern int fgetc (FILE *__stream);
extern int getc (FILE *__stream);





extern int getchar (void);
# 554 "/usr/include/stdio.h" 3 4
extern int getc_unlocked (FILE *__stream);
extern int getchar_unlocked (void);
# 565 "/usr/include/stdio.h" 3 4
extern int fgetc_unlocked (FILE *__stream);
# 577 "/usr/include/stdio.h" 3 4
extern int fputc (int __c, FILE *__stream);
extern int putc (int __c, FILE *__stream);





extern int putchar (int __c);
# 598 "/usr/include/stdio.h" 3 4
extern int fputc_unlocked (int __c, FILE *__stream);







extern int putc_unlocked (int __c, FILE *__stream);
extern int putchar_unlocked (int __c);






extern int getw (FILE *__stream);


extern int putw (int __w, FILE *__stream);
# 626 "/usr/include/stdio.h" 3 4
extern char *fgets (char *__restrict __s, int __n, FILE *__restrict __stream)
     ;






extern char *gets (char *__s) ;
# 644 "/usr/include/stdio.h" 3 4
extern char *fgets_unlocked (char *__restrict __s, int __n,
        FILE *__restrict __stream) ;
# 660 "/usr/include/stdio.h" 3 4
extern __ssize_t __getdelim (char **__restrict __lineptr,
          size_t *__restrict __n, int __delimiter,
          FILE *__restrict __stream) ;
extern __ssize_t getdelim (char **__restrict __lineptr,
        size_t *__restrict __n, int __delimiter,
        FILE *__restrict __stream) ;







extern __ssize_t getline (char **__restrict __lineptr,
       size_t *__restrict __n,
       FILE *__restrict __stream) ;
# 684 "/usr/include/stdio.h" 3 4
extern int fputs (__const char *__restrict __s, FILE *__restrict __stream);





extern int puts (__const char *__s);






extern int ungetc (int __c, FILE *__stream);






extern size_t fread (void *__restrict __ptr, size_t __size,
       size_t __n, FILE *__restrict __stream) ;




extern size_t fwrite (__const void *__restrict __ptr, size_t __size,
        size_t __n, FILE *__restrict __s) ;
# 721 "/usr/include/stdio.h" 3 4
extern int fputs_unlocked (__const char *__restrict __s,
      FILE *__restrict __stream);
# 732 "/usr/include/stdio.h" 3 4
extern size_t fread_unlocked (void *__restrict __ptr, size_t __size,
         size_t __n, FILE *__restrict __stream) ;
extern size_t fwrite_unlocked (__const void *__restrict __ptr, size_t __size,
          size_t __n, FILE *__restrict __stream) ;
# 744 "/usr/include/stdio.h" 3 4
extern int fseek (FILE *__stream, long int __off, int __whence);




extern long int ftell (FILE *__stream) ;




extern void rewind (FILE *__stream);
# 768 "/usr/include/stdio.h" 3 4
extern int fseeko (FILE *__stream, __off_t __off, int __whence);




extern __off_t ftello (FILE *__stream) ;
# 787 "/usr/include/stdio.h" 3 4






extern int fgetpos (FILE *__restrict __stream, fpos_t *__restrict __pos);




extern int fsetpos (FILE *__stream, __const fpos_t *__pos);
# 810 "/usr/include/stdio.h" 3 4



extern int fseeko64 (FILE *__stream, __off64_t __off, int __whence);
extern __off64_t ftello64 (FILE *__stream) ;
extern int fgetpos64 (FILE *__restrict __stream, fpos64_t *__restrict __pos);
extern int fsetpos64 (FILE *__stream, __const fpos64_t *__pos);




extern void clearerr (FILE *__stream) throw ();

extern int feof (FILE *__stream) throw () ;

extern int ferror (FILE *__stream) throw () ;




extern void clearerr_unlocked (FILE *__stream) throw ();
extern int feof_unlocked (FILE *__stream) throw () ;
extern int ferror_unlocked (FILE *__stream) throw () ;
# 841 "/usr/include/stdio.h" 3 4
extern void perror (__const char *__s);






# 1 "/usr/include/bits/sys_errlist.h" 1 3 4
# 27 "/usr/include/bits/sys_errlist.h" 3 4
extern int sys_nerr;
extern __const char *__const sys_errlist[];


extern int _sys_nerr;
extern __const char *__const _sys_errlist[];
# 849 "/usr/include/stdio.h" 2 3 4




extern int fileno (FILE *__stream) throw () ;




extern int fileno_unlocked (FILE *__stream) throw () ;
# 868 "/usr/include/stdio.h" 3 4
extern FILE *popen (__const char *__command, __const char *__modes) ;





extern int pclose (FILE *__stream);





extern char *ctermid (char *__s) throw ();





extern char *cuserid (char *__s);




struct obstack;


extern int obstack_printf (struct obstack *__restrict __obstack,
      __const char *__restrict __format, ...)
     throw () __attribute__ ((__format__ (__printf__, 2, 3)));
extern int obstack_vprintf (struct obstack *__restrict __obstack,
       __const char *__restrict __format,
       __gnuc_va_list __args)
     throw () __attribute__ ((__format__ (__printf__, 2, 0)));







extern void flockfile (FILE *__stream) throw ();



extern int ftrylockfile (FILE *__stream) throw () ;


extern void funlockfile (FILE *__stream) throw ();
# 929 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/bits/stdio.h" 1 3 4
# 36 "/usr/include/bits/stdio.h" 3 4
extern __inline __attribute__ ((__gnu_inline__)) int
vprintf (__const char *__restrict __fmt, __gnuc_va_list __arg)
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
feof_unlocked (FILE *__stream) throw ()
{
  return (((__stream)->_flags & 0x10) != 0);
}


extern __inline __attribute__ ((__gnu_inline__)) int
ferror_unlocked (FILE *__stream) throw ()
{
  return (((__stream)->_flags & 0x20) != 0);
}
# 930 "/usr/include/stdio.h" 2 3 4
# 938 "/usr/include/stdio.h" 3 4
}
# 38 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c" 2
# 38 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"

# 1 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.h" 1
# 36 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.h"
# 1 "/usr/include/stdlib.h" 1 3 4
# 33 "/usr/include/stdlib.h" 3 4
# 1 "/opt/apps/gcc/4.8.2/lib/gcc/x86_64-unknown-linux-gnu/4.8.2/include/stddef.h" 1 3 4
# 34 "/usr/include/stdlib.h" 2 3 4

extern "C" {






# 1 "/usr/include/bits/waitflags.h" 1 3 4
# 43 "/usr/include/stdlib.h" 2 3 4
# 1 "/usr/include/bits/waitstatus.h" 1 3 4
# 65 "/usr/include/bits/waitstatus.h" 3 4
# 1 "/usr/include/endian.h" 1 3 4
# 37 "/usr/include/endian.h" 3 4
# 1 "/usr/include/bits/endian.h" 1 3 4
# 38 "/usr/include/endian.h" 2 3 4
# 61 "/usr/include/endian.h" 3 4
# 1 "/usr/include/bits/byteswap.h" 1 3 4
# 28 "/usr/include/bits/byteswap.h" 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 29 "/usr/include/bits/byteswap.h" 2 3 4
# 62 "/usr/include/endian.h" 2 3 4
# 66 "/usr/include/bits/waitstatus.h" 2 3 4

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
# 44 "/usr/include/stdlib.h" 2 3 4
# 96 "/usr/include/stdlib.h" 3 4


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
# 140 "/usr/include/stdlib.h" 3 4
extern size_t __ctype_get_mb_cur_max (void) throw () ;




extern double atof (__const char *__nptr)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;

extern int atoi (__const char *__nptr)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;

extern long int atol (__const char *__nptr)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;





__extension__ extern long long int atoll (__const char *__nptr)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;





extern double strtod (__const char *__restrict __nptr,
        char **__restrict __endptr)
     throw () __attribute__ ((__nonnull__ (1))) ;





extern float strtof (__const char *__restrict __nptr,
       char **__restrict __endptr) throw () __attribute__ ((__nonnull__ (1))) ;

extern long double strtold (__const char *__restrict __nptr,
       char **__restrict __endptr)
     throw () __attribute__ ((__nonnull__ (1))) ;





extern long int strtol (__const char *__restrict __nptr,
   char **__restrict __endptr, int __base)
     throw () __attribute__ ((__nonnull__ (1))) ;

extern unsigned long int strtoul (__const char *__restrict __nptr,
      char **__restrict __endptr, int __base)
     throw () __attribute__ ((__nonnull__ (1))) ;




__extension__
extern long long int strtoq (__const char *__restrict __nptr,
        char **__restrict __endptr, int __base)
     throw () __attribute__ ((__nonnull__ (1))) ;

__extension__
extern unsigned long long int strtouq (__const char *__restrict __nptr,
           char **__restrict __endptr, int __base)
     throw () __attribute__ ((__nonnull__ (1))) ;





__extension__
extern long long int strtoll (__const char *__restrict __nptr,
         char **__restrict __endptr, int __base)
     throw () __attribute__ ((__nonnull__ (1))) ;

__extension__
extern unsigned long long int strtoull (__const char *__restrict __nptr,
     char **__restrict __endptr, int __base)
     throw () __attribute__ ((__nonnull__ (1))) ;
# 240 "/usr/include/stdlib.h" 3 4
extern long int strtol_l (__const char *__restrict __nptr,
     char **__restrict __endptr, int __base,
     __locale_t __loc) throw () __attribute__ ((__nonnull__ (1, 4))) ;

extern unsigned long int strtoul_l (__const char *__restrict __nptr,
        char **__restrict __endptr,
        int __base, __locale_t __loc)
     throw () __attribute__ ((__nonnull__ (1, 4))) ;

__extension__
extern long long int strtoll_l (__const char *__restrict __nptr,
    char **__restrict __endptr, int __base,
    __locale_t __loc)
     throw () __attribute__ ((__nonnull__ (1, 4))) ;

__extension__
extern unsigned long long int strtoull_l (__const char *__restrict __nptr,
       char **__restrict __endptr,
       int __base, __locale_t __loc)
     throw () __attribute__ ((__nonnull__ (1, 4))) ;

extern double strtod_l (__const char *__restrict __nptr,
   char **__restrict __endptr, __locale_t __loc)
     throw () __attribute__ ((__nonnull__ (1, 3))) ;

extern float strtof_l (__const char *__restrict __nptr,
         char **__restrict __endptr, __locale_t __loc)
     throw () __attribute__ ((__nonnull__ (1, 3))) ;

extern long double strtold_l (__const char *__restrict __nptr,
         char **__restrict __endptr,
         __locale_t __loc)
     throw () __attribute__ ((__nonnull__ (1, 3))) ;





extern __inline __attribute__ ((__gnu_inline__)) double
atof (__const char *__nptr) throw ()
{
  return strtod (__nptr, (char **) __null);
}
extern __inline __attribute__ ((__gnu_inline__)) int
atoi (__const char *__nptr) throw ()
{
  return (int) strtol (__nptr, (char **) __null, 10);
}
extern __inline __attribute__ ((__gnu_inline__)) long int
atol (__const char *__nptr) throw ()
{
  return strtol (__nptr, (char **) __null, 10);
}




__extension__ extern __inline __attribute__ ((__gnu_inline__)) long long int
atoll (__const char *__nptr) throw ()
{
  return strtoll (__nptr, (char **) __null, 10);
}
# 311 "/usr/include/stdlib.h" 3 4
extern char *l64a (long int __n) throw () ;


extern long int a64l (__const char *__s)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;




# 1 "/usr/include/sys/types.h" 1 3 4
# 28 "/usr/include/sys/types.h" 3 4
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
# 99 "/usr/include/sys/types.h" 3 4
typedef __pid_t pid_t;





typedef __id_t id_t;
# 116 "/usr/include/sys/types.h" 3 4
typedef __daddr_t daddr_t;
typedef __caddr_t caddr_t;





typedef __key_t key_t;
# 133 "/usr/include/sys/types.h" 3 4
# 1 "/usr/include/time.h" 1 3 4
# 58 "/usr/include/time.h" 3 4


typedef __clock_t clock_t;
# 74 "/usr/include/time.h" 3 4


typedef __time_t time_t;
# 92 "/usr/include/time.h" 3 4
typedef __clockid_t clockid_t;
# 104 "/usr/include/time.h" 3 4
typedef __timer_t timer_t;
# 134 "/usr/include/sys/types.h" 2 3 4



typedef __useconds_t useconds_t;



typedef __suseconds_t suseconds_t;





# 1 "/opt/apps/gcc/4.8.2/lib/gcc/x86_64-unknown-linux-gnu/4.8.2/include/stddef.h" 1 3 4
# 148 "/usr/include/sys/types.h" 2 3 4



typedef unsigned long int ulong;
typedef unsigned short int ushort;
typedef unsigned int uint;
# 195 "/usr/include/sys/types.h" 3 4
typedef int int8_t __attribute__ ((__mode__ (__QI__)));
typedef int int16_t __attribute__ ((__mode__ (__HI__)));
typedef int int32_t __attribute__ ((__mode__ (__SI__)));
typedef int int64_t __attribute__ ((__mode__ (__DI__)));


typedef unsigned int u_int8_t __attribute__ ((__mode__ (__QI__)));
typedef unsigned int u_int16_t __attribute__ ((__mode__ (__HI__)));
typedef unsigned int u_int32_t __attribute__ ((__mode__ (__SI__)));
typedef unsigned int u_int64_t __attribute__ ((__mode__ (__DI__)));

typedef int register_t __attribute__ ((__mode__ (__word__)));
# 220 "/usr/include/sys/types.h" 3 4
# 1 "/usr/include/sys/select.h" 1 3 4
# 31 "/usr/include/sys/select.h" 3 4
# 1 "/usr/include/bits/select.h" 1 3 4
# 23 "/usr/include/bits/select.h" 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 24 "/usr/include/bits/select.h" 2 3 4
# 32 "/usr/include/sys/select.h" 2 3 4


# 1 "/usr/include/bits/sigset.h" 1 3 4
# 24 "/usr/include/bits/sigset.h" 3 4
typedef int __sig_atomic_t;




typedef struct
  {
    unsigned long int __val[(1024 / (8 * sizeof (unsigned long int)))];
  } __sigset_t;
# 35 "/usr/include/sys/select.h" 2 3 4



typedef __sigset_t sigset_t;





# 1 "/usr/include/time.h" 1 3 4
# 120 "/usr/include/time.h" 3 4
struct timespec
  {
    __time_t tv_sec;
    long int tv_nsec;
  };
# 45 "/usr/include/sys/select.h" 2 3 4

# 1 "/usr/include/bits/time.h" 1 3 4
# 75 "/usr/include/bits/time.h" 3 4
struct timeval
  {
    __time_t tv_sec;
    __suseconds_t tv_usec;
  };
# 47 "/usr/include/sys/select.h" 2 3 4
# 55 "/usr/include/sys/select.h" 3 4
typedef long int __fd_mask;
# 67 "/usr/include/sys/select.h" 3 4
typedef struct
  {



    __fd_mask fds_bits[1024 / (8 * (int) sizeof (__fd_mask))];





  } fd_set;






typedef __fd_mask fd_mask;
# 99 "/usr/include/sys/select.h" 3 4
extern "C" {
# 109 "/usr/include/sys/select.h" 3 4
extern int select (int __nfds, fd_set *__restrict __readfds,
     fd_set *__restrict __writefds,
     fd_set *__restrict __exceptfds,
     struct timeval *__restrict __timeout);
# 121 "/usr/include/sys/select.h" 3 4
extern int pselect (int __nfds, fd_set *__restrict __readfds,
      fd_set *__restrict __writefds,
      fd_set *__restrict __exceptfds,
      const struct timespec *__restrict __timeout,
      const __sigset_t *__restrict __sigmask);


}
# 221 "/usr/include/sys/types.h" 2 3 4


# 1 "/usr/include/sys/sysmacros.h" 1 3 4
# 30 "/usr/include/sys/sysmacros.h" 3 4
__extension__
extern unsigned int gnu_dev_major (unsigned long long int __dev)
     throw ();
__extension__
extern unsigned int gnu_dev_minor (unsigned long long int __dev)
     throw ();
__extension__
extern unsigned long long int gnu_dev_makedev (unsigned int __major,
            unsigned int __minor)
     throw ();


__extension__ extern __inline __attribute__ ((__gnu_inline__)) unsigned int
gnu_dev_major (unsigned long long int __dev) throw ()
{
  return ((__dev >> 8) & 0xfff) | ((unsigned int) (__dev >> 32) & ~0xfff);
}

__extension__ extern __inline __attribute__ ((__gnu_inline__)) unsigned int
gnu_dev_minor (unsigned long long int __dev) throw ()
{
  return (__dev & 0xff) | ((unsigned int) (__dev >> 12) & ~0xff);
}

__extension__ extern __inline __attribute__ ((__gnu_inline__)) unsigned long long int
gnu_dev_makedev (unsigned int __major, unsigned int __minor) throw ()
{
  return ((__minor & 0xff) | ((__major & 0xfff) << 8)
   | (((unsigned long long int) (__minor & ~0xff)) << 12)
   | (((unsigned long long int) (__major & ~0xfff)) << 32));
}
# 224 "/usr/include/sys/types.h" 2 3 4





typedef __blksize_t blksize_t;






typedef __blkcnt_t blkcnt_t;



typedef __fsblkcnt_t fsblkcnt_t;



typedef __fsfilcnt_t fsfilcnt_t;
# 263 "/usr/include/sys/types.h" 3 4
typedef __blkcnt64_t blkcnt64_t;
typedef __fsblkcnt64_t fsblkcnt64_t;
typedef __fsfilcnt64_t fsfilcnt64_t;





# 1 "/usr/include/bits/pthreadtypes.h" 1 3 4
# 23 "/usr/include/bits/pthreadtypes.h" 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 24 "/usr/include/bits/pthreadtypes.h" 2 3 4
# 50 "/usr/include/bits/pthreadtypes.h" 3 4
typedef unsigned long int pthread_t;


typedef union
{
  char __size[56];
  long int __align;
} pthread_attr_t;



typedef struct __pthread_internal_list
{
  struct __pthread_internal_list *__prev;
  struct __pthread_internal_list *__next;
} __pthread_list_t;
# 76 "/usr/include/bits/pthreadtypes.h" 3 4
typedef union
{
  struct __pthread_mutex_s
  {
    int __lock;
    unsigned int __count;
    int __owner;

    unsigned int __nusers;



    int __kind;

    int __spins;
    __pthread_list_t __list;
# 101 "/usr/include/bits/pthreadtypes.h" 3 4
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
    unsigned long int __pad1;
    unsigned long int __pad2;


    unsigned int __flags;
  } __data;
# 187 "/usr/include/bits/pthreadtypes.h" 3 4
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
# 272 "/usr/include/sys/types.h" 2 3 4


}
# 321 "/usr/include/stdlib.h" 2 3 4






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
    unsigned long long int __a;
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
# 471 "/usr/include/stdlib.h" 3 4
extern void *malloc (size_t __size) throw () __attribute__ ((__malloc__)) ;

extern void *calloc (size_t __nmemb, size_t __size)
     throw () __attribute__ ((__malloc__)) ;
# 485 "/usr/include/stdlib.h" 3 4
extern void *realloc (void *__ptr, size_t __size)
     throw () __attribute__ ((__warn_unused_result__));

extern void free (void *__ptr) throw ();




extern void cfree (void *__ptr) throw ();



# 1 "/usr/include/alloca.h" 1 3 4
# 25 "/usr/include/alloca.h" 3 4
# 1 "/opt/apps/gcc/4.8.2/lib/gcc/x86_64-unknown-linux-gnu/4.8.2/include/stddef.h" 1 3 4
# 26 "/usr/include/alloca.h" 2 3 4

extern "C" {





extern void *alloca (size_t __size) throw ();





}
# 498 "/usr/include/stdlib.h" 2 3 4





extern void *valloc (size_t __size) throw () __attribute__ ((__malloc__)) ;




extern int posix_memalign (void **__memptr, size_t __alignment, size_t __size)
     throw () __attribute__ ((__nonnull__ (1))) ;




extern void abort (void) throw () __attribute__ ((__noreturn__));



extern int atexit (void (*__func) (void)) throw () __attribute__ ((__nonnull__ (1)));






extern "C++" int at_quick_exit (void (*__func) (void))
     throw () __asm ("at_quick_exit") __attribute__ ((__nonnull__ (1)));
# 536 "/usr/include/stdlib.h" 3 4
extern int on_exit (void (*__func) (int __status, void *__arg), void *__arg)
     throw () __attribute__ ((__nonnull__ (1)));






extern void exit (int __status) throw () __attribute__ ((__noreturn__));







extern void quick_exit (int __status) throw () __attribute__ ((__noreturn__));







extern void _Exit (int __status) throw () __attribute__ ((__noreturn__));






extern char *getenv (__const char *__name) throw () __attribute__ ((__nonnull__ (1))) ;




extern char *__secure_getenv (__const char *__name)
     throw () __attribute__ ((__nonnull__ (1))) ;





extern int putenv (char *__string) throw () __attribute__ ((__nonnull__ (1)));





extern int setenv (__const char *__name, __const char *__value, int __replace)
     throw () __attribute__ ((__nonnull__ (2)));


extern int unsetenv (__const char *__name) throw () __attribute__ ((__nonnull__ (1)));






extern int clearenv (void) throw ();
# 606 "/usr/include/stdlib.h" 3 4
extern char *mktemp (char *__template) throw () __attribute__ ((__nonnull__ (1))) ;
# 620 "/usr/include/stdlib.h" 3 4
extern int mkstemp (char *__template) __attribute__ ((__nonnull__ (1))) ;
# 630 "/usr/include/stdlib.h" 3 4
extern int mkstemp64 (char *__template) __attribute__ ((__nonnull__ (1))) ;
# 642 "/usr/include/stdlib.h" 3 4
extern int mkstemps (char *__template, int __suffixlen) __attribute__ ((__nonnull__ (1))) ;
# 652 "/usr/include/stdlib.h" 3 4
extern int mkstemps64 (char *__template, int __suffixlen)
     __attribute__ ((__nonnull__ (1))) ;
# 663 "/usr/include/stdlib.h" 3 4
extern char *mkdtemp (char *__template) throw () __attribute__ ((__nonnull__ (1))) ;
# 674 "/usr/include/stdlib.h" 3 4
extern int mkostemp (char *__template, int __flags) __attribute__ ((__nonnull__ (1))) ;
# 684 "/usr/include/stdlib.h" 3 4
extern int mkostemp64 (char *__template, int __flags) __attribute__ ((__nonnull__ (1))) ;
# 694 "/usr/include/stdlib.h" 3 4
extern int mkostemps (char *__template, int __suffixlen, int __flags)
     __attribute__ ((__nonnull__ (1))) ;
# 706 "/usr/include/stdlib.h" 3 4
extern int mkostemps64 (char *__template, int __suffixlen, int __flags)
     __attribute__ ((__nonnull__ (1))) ;
# 717 "/usr/include/stdlib.h" 3 4
extern int system (__const char *__command) ;






extern char *canonicalize_file_name (__const char *__name)
     throw () __attribute__ ((__nonnull__ (1))) ;
# 734 "/usr/include/stdlib.h" 3 4
extern char *realpath (__const char *__restrict __name,
         char *__restrict __resolved) throw () ;






typedef int (*__compar_fn_t) (__const void *, __const void *);


typedef __compar_fn_t comparison_fn_t;



typedef int (*__compar_d_fn_t) (__const void *, __const void *, void *);





extern void *bsearch (__const void *__key, __const void *__base,
        size_t __nmemb, size_t __size, __compar_fn_t __compar)
     __attribute__ ((__nonnull__ (1, 2, 5))) ;



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
# 808 "/usr/include/stdlib.h" 3 4
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







extern int mblen (__const char *__s, size_t __n) throw () ;


extern int mbtowc (wchar_t *__restrict __pwc,
     __const char *__restrict __s, size_t __n) throw () ;


extern int wctomb (char *__s, wchar_t __wchar) throw () ;



extern size_t mbstowcs (wchar_t *__restrict __pwcs,
   __const char *__restrict __s, size_t __n) throw ();

extern size_t wcstombs (char *__restrict __s,
   __const wchar_t *__restrict __pwcs, size_t __n)
     throw ();
# 885 "/usr/include/stdlib.h" 3 4
extern int rpmatch (__const char *__response) throw () __attribute__ ((__nonnull__ (1))) ;
# 896 "/usr/include/stdlib.h" 3 4
extern int getsubopt (char **__restrict __optionp,
        char *__const *__restrict __tokens,
        char **__restrict __valuep)
     throw () __attribute__ ((__nonnull__ (1, 2, 3))) ;





extern void setkey (__const char *__key) throw () __attribute__ ((__nonnull__ (1)));







extern int posix_openpt (int __oflag) ;







extern int grantpt (int __fd) throw ();



extern int unlockpt (int __fd) throw ();




extern char *ptsname (int __fd) throw () ;






extern int ptsname_r (int __fd, char *__buf, size_t __buflen)
     throw () __attribute__ ((__nonnull__ (2)));


extern int getpt (void);






extern int getloadavg (double __loadavg[], int __nelem)
     throw () __attribute__ ((__nonnull__ (1)));
# 964 "/usr/include/stdlib.h" 3 4
}
# 37 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.h" 2
# 1 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_types.h" 1
# 48 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_types.h"
extern "C" {


# 1 "/opt/apps/gcc/4.8.2/lib/gcc/x86_64-unknown-linux-gnu/4.8.2/include-fixed/limits.h" 1 3 4
# 34 "/opt/apps/gcc/4.8.2/lib/gcc/x86_64-unknown-linux-gnu/4.8.2/include-fixed/limits.h" 3 4
# 1 "/opt/apps/gcc/4.8.2/lib/gcc/x86_64-unknown-linux-gnu/4.8.2/include-fixed/syslimits.h" 1 3 4






# 1 "/opt/apps/gcc/4.8.2/lib/gcc/x86_64-unknown-linux-gnu/4.8.2/include-fixed/limits.h" 1 3 4
# 168 "/opt/apps/gcc/4.8.2/lib/gcc/x86_64-unknown-linux-gnu/4.8.2/include-fixed/limits.h" 3 4
# 1 "/usr/include/limits.h" 1 3 4
# 145 "/usr/include/limits.h" 3 4
# 1 "/usr/include/bits/posix1_lim.h" 1 3 4
# 157 "/usr/include/bits/posix1_lim.h" 3 4
# 1 "/usr/include/bits/local_lim.h" 1 3 4
# 39 "/usr/include/bits/local_lim.h" 3 4
# 1 "/usr/include/linux/limits.h" 1 3 4
# 40 "/usr/include/bits/local_lim.h" 2 3 4
# 158 "/usr/include/bits/posix1_lim.h" 2 3 4
# 146 "/usr/include/limits.h" 2 3 4



# 1 "/usr/include/bits/posix2_lim.h" 1 3 4
# 150 "/usr/include/limits.h" 2 3 4



# 1 "/usr/include/bits/xopen_lim.h" 1 3 4
# 34 "/usr/include/bits/xopen_lim.h" 3 4
# 1 "/usr/include/bits/stdio_lim.h" 1 3 4
# 35 "/usr/include/bits/xopen_lim.h" 2 3 4
# 154 "/usr/include/limits.h" 2 3 4
# 169 "/opt/apps/gcc/4.8.2/lib/gcc/x86_64-unknown-linux-gnu/4.8.2/include-fixed/limits.h" 2 3 4
# 8 "/opt/apps/gcc/4.8.2/lib/gcc/x86_64-unknown-linux-gnu/4.8.2/include-fixed/syslimits.h" 2 3 4
# 35 "/opt/apps/gcc/4.8.2/lib/gcc/x86_64-unknown-linux-gnu/4.8.2/include-fixed/limits.h" 2 3 4
# 52 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_types.h" 2
# 70 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_types.h"
     typedef unsigned char uint_8t;
# 79 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_types.h"
     typedef unsigned short uint_16t;
# 89 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_types.h"
     typedef unsigned int uint_32t;
# 123 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_types.h"
       typedef unsigned long uint_64t;
# 197 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_types.h"
}
# 38 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.h" 2





extern "C"
{
# 54 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.h"
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
# 95 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.h"
void sha1_compile(sha1_ctx ctx[1]);

void sha1_begin(sha1_ctx ctx[1]);
void sha1_hash(const unsigned char data[], unsigned long len, sha1_ctx ctx[1]);
void sha1_end(unsigned char hval[], sha1_ctx ctx[1]);
void sha1(unsigned char hval[], const unsigned char data[], unsigned long len);


}
# 40 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c" 2
# 1 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_endian.h" 1
# 49 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_endian.h"
# 1 "/usr/include/byteswap.h" 1 3 4
# 23 "/usr/include/byteswap.h" 3 4
# 1 "/usr/include/bits/byteswap.h" 1 3 4
# 24 "/usr/include/byteswap.h" 2 3 4
# 50 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_endian.h" 2
# 41 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c" 2
# 41 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
# 42 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
# 43 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
extern "C"
# 44 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
{
# 45 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
# 46 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
# 47 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
# 48 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
# 49 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
void rng_init(RNG_state *newstate, int seed)
# 50 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
{
# 51 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
  struct sha1_ctx_s ctx;
# 52 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
  struct state_t gen;
# 53 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
  int i;
# 54 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
# 55 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
  for (i=0; i < 16; i++)
# 56 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
    gen.state[i] = 0;
# 57 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
  gen.state[16] = 0xFF & (seed >> 24);
# 58 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
  gen.state[17] = 0xFF & (seed >> 16);
# 59 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
  gen.state[18] = 0xFF & (seed >> 8);
# 60 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
  gen.state[19] = 0xFF & (seed >> 0);
# 61 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
# 62 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
  sha1_begin(&ctx);
# 63 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
  sha1_hash(gen.state, 20, &ctx);
# 64 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
  sha1_end(newstate, &ctx);
# 65 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
}
# 66 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
# 67 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
void rng_spawn(RNG_state *mystate, RNG_state *newstate, int spawnnumber)
# 68 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
{
# 69 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
 struct sha1_ctx_s ctx;
# 70 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
 uint8 bytes[4];
# 71 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
# 72 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
 bytes[0] = 0xFF & (spawnnumber >> 24);
# 73 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
 bytes[1] = 0xFF & (spawnnumber >> 16);
# 74 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
 bytes[2] = 0xFF & (spawnnumber >> 8);
# 75 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
 bytes[3] = 0xFF & spawnnumber;
# 76 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
# 77 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
 sha1_begin(&ctx);
# 78 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
 sha1_hash(mystate, 20, &ctx);
# 79 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
 sha1_hash(bytes, 4, &ctx);
# 80 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
 sha1_end(newstate, &ctx);
# 81 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
}
# 82 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
# 83 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
int rng_rand(RNG_state *mystate){
# 84 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
        int r;
# 85 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
 uint32 b = (mystate[16] << 24) | (mystate[17] << 16)
# 86 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
  | (mystate[18] << 8) | (mystate[19] << 0);
# 87 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
 b = b & 0x7fffffff;
# 88 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
# 89 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
 r = (int) b;
# 90 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
# 91 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
 return r;
# 92 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
}
# 93 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
# 94 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
int rng_nextrand(RNG_state *mystate){
# 95 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
 struct sha1_ctx_s ctx;
# 96 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
 int r;
# 97 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
 uint32 b;
# 98 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
# 99 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
 sha1_begin(&ctx);
# 100 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
 sha1_hash(mystate, 20, &ctx);
# 101 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
 sha1_end(mystate, &ctx);
# 102 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
 b = (mystate[16] << 24) | (mystate[17] << 16)
# 103 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
  | (mystate[18] << 8) | (mystate[19] << 0);
# 104 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
 b = b & 0x7fffffff;
# 105 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
# 106 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
 r = (int) b;
# 107 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
 return r;
# 108 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
}
# 109 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
# 110 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
# 111 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
char * rng_showstate(RNG_state *state, char *s){
# 112 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
  sprintf(s,"%.2X%.2X...", state[0],state[1]);
# 113 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
  return s;
# 114 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
}
# 115 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
# 116 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
# 117 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
int rng_showtype(char *strBuf, int ind) {
# 118 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
  ind += sprintf(strBuf+ind, "SHA-1 (state size = %luB)",
# 119 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
                 sizeof(struct state_t));
# 120 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
  return ind;
# 121 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
}
# 195 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
# 195 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
void sha1_compile(sha1_ctx ctx[1])
# 196 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
{ uint_32t *w = ctx->wbuf;
# 197 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
# 198 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
# 199 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
# 200 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
# 201 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
# 202 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
    uint_32t v0, v1, v2, v3, v4;
# 203 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
    v0 = ctx->hash[0]; v1 = ctx->hash[1];
# 204 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
    v2 = ctx->hash[2]; v3 = ctx->hash[3];
# 205 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
    v4 = ctx->hash[4];
# 206 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
# 207 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
# 208 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
# 209 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
# 210 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
    v4 += (((v0) >> 27) | ((v0) << (32 - 27))) + ((v3) ^ ((v1) & ((v2) ^ (v3)))) + 0x5a827999 + w[0]; v1 = (((v1) >> 2) | ((v1) << (32 - 2))); v3 += (((v4) >> 27) | ((v4) << (32 - 27))) + ((v2) ^ ((v0) & ((v1) ^ (v2)))) + 0x5a827999 + w[0 +1]; v0 = (((v0) >> 2) | ((v0) << (32 - 2))); v2 += (((v3) >> 27) | ((v3) << (32 - 27))) + ((v1) ^ ((v4) & ((v0) ^ (v1)))) + 0x5a827999 + w[0 +2]; v4 = (((v4) >> 2) | ((v4) << (32 - 2))); v1 += (((v2) >> 27) | ((v2) << (32 - 27))) + ((v0) ^ ((v3) & ((v4) ^ (v0)))) + 0x5a827999 + w[0 +3]; v3 = (((v3) >> 2) | ((v3) << (32 - 2))); v0 += (((v1) >> 27) | ((v1) << (32 - 27))) + ((v4) ^ ((v2) & ((v3) ^ (v4)))) + 0x5a827999 + w[0 +4]; v2 = (((v2) >> 2) | ((v2) << (32 - 2)));
# 211 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
    v4 += (((v0) >> 27) | ((v0) << (32 - 27))) + ((v3) ^ ((v1) & ((v2) ^ (v3)))) + 0x5a827999 + w[5]; v1 = (((v1) >> 2) | ((v1) << (32 - 2))); v3 += (((v4) >> 27) | ((v4) << (32 - 27))) + ((v2) ^ ((v0) & ((v1) ^ (v2)))) + 0x5a827999 + w[5 +1]; v0 = (((v0) >> 2) | ((v0) << (32 - 2))); v2 += (((v3) >> 27) | ((v3) << (32 - 27))) + ((v1) ^ ((v4) & ((v0) ^ (v1)))) + 0x5a827999 + w[5 +2]; v4 = (((v4) >> 2) | ((v4) << (32 - 2))); v1 += (((v2) >> 27) | ((v2) << (32 - 27))) + ((v0) ^ ((v3) & ((v4) ^ (v0)))) + 0x5a827999 + w[5 +3]; v3 = (((v3) >> 2) | ((v3) << (32 - 2))); v0 += (((v1) >> 27) | ((v1) << (32 - 27))) + ((v4) ^ ((v2) & ((v3) ^ (v4)))) + 0x5a827999 + w[5 +4]; v2 = (((v2) >> 2) | ((v2) << (32 - 2)));
# 212 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
    v4 += (((v0) >> 27) | ((v0) << (32 - 27))) + ((v3) ^ ((v1) & ((v2) ^ (v3)))) + 0x5a827999 + w[10]; v1 = (((v1) >> 2) | ((v1) << (32 - 2))); v3 += (((v4) >> 27) | ((v4) << (32 - 27))) + ((v2) ^ ((v0) & ((v1) ^ (v2)))) + 0x5a827999 + w[10 +1]; v0 = (((v0) >> 2) | ((v0) << (32 - 2))); v2 += (((v3) >> 27) | ((v3) << (32 - 27))) + ((v1) ^ ((v4) & ((v0) ^ (v1)))) + 0x5a827999 + w[10 +2]; v4 = (((v4) >> 2) | ((v4) << (32 - 2))); v1 += (((v2) >> 27) | ((v2) << (32 - 27))) + ((v0) ^ ((v3) & ((v4) ^ (v0)))) + 0x5a827999 + w[10 +3]; v3 = (((v3) >> 2) | ((v3) << (32 - 2))); v0 += (((v1) >> 27) | ((v1) << (32 - 27))) + ((v4) ^ ((v2) & ((v3) ^ (v4)))) + 0x5a827999 + w[10 +4]; v2 = (((v2) >> 2) | ((v2) << (32 - 2)));
# 213 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
    v4 += (((v0) >> 27) | ((v0) << (32 - 27))) + ((v3) ^ ((v1) & ((v2) ^ (v3)))) + 0x5a827999 + w[15]; v1 = (((v1) >> 2) | ((v1) << (32 - 2)));
# 214 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
# 215 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
# 216 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
# 217 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
# 218 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
# 219 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
# 220 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
    v3 += (((v4) >> 27) | ((v4) << (32 - 27))) + ((v2) ^ ((v0) & ((v1) ^ (v2)))) + 0x5a827999 + (w[(16) & 15] = (((w[((16) + 13) & 15] ^ w[((16) + 8) & 15] ^ w[((16) + 2) & 15] ^ w[(16) & 15]) << 1) | ((w[((16) + 13) & 15] ^ w[((16) + 8) & 15] ^ w[((16) + 2) & 15] ^ w[(16) & 15]) >> (32 - 1)))); v0 = (((v0) >> 2) | ((v0) << (32 - 2)));
# 221 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
    v2 += (((v3) >> 27) | ((v3) << (32 - 27))) + ((v1) ^ ((v4) & ((v0) ^ (v1)))) + 0x5a827999 + (w[(17) & 15] = (((w[((17) + 13) & 15] ^ w[((17) + 8) & 15] ^ w[((17) + 2) & 15] ^ w[(17) & 15]) << 1) | ((w[((17) + 13) & 15] ^ w[((17) + 8) & 15] ^ w[((17) + 2) & 15] ^ w[(17) & 15]) >> (32 - 1)))); v4 = (((v4) >> 2) | ((v4) << (32 - 2)));
# 222 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
    v1 += (((v2) >> 27) | ((v2) << (32 - 27))) + ((v0) ^ ((v3) & ((v4) ^ (v0)))) + 0x5a827999 + (w[(18) & 15] = (((w[((18) + 13) & 15] ^ w[((18) + 8) & 15] ^ w[((18) + 2) & 15] ^ w[(18) & 15]) << 1) | ((w[((18) + 13) & 15] ^ w[((18) + 8) & 15] ^ w[((18) + 2) & 15] ^ w[(18) & 15]) >> (32 - 1)))); v3 = (((v3) >> 2) | ((v3) << (32 - 2)));
# 223 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
    v0 += (((v1) >> 27) | ((v1) << (32 - 27))) + ((v4) ^ ((v2) & ((v3) ^ (v4)))) + 0x5a827999 + (w[(19) & 15] = (((w[((19) + 13) & 15] ^ w[((19) + 8) & 15] ^ w[((19) + 2) & 15] ^ w[(19) & 15]) << 1) | ((w[((19) + 13) & 15] ^ w[((19) + 8) & 15] ^ w[((19) + 2) & 15] ^ w[(19) & 15]) >> (32 - 1)))); v2 = (((v2) >> 2) | ((v2) << (32 - 2)));
# 224 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
# 225 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
    v4 += (((v0) >> 27) | ((v0) << (32 - 27))) + ((v1) ^ (v2) ^ (v3)) + 0x6ed9eba1 + (w[(20) & 15] = (((w[((20) + 13) & 15] ^ w[((20) + 8) & 15] ^ w[((20) + 2) & 15] ^ w[(20) & 15]) << 1) | ((w[((20) + 13) & 15] ^ w[((20) + 8) & 15] ^ w[((20) + 2) & 15] ^ w[(20) & 15]) >> (32 - 1)))); v1 = (((v1) >> 2) | ((v1) << (32 - 2))); v3 += (((v4) >> 27) | ((v4) << (32 - 27))) + ((v0) ^ (v1) ^ (v2)) + 0x6ed9eba1 + (w[(20 +1) & 15] = (((w[((20 +1) + 13) & 15] ^ w[((20 +1) + 8) & 15] ^ w[((20 +1) + 2) & 15] ^ w[(20 +1) & 15]) << 1) | ((w[((20 +1) + 13) & 15] ^ w[((20 +1) + 8) & 15] ^ w[((20 +1) + 2) & 15] ^ w[(20 +1) & 15]) >> (32 - 1)))); v0 = (((v0) >> 2) | ((v0) << (32 - 2))); v2 += (((v3) >> 27) | ((v3) << (32 - 27))) + ((v4) ^ (v0) ^ (v1)) + 0x6ed9eba1 + (w[(20 +2) & 15] = (((w[((20 +2) + 13) & 15] ^ w[((20 +2) + 8) & 15] ^ w[((20 +2) + 2) & 15] ^ w[(20 +2) & 15]) << 1) | ((w[((20 +2) + 13) & 15] ^ w[((20 +2) + 8) & 15] ^ w[((20 +2) + 2) & 15] ^ w[(20 +2) & 15]) >> (32 - 1)))); v4 = (((v4) >> 2) | ((v4) << (32 - 2))); v1 += (((v2) >> 27) | ((v2) << (32 - 27))) + ((v3) ^ (v4) ^ (v0)) + 0x6ed9eba1 + (w[(20 +3) & 15] = (((w[((20 +3) + 13) & 15] ^ w[((20 +3) + 8) & 15] ^ w[((20 +3) + 2) & 15] ^ w[(20 +3) & 15]) << 1) | ((w[((20 +3) + 13) & 15] ^ w[((20 +3) + 8) & 15] ^ w[((20 +3) + 2) & 15] ^ w[(20 +3) & 15]) >> (32 - 1)))); v3 = (((v3) >> 2) | ((v3) << (32 - 2))); v0 += (((v1) >> 27) | ((v1) << (32 - 27))) + ((v2) ^ (v3) ^ (v4)) + 0x6ed9eba1 + (w[(20 +4) & 15] = (((w[((20 +4) + 13) & 15] ^ w[((20 +4) + 8) & 15] ^ w[((20 +4) + 2) & 15] ^ w[(20 +4) & 15]) << 1) | ((w[((20 +4) + 13) & 15] ^ w[((20 +4) + 8) & 15] ^ w[((20 +4) + 2) & 15] ^ w[(20 +4) & 15]) >> (32 - 1)))); v2 = (((v2) >> 2) | ((v2) << (32 - 2)));
# 226 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
    v4 += (((v0) >> 27) | ((v0) << (32 - 27))) + ((v1) ^ (v2) ^ (v3)) + 0x6ed9eba1 + (w[(25) & 15] = (((w[((25) + 13) & 15] ^ w[((25) + 8) & 15] ^ w[((25) + 2) & 15] ^ w[(25) & 15]) << 1) | ((w[((25) + 13) & 15] ^ w[((25) + 8) & 15] ^ w[((25) + 2) & 15] ^ w[(25) & 15]) >> (32 - 1)))); v1 = (((v1) >> 2) | ((v1) << (32 - 2))); v3 += (((v4) >> 27) | ((v4) << (32 - 27))) + ((v0) ^ (v1) ^ (v2)) + 0x6ed9eba1 + (w[(25 +1) & 15] = (((w[((25 +1) + 13) & 15] ^ w[((25 +1) + 8) & 15] ^ w[((25 +1) + 2) & 15] ^ w[(25 +1) & 15]) << 1) | ((w[((25 +1) + 13) & 15] ^ w[((25 +1) + 8) & 15] ^ w[((25 +1) + 2) & 15] ^ w[(25 +1) & 15]) >> (32 - 1)))); v0 = (((v0) >> 2) | ((v0) << (32 - 2))); v2 += (((v3) >> 27) | ((v3) << (32 - 27))) + ((v4) ^ (v0) ^ (v1)) + 0x6ed9eba1 + (w[(25 +2) & 15] = (((w[((25 +2) + 13) & 15] ^ w[((25 +2) + 8) & 15] ^ w[((25 +2) + 2) & 15] ^ w[(25 +2) & 15]) << 1) | ((w[((25 +2) + 13) & 15] ^ w[((25 +2) + 8) & 15] ^ w[((25 +2) + 2) & 15] ^ w[(25 +2) & 15]) >> (32 - 1)))); v4 = (((v4) >> 2) | ((v4) << (32 - 2))); v1 += (((v2) >> 27) | ((v2) << (32 - 27))) + ((v3) ^ (v4) ^ (v0)) + 0x6ed9eba1 + (w[(25 +3) & 15] = (((w[((25 +3) + 13) & 15] ^ w[((25 +3) + 8) & 15] ^ w[((25 +3) + 2) & 15] ^ w[(25 +3) & 15]) << 1) | ((w[((25 +3) + 13) & 15] ^ w[((25 +3) + 8) & 15] ^ w[((25 +3) + 2) & 15] ^ w[(25 +3) & 15]) >> (32 - 1)))); v3 = (((v3) >> 2) | ((v3) << (32 - 2))); v0 += (((v1) >> 27) | ((v1) << (32 - 27))) + ((v2) ^ (v3) ^ (v4)) + 0x6ed9eba1 + (w[(25 +4) & 15] = (((w[((25 +4) + 13) & 15] ^ w[((25 +4) + 8) & 15] ^ w[((25 +4) + 2) & 15] ^ w[(25 +4) & 15]) << 1) | ((w[((25 +4) + 13) & 15] ^ w[((25 +4) + 8) & 15] ^ w[((25 +4) + 2) & 15] ^ w[(25 +4) & 15]) >> (32 - 1)))); v2 = (((v2) >> 2) | ((v2) << (32 - 2)));
# 227 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
    v4 += (((v0) >> 27) | ((v0) << (32 - 27))) + ((v1) ^ (v2) ^ (v3)) + 0x6ed9eba1 + (w[(30) & 15] = (((w[((30) + 13) & 15] ^ w[((30) + 8) & 15] ^ w[((30) + 2) & 15] ^ w[(30) & 15]) << 1) | ((w[((30) + 13) & 15] ^ w[((30) + 8) & 15] ^ w[((30) + 2) & 15] ^ w[(30) & 15]) >> (32 - 1)))); v1 = (((v1) >> 2) | ((v1) << (32 - 2))); v3 += (((v4) >> 27) | ((v4) << (32 - 27))) + ((v0) ^ (v1) ^ (v2)) + 0x6ed9eba1 + (w[(30 +1) & 15] = (((w[((30 +1) + 13) & 15] ^ w[((30 +1) + 8) & 15] ^ w[((30 +1) + 2) & 15] ^ w[(30 +1) & 15]) << 1) | ((w[((30 +1) + 13) & 15] ^ w[((30 +1) + 8) & 15] ^ w[((30 +1) + 2) & 15] ^ w[(30 +1) & 15]) >> (32 - 1)))); v0 = (((v0) >> 2) | ((v0) << (32 - 2))); v2 += (((v3) >> 27) | ((v3) << (32 - 27))) + ((v4) ^ (v0) ^ (v1)) + 0x6ed9eba1 + (w[(30 +2) & 15] = (((w[((30 +2) + 13) & 15] ^ w[((30 +2) + 8) & 15] ^ w[((30 +2) + 2) & 15] ^ w[(30 +2) & 15]) << 1) | ((w[((30 +2) + 13) & 15] ^ w[((30 +2) + 8) & 15] ^ w[((30 +2) + 2) & 15] ^ w[(30 +2) & 15]) >> (32 - 1)))); v4 = (((v4) >> 2) | ((v4) << (32 - 2))); v1 += (((v2) >> 27) | ((v2) << (32 - 27))) + ((v3) ^ (v4) ^ (v0)) + 0x6ed9eba1 + (w[(30 +3) & 15] = (((w[((30 +3) + 13) & 15] ^ w[((30 +3) + 8) & 15] ^ w[((30 +3) + 2) & 15] ^ w[(30 +3) & 15]) << 1) | ((w[((30 +3) + 13) & 15] ^ w[((30 +3) + 8) & 15] ^ w[((30 +3) + 2) & 15] ^ w[(30 +3) & 15]) >> (32 - 1)))); v3 = (((v3) >> 2) | ((v3) << (32 - 2))); v0 += (((v1) >> 27) | ((v1) << (32 - 27))) + ((v2) ^ (v3) ^ (v4)) + 0x6ed9eba1 + (w[(30 +4) & 15] = (((w[((30 +4) + 13) & 15] ^ w[((30 +4) + 8) & 15] ^ w[((30 +4) + 2) & 15] ^ w[(30 +4) & 15]) << 1) | ((w[((30 +4) + 13) & 15] ^ w[((30 +4) + 8) & 15] ^ w[((30 +4) + 2) & 15] ^ w[(30 +4) & 15]) >> (32 - 1)))); v2 = (((v2) >> 2) | ((v2) << (32 - 2)));
# 228 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
    v4 += (((v0) >> 27) | ((v0) << (32 - 27))) + ((v1) ^ (v2) ^ (v3)) + 0x6ed9eba1 + (w[(35) & 15] = (((w[((35) + 13) & 15] ^ w[((35) + 8) & 15] ^ w[((35) + 2) & 15] ^ w[(35) & 15]) << 1) | ((w[((35) + 13) & 15] ^ w[((35) + 8) & 15] ^ w[((35) + 2) & 15] ^ w[(35) & 15]) >> (32 - 1)))); v1 = (((v1) >> 2) | ((v1) << (32 - 2))); v3 += (((v4) >> 27) | ((v4) << (32 - 27))) + ((v0) ^ (v1) ^ (v2)) + 0x6ed9eba1 + (w[(35 +1) & 15] = (((w[((35 +1) + 13) & 15] ^ w[((35 +1) + 8) & 15] ^ w[((35 +1) + 2) & 15] ^ w[(35 +1) & 15]) << 1) | ((w[((35 +1) + 13) & 15] ^ w[((35 +1) + 8) & 15] ^ w[((35 +1) + 2) & 15] ^ w[(35 +1) & 15]) >> (32 - 1)))); v0 = (((v0) >> 2) | ((v0) << (32 - 2))); v2 += (((v3) >> 27) | ((v3) << (32 - 27))) + ((v4) ^ (v0) ^ (v1)) + 0x6ed9eba1 + (w[(35 +2) & 15] = (((w[((35 +2) + 13) & 15] ^ w[((35 +2) + 8) & 15] ^ w[((35 +2) + 2) & 15] ^ w[(35 +2) & 15]) << 1) | ((w[((35 +2) + 13) & 15] ^ w[((35 +2) + 8) & 15] ^ w[((35 +2) + 2) & 15] ^ w[(35 +2) & 15]) >> (32 - 1)))); v4 = (((v4) >> 2) | ((v4) << (32 - 2))); v1 += (((v2) >> 27) | ((v2) << (32 - 27))) + ((v3) ^ (v4) ^ (v0)) + 0x6ed9eba1 + (w[(35 +3) & 15] = (((w[((35 +3) + 13) & 15] ^ w[((35 +3) + 8) & 15] ^ w[((35 +3) + 2) & 15] ^ w[(35 +3) & 15]) << 1) | ((w[((35 +3) + 13) & 15] ^ w[((35 +3) + 8) & 15] ^ w[((35 +3) + 2) & 15] ^ w[(35 +3) & 15]) >> (32 - 1)))); v3 = (((v3) >> 2) | ((v3) << (32 - 2))); v0 += (((v1) >> 27) | ((v1) << (32 - 27))) + ((v2) ^ (v3) ^ (v4)) + 0x6ed9eba1 + (w[(35 +4) & 15] = (((w[((35 +4) + 13) & 15] ^ w[((35 +4) + 8) & 15] ^ w[((35 +4) + 2) & 15] ^ w[(35 +4) & 15]) << 1) | ((w[((35 +4) + 13) & 15] ^ w[((35 +4) + 8) & 15] ^ w[((35 +4) + 2) & 15] ^ w[(35 +4) & 15]) >> (32 - 1)))); v2 = (((v2) >> 2) | ((v2) << (32 - 2)));
# 229 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
# 230 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
    v4 += (((v0) >> 27) | ((v0) << (32 - 27))) + (((v1) & (v2)) | ((v3) & ((v1) ^ (v2)))) + 0x8f1bbcdc + (w[(40) & 15] = (((w[((40) + 13) & 15] ^ w[((40) + 8) & 15] ^ w[((40) + 2) & 15] ^ w[(40) & 15]) << 1) | ((w[((40) + 13) & 15] ^ w[((40) + 8) & 15] ^ w[((40) + 2) & 15] ^ w[(40) & 15]) >> (32 - 1)))); v1 = (((v1) >> 2) | ((v1) << (32 - 2))); v3 += (((v4) >> 27) | ((v4) << (32 - 27))) + (((v0) & (v1)) | ((v2) & ((v0) ^ (v1)))) + 0x8f1bbcdc + (w[(40 +1) & 15] = (((w[((40 +1) + 13) & 15] ^ w[((40 +1) + 8) & 15] ^ w[((40 +1) + 2) & 15] ^ w[(40 +1) & 15]) << 1) | ((w[((40 +1) + 13) & 15] ^ w[((40 +1) + 8) & 15] ^ w[((40 +1) + 2) & 15] ^ w[(40 +1) & 15]) >> (32 - 1)))); v0 = (((v0) >> 2) | ((v0) << (32 - 2))); v2 += (((v3) >> 27) | ((v3) << (32 - 27))) + (((v4) & (v0)) | ((v1) & ((v4) ^ (v0)))) + 0x8f1bbcdc + (w[(40 +2) & 15] = (((w[((40 +2) + 13) & 15] ^ w[((40 +2) + 8) & 15] ^ w[((40 +2) + 2) & 15] ^ w[(40 +2) & 15]) << 1) | ((w[((40 +2) + 13) & 15] ^ w[((40 +2) + 8) & 15] ^ w[((40 +2) + 2) & 15] ^ w[(40 +2) & 15]) >> (32 - 1)))); v4 = (((v4) >> 2) | ((v4) << (32 - 2))); v1 += (((v2) >> 27) | ((v2) << (32 - 27))) + (((v3) & (v4)) | ((v0) & ((v3) ^ (v4)))) + 0x8f1bbcdc + (w[(40 +3) & 15] = (((w[((40 +3) + 13) & 15] ^ w[((40 +3) + 8) & 15] ^ w[((40 +3) + 2) & 15] ^ w[(40 +3) & 15]) << 1) | ((w[((40 +3) + 13) & 15] ^ w[((40 +3) + 8) & 15] ^ w[((40 +3) + 2) & 15] ^ w[(40 +3) & 15]) >> (32 - 1)))); v3 = (((v3) >> 2) | ((v3) << (32 - 2))); v0 += (((v1) >> 27) | ((v1) << (32 - 27))) + (((v2) & (v3)) | ((v4) & ((v2) ^ (v3)))) + 0x8f1bbcdc + (w[(40 +4) & 15] = (((w[((40 +4) + 13) & 15] ^ w[((40 +4) + 8) & 15] ^ w[((40 +4) + 2) & 15] ^ w[(40 +4) & 15]) << 1) | ((w[((40 +4) + 13) & 15] ^ w[((40 +4) + 8) & 15] ^ w[((40 +4) + 2) & 15] ^ w[(40 +4) & 15]) >> (32 - 1)))); v2 = (((v2) >> 2) | ((v2) << (32 - 2)));
# 231 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
    v4 += (((v0) >> 27) | ((v0) << (32 - 27))) + (((v1) & (v2)) | ((v3) & ((v1) ^ (v2)))) + 0x8f1bbcdc + (w[(45) & 15] = (((w[((45) + 13) & 15] ^ w[((45) + 8) & 15] ^ w[((45) + 2) & 15] ^ w[(45) & 15]) << 1) | ((w[((45) + 13) & 15] ^ w[((45) + 8) & 15] ^ w[((45) + 2) & 15] ^ w[(45) & 15]) >> (32 - 1)))); v1 = (((v1) >> 2) | ((v1) << (32 - 2))); v3 += (((v4) >> 27) | ((v4) << (32 - 27))) + (((v0) & (v1)) | ((v2) & ((v0) ^ (v1)))) + 0x8f1bbcdc + (w[(45 +1) & 15] = (((w[((45 +1) + 13) & 15] ^ w[((45 +1) + 8) & 15] ^ w[((45 +1) + 2) & 15] ^ w[(45 +1) & 15]) << 1) | ((w[((45 +1) + 13) & 15] ^ w[((45 +1) + 8) & 15] ^ w[((45 +1) + 2) & 15] ^ w[(45 +1) & 15]) >> (32 - 1)))); v0 = (((v0) >> 2) | ((v0) << (32 - 2))); v2 += (((v3) >> 27) | ((v3) << (32 - 27))) + (((v4) & (v0)) | ((v1) & ((v4) ^ (v0)))) + 0x8f1bbcdc + (w[(45 +2) & 15] = (((w[((45 +2) + 13) & 15] ^ w[((45 +2) + 8) & 15] ^ w[((45 +2) + 2) & 15] ^ w[(45 +2) & 15]) << 1) | ((w[((45 +2) + 13) & 15] ^ w[((45 +2) + 8) & 15] ^ w[((45 +2) + 2) & 15] ^ w[(45 +2) & 15]) >> (32 - 1)))); v4 = (((v4) >> 2) | ((v4) << (32 - 2))); v1 += (((v2) >> 27) | ((v2) << (32 - 27))) + (((v3) & (v4)) | ((v0) & ((v3) ^ (v4)))) + 0x8f1bbcdc + (w[(45 +3) & 15] = (((w[((45 +3) + 13) & 15] ^ w[((45 +3) + 8) & 15] ^ w[((45 +3) + 2) & 15] ^ w[(45 +3) & 15]) << 1) | ((w[((45 +3) + 13) & 15] ^ w[((45 +3) + 8) & 15] ^ w[((45 +3) + 2) & 15] ^ w[(45 +3) & 15]) >> (32 - 1)))); v3 = (((v3) >> 2) | ((v3) << (32 - 2))); v0 += (((v1) >> 27) | ((v1) << (32 - 27))) + (((v2) & (v3)) | ((v4) & ((v2) ^ (v3)))) + 0x8f1bbcdc + (w[(45 +4) & 15] = (((w[((45 +4) + 13) & 15] ^ w[((45 +4) + 8) & 15] ^ w[((45 +4) + 2) & 15] ^ w[(45 +4) & 15]) << 1) | ((w[((45 +4) + 13) & 15] ^ w[((45 +4) + 8) & 15] ^ w[((45 +4) + 2) & 15] ^ w[(45 +4) & 15]) >> (32 - 1)))); v2 = (((v2) >> 2) | ((v2) << (32 - 2)));
# 232 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
    v4 += (((v0) >> 27) | ((v0) << (32 - 27))) + (((v1) & (v2)) | ((v3) & ((v1) ^ (v2)))) + 0x8f1bbcdc + (w[(50) & 15] = (((w[((50) + 13) & 15] ^ w[((50) + 8) & 15] ^ w[((50) + 2) & 15] ^ w[(50) & 15]) << 1) | ((w[((50) + 13) & 15] ^ w[((50) + 8) & 15] ^ w[((50) + 2) & 15] ^ w[(50) & 15]) >> (32 - 1)))); v1 = (((v1) >> 2) | ((v1) << (32 - 2))); v3 += (((v4) >> 27) | ((v4) << (32 - 27))) + (((v0) & (v1)) | ((v2) & ((v0) ^ (v1)))) + 0x8f1bbcdc + (w[(50 +1) & 15] = (((w[((50 +1) + 13) & 15] ^ w[((50 +1) + 8) & 15] ^ w[((50 +1) + 2) & 15] ^ w[(50 +1) & 15]) << 1) | ((w[((50 +1) + 13) & 15] ^ w[((50 +1) + 8) & 15] ^ w[((50 +1) + 2) & 15] ^ w[(50 +1) & 15]) >> (32 - 1)))); v0 = (((v0) >> 2) | ((v0) << (32 - 2))); v2 += (((v3) >> 27) | ((v3) << (32 - 27))) + (((v4) & (v0)) | ((v1) & ((v4) ^ (v0)))) + 0x8f1bbcdc + (w[(50 +2) & 15] = (((w[((50 +2) + 13) & 15] ^ w[((50 +2) + 8) & 15] ^ w[((50 +2) + 2) & 15] ^ w[(50 +2) & 15]) << 1) | ((w[((50 +2) + 13) & 15] ^ w[((50 +2) + 8) & 15] ^ w[((50 +2) + 2) & 15] ^ w[(50 +2) & 15]) >> (32 - 1)))); v4 = (((v4) >> 2) | ((v4) << (32 - 2))); v1 += (((v2) >> 27) | ((v2) << (32 - 27))) + (((v3) & (v4)) | ((v0) & ((v3) ^ (v4)))) + 0x8f1bbcdc + (w[(50 +3) & 15] = (((w[((50 +3) + 13) & 15] ^ w[((50 +3) + 8) & 15] ^ w[((50 +3) + 2) & 15] ^ w[(50 +3) & 15]) << 1) | ((w[((50 +3) + 13) & 15] ^ w[((50 +3) + 8) & 15] ^ w[((50 +3) + 2) & 15] ^ w[(50 +3) & 15]) >> (32 - 1)))); v3 = (((v3) >> 2) | ((v3) << (32 - 2))); v0 += (((v1) >> 27) | ((v1) << (32 - 27))) + (((v2) & (v3)) | ((v4) & ((v2) ^ (v3)))) + 0x8f1bbcdc + (w[(50 +4) & 15] = (((w[((50 +4) + 13) & 15] ^ w[((50 +4) + 8) & 15] ^ w[((50 +4) + 2) & 15] ^ w[(50 +4) & 15]) << 1) | ((w[((50 +4) + 13) & 15] ^ w[((50 +4) + 8) & 15] ^ w[((50 +4) + 2) & 15] ^ w[(50 +4) & 15]) >> (32 - 1)))); v2 = (((v2) >> 2) | ((v2) << (32 - 2)));
# 233 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
    v4 += (((v0) >> 27) | ((v0) << (32 - 27))) + (((v1) & (v2)) | ((v3) & ((v1) ^ (v2)))) + 0x8f1bbcdc + (w[(55) & 15] = (((w[((55) + 13) & 15] ^ w[((55) + 8) & 15] ^ w[((55) + 2) & 15] ^ w[(55) & 15]) << 1) | ((w[((55) + 13) & 15] ^ w[((55) + 8) & 15] ^ w[((55) + 2) & 15] ^ w[(55) & 15]) >> (32 - 1)))); v1 = (((v1) >> 2) | ((v1) << (32 - 2))); v3 += (((v4) >> 27) | ((v4) << (32 - 27))) + (((v0) & (v1)) | ((v2) & ((v0) ^ (v1)))) + 0x8f1bbcdc + (w[(55 +1) & 15] = (((w[((55 +1) + 13) & 15] ^ w[((55 +1) + 8) & 15] ^ w[((55 +1) + 2) & 15] ^ w[(55 +1) & 15]) << 1) | ((w[((55 +1) + 13) & 15] ^ w[((55 +1) + 8) & 15] ^ w[((55 +1) + 2) & 15] ^ w[(55 +1) & 15]) >> (32 - 1)))); v0 = (((v0) >> 2) | ((v0) << (32 - 2))); v2 += (((v3) >> 27) | ((v3) << (32 - 27))) + (((v4) & (v0)) | ((v1) & ((v4) ^ (v0)))) + 0x8f1bbcdc + (w[(55 +2) & 15] = (((w[((55 +2) + 13) & 15] ^ w[((55 +2) + 8) & 15] ^ w[((55 +2) + 2) & 15] ^ w[(55 +2) & 15]) << 1) | ((w[((55 +2) + 13) & 15] ^ w[((55 +2) + 8) & 15] ^ w[((55 +2) + 2) & 15] ^ w[(55 +2) & 15]) >> (32 - 1)))); v4 = (((v4) >> 2) | ((v4) << (32 - 2))); v1 += (((v2) >> 27) | ((v2) << (32 - 27))) + (((v3) & (v4)) | ((v0) & ((v3) ^ (v4)))) + 0x8f1bbcdc + (w[(55 +3) & 15] = (((w[((55 +3) + 13) & 15] ^ w[((55 +3) + 8) & 15] ^ w[((55 +3) + 2) & 15] ^ w[(55 +3) & 15]) << 1) | ((w[((55 +3) + 13) & 15] ^ w[((55 +3) + 8) & 15] ^ w[((55 +3) + 2) & 15] ^ w[(55 +3) & 15]) >> (32 - 1)))); v3 = (((v3) >> 2) | ((v3) << (32 - 2))); v0 += (((v1) >> 27) | ((v1) << (32 - 27))) + (((v2) & (v3)) | ((v4) & ((v2) ^ (v3)))) + 0x8f1bbcdc + (w[(55 +4) & 15] = (((w[((55 +4) + 13) & 15] ^ w[((55 +4) + 8) & 15] ^ w[((55 +4) + 2) & 15] ^ w[(55 +4) & 15]) << 1) | ((w[((55 +4) + 13) & 15] ^ w[((55 +4) + 8) & 15] ^ w[((55 +4) + 2) & 15] ^ w[(55 +4) & 15]) >> (32 - 1)))); v2 = (((v2) >> 2) | ((v2) << (32 - 2)));
# 234 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
# 235 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
    v4 += (((v0) >> 27) | ((v0) << (32 - 27))) + ((v1) ^ (v2) ^ (v3)) + 0xca62c1d6 + (w[(60) & 15] = (((w[((60) + 13) & 15] ^ w[((60) + 8) & 15] ^ w[((60) + 2) & 15] ^ w[(60) & 15]) << 1) | ((w[((60) + 13) & 15] ^ w[((60) + 8) & 15] ^ w[((60) + 2) & 15] ^ w[(60) & 15]) >> (32 - 1)))); v1 = (((v1) >> 2) | ((v1) << (32 - 2))); v3 += (((v4) >> 27) | ((v4) << (32 - 27))) + ((v0) ^ (v1) ^ (v2)) + 0xca62c1d6 + (w[(60 +1) & 15] = (((w[((60 +1) + 13) & 15] ^ w[((60 +1) + 8) & 15] ^ w[((60 +1) + 2) & 15] ^ w[(60 +1) & 15]) << 1) | ((w[((60 +1) + 13) & 15] ^ w[((60 +1) + 8) & 15] ^ w[((60 +1) + 2) & 15] ^ w[(60 +1) & 15]) >> (32 - 1)))); v0 = (((v0) >> 2) | ((v0) << (32 - 2))); v2 += (((v3) >> 27) | ((v3) << (32 - 27))) + ((v4) ^ (v0) ^ (v1)) + 0xca62c1d6 + (w[(60 +2) & 15] = (((w[((60 +2) + 13) & 15] ^ w[((60 +2) + 8) & 15] ^ w[((60 +2) + 2) & 15] ^ w[(60 +2) & 15]) << 1) | ((w[((60 +2) + 13) & 15] ^ w[((60 +2) + 8) & 15] ^ w[((60 +2) + 2) & 15] ^ w[(60 +2) & 15]) >> (32 - 1)))); v4 = (((v4) >> 2) | ((v4) << (32 - 2))); v1 += (((v2) >> 27) | ((v2) << (32 - 27))) + ((v3) ^ (v4) ^ (v0)) + 0xca62c1d6 + (w[(60 +3) & 15] = (((w[((60 +3) + 13) & 15] ^ w[((60 +3) + 8) & 15] ^ w[((60 +3) + 2) & 15] ^ w[(60 +3) & 15]) << 1) | ((w[((60 +3) + 13) & 15] ^ w[((60 +3) + 8) & 15] ^ w[((60 +3) + 2) & 15] ^ w[(60 +3) & 15]) >> (32 - 1)))); v3 = (((v3) >> 2) | ((v3) << (32 - 2))); v0 += (((v1) >> 27) | ((v1) << (32 - 27))) + ((v2) ^ (v3) ^ (v4)) + 0xca62c1d6 + (w[(60 +4) & 15] = (((w[((60 +4) + 13) & 15] ^ w[((60 +4) + 8) & 15] ^ w[((60 +4) + 2) & 15] ^ w[(60 +4) & 15]) << 1) | ((w[((60 +4) + 13) & 15] ^ w[((60 +4) + 8) & 15] ^ w[((60 +4) + 2) & 15] ^ w[(60 +4) & 15]) >> (32 - 1)))); v2 = (((v2) >> 2) | ((v2) << (32 - 2)));
# 236 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
    v4 += (((v0) >> 27) | ((v0) << (32 - 27))) + ((v1) ^ (v2) ^ (v3)) + 0xca62c1d6 + (w[(65) & 15] = (((w[((65) + 13) & 15] ^ w[((65) + 8) & 15] ^ w[((65) + 2) & 15] ^ w[(65) & 15]) << 1) | ((w[((65) + 13) & 15] ^ w[((65) + 8) & 15] ^ w[((65) + 2) & 15] ^ w[(65) & 15]) >> (32 - 1)))); v1 = (((v1) >> 2) | ((v1) << (32 - 2))); v3 += (((v4) >> 27) | ((v4) << (32 - 27))) + ((v0) ^ (v1) ^ (v2)) + 0xca62c1d6 + (w[(65 +1) & 15] = (((w[((65 +1) + 13) & 15] ^ w[((65 +1) + 8) & 15] ^ w[((65 +1) + 2) & 15] ^ w[(65 +1) & 15]) << 1) | ((w[((65 +1) + 13) & 15] ^ w[((65 +1) + 8) & 15] ^ w[((65 +1) + 2) & 15] ^ w[(65 +1) & 15]) >> (32 - 1)))); v0 = (((v0) >> 2) | ((v0) << (32 - 2))); v2 += (((v3) >> 27) | ((v3) << (32 - 27))) + ((v4) ^ (v0) ^ (v1)) + 0xca62c1d6 + (w[(65 +2) & 15] = (((w[((65 +2) + 13) & 15] ^ w[((65 +2) + 8) & 15] ^ w[((65 +2) + 2) & 15] ^ w[(65 +2) & 15]) << 1) | ((w[((65 +2) + 13) & 15] ^ w[((65 +2) + 8) & 15] ^ w[((65 +2) + 2) & 15] ^ w[(65 +2) & 15]) >> (32 - 1)))); v4 = (((v4) >> 2) | ((v4) << (32 - 2))); v1 += (((v2) >> 27) | ((v2) << (32 - 27))) + ((v3) ^ (v4) ^ (v0)) + 0xca62c1d6 + (w[(65 +3) & 15] = (((w[((65 +3) + 13) & 15] ^ w[((65 +3) + 8) & 15] ^ w[((65 +3) + 2) & 15] ^ w[(65 +3) & 15]) << 1) | ((w[((65 +3) + 13) & 15] ^ w[((65 +3) + 8) & 15] ^ w[((65 +3) + 2) & 15] ^ w[(65 +3) & 15]) >> (32 - 1)))); v3 = (((v3) >> 2) | ((v3) << (32 - 2))); v0 += (((v1) >> 27) | ((v1) << (32 - 27))) + ((v2) ^ (v3) ^ (v4)) + 0xca62c1d6 + (w[(65 +4) & 15] = (((w[((65 +4) + 13) & 15] ^ w[((65 +4) + 8) & 15] ^ w[((65 +4) + 2) & 15] ^ w[(65 +4) & 15]) << 1) | ((w[((65 +4) + 13) & 15] ^ w[((65 +4) + 8) & 15] ^ w[((65 +4) + 2) & 15] ^ w[(65 +4) & 15]) >> (32 - 1)))); v2 = (((v2) >> 2) | ((v2) << (32 - 2)));
# 237 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
    v4 += (((v0) >> 27) | ((v0) << (32 - 27))) + ((v1) ^ (v2) ^ (v3)) + 0xca62c1d6 + (w[(70) & 15] = (((w[((70) + 13) & 15] ^ w[((70) + 8) & 15] ^ w[((70) + 2) & 15] ^ w[(70) & 15]) << 1) | ((w[((70) + 13) & 15] ^ w[((70) + 8) & 15] ^ w[((70) + 2) & 15] ^ w[(70) & 15]) >> (32 - 1)))); v1 = (((v1) >> 2) | ((v1) << (32 - 2))); v3 += (((v4) >> 27) | ((v4) << (32 - 27))) + ((v0) ^ (v1) ^ (v2)) + 0xca62c1d6 + (w[(70 +1) & 15] = (((w[((70 +1) + 13) & 15] ^ w[((70 +1) + 8) & 15] ^ w[((70 +1) + 2) & 15] ^ w[(70 +1) & 15]) << 1) | ((w[((70 +1) + 13) & 15] ^ w[((70 +1) + 8) & 15] ^ w[((70 +1) + 2) & 15] ^ w[(70 +1) & 15]) >> (32 - 1)))); v0 = (((v0) >> 2) | ((v0) << (32 - 2))); v2 += (((v3) >> 27) | ((v3) << (32 - 27))) + ((v4) ^ (v0) ^ (v1)) + 0xca62c1d6 + (w[(70 +2) & 15] = (((w[((70 +2) + 13) & 15] ^ w[((70 +2) + 8) & 15] ^ w[((70 +2) + 2) & 15] ^ w[(70 +2) & 15]) << 1) | ((w[((70 +2) + 13) & 15] ^ w[((70 +2) + 8) & 15] ^ w[((70 +2) + 2) & 15] ^ w[(70 +2) & 15]) >> (32 - 1)))); v4 = (((v4) >> 2) | ((v4) << (32 - 2))); v1 += (((v2) >> 27) | ((v2) << (32 - 27))) + ((v3) ^ (v4) ^ (v0)) + 0xca62c1d6 + (w[(70 +3) & 15] = (((w[((70 +3) + 13) & 15] ^ w[((70 +3) + 8) & 15] ^ w[((70 +3) + 2) & 15] ^ w[(70 +3) & 15]) << 1) | ((w[((70 +3) + 13) & 15] ^ w[((70 +3) + 8) & 15] ^ w[((70 +3) + 2) & 15] ^ w[(70 +3) & 15]) >> (32 - 1)))); v3 = (((v3) >> 2) | ((v3) << (32 - 2))); v0 += (((v1) >> 27) | ((v1) << (32 - 27))) + ((v2) ^ (v3) ^ (v4)) + 0xca62c1d6 + (w[(70 +4) & 15] = (((w[((70 +4) + 13) & 15] ^ w[((70 +4) + 8) & 15] ^ w[((70 +4) + 2) & 15] ^ w[(70 +4) & 15]) << 1) | ((w[((70 +4) + 13) & 15] ^ w[((70 +4) + 8) & 15] ^ w[((70 +4) + 2) & 15] ^ w[(70 +4) & 15]) >> (32 - 1)))); v2 = (((v2) >> 2) | ((v2) << (32 - 2)));
# 238 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
    v4 += (((v0) >> 27) | ((v0) << (32 - 27))) + ((v1) ^ (v2) ^ (v3)) + 0xca62c1d6 + (w[(75) & 15] = (((w[((75) + 13) & 15] ^ w[((75) + 8) & 15] ^ w[((75) + 2) & 15] ^ w[(75) & 15]) << 1) | ((w[((75) + 13) & 15] ^ w[((75) + 8) & 15] ^ w[((75) + 2) & 15] ^ w[(75) & 15]) >> (32 - 1)))); v1 = (((v1) >> 2) | ((v1) << (32 - 2))); v3 += (((v4) >> 27) | ((v4) << (32 - 27))) + ((v0) ^ (v1) ^ (v2)) + 0xca62c1d6 + (w[(75 +1) & 15] = (((w[((75 +1) + 13) & 15] ^ w[((75 +1) + 8) & 15] ^ w[((75 +1) + 2) & 15] ^ w[(75 +1) & 15]) << 1) | ((w[((75 +1) + 13) & 15] ^ w[((75 +1) + 8) & 15] ^ w[((75 +1) + 2) & 15] ^ w[(75 +1) & 15]) >> (32 - 1)))); v0 = (((v0) >> 2) | ((v0) << (32 - 2))); v2 += (((v3) >> 27) | ((v3) << (32 - 27))) + ((v4) ^ (v0) ^ (v1)) + 0xca62c1d6 + (w[(75 +2) & 15] = (((w[((75 +2) + 13) & 15] ^ w[((75 +2) + 8) & 15] ^ w[((75 +2) + 2) & 15] ^ w[(75 +2) & 15]) << 1) | ((w[((75 +2) + 13) & 15] ^ w[((75 +2) + 8) & 15] ^ w[((75 +2) + 2) & 15] ^ w[(75 +2) & 15]) >> (32 - 1)))); v4 = (((v4) >> 2) | ((v4) << (32 - 2))); v1 += (((v2) >> 27) | ((v2) << (32 - 27))) + ((v3) ^ (v4) ^ (v0)) + 0xca62c1d6 + (w[(75 +3) & 15] = (((w[((75 +3) + 13) & 15] ^ w[((75 +3) + 8) & 15] ^ w[((75 +3) + 2) & 15] ^ w[(75 +3) & 15]) << 1) | ((w[((75 +3) + 13) & 15] ^ w[((75 +3) + 8) & 15] ^ w[((75 +3) + 2) & 15] ^ w[(75 +3) & 15]) >> (32 - 1)))); v3 = (((v3) >> 2) | ((v3) << (32 - 2))); v0 += (((v1) >> 27) | ((v1) << (32 - 27))) + ((v2) ^ (v3) ^ (v4)) + 0xca62c1d6 + (w[(75 +4) & 15] = (((w[((75 +4) + 13) & 15] ^ w[((75 +4) + 8) & 15] ^ w[((75 +4) + 2) & 15] ^ w[(75 +4) & 15]) << 1) | ((w[((75 +4) + 13) & 15] ^ w[((75 +4) + 8) & 15] ^ w[((75 +4) + 2) & 15] ^ w[(75 +4) & 15]) >> (32 - 1)))); v2 = (((v2) >> 2) | ((v2) << (32 - 2)));
# 239 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
# 240 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
# 241 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
# 242 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
# 243 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
# 244 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
# 245 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
    ctx->hash[0] += v0; ctx->hash[1] += v1;
# 246 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
    ctx->hash[2] += v2; ctx->hash[3] += v3;
# 247 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
    ctx->hash[4] += v4;
# 248 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
# 249 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
}
# 250 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
# 251 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
void sha1_begin(sha1_ctx ctx[1])
# 252 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
{
# 253 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
    ctx->count[0] = ctx->count[1] = 0;
# 254 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
    ctx->hash[0] = 0x67452301;
# 255 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
    ctx->hash[1] = 0xefcdab89;
# 256 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
    ctx->hash[2] = 0x98badcfe;
# 257 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
    ctx->hash[3] = 0x10325476;
# 258 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
    ctx->hash[4] = 0xc3d2e1f0;
# 259 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
}
# 260 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
# 261 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
# 262 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
# 263 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
# 264 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
void sha1_hash(const unsigned char data[], unsigned long len, sha1_ctx ctx[1])
# 265 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
{ uint_32t pos = (uint_32t)(ctx->count[0] & (64 - 1)),
# 266 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
            space = 64 - pos;
# 267 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
    const unsigned char *sp = data;
# 268 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
# 269 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
    if((ctx->count[0] += len) < len)
# 270 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
        ++(ctx->count[1]);
# 271 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
# 272 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
    while(len >= space)
# 273 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
    {
# 274 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
        memcpy(((unsigned char*)ctx->wbuf) + pos, sp, space);
# 275 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
        sp += space; len -= space; space = 64; pos = 0;
# 276 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
        { int _i = (64 >> 2); while(_i--) ((uint_32t*)ctx->wbuf)[_i] = (__extension__ ({ register unsigned int __v, __x = (((uint_32t*)ctx->wbuf)[_i]); if (__builtin_constant_p (__x)) __v = ((((__x) & 0xff000000) >> 24) | (((__x) & 0x00ff0000) >> 8) | (((__x) & 0x0000ff00) << 8) | (((__x) & 0x000000ff) << 24)); else __asm__ ("bswap %0" : "=r" (__v) : "0" (__x)); __v; })); };
# 277 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
        sha1_compile(ctx);
# 278 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
    }
# 279 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
# 280 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
    memcpy(((unsigned char*)ctx->wbuf) + pos, sp, len);
# 281 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
}
# 282 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
# 283 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
# 284 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
# 285 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
void sha1_end(unsigned char hval[], sha1_ctx ctx[1])
# 286 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
{ uint_32t i = (uint_32t)(ctx->count[0] & (64 - 1));
# 287 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
# 288 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
# 289 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
# 290 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
# 291 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
    { int _i = ((i + 3) >> 2); while(_i--) ((uint_32t*)ctx->wbuf)[_i] = (__extension__ ({ register unsigned int __v, __x = (((uint_32t*)ctx->wbuf)[_i]); if (__builtin_constant_p (__x)) __v = ((((__x) & 0xff000000) >> 24) | (((__x) & 0x00ff0000) >> 8) | (((__x) & 0x0000ff00) << 8) | (((__x) & 0x000000ff) << 24)); else __asm__ ("bswap %0" : "=r" (__v) : "0" (__x)); __v; })); };
# 292 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
# 293 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
# 294 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
# 295 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
# 296 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
# 297 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
    ctx->wbuf[i >> 2] &= 0xffffff80 << 8 * (~i & 3);
# 298 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
    ctx->wbuf[i >> 2] |= 0x00000080 << 8 * (~i & 3);
# 299 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
# 300 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
# 301 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
# 302 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
# 303 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
    if(i > 64 - 9)
# 304 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
    {
# 305 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
        if(i < 60) ctx->wbuf[15] = 0;
# 306 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
        sha1_compile(ctx);
# 307 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
        i = 0;
# 308 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
    }
# 309 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
    else
# 310 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
        i = (i >> 2) + 1;
# 311 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
# 312 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
    while(i < 14)
# 313 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
        ctx->wbuf[i++] = 0;
# 314 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
# 315 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
# 316 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
# 317 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
# 318 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
# 319 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
    ctx->wbuf[14] = (ctx->count[1] << 3) | (ctx->count[0] >> 29);
# 320 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
    ctx->wbuf[15] = ctx->count[0] << 3;
# 321 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
    sha1_compile(ctx);
# 322 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
# 323 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
# 324 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
# 325 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
    for(i = 0; i < 20; ++i)
# 326 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
        hval[i] = (unsigned char)(ctx->hash[i >> 2] >> (8 * (~i & 3)));
# 327 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
}
# 328 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
# 329 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
void sha1(unsigned char hval[], const unsigned char data[], unsigned long len)
# 330 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
{ sha1_ctx cx[1];
# 331 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
# 332 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
    sha1_begin(cx); sha1_hash(data, len, cx); sha1_end(hval, cx);
# 333 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
}
# 334 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
# 335 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
# 336 "/home/jmg3/num-debug/src/examples/openmp/uts/rng/brg_sha1.c"
}






static int module_init() {
    init_module(4025409710155506038UL, 18, 11, 22, 17, 0, 0, 0, 2,
                           &____alias_loc_id_0, (unsigned)4, (unsigned)2, (4025409710155506038UL + 1UL), (4025409710155506038UL + 2UL), (4025409710155506038UL + 4UL), (4025409710155506038UL + 5UL), "sha1_begin", (unsigned)1, (4025409710155506038UL + 3UL), "sha1_hash", (unsigned)2, (4025409710155506038UL + 3UL), (4025409710155506038UL + 4UL),
                           &____alias_loc_id_1, (unsigned)11, (unsigned)1, (4025409710155506038UL + 100UL), (4025409710155506038UL + 101UL), (4025409710155506038UL + 102UL), (4025409710155506038UL + 103UL), (4025409710155506038UL + 104UL), (4025409710155506038UL + 105UL), (4025409710155506038UL + 106UL), (4025409710155506038UL + 107UL), (4025409710155506038UL + 108UL), (4025409710155506038UL + 109UL), (4025409710155506038UL + 227UL), "sha1_compile", (unsigned)1, (4025409710155506038UL + 227UL),
                           &____alias_loc_id_2, (unsigned)8, (unsigned)1, (4025409710155506038UL + 228UL), (4025409710155506038UL + 229UL), (4025409710155506038UL + 230UL), (4025409710155506038UL + 231UL), (4025409710155506038UL + 232UL), (4025409710155506038UL + 233UL), (4025409710155506038UL + 234UL), (4025409710155506038UL + 398UL), "sha1_compile", (unsigned)1, (4025409710155506038UL + 398UL),
                           &____alias_loc_id_3, (unsigned)4, (unsigned)2, (4025409710155506038UL + 399UL), (4025409710155506038UL + 400UL), (4025409710155506038UL + 401UL), (4025409710155506038UL + 403UL), "sha1_begin", (unsigned)1, (4025409710155506038UL + 402UL), "sha1_hash", (unsigned)2, (4025409710155506038UL + 402UL), (4025409710155506038UL + 443UL),
                           &____alias_loc_id_4, (unsigned)1, (unsigned)2, (4025409710155506038UL + 485UL), "sha1_begin", (unsigned)1, (4025409710155506038UL + 486UL), "sha1_hash", (unsigned)2, (4025409710155506038UL + 486UL), (4025409710155506038UL + 530UL),
                           &____alias_loc_id_5, (unsigned)3, (unsigned)2, (4025409710155506038UL + 4889UL), (4025409710155506038UL + 4890UL), (4025409710155506038UL + 4891UL), "sha1_begin", (unsigned)1, (4025409710155506038UL + 4892UL), "sha1_hash", (unsigned)2, (4025409710155506038UL + 4892UL), (4025409710155506038UL + 4911UL),
                           &____alias_loc_id_6, (unsigned)0, (unsigned)1, "sha1_end", (unsigned)2, (4025409710155506038UL + 3UL), (4025409710155506038UL + 63UL),
                           &____alias_loc_id_7, (unsigned)2, (unsigned)0, (4025409710155506038UL + 67UL), (4025409710155506038UL + 99UL),
                           &____alias_loc_id_8, (unsigned)10, (unsigned)1, (4025409710155506038UL + 100UL), (4025409710155506038UL + 101UL), (4025409710155506038UL + 102UL), (4025409710155506038UL + 103UL), (4025409710155506038UL + 104UL), (4025409710155506038UL + 105UL), (4025409710155506038UL + 106UL), (4025409710155506038UL + 107UL), (4025409710155506038UL + 109UL), (4025409710155506038UL + 227UL), "sha1_compile", (unsigned)1, (4025409710155506038UL + 227UL),
                           &____alias_loc_id_9, (unsigned)8, (unsigned)1, (4025409710155506038UL + 228UL), (4025409710155506038UL + 229UL), (4025409710155506038UL + 230UL), (4025409710155506038UL + 231UL), (4025409710155506038UL + 232UL), (4025409710155506038UL + 234UL), (4025409710155506038UL + 397UL), (4025409710155506038UL + 398UL), "sha1_compile", (unsigned)1, (4025409710155506038UL + 398UL),
                            &____alias_loc_id_10, (unsigned)0, (unsigned)2, "sha1_end", (unsigned)2, (4025409710155506038UL + 402UL), (4025409710155506038UL + 444UL), "sha1_hash", (unsigned)2, (4025409710155506038UL + 402UL), (4025409710155506038UL + 403UL),
                            &____alias_loc_id_11, (unsigned)3, (unsigned)0, (4025409710155506038UL + 446UL), (4025409710155506038UL + 447UL), (4025409710155506038UL + 448UL),
                            &____alias_loc_id_12, (unsigned)2, (unsigned)1, (4025409710155506038UL + 487UL), (4025409710155506038UL + 488UL), "sha1_end", (unsigned)2, (4025409710155506038UL + 486UL), (4025409710155506038UL + 530UL),
                            &____alias_loc_id_13, (unsigned)2, (unsigned)0, (4025409710155506038UL + 531UL), (4025409710155506038UL + 532UL),
                            &____alias_loc_id_14, (unsigned)2, (unsigned)0, (4025409710155506038UL + 553UL), (4025409710155506038UL + 554UL),
                            &____alias_loc_id_15, (unsigned)8, (unsigned)0, (4025409710155506038UL + 571UL), (4025409710155506038UL + 572UL), (4025409710155506038UL + 573UL), (4025409710155506038UL + 574UL), (4025409710155506038UL + 575UL), (4025409710155506038UL + 576UL), (4025409710155506038UL + 577UL), (4025409710155506038UL + 4883UL),
                            &____alias_loc_id_16, (unsigned)0, (unsigned)1, "sha1_end", (unsigned)2, (4025409710155506038UL + 4892UL), (4025409710155506038UL + 4910UL),
                             (4025409710155506038UL + 4889UL), (4025409710155506038UL + 4910UL),
                             (4025409710155506038UL + 4890UL), (4025409710155506038UL + 4911UL),
                             (4025409710155506038UL + 485UL), (4025409710155506038UL + 530UL),
                             (4025409710155506038UL + 531UL), (4025409710155506038UL + 549UL),
                             (4025409710155506038UL + 400UL), (4025409710155506038UL + 444UL),
                             (4025409710155506038UL + 571UL), (4025409710155506038UL + 4883UL),
                             (4025409710155506038UL + 67UL), (4025409710155506038UL + 99UL),
                             (4025409710155506038UL + 446UL), (4025409710155506038UL + 484UL),
                             (4025409710155506038UL + 553UL), (4025409710155506038UL + 569UL),
                             (4025409710155506038UL + 1UL), (4025409710155506038UL + 63UL),
                             (4025409710155506038UL + 532UL), (4025409710155506038UL + 550UL),
                             (4025409710155506038UL + 229UL), (4025409710155506038UL + 398UL),
                             (4025409710155506038UL + 228UL), (4025409710155506038UL + 397UL),
                             (4025409710155506038UL + 102UL), (4025409710155506038UL + 227UL),
                             (4025409710155506038UL + 100UL), (4025409710155506038UL + 225UL),
                             (4025409710155506038UL + 572UL), (4025409710155506038UL + 4883UL),
                             (4025409710155506038UL + 399UL), (4025409710155506038UL + 443UL),
                             (4025409710155506038UL + 105UL), (4025409710155506038UL + 225UL),
                     "sha1_ctx_s", 3, "[ 2 x unsigned int ]", (int)__builtin_offsetof (struct sha1_ctx_s, count), "[ 5 x unsigned int ]", (int)__builtin_offsetof (struct sha1_ctx_s, hash), "[ 16 x unsigned int ]", (int)__builtin_offsetof (struct sha1_ctx_s, wbuf),
                     "state_t", 1, "[ 20 x unsigned char ]", (int)__builtin_offsetof (struct state_t, state),
                             "sha1", 3, "sha1_begin", "sha1_hash", "sha1_end",
                             "rng_nextrand", 3, "sha1_begin", "sha1_hash", "sha1_end",
                             "rng_showstate", 0,
                             "rng_init", 3, "sha1_begin", "sha1_hash", "sha1_end",
                             "rng_spawn", 4, "sha1_begin", "sha1_hash", "sha1_hash", "sha1_end",
                             "sha1_hash", 1, "sha1_compile",
                             "sha1_end", 2, "sha1_compile", "sha1_compile",
                             "rng_rand", 0,
                             "sha1_compile", 0,
                             "sha1_begin", 0,
                             "rng_showtype", 0,
                        "rng_init|newstate|0", 2, "sha1_hash", "sha1_end",
                        "rng_init|ctx|0", 1, "rng_init",
                        "sha1_hash|len|0", 1, "sha1_hash",
                        "sha1_hash|ctx|0", 1, "sha1_hash",
                        "sha1_hash|pos|0", 1, "sha1_hash",
                        "sha1_hash|space|0", 1, "sha1_hash",
                        "sha1_hash|sp|0", 1, "sha1_hash",
                        "sha1_hash|_i|0", 1, "sha1_hash",
                        "sha1_hash|__v|0", 1, "sha1_hash",
                        "sha1_hash|__x|0", 1, "sha1_hash",
                        "sha1_end|hval|0", 1, "sha1_end",
                        "sha1_end|ctx|0", 1, "sha1_end",
                        "sha1_end|i|0", 1, "sha1_end",
                        "sha1_end|_i|0", 1, "sha1_end",
                        "sha1_end|__v|0", 1, "sha1_end",
                        "sha1_end|__x|0", 1, "sha1_end",
                        "rng_spawn|newstate|0", 2, "sha1_hash", "sha1_end",
                        "rng_spawn|ctx|0", 1, "rng_spawn",
                        "rng_nextrand|mystate|0", 2, "sha1_hash", "sha1_end",
                        "rng_nextrand|ctx|0", 1, "rng_nextrand",
                        "sha1|hval|0", 2, "sha1_hash", "sha1_end",
                        "sha1|cx|0", 1, "sha1");
    register_text((void *)&__executable_start, (size_t)((&__etext) - (&__executable_start)));
    return 0;
}

static const int __libchimes_module_init = module_init();
