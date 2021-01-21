libgigsl_header_subdir = join_paths(package_subdir, 'gigsl')

libgigsl_sources = [
]

libgigsl_headers = [
  'gigsl.h',
  'gigsl-block.h',
  'gigsl-vector.h',
  'gigsl-matrix.h',
]

gigsl_double_cdata = configuration_data()
gigsl_double_cdata.set('CTYPE', 'double')
gigsl_double_cdata.set('ABBR_CTYPE', 'double')
gigsl_double_cdata.set('CAMEL_TYPE', 'Double')
gigsl_double_cdata.set('CAPITOL_TYPE', 'DOUBLE')
gigsl_double_cdata.set('GSLAFFIX', '')
gigsl_double_cdata.set('GLIB_STRUCT_AFFIX', '')
gigsl_double_cdata.set('GLIB_MACRO_AFFIX', '')
gigsl_double_cdata.set('GLIB_TYPE', 'gdouble')

gigsl_float_cdata = configuration_data()
gigsl_float_cdata.set('CTYPE', 'float')
gigsl_float_cdata.set('ABBR_CTYPE', 'float')
gigsl_float_cdata.set('CAMEL_TYPE', 'Float')
gigsl_float_cdata.set('CAPITOL_TYPE', 'FLOAT')
gigsl_float_cdata.set('GSLAFFIX', '_float')
gigsl_float_cdata.set('GLIB_STRUCT_AFFIX', 'Float')
gigsl_float_cdata.set('GLIB_MACRO_AFFIX', '_FLOTA')
gigsl_float_cdata.set('GLIB_TYPE', 'gfloat')

gigsl_ulong_cdata = configuration_data()
gigsl_ulong_cdata.set('CTYPE', 'unsigned long')
gigsl_ulong_cdata.set('ABBR_CTYPE', 'ulong')
gigsl_ulong_cdata.set('CAMEL_TYPE', 'Ulong')
gigsl_ulong_cdata.set('CAPITOL_TYPE', 'ULONG')
gigsl_ulong_cdata.set('GSLAFFIX', '_ulong')
gigsl_ulong_cdata.set('GLIB_STRUCT_AFFIX', 'Ulong')
gigsl_ulong_cdata.set('GLIB_MACRO_AFFIX', '_ULONG')
gigsl_ulong_cdata.set('GLIB_TYPE', 'gulong')

gigsl_long_cdata = configuration_data()
gigsl_long_cdata.set('CTYPE', 'long')
gigsl_long_cdata.set('ABBR_CTYPE', 'long')
gigsl_long_cdata.set('CAMEL_TYPE', 'Long')
gigsl_long_cdata.set('CAPITOL_TYPE', 'LONG')
gigsl_long_cdata.set('GSLAFFIX', '_long')
gigsl_long_cdata.set('GLIB_STRUCT_AFFIX', 'Long')
gigsl_long_cdata.set('GLIB_MACRO_AFFIX', '_LONG')
gigsl_long_cdata.set('GLIB_TYPE', 'glong')

gigsl_uint_cdata = configuration_data()
gigsl_uint_cdata.set('CTYPE', 'unsigned int')
gigsl_uint_cdata.set('ABBR_CTYPE', 'uint')
gigsl_uint_cdata.set('CAMEL_TYPE', 'Uint')
gigsl_uint_cdata.set('CAPITOL_TYPE', 'UINT')
gigsl_uint_cdata.set('GSLAFFIX', '_uint')
gigsl_uint_cdata.set('GLIB_STRUCT_AFFIX', 'Uint')
gigsl_uint_cdata.set('GLIB_MACRO_AFFIX', '_UINT')
gigsl_uint_cdata.set('GLIB_TYPE', 'guint')

gigsl_int_cdata = configuration_data()
gigsl_int_cdata.set('CTYPE', 'int')
gigsl_int_cdata.set('ABBR_CTYPE', 'int')
gigsl_int_cdata.set('CAMEL_TYPE', 'Int')
gigsl_int_cdata.set('CAPITOL_TYPE', 'INT')
gigsl_int_cdata.set('GSLAFFIX', '_int')
gigsl_int_cdata.set('GLIB_STRUCT_AFFIX', 'Int')
gigsl_int_cdata.set('GLIB_MACRO_AFFIX', '_INT')
gigsl_int_cdata.set('GLIB_TYPE', 'gint')

