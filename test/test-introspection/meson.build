introsp_test_env = environment()
introsp_test_env.set('GI_TYPELIB_PATH', libgigsl_so_build_dir)
introsp_test_env.set('LD_LIBRARY_PATH', libgigsl_so_build_dir)

test('tggsl-introspection-basic', python,
  workdir: meson.current_source_dir(),
  depends: [ libgigsl_gir ],
  env: introsp_test_env,
  args: ['test-basic.py', ],
)

