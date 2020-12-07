/*
 * gigsl-vector.c
 * This file is part of libggsl
 *
 * Copyright (C) 2013 - Emanuel Schmidt
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330,
 * Boston, MA 02111-1307, USA.
 */

#ifdef HAVE_CONFIG_H
  #include <config.h>
#endif

#include "gigsl-vector.h"
#include <string.h>

static GslVector *
gsl_vector_copy (const GslVector *vector)
{
  return (GslVector *)gsl_vector_alloc_from_vector((gsl_vector *) vector,
                                                   0,
                                                   vector->size,
                                                   vector->stride);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wpedantic"
G_DEFINE_BOXED_TYPE (GslVector, gsl_vector,
                     gsl_vector_copy,
                     (void (*)(GslVector *))gsl_vector_free);
#pragma GCC diagnostic pop