gigsl_ushort_cdata = configuration_data()
gigsl_ushort_cdata.set('CTYPE', 'unsigned short')
gigsl_ushort_cdata.set('ABBR_CTYPE', 'ushort')
gigsl_ushort_cdata.set('CAMEL_TYPE', 'Ushort')
gigsl_ushort_cdata.set('CAPITOL_TYPE', 'USHORT')
gigsl_ushort_cdata.set('GSLAFFIX', '_ushort')
gigsl_ushort_cdata.set('GLIB_STRUCT_AFFIX', 'Ushort')
gigsl_ushort_cdata.set('GLIB_MACRO_AFFIX', '_USHORT')
gigsl_ushort_cdata.set('GLIB_TYPE', 'gushort')

gigsl_short_cdata = configuration_data()
gigsl_short_cdata.set('CTYPE', 'short')
gigsl_short_cdata.set('ABBR_CTYPE', 'short')
gigsl_short_cdata.set('CAMEL_TYPE', 'Short')
gigsl_short_cdata.set('CAPITOL_TYPE', 'SHORT')
gigsl_short_cdata.set('GSLAFFIX', '_short')
gigsl_short_cdata.set('GLIB_STRUCT_AFFIX', 'Short')
gigsl_short_cdata.set('GLIB_MACRO_AFFIX', '_SHORT')
gigsl_short_cdata.set('GLIB_TYPE', 'gshort')

gigsl_uchar_cdata = configuration_data()
gigsl_uchar_cdata.set('CTYPE', 'unsigned char')
gigsl_uchar_cdata.set('ABBR_CTYPE', 'uchar')
gigsl_uchar_cdata.set('CAMEL_TYPE', 'Uchar')
gigsl_uchar_cdata.set('CAPITOL_TYPE', 'UCHAR')
gigsl_uchar_cdata.set('GSLAFFIX', '_uchar')
gigsl_uchar_cdata.set('GLIB_STRUCT_AFFIX', 'Uchar')
gigsl_uchar_cdata.set('GLIB_MACRO_AFFIX', '_UCHAR')
gigsl_uchar_cdata.set('GLIB_TYPE', 'guchar')

gigsl_char_cdata = configuration_data()
gigsl_char_cdata.set('CTYPE', 'char')
gigsl_char_cdata.set('ABBR_CTYPE', 'char')
gigsl_char_cdata.set('CAMEL_TYPE', 'Char')
gigsl_char_cdata.set('CAPITOL_TYPE', 'CHAR')
gigsl_char_cdata.set('GSLAFFIX', '_char')
gigsl_char_cdata.set('GLIB_STRUCT_AFFIX', 'Char')
gigsl_char_cdata.set('GLIB_MACRO_AFFIX', '_CHAR')
gigsl_char_cdata.set('GLIB_TYPE', 'gchar')

gigslblockdouble_header = configure_file(input: 'gigsl-block.h.in',
                 output: 'gigsl-block-double.h',
                 configuration: gigsl_double_cdata,)
gigslblockdouble_source = configure_file(input: 'gigsl-block.c.in',
                 output: 'gigsl-block-double.c',
                 configuration: gigsl_double_cdata)

gigslblockfloat_header = configure_file(input: 'gigsl-block.h.in',
                 output: 'gigsl-block-float.h',
                 configuration: gigsl_float_cdata,)
gigslblockfloat_source = configure_file(input: 'gigsl-block.c.in',
                 output: 'gigsl-block-float.c',
                 configuration: gigsl_float_cdata)

gigslblockulong_header = configure_file(input: 'gigsl-block.h.in',
                 output: 'gigsl-block-ulong.h',
                 configuration: gigsl_ulong_cdata,)
gigslblockulong_source = configure_file(input: 'gigsl-block.c.in',
                 output: 'gigsl-block-ulong.c',
                 configuration: gigsl_ulong_cdata)

gigslblocklong_header = configure_file(input: 'gigsl-block.h.in',
                 output: 'gigsl-block-long.h',
                 configuration: gigsl_long_cdata,)
gigslblocklong_source = configure_file(input: 'gigsl-block.c.in',
                 output: 'gigsl-block-long.c',
                 configuration: gigsl_long_cdata)

gigslblockuint_header = configure_file(input: 'gigsl-block.h.in',
                 output: 'gigsl-block-uint.h',
                 configuration: gigsl_uint_cdata,)
gigslblockuint_source = configure_file(input: 'gigsl-block.c.in',
                 output: 'gigsl-block-uint.c',
                 configuration: gigsl_uint_cdata)

