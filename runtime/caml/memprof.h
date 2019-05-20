/**************************************************************************/
/*                                                                        */
/*                                 OCaml                                  */
/*                                                                        */
/*             Jacques-Henri Joudan, projet Gallium, INRIA Paris          */
/*                                                                        */
/*   Copyright 2016 Institut National de Recherche en Informatique et     */
/*     en Automatique.                                                    */
/*                                                                        */
/*   All rights reserved.  This file is distributed under the terms of    */
/*   the GNU Lesser General Public License version 2.1, with the          */
/*   special exception on linking described in the file LICENSE.          */
/*                                                                        */
/**************************************************************************/

#ifndef CAML_MEMPROF_H
#define CAML_MEMPROF_H

#ifdef CAML_INTERNALS

#include "config.h"
#include "mlvalues.h"

extern void caml_memprof_track_alloc_shr(value block);
extern void caml_memprof_handle_postponed();

extern void caml_memprof_renew_minor_sample(void);
extern value* caml_memprof_young_trigger;
extern void caml_memprof_track_young(tag_t tag, uintnat wosize);

extern int caml_memprof_suspended;

struct caml_memprof_postponed_block *caml_memprof_postponed_head;

#endif

#endif /* CAML_MEMPROF_H */