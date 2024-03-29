if get_option('gtk_doc')
  if not meson.version().version_compare('>=0.52.0')
    error('Building the GTK documentation requires Meson 0.52.0')
  endif

  # Use gtk-doc as a sub-project if the version isn't new enough
  dependency('gtk-doc', version: '>=1.32',
    fallback: ['gtk-doc', 'dummy_dep'],
    default_options: ['tests=false'])

  glib_prefix = dependency('glib-2.0').get_pkgconfig_variable('prefix')
  glib_docpath = join_paths(glib_prefix, 'share', 'gtk-doc', 'html')

  docpath = join_paths(gigsl_datadir, 'gtk-doc', 'html')

  version_conf = configuration_data()
  version_conf.set('GIGSL_VERSION', meson.project_version())

  src_dir_conf = configuration_data()
  src_dir_conf.set('SRC_DIR', meson.source_root())

  configure_file(input: 'version.xml.in', output: 'version.xml', configuration: version_conf)

  gnome.gtkdoc('gigsl',
               mode: 'none',
               main_xml: 'gigsl-docs.xml',
               src_dir: [
                 gigsl_src_inc,
               ],
               dependencies: libgigsl_dep,
               mkdb_args: [
                 '--default-includes=gigsl/gigsl.h',
               ],
               fixxref_args: [
                 '--html-dir=@0@'.format(docpath),
                 '--extra-dir=@0@'.format(join_paths(glib_docpath, 'glib')),
                 '--extra-dir=@0@'.format(join_paths(glib_docpath, 'gobject')),
                 '--extra-dir=@0@'.format(join_paths(glib_docpath, 'gio')),
               ],
               install: true)

endif

