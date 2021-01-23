/* test-matrix.c
 *
 * Copyright © 2018 Emanuel Schmidt <eschmidt216@gmail.com>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

//#include <math.h>
//#include <stdio.h>
#include <gigsl/gigsl.h>

static void
test_matrix_basic (void)
{
  /* Test Calloc */
  GslMatrix * matrix;
  matrix = gsl_matrix_calloc(100,100);

  g_assert_cmpint (matrix->size1, ==, 100);
  g_assert_cmpint (matrix->size2, ==, 100);
  for (gsize i = 0; i < matrix->size1; i++)
  {
    for (gsize j = 0; j < matrix->size2; j++)
    {
      gdouble value = gsl_matrix_get(matrix, i, j);
      g_assert_cmpfloat(value, ==, 0.0);
    }
  }

  gsl_matrix_free(matrix);
}

static void
test_matrix_reallocs_set_row_larger (void)
{
  /* Test bedding */
  GslMatrix * matrix;
  matrix = gsl_matrix_calloc(100,100);

  g_assert_cmpint (matrix->size1, ==, 100);
  g_assert_cmpint (matrix->size2, ==, 100);

  /* Initializing the matrix with usefull values */
  for (gsize i = 0; i < matrix->size1; i++)
  {
    for (gsize j = 0; j < matrix->size2; j++)
    {
      gsl_matrix_set(matrix, i, j, i * 100.0 + j);
    }
  }

  gsl_matrix_set_rows(matrix, 1000);
  g_assert_cmpint (matrix->size1, ==, 1000);
  g_assert_cmpint (matrix->size2, ==, 100);

  for (gsize i = 0; i < 100; i++)
  {
    for (gsize j = 0; j < matrix->size2; j++)
    {
      gdouble value = gsl_matrix_get(matrix, i, j);
      g_assert_cmpfloat(value, ==, i * 100.0 + j);
    }
  }

  gsl_matrix_free(matrix);
}

static void
test_matrix_reallocs_set_row_smaller (void)
{
  /* Test bedding */
  GslMatrix * matrix;
  matrix = gsl_matrix_calloc(100,100);

  g_assert_cmpint (matrix->size1, ==, 100);
  g_assert_cmpint (matrix->size2, ==, 100);

  /* Initializing the matrix with usefull values */
  for (gsize i = 0; i < matrix->size1; i++)
  {
    for (gsize j = 0; j < matrix->size2; j++)
    {
      gsl_matrix_set(matrix, i, j, i * 100.0 + j);
    }
  }

  gsl_matrix_set_rows(matrix, 10);
  g_assert_cmpint (matrix->size1, ==, 10);
  g_assert_cmpint (matrix->size2, ==, 100);

  for (gsize i = 0; i < matrix->size1; i++)
  {
    for (gsize j = 0; j < matrix->size2; j++)
    {
      gdouble value = gsl_matrix_get(matrix, i, j);
      g_assert_cmpfloat(value, ==, i * 100.0 + j);
    }
  }

  gsl_matrix_free(matrix);
}

static void
test_matrix_reallocs_set_col_larger (void)
{
  /* Test bedding */
  GslMatrix * matrix;
  matrix = gsl_matrix_calloc(100,100);

  g_assert_cmpint (matrix->size1, ==, 100);
  g_assert_cmpint (matrix->size2, ==, 100);

  /* Initializing the matrix with usefull values */
  for (gsize i = 0; i < matrix->size1; i++)
  {
    for (gsize j = 0; j < matrix->size2; j++)
    {
      gsl_matrix_set(matrix, i, j, i * 100.0 + j);
    }
  }

  gsl_matrix_set_cols(matrix, 1000);
  g_assert_cmpint (matrix->size1, ==, 100);
  g_assert_cmpint (matrix->size2, ==, 1000);

  for (gsize i = 0; i < matrix->size1; i++)
  {
    for (gsize j = 0; j < 100; j++)
    {
      gdouble value = gsl_matrix_get(matrix, i, j);
      g_assert_cmpfloat(value, ==, i * 100.0 + j);
    }
  }

  gsl_matrix_free(matrix);
}

static void
test_matrix_reallocs_expand (void)
{
  gdouble value;

  /* Test bedding */
  GslMatrix * matrix;
  matrix = gsl_matrix_calloc(100,100);

  g_assert_cmpint (matrix->size1, ==, 100);
  g_assert_cmpint (matrix->size2, ==, 100);

  /* Initializing the matrix with usefull values */
  for (gsize i = 0; i < matrix->size1; i++)
  {
    for (gsize j = 0; j < matrix->size2; j++)
    {
      gsl_matrix_set(matrix, i, j, i * 100.0 + j);
    }
  }

  gsl_matrix_set_and_expand(matrix, 1, 1000, 1000.0);
  g_assert_cmpint (matrix->size1, ==, 100);
  g_assert_cmpint (matrix->size2, ==, 1001);

  for (gsize i = 0; i < matrix->size1; i++)
  {
    for (gsize j = 0; j < 100; j++)
    {
      value = gsl_matrix_get(matrix, i, j);
      g_assert_cmpfloat(value, ==, i * 100.0 + j);
    }
  }

  value = gsl_matrix_get(matrix, 1, 1000);
  g_assert_cmpfloat(value, ==, 1000.0);

  gsl_matrix_free(matrix);}

int main(int argc, char* argv[]) {
  g_test_init (&argc, &argv, NULL);

  g_test_add_func ("/Gigsl/matrix/basic", test_matrix_basic);
  g_test_add_func ("/Gigsl/matrix/reallocs/set_col_larger", test_matrix_reallocs_set_col_larger);
  g_test_add_func ("/Gigsl/matrix/reallocs/set_row_larger", test_matrix_reallocs_set_row_larger);
  g_test_add_func ("/Gigsl/matrix/reallocs/set_row_smaller", test_matrix_reallocs_set_row_smaller);
  g_test_add_func ("/Gigsl/matrix/reallocs/expand", test_matrix_reallocs_expand);

  return g_test_run ();
}

