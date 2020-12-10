
libgigsl_sources = [
  'gigsl.h',
  'gigsl-block.h',
  'gigsl-vector.h',
  ]

#libggsl_gir_sources += libggsl_headers
libgigsl_sources = libgigsl_sources

gigsl_double_cdata = configuration_data()
gigsl_double_cdata.set('CTYPE', 'double')
gigsl_double_cdata.set('ABBR_CTYPE', 'double')
gigsl_double_cdata.set('CAMEL_TYPE', 'Double')
gigsl_double_cdata.set('CAPITOL_TYPE', 'DOUBLE')
gigsl_double_cdata.set('GSLAFFIX', '')
gigsl_double_cdata.set('GLIB_STRUCT_AFFIX', '')
gigsl_double_cdata.set('GLIB_MACRO_AFFIX', '')
gigsl_double_cdata.set('GLIB_TYPE', 'gdouble')

gigsl_int_cdata = configuration_data()
gigsl_int_cdata.set('CTYPE', 'int')
gigsl_int_cdata.set('ABBR_CTYPE', 'int')
gigsl_int_cdata.set('CAMEL_TYPE', 'Int')
gigsl_int_cdata.set('CAPITOL_TYPE', 'INT')
gigsl_int_cdata.set('GSLAFFIX', '_int')
gigsl_int_cdata.set('GLIB_STRUCT_AFFIX', 'Int')
gigsl_int_cdata.set('GLIB_MACRO_AFFIX', '_INT')
gigsl_int_cdata.set('GLIB_TYPE', 'gint')

gigsl_ulong_cdata = configuration_data()
gigsl_ulong_cdata.set('CTYPE', 'unsigned long')
gigsl_ulong_cdata.set('ABBR_CTYPE', 'ulong')
gigsl_ulong_cdata.set('CAMEL_TYPE', 'Ulong')
gigsl_ulong_cdata.set('CAPITOL_TYPE', 'ULONG')
gigsl_ulong_cdata.set('GSLAFFIX', '_ulong')
gigsl_ulong_cdata.set('GLIB_STRUCT_AFFIX', 'Ulong')
gigsl_ulong_cdata.set('GLIB_MACRO_AFFIX', '_ULONG')
gigsl_ulong_cdata.set('GLIB_TYPE', 'gulong')

gigslblockdouble_header = configure_file(input: 'gigsl-block.h.in',
                 output: 'gigsl-block-double.h',
                 configuration: gigsl_double_cdata,)
gigslblockdouble_source = configure_file(input: 'gigsl-block.c.in',
                 output: 'gigsl-block-double.c',
                 configuration: gigsl_double_cdata)

gigslblockint_header = configure_file(input: 'gigsl-block.h.in',
                 output: 'gigsl-block-int.h',
                 configuration: gigsl_int_cdata,)
gigslblockint_source = configure_file(input: 'gigsl-block.c.in',
                 output: 'gigsl-block-int.c',
                 configuration: gigsl_int_cdata)

gigslblockulong_header = configure_file(input: 'gigsl-block.h.in',
                 output: 'gigsl-block-ulong.h',
                 configuration: gigsl_ulong_cdata,)
gigslblockulong_source = configure_file(input: 'gigsl-block.c.in',
                 output: 'gigsl-block-ulong.c',
                 configuration: gigsl_ulong_cdata)

gen_block_files = [
  gigslblockdouble_header,
  gigslblockdouble_source,
  gigslblockint_header,
  gigslblockint_source,
  gigslblockulong_header,
  gigslblockulong_source,
]

gigslvectordouble_header = configure_file(input: 'gigsl-vector.h.in',
                 output: 'gigsl-vector-double.h',
                 configuration: gigsl_double_cdata,)
gigslvectordouble_source = configure_file(input: 'gigsl-vector.c.in',
                 output: 'gigsl-vector-double.c',
                 configuration: gigsl_double_cdata)

gen_vector_files = [
  gigslvectordouble_header,
  gigslvectordouble_source,
]

gen_files = [
  gen_block_files,
  gen_vector_files,
]

libgigsl_sources += gen_files

libgigsl = library(
  'gigsl',
  libgigsl_sources, #+ libggsl_private_headers +
#  [ config_header ],
  pic: true,
#  include_directories: [ root_inc ],
#  version: libversion,
  dependencies : [ gobject, gsl, gio ],
#  link_whole: [ libggslcomplex, libggslblock, libggslvector, libggslmatrix ],
  install : true,
)

libgigsl_dep = declare_dependency(
    link_with : libgigsl,
#    include_directories : [ root_inc, src_inc ],
    dependencies : [gobject, gsl ],
)

if introspection_available
  libgigsl_gir = gnome.generate_gir(libgigsl,
    sources: libgigsl_sources,
    nsversion: apiversion,
    namespace: 'LibGsl',
    symbol_prefix: 'gsl',
    identifier_prefix: 'Gsl',
#    link_with: libggsl,
#    link_with: [libggslcomplex, libggslblock, libggslvector],
    includes: ['Gio-2.0', 'Gtk-3.0'],
    install: true,
    install_dir_gir: girdir,
    install_dir_typelib: typelibdir,
    header: 'ggsl.h',
    fatal_warnings: true,
    extra_args: [ '--c-include=gigsl/ggsl.h', '--pkg-export=libgigsl-1.0',
                  '--quiet' ],
#    extra_args: [ '--verbose', '--warn-error', '--cflags-begin', '-fdump-tree-all', '--cflags-end' ],

  )

endif