gigslblockint_header = configure_file(input: 'gigsl-block.h.in',
                 output: 'gigsl-block-int.h',
                 configuration: gigsl_int_cdata,)
gigslblockint_source = configure_file(input: 'gigsl-block.c.in',
                 output: 'gigsl-block-int.c',
                 configuration: gigsl_int_cdata)

gigslblockushort_header = configure_file(input: 'gigsl-block.h.in',
                 output: 'gigsl-block-ushort.h',
                 configuration: gigsl_ushort_cdata,)
gigslblockushort_source = configure_file(input: 'gigsl-block.c.in',
                 output: 'gigsl-block-ushort.c',
                 configuration: gigsl_ushort_cdata)

gigslblockshort_header = configure_file(input: 'gigsl-block.h.in',
                 output: 'gigsl-block-short.h',
                 configuration: gigsl_short_cdata,)
gigslblockshort_source = configure_file(input: 'gigsl-block.c.in',
                 output: 'gigsl-block-short.c',
                 configuration: gigsl_short_cdata)

gigslblockuchar_header = configure_file(input: 'gigsl-block.h.in',
                 output: 'gigsl-block-uchar.h',
                 configuration: gigsl_uchar_cdata,)
gigslblockuchar_source = configure_file(input: 'gigsl-block.c.in',
                 output: 'gigsl-block-uchar.c',
                 configuration: gigsl_uchar_cdata)

gigslblockchar_header = configure_file(input: 'gigsl-block.h.in',
                 output: 'gigsl-block-char.h',
                 configuration: gigsl_char_cdata,)
gigslblockchar_source = configure_file(input: 'gigsl-block.c.in',
                 output: 'gigsl-block-char.c',
                 configuration: gigsl_char_cdata)

gen_block_sources = [
  gigslblockdouble_source,
  gigslblockfloat_source,
  gigslblockulong_source,
  gigslblocklong_source,
  gigslblockuint_source,
  gigslblockint_source,
  gigslblockushort_source,
  gigslblockshort_source,
  gigslblockuchar_source,
  gigslblockchar_source,
]

gen_block_headers = [
  gigslblockdouble_header,
  gigslblockfloat_header,
  gigslblockulong_header,
  gigslblocklong_header,
  gigslblockuint_header,
  gigslblockint_header,
  gigslblockushort_header,
  gigslblockshort_header,
  gigslblockuchar_header,
  gigslblockchar_header,
]

gigslvectordouble_header = configure_file(input: 'gigsl-vector.h.in',
                 output: 'gigsl-vector-double.h',
                 configuration: gigsl_double_cdata,)
gigslvectordouble_source = configure_file(input: 'gigsl-vector.c.in',
                 output: 'gigsl-vector-double.c',
                 configuration: gigsl_double_cdata)

gigslvectorfloat_header = configure_file(input: 'gigsl-vector.h.in',
                 output: 'gigsl-vector-float.h',
                 configuration: gigsl_float_cdata,)
gigslvectorfloat_source = configure_file(input: 'gigsl-vector.c.in',
                 output: 'gigsl-vector-float.c',
                 configuration: gigsl_float_cdata)

gigslvectorulong_header = configure_file(input: 'gigsl-vector.h.in',
                 output: 'gigsl-vector-ulong.h',
                 configuration: gigsl_ulong_cdata,)
gigslvectorulong_source = configure_file(input: 'gigsl-vector.c.in',
                 output: 'gigsl-vector-ulong.c',
                 configuration: gigsl_ulong_cdata)

gigslvectorlong_header = configure_file(input: 'gigsl-vector.h.in',
                 output: 'gigsl-vector-long.h',
                 configuration: gigsl_long_cdata,)
gigslvectorlong_source = configure_file(input: 'gigsl-vector.c.in',
                 output: 'gigsl-vector-long.c',
                 configuration: gigsl_long_cdata)

gigslvectoruint_header = configure_file(input: 'gigsl-vector.h.in',
                 output: 'gigsl-vector-uint.h',
                 configuration: gigsl_uint_cdata,)
gigslvectoruint_source = configure_file(input: 'gigsl-vector.c.in',
                 output: 'gigsl-vector-uint.c',
                 configuration: gigsl_uint_cdata)

gigslvectorint_header = configure_file(input: 'gigsl-vector.h.in',
                 output: 'gigsl-vector-int.h',
                 configuration: gigsl_int_cdata,)
gigslvectorint_source = configure_file(input: 'gigsl-vector.c.in',
                 output: 'gigsl-vector-int.c',
                 configuration: gigsl_int_cdata)

