introsp_test_env = environment()
introsp_test_env.set('GI_TYPELIB_PATH', libgigsl_so_build_dir)
introsp_test_env.set('LD_LIBRARY_PATH', libgigsl_so_build_dir)

gigsl_tests = [
  ['test-basic'],
  ['test-block-double'],
#  ['test-matrix'],
]

foreach t: gigsl_tests
  test_name = t.get(0)
  test_srcs = ['@0@.py'.format(test_name), t.get(1, [])]
  test('tggsl-'+test_name, python,
    workdir: meson.current_source_dir(),
    depends: [ libgigsl_gir ],
    env: introsp_test_env,
    args: test_srcs,
  )
endforeach


