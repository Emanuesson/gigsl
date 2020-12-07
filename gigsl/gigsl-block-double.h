/*
 * gigsl-block.h
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

#ifndef GGSL_BLOCK_H_INCLUDED
#define GGSL_BLOCK_H_INCLUDED

#include <gsl/gsl_block.h>
#include <glib.h>
#include <gio/gio.h>

G_BEGIN_DECLS

/* structs */
/**
 * GslBlock:
 * @size: A single value that determines the size of the block
 * @data: (array length=size): An array of length size
 */
typedef struct gsl_block_struct GslBlock;

/* Type definitions */
#define GSL_TYPE_BLOCK\
  (gsl_block_get_type ())

/* Public functions */
/**
 * gsl_block_alloc:
 * @n:
 *
 * Returns: (nullable) (transfer full):
 */
GslBlock *gsl_block_alloc (const size_t n);

/**
 * gsl_block_calloc:
 * @n:
 *
 * Returns: (nullable) (transfer full):
 */
GslBlock *gsl_block_calloc (const size_t n);

/**
 * gsl_block_free:
 * @b:
 */
void gsl_block_free (GslBlock * b);

/**
 * gsl_block_size:
 * @b:
 *
 * Returns:
 */
size_t gsl_block_size (const GslBlock * b);

/**
 * gsl_block_data:
 * @b:
 *
 * Returns: (nullable) (transfer none):
 */
double * gsl_block_data (const GslBlock * b);

GType gsl_block_get_type (void) G_GNUC_CONST;

G_END_DECLS

#endif /* GGSL_BLOCK_H_INCLUDED */

