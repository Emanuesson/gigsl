/*
 * gigsl-vector.h
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

#ifndef GGSL_VECTOR_H_INCLUDED
#define GGSL_VECTOR_H_INCLUDED

#include <glib.h>
#include <gio/gio.h>
#include <gigsl-block-double.h>
#include <gsl/gsl_vector_double.h>

G_BEGIN_DECLS

/* Just an idea that I will try next: */
/**
 * GslVector:
 * @size: A single value that determines the size of the vector
 * @stride:
 * @data: (array length=size): An array of length size
 * @block:
 * @owner:
 */
struct _GslVector
{
  size_t size;
  size_t stride;
  double *data;
  GslBlock *block;
  int owner;
};

//#define _GslVector gsl_vector
// gsl_vector;
typedef struct _GslVector GslVector;

/* Type definitions */
#define GSL_TYPE_VECTOR\
  (gsl_vector_get_type ())

/* Public functions */

 /**
 * gsl_vector_alloc:
 * @n:
 * Returns: (nullable) (transfer full) (type GslVector):
 */
gsl_vector *gsl_vector_alloc (const size_t n);

/**
 * gsl_vector_calloc:
 * @n:
 * Returns: (nullable) (transfer full) (type GslVector):
 */
gsl_vector *gsl_vector_calloc (const size_t n);

/**
 * gsl_vector_free:
 * @v: (not nullable) (type GslVector):
 */
void gsl_vector_free (gsl_vector * v);


/**
 * gsl_vector_get:
 * @v: (not nullable) (type GslVector):
 * @i:
 * Returns:
 */
INLINE_DECL double gsl_vector_get (const gsl_vector * v, const size_t i);

/**
 * gsl_vector_set:
 * @v: (not nullable) (type GslVector):
 * @i:
 * @x:
 */
INLINE_DECL void gsl_vector_set (gsl_vector * v, const size_t i, double x);

GType gsl_vector_get_type (void) G_GNUC_CONST;

G_END_DECLS

#endif /* GGSL_VECTOR_H_INCLUDED */

