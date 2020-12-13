/* test-vector.c
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
test_vector_basic (void)
{
  /* Test bedding */
  GslVector * vector;
  vector = gsl_vector_calloc(1);
  gsl_vector_free(vector);
}

int main(int argc, char* argv[]) {
  g_test_init (&argc, &argv, NULL);
   g_test_add_func ("/Gigsl/vector/basic", test_vector_basic);

  return g_test_run ();
}

