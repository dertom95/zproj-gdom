/*  =========================================================================
    gdom_client - class description

    Copyright (c) the Contributors as noted in the AUTHORS file.
    This file is part of Global Domination. Resistance is useless.
    ​
    This Source Code Form is subject to the terms of the Mozilla Public
    License, v. 2.0. If a copy of the MPL was not distributed with this
    file, You can obtain one at http://mozilla.org/MPL/2.0/.
    =========================================================================
*/

/*
@header
    gdom_client -
@discuss
@end
*/

#include "gdom_classes.h"

//  Structure of our class

struct _gdom_client_t {
    int filler;     //  Declare class properties here
};


//  --------------------------------------------------------------------------
//  Create a new gdom_client

gdom_client_t *
gdom_client_new (void)
{
    gdom_client_t *self = (gdom_client_t *) zmalloc (sizeof (gdom_client_t));
    assert (self);
    //  Initialize class properties here
    return self;
}


//  --------------------------------------------------------------------------
//  Destroy the gdom_client

void
gdom_client_destroy (gdom_client_t **self_p)
{
    assert (self_p);
    if (*self_p) {
        gdom_client_t *self = *self_p;
        //  Free class properties here
        //  Free object itself
        free (self);
        *self_p = NULL;
    }
}

//  --------------------------------------------------------------------------
//  Self test of this class

// If your selftest reads SCMed fixture data, please keep it in
// src/selftest-ro; if your test creates filesystem objects, please
// do so under src/selftest-rw.
// The following pattern is suggested for C selftest code:
//    char *filename = NULL;
//    filename = zsys_sprintf ("%s/%s", SELFTEST_DIR_RO, "mytemplate.file");
//    assert (filename);
//    ... use the "filename" for I/O ...
//    zstr_free (&filename);
// This way the same "filename" variable can be reused for many subtests.
#define SELFTEST_DIR_RO "src/selftest-ro"
#define SELFTEST_DIR_RW "src/selftest-rw"

void
gdom_client_test (bool verbose)
{
    printf (" * gdom_client: ");

    //  @selftest
    //  Simple create/destroy test
    gdom_client_t *self = gdom_client_new ();
    assert (self);
    gdom_client_destroy (&self);
    //  @end
    printf ("OK\n");
}
