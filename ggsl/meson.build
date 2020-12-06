
libggsl_sources = [
  'ggsl.h',
  'ggsl-block.h',
  'ggsl-block.c',
  'ggsl-vector.h',
  'ggsl-vector.c',
  ]

#libggsl_gir_sources += libggsl_headers
libggsl_gir_sources = libggsl_sources

libggsl = library(
  'ggsl',
  libggsl_sources, #+ libggsl_private_headers +
#  [ config_header ],
  pic: true,
#  include_directories: [ root_inc ],
#  version: libversion,
  dependencies : [ gobject, gsl, gio ],
#  link_whole: [ libggslcomplex, libggslblock, libggslvector, libggslmatrix ],
  install : true,
)

libggsl_dep = declare_dependency(
    link_with : libggsl,
#    include_directories : [ root_inc, src_inc ],
    dependencies : [gobject, gsl ],
)

if introspection_available
  libggsl_gir = gnome.generate_gir(libggsl,
    sources: libggsl_gir_sources,
    nsversion: apiversion,
    namespace: 'LibGgsl',
    symbol_prefix: 'ggsl',
    identifier_prefix: 'Ggsl',
#    link_with: libggsl,
#    link_with: [libggslcomplex, libggslblock, libggslvector],
    includes: ['Gio-2.0', 'Gtk-3.0'],
    install: true,
    install_dir_gir: girdir,
    install_dir_typelib: typelibdir,
    header: 'libggsl.h',
    fatal_warnings: true,
    extra_args: [ '--c-include=src/libggsl.h', '--pkg-export=libggsl-1.0',
                  '--quiet' ],
#    extra_args: [ '--verbose', '--warn-error', '--cflags-begin', '-fdump-tree-all', '--cflags-end' ],

  )

endif

