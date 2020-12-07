
libgigsl_sources = [
  'gigsl.h',
  'gigsl-block.h',
  'gigsl-block-double.h',
  'gigsl-block-double.c',
  'gigsl-vector.h',
  'gigsl-vector.c',
  ]

#libggsl_gir_sources += libggsl_headers
libgigsl_sources = libgigsl_sources

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

