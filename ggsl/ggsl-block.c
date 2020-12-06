/*
 * gsl-gir-block.c
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

#include "ggsl-block.h"
#include <string.h>

static GgslBlock *
ggsl_block_copy (const GgslBlock *block)
{
  GgslBlock *result = g_new (GgslBlock, 1);

  result->size = block->size;
  result->data = g_new(double, block->size);
  memcpy(result->data, block->data, block->size);

  return result;
}

static void
ggsl_block_free (GgslBlock *block)
{
  if (block->data != NULL)
    g_free(block->data);

  g_free(block);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wpedantic"
G_DEFINE_BOXED_TYPE (GgslBlock, ggsl_block,
                     ggsl_block_copy,
                     ggsl_block_free);
#pragma GCC diagnostic pop

/**
 * ggsl_block_alloc:
 * @n: a size
 *
 * Returns: (nullable) (transfer full): a newly allocated block
 *
 * Since: 0.10
 */
GgslBlock *ggsl_block_alloc (const gsize n)
{
  return (GgslBlock *)gsl_block_alloc(n);
}


