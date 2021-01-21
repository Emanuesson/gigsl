
ggsl_test_env = [
  'G_TEST_SRCDIR=@0@'.format(meson.current_source_dir()),
  'G_TEST_BUILDDIR=@0@'.format(meson.current_build_dir()),
  'G_DEBUG=gc-friendly',
  'GSETTINGS_BACKEND=memory',
  'PYTHONDONTWRITEBYTECODE=yes',
  'MALLOC_CHECK_=2',
]

ggsl_test_cflags = [
  '-O0',
  '-DTEST_DATA_DIR="@0@/data"'.format(meson.current_source_dir()),
#  '-fsanitize=address',
]

ggsl_test_link_args = [
  '-fPIC',
  #'-fsanitize=address',
]

ggsl_test_deps = [
  libgigsl_dep
]

ggsl_test_srcs = [
]

if introspection_available
  subdir('test-introspection-python')
  subdir('test-introspection-repository')
endif

gigsl_tests = [
  ['test-vector'],
  ['test-matrix'],
]


foreach t: gigsl_tests
  test_name = t.get(0)
  test_srcs = ['@0@.c'.format(test_name), t.get(1, [])]
  test(test_name,
    executable(test_name, test_srcs,
    include_directories: [gigsl_root_inc, gigsl_src_inc ],
    c_args: ggsl_test_cflags,
    dependencies: ggsl_test_deps),
  env: ggsl_test_env,
  )
endforeach


