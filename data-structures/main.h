/*
    data-structures in C main header
        generic data-structure utils in C programming.

    Copyright (C) Carlos Antunis B. da S. Santos - All Rights Reserved
        Github: https://github.com/carlos-antunis-physics/
*/

#ifndef __main_header

    #   define  __main_header
    #   include <stdio.h>
    #   include <stdlib.h>

    //  byte type as an 8-bit primitive data type
    typedef __uint8_t byte;
    //  generic type as a pointer to any type in C programming language
    typedef void * _Generic_type;

    //  macro function to get the size of an array
    #   define  __size_of_array(a)  (unsigned)(sizeof(a) / sizeof(a[0]))
    //  macro function to check if two variables are of same type
    #   define  __is_of_same_type(a, b) _Generic(                       \
            a,                                                          \
                typeof(b): true,                                        \
                default: false                                          \
        )

    /*
        boolean primary data type
    */
    #   include <stdbool.h>
    #   undef   false
    #   define  false   (bool)(+0u)
    #   undef   true
    #   define  true    (bool)(+1u)
    //  define boolean conjunction operation
    #   define  and     &&
    //  define boolean disjunction operation
    #   define  or      ||

    /*
        complex primary data type
    */
    #   include <complex.h>

#endif//__main_header