gigslvectorushort_header = configure_file(input: 'gigsl-vector.h.in',
                 output: 'gigsl-vector-ushort.h',
                 configuration: gigsl_ushort_cdata,)
gigslvectorushort_source = configure_file(input: 'gigsl-vector.c.in',
                 output: 'gigsl-vector-ushort.c',
                 configuration: gigsl_ushort_cdata)

gigslvectorshort_header = configure_file(input: 'gigsl-vector.h.in',
                 output: 'gigsl-vector-short.h',
                 configuration: gigsl_short_cdata,)
gigslvectorshort_source = configure_file(input: 'gigsl-vector.c.in',
                 output: 'gigsl-vector-short.c',
                 configuration: gigsl_short_cdata)

gigslvectoruchar_header = configure_file(input: 'gigsl-vector.h.in',
                 output: 'gigsl-vector-uchar.h',
                 configuration: gigsl_uchar_cdata,)
gigslvectoruchar_source = configure_file(input: 'gigsl-vector.c.in',
                 output: 'gigsl-vector-uchar.c',
                 configuration: gigsl_uchar_cdata)

gigslvectorchar_header = configure_file(input: 'gigsl-vector.h.in',
                 output: 'gigsl-vector-char.h',
                 configuration: gigsl_char_cdata,)
gigslvectorchar_source = configure_file(input: 'gigsl-vector.c.in',
                 output: 'gigsl-vector-char.c',
                 configuration: gigsl_char_cdata)

gen_vector_sources = [
  gigslvectordouble_source,
  gigslvectorfloat_source,
  gigslvectorulong_source,
  gigslvectorlong_source,
  gigslvectoruint_source,
  gigslvectorint_source,
  gigslvectorushort_source,
  gigslvectorshort_source,
  gigslvectoruchar_source,
  gigslvectorchar_source,
]

gen_vector_headers = [
  gigslvectordouble_header,
  gigslvectorfloat_header,
  gigslvectorulong_header,
  gigslvectorlong_header,
  gigslvectoruint_header,
  gigslvectorint_header,
  gigslvectorushort_header,
  gigslvectorshort_header,
  gigslvectoruchar_header,
  gigslvectorchar_header,
]

gigslmatrixdouble_header = configure_file(input: 'gigsl-matrix.h.in',
                 output: 'gigsl-matrix-double.h',
                 configuration: gigsl_double_cdata,)
gigslmatrixdouble_source = configure_file(input: 'gigsl-matrix.c.in',
                 output: 'gigsl-matrix-double.c',
                 configuration: gigsl_double_cdata)

gigslmatrixfloat_header = configure_file(input: 'gigsl-matrix.h.in',
                 output: 'gigsl-matrix-float.h',
                 configuration: gigsl_float_cdata,)
gigslmatrixfloat_source = configure_file(input: 'gigsl-matrix.c.in',
                 output: 'gigsl-matrix-float.c',
                 configuration: gigsl_float_cdata)

gigslmatrixulong_header = configure_file(input: 'gigsl-matrix.h.in',
                 output: 'gigsl-matrix-ulong.h',
                 configuration: gigsl_ulong_cdata,)
gigslmatrixulong_source = configure_file(input: 'gigsl-matrix.c.in',
                 output: 'gigsl-matrix-ulong.c',
                 configuration: gigsl_ulong_cdata)

gigslmatrixlong_header = configure_file(input: 'gigsl-matrix.h.in',
                 output: 'gigsl-matrix-long.h',
                 configuration: gigsl_long_cdata,)
gigslmatrixlong_source = configure_file(input: 'gigsl-matrix.c.in',
                 output: 'gigsl-matrix-long.c',
                 configuration: gigsl_long_cdata)

gigslmatrixuint_header = configure_file(input: 'gigsl-matrix.h.in',
                 output: 'gigsl-matrix-uint.h',
                 configuration: gigsl_uint_cdata,)
gigslmatrixuint_source = configure_file(input: 'gigsl-matrix.c.in',
                 output: 'gigsl-matrix-uint.c',
                 configuration: gigsl_uint_cdata)

gigslmatrixint_header = configure_file(input: 'gigsl-matrix.h.in',
                 output: 'gigsl-matrix-int.h',
                 configuration: gigsl_int_cdata,)
gigslmatrixint_source = configure_file(input: 'gigsl-matrix.c.in',
                 output: 'gigsl-matrix-int.c',
                 configuration: gigsl_int_cdata)

