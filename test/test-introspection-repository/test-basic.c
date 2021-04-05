/* test-basic.c
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
#include <gigsl/gigsl.h>
#include <girepository.h>
#include <assert.h>

void
test_introspection_basic (void)
{
  GIRepository *repository;
  GError *error = NULL;
  GIBaseInfo *base_info;
  GIArgument in_args[5];
  GIArgument retval;
  GslMatrix * matrix;

  repository = g_irepository_get_default ();
  g_irepository_require (repository, "GLib", "2.0", 0, &error);
  if (error)
    {
      g_error ("ERROR: %s\n", error->message);
      return;
    }
  g_irepository_require (repository, "LibGsl", "0.2", 0, &error);
  if (error)
    {
      g_error ("ERROR: %s\n", error->message);
      return;
    }

  base_info = g_irepository_find_by_name (repository, "LibGsl", "matrix_calloc");
  if (!base_info)
    {
      g_error ("ERROR: %s\n", "Could not find name in repository");
      return;
    }

  in_args[0].v_size = 5;
  in_args[1].v_size = 2;

  if (!g_function_info_invoke ((GIFunctionInfo *) base_info,
                               (const GIArgument *) &in_args,
                               2,
                               NULL,
                               0,
                               &retval,
                               &error))
    {
      g_error ("ERROR: %s\n", error->message);
      return;
    }

  matrix = (GslMatrix *)retval.v_pointer;
  g_assert_cmpuint(matrix->size1, ==, 5);
  g_assert_cmpuint(matrix->size2, ==, 2);
  g_assert_cmpuint(matrix->block->size, ==, 10);

  g_base_info_unref (base_info);
}

int main(int argc, char* argv[]) {
   g_test_init (&argc, &argv, NULL);
   g_test_add_func ("/GigslIntrospection/basic", test_introspection_basic);

  return g_test_run ();
}

