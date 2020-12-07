
ggsl_test_env = [
#  'GI_TYPELIB_PATH="@0@/src/libide:@0@/src/gstyle:$(GI_TYPELIB_PATH)"'.format(meson.build_root()),
#  'GB_IN_TREE_PLUGINS=1',
  'G_TEST_SRCDIR=@0@'.format(meson.current_source_dir()),
  'G_TEST_BUILDDIR=@0@'.format(meson.current_build_dir()),
  'G_DEBUG=gc-friendly',
  'GSETTINGS_BACKEND=memory',
#  'GSETTINGS_SCHEMA_DIR=@0@/data/gsettings:$(GSETTINGS_SCHEMA_DIR)'.format(meson.build_root()),
  'PYTHONDONTWRITEBYTECODE=yes',
  'MALLOC_CHECK_=2',
#  'MALLOC_PERTURB_=$((${RANDOM:-256} % 256))',
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
  subdir('test-introspection')
endif

