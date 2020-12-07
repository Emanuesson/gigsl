/*
 * gigsl-block.c
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

#include "gigsl-block-double.h"
#include <string.h>

static GslBlock *
gsl_block_copy (const GslBlock *block)
{
  GslBlock *result = g_new (GslBlock, 1);

  result->size = block->size;
  result->data = g_new(double, block->size);
  memcpy(result->data, block->data, block->size);

  return result;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wpedantic"
G_DEFINE_BOXED_TYPE (GslBlock, gsl_block,
                     gsl_block_copy,
                     gsl_block_free);
#pragma GCC diagnostic pop


