/*
 * gigsl-sys.h
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

#ifndef GIGSL_SYS_H_INCLUDED
#define GIGSL_SYS_H_INCLUDED

#include <gsl/gsl_sys.h>
#include <glib.h>
#include <gio/gio.h>

G_BEGIN_DECLS

/* Public functions */
/**
 * gsl_log1p:
 * @x: (type gdouble):
 *
 * Returns: (type gdouble):
 */
#ifdef GIR_SCANNER
double gsl_log1p (const double x);
#endif

/**
 * gsl_expm1:
 * @x: (type gdouble):
 *
 * Returns: (type gdouble):
 */
#ifdef GIR_SCANNER
double gsl_expm1 (const double x);
#endif

/**
 * gsl_hypot:
 * @x: (type gdouble):
 * @y: (type gdouble):
 *
 * Returns: (type gdouble):
 */
#ifdef GIR_SCANNER
double gsl_hypot (const double x, const double y);
#endif

/**
 * gsl_hypot3:
 * @x: (type gdouble):
 * @y: (type gdouble):
 * @z: (type gdouble):
 *
 * Returns: (type gdouble):
 */
#ifdef GIR_SCANNER
double gsl_hypot3 (const double x, const double y, const double z);
#endif

/**
 * gsl_acosh:
 * @x: (type gdouble):
 *
 * Returns: (type gdouble):
 */
#ifdef GIR_SCANNER
double gsl_acosh (const double x);
#endif

/**
 * gsl_asinh:
 * @x: (type gdouble):
 *
 * Returns: (type gdouble):
 */
#ifdef GIR_SCANNER
double gsl_asinh (const double x);
#endif

/**
 * gsl_atanh:
 * @x: (type gdouble):
 *
 * Returns: (type gdouble):
 */
#ifdef GIR_SCANNER
double gsl_atanh (const double x);
#endif

/**
 * gsl_isnan:
 * @x: (type gdouble):
 *
 * Returns: (type gint):
 */
#ifdef GIR_SCANNER
int gsl_isnan (const double x);
#endif

/**
 * gsl_isinf:
 * @x: (type gdouble):
 *
 * Returns: (type gint):
 */
#ifdef GIR_SCANNER
int gsl_isinf (const double x);
#endif

/**
 * gsl_finite:
 * @x: (type gdouble):
 *
 * Returns: (type gint):
 */
#ifdef GIR_SCANNER
int gsl_finite (const double x);
#endif

/**
 * gsl_nan:
 *
 * Returns: (type gdouble):
 */
#ifdef GIR_SCANNER
double gsl_nan (void);
#endif

/**
 * gsl_posinf:
 *
 * Returns: (type gdouble):
 */
#ifdef GIR_SCANNER
double gsl_posinf (void);
#endif

/**
 * gsl_neginf:
 *
 * Returns: (type gdouble):
 */
#ifdef GIR_SCANNER
double gsl_neginf (void);
#endif

/**
 * gsl_fdiv:
 * @x: (type gdouble):
 * @y: (type gdouble):
 *
 * Returns: (type gdouble):
 */
#ifdef GIR_SCANNER
double gsl_fdiv (const double x, const double y);
#endif

/**
 * gsl_coerce_double:
 * @x: (type gdouble):
 *
 * Returns: (type gdouble):
 */
#ifdef GIR_SCANNER
double gsl_coerce_double (const double x);
#endif

/**
 * gsl_coerce_float:
 * @x: (type gfloat):
 *
 * Returns: (type gfloat):
 */
#ifdef GIR_SCANNER
float gsl_coerce_float (const float x);
#endif

/**
 * gsl_ldexp:
 * @x: (type gdouble):
 * @e: (type gint):
 *
 * Returns: (type gdouble):
 */
#ifdef GIR_SCANNER
double gsl_ldexp(const double x, const int e);
#endif

/**
 * gsl_frexp:
 * @x: (type gdouble):
 * @e: (type gint):
 *
 * Returns: (type gdouble):
 */
#ifdef GIR_SCANNER
double gsl_frexp(const double x, int * e);
#endif

/**
 * gsl_fcmp:
 * @x1: (type gdouble):
 * @x2: (type gdouble):
 * @epsilon: (type gdouble):
 *
 * Returns: (type gint):
 */
#ifdef GIR_SCANNER
int gsl_fcmp (const double x1, const double x2, const double epsilon);
#endif

G_END_DECLS

#endif /* GIGSL_SYS_H_INCLUDED */

