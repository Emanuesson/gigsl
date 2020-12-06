/*
 * gsl-gir-vector.c
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

#include "ggsl-vector.h"
#include <string.h>

static GgslVector *
ggsl_vector_copy (const GgslVector *vector)
{
  GgslVector *result = g_new (GgslVector, 1);

  result->size = vector->size;
  result->data = g_new(double, vector->size);
  memcpy(result->data, vector->data, vector->size);

  return result;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wpedantic"
G_DEFINE_BOXED_TYPE (GgslVector, ggsl_vector,
                     ggsl_vector_copy,
                     ggsl_vector_free);
#pragma GCC diagnostic pop

/**
 * ggsl_vector_alloc:
 * @n: a size
 *
 * Returns: (nullable) (transfer full): a newly allocated vector
 *
 * Since: 0.10
 */
GgslVector *ggsl_vector_alloc (const gsize n)
{
  return (GgslVector *)gsl_vector_alloc(n);
}

/**
 * ggsl_vector_calloc:
 * @n:
 *
 * Returns: (nullable) (transfer full):
 *
 * Since: 0.10
 */
GgslVector *ggsl_vector_calloc (const gsize n)
{
  return (GgslVector *)gsl_vector_calloc(n);
}

/**
 * ggsl_vector_free:
 * @v: (not nullable):
 *
 * Since: 0.10
 */
void ggsl_vector_free (GgslVector * v)
{
  gsl_vector_free((gsl_vector *) v);
}

/**
 * ggsl_vector_get:
 * @v: (not nullable):
 * @i:
 *
 * Returns:
 *
 * Since: 0.10
 */
gdouble ggsl_vector_get (const GgslVector * v, const gsize i)
{
  return gsl_vector_get((gsl_vector *) v, i);
}

/**
 * ggsl_vector_set:
 * @v: (not nullable):
 * @i:
 * @x:
 *
 * Since: 0.10
 */
void ggsl_vector_set (GgslVector * v, const gsize i, gsize x)
{
  gsl_vector_set((gsl_vector *) v, i, x);
}

