/*
 * gsl-gir-vector.h
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

#include <gsl/gsl_vector.h>
#include <glib.h>
#include <gio/gio.h>
#include <ggsl-block.h>

G_BEGIN_DECLS

/* Just an idea that I will try next: */
/**
 * gsl_vector:
 * @size: A single value that determines the size of the vector
 * @stride:
 * @data: (array length=size): An array of length size
 * @block:
 * @owner:
 */

/**
 * gsl_vector_get:
 * @v: (not nullable):
 * @i:
 *
 * Returns:
 *
 * Since: 0.10
 */

/**
 * gsl_vector_set:
 * @v: (not nullable):
 * @i:
 * @x:
 *
 * Since: 0.10
 */

/* structs */

/**
 * GgslVector: (type struct):
 * @size: A single value that determines the size of the vector
 * @stride:
 * @data: (array length=size): An array of length size
 * @block:
 * @owner:
 */
struct _GgslVector
{
//  gsl_vector;
  gsize size;
  gsize stride;
  gdouble *data;
  GgslBlock *block;
  gint owner;
};
//typedef gsl_vector _GgslVector;
typedef struct _GgslVector GgslVector;

/* Type definitions */
#define GGSL_TYPE_VECTOR\
  (ggsl_vector_get_type ())

/* Public functions */
GgslVector *ggsl_vector_alloc (const gsize n);

GgslVector *ggsl_vector_calloc (const gsize n);

void ggsl_vector_free (GgslVector * v);

gdouble ggsl_vector_get (const GgslVector * v, const gsize i);

void ggsl_vector_set (GgslVector * v, const gsize i, gsize x);
/* ... */

GType ggsl_vector_get_type (void) G_GNUC_CONST;

G_END_DECLS

#endif /* GGSL_VECTOR_H_INCLUDED */

