/*  =========================================================================
    global domination - GLOBAL DOMINATION wrapper

    Copyright (c) the Authors

################################################################################
#  THIS FILE IS 100% GENERATED BY ZPROJECT; DO NOT EDIT EXCEPT EXPERIMENTALLY  #
#  Please refer to the README for information about making permanent changes.  #
################################################################################
    =========================================================================
*/

#ifndef GDOM_LIBRARY_H_INCLUDED
#define GDOM_LIBRARY_H_INCLUDED

//  Set up environment for the application

//  External dependencies
#include <czmq.h>

//  GLOBAL DOMINATION version macros for compile-time API detection

#define GLOBAL_DOMINATION_VERSION_MAJOR 0
#define GLOBAL_DOMINATION_VERSION_MINOR 0
#define GLOBAL_DOMINATION_VERSION_PATCH 0

#define GLOBAL_DOMINATION_MAKE_VERSION(major, minor, patch) \
    ((major) * 10000 + (minor) * 100 + (patch))
#define GLOBAL_DOMINATION_VERSION \
    GLOBAL_DOMINATION_MAKE_VERSION(GLOBAL_DOMINATION_VERSION_MAJOR, GLOBAL_DOMINATION_VERSION_MINOR, GLOBAL_DOMINATION_VERSION_PATCH)

#if defined (__WINDOWS__)
#   if defined LIBGDOM_STATIC
#       define GDOM_EXPORT
#   elif defined LIBGDOM_EXPORTS
#       define GDOM_EXPORT __declspec(dllexport)
#   else
#       define GDOM_EXPORT __declspec(dllimport)
#   endif
#else
#   define GDOM_EXPORT
#endif

//  Opaque class structures to allow forward references
typedef struct _gdom_server_t gdom_server_t;
#define GDOM_SERVER_T_DEFINED

//  Public API classes
#include "gdom_server.h"

#endif
/*
################################################################################
#  THIS FILE IS 100% GENERATED BY ZPROJECT; DO NOT EDIT EXCEPT EXPERIMENTALLY  #
#  Please refer to the README for information about making permanent changes.  #
################################################################################
*/