gigslmatrixushort_header = configure_file(input: 'gigsl-matrix.h.in',
                 output: 'gigsl-matrix-ushort.h',
                 configuration: gigsl_ushort_cdata,)
gigslmatrixushort_source = configure_file(input: 'gigsl-matrix.c.in',
                 output: 'gigsl-matrix-ushort.c',
                 configuration: gigsl_ushort_cdata)

gigslmatrixshort_header = configure_file(input: 'gigsl-matrix.h.in',
                 output: 'gigsl-matrix-short.h',
                 configuration: gigsl_short_cdata,)
gigslmatrixshort_source = configure_file(input: 'gigsl-matrix.c.in',
                 output: 'gigsl-matrix-short.c',
                 configuration: gigsl_short_cdata)

gigslmatrixuchar_header = configure_file(input: 'gigsl-matrix.h.in',
                 output: 'gigsl-matrix-uchar.h',
                 configuration: gigsl_uchar_cdata,)
gigslmatrixuchar_source = configure_file(input: 'gigsl-matrix.c.in',
                 output: 'gigsl-matrix-uchar.c',
                 configuration: gigsl_uchar_cdata)

gigslmatrixchar_header = configure_file(input: 'gigsl-matrix.h.in',
                 output: 'gigsl-matrix-char.h',
                 configuration: gigsl_char_cdata,)
gigslmatrixchar_source = configure_file(input: 'gigsl-matrix.c.in',
                 output: 'gigsl-matrix-char.c',
                 configuration: gigsl_char_cdata)

gen_matrix_sources = [
  gigslmatrixdouble_source,
  gigslmatrixfloat_source,
  gigslmatrixulong_source,
  gigslmatrixlong_source,
  gigslmatrixuint_source,
  gigslmatrixint_source,
  gigslmatrixushort_source,
  gigslmatrixshort_source,
  gigslmatrixuchar_source,
  gigslmatrixchar_source,
]

gen_matrix_headers = [
  gigslmatrixdouble_header,
  gigslmatrixfloat_header,
  gigslmatrixulong_header,
  gigslmatrixlong_header,
  gigslmatrixuint_header,
  gigslmatrixint_header,
  gigslmatrixushort_header,
  gigslmatrixshort_header,
  gigslmatrixuchar_header,
  gigslmatrixchar_header,
]

gen_sources = [
  gen_block_sources,
  gen_vector_sources,
  gen_matrix_sources,
]

gen_headers = [
  gen_block_headers,
  gen_vector_headers,
  gen_matrix_headers,
]

libgigsl_sources += gen_sources
libgigsl_headers += gen_headers
libgigsl_sources += libgigsl_headers

install_headers(libgigsl_headers, subdir: libgigsl_header_subdir)

libgigsl = library(
  'gigsl',
  libgigsl_sources, #+ libggsl_private_headers +
  pic: true,
  dependencies : [ gobject, gsl, gio ],
  install : true,
  implicit_include_directories: true,
  include_directories: [ gigsl_root_inc ],
)

libgigsl_dep = declare_dependency(
  link_with : libgigsl,
  include_directories : [ gigsl_root_inc ],
  dependencies : [gobject, gsl ],
)

# TODO: remove "GIR_SCANNER" for installed headers
if introspection_available
  libgigsl_gir = gnome.generate_gir(libgigsl,
    sources: libgigsl_sources,
    nsversion: apiversion,
    namespace: 'LibGsl',
    symbol_prefix: 'gsl',
    identifier_prefix: 'Gsl',
    link_with: libgigsl,
    includes: ['Gio-2.0', ],
    install: true,
    include_directories: [ gigsl_root_inc, gigsl_src_inc ],
    install_dir_gir: girdir,
    install_dir_typelib: typelibdir,
    header: 'gigsl/ggsl.h',
    fatal_warnings: true,
    extra_args: [ '--pkg-export=libgigsl-1.0',
                  '--quiet',
                  '-DGIR_SCANNER'
                   ],
#    extra_args: [ '--verbose', '--warn-error', '--cflags-begin', '-fdump-tree-all', '--cflags-end' ],
  )
endif

pkgg.generate(
      subdirs: libgigsl_header_subdir,
      version: meson.project_version(),
         name: 'gigsl',
     filebase: 'gigsl',
  description: 'Glib wrapper for the gsl',
     requires: ['gsl', 'gio-2.0', 'glib-2.0'],
  install_dir: join_paths(libdir, 'pkgconfig'),
)

