introsp_test_env = environment()
introsp_test_env.set('GI_TYPELIB_PATH', libgigsl_so_build_dir)
introsp_test_env.set('LD_LIBRARY_PATH', libgigsl_so_build_dir)

girepository_dep = dependency('gobject-introspection-1.0', version : '>= 1.60')

gigsl_tests = [
  ['test-basic'],
]

foreach t: gigsl_tests
  test_name = t.get(0)
  test_srcs = ['@0@.c'.format(test_name), t.get(1, [])]
  test(test_name,
    executable(test_name, test_srcs,
    include_directories: [root_inc, src_inc, build_inc],
    c_args: ggsl_test_cflags,
    dependencies: ggsl_test_deps + [girepository_dep]),
  env: introsp_test_env,
  )
endforeach


