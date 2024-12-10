/*
    static-list data-structure header
        Prototypes of strongly typed static list data-structures and its
        management algorithms in C programming language.

    Copyright (C) Carlos Antunis B. da S. Santos - All Rights Reserved
        Github: https://github.com/carlos-antunis-physics/
*/

#if !defined(__static_list_header)

    #   define  __static_list_header
    #   include "../../main.h"

    /*
        generic typed-based static list data-structure prototype
    */

    //  static list type definition
    typedef struct __static_list__data_structure__ static_list;

    //  static list allocation macro function
    #   define static_list(number_of_items, type) (                     \
            __static_list__(number_of_items, sizeof(type))              \
    )

    //  generic-typed static list allocation function
    static_list* __static_list__(unsigned, size_t);

    //  generic-typed static list method to check if list is full
    bool is_static_list_full(static_list*);
    //  generic-typed static list method to check if list is empty
    bool is_static_list_empty(static_list*);

    //  define item access macro function
    #   define  static_list_get(n, type, list)                          \
            (__static_list_size__(list) >= n) ?                         \
                ((type *)__static_list_items__(list))[n] :              \
                (0)

    //  generic-typed static list size
    static inline unsigned __static_list_size__(static_list*);
    //  generic-typed static list items
    static inline void* __static_list_items__(static_list*);

    //  define item setter macro function
    #   define  static_list_set(n, list, value) _Generic(               \
            value,                                                      \
                _Bool:      __static_list_set_bool__(n, list, value),   \
                char:       __static_list_set_char__(n, list, value),   \
                char *:     __static_list_set_default__(n, list, value),\
                unsigned:   __static_list_set_unsig__(n, list, value),  \
                short:      __static_list_set_short__(n, list, value),  \
                int:        __static_list_set_int__(n, list, value),    \
                long:       __static_list_set_long__(n, list, value),   \
                float:      __static_list_set_float__(n, list, value),  \
                double:     __static_list_set_double__(n, list, value), \
                _Complex:   __static_list_set_complex__(n, list, value),\
                default:    __static_list_set_default__(n, list, &value)\
    )

    void __static_list_set_default__(unsigned, static_list*, void*);

    void __static_list_set_bool__(unsigned, static_list*, _Bool);
    void __static_list_set_char__(unsigned, static_list*, char);
    void __static_list_set_unsig__(unsigned, static_list*, unsigned);
    void __static_list_set_short__(unsigned, static_list*, short);
    void __static_list_set_int__(unsigned, static_list*, int);
    void __static_list_set_long__(unsigned, static_list*, long);
    void __static_list_set_float__(unsigned, static_list*, float);
    void __static_list_set_double__(unsigned, static_list*, double);
    void __static_list_set_complex__(unsigned, static_list*, _Complex);

#endif // __static_list_header
