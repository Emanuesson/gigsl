project('gsl-gir', 'c',
  license : 'GPLv2+',
  version : '0.2.0',
  meson_version : '>=0.55',
  default_options : [ 'warning_level=3',
                      'buildtype=debugoptimized',
                      'c_std=gnu11',
                      ],
)

cc = meson.get_compiler('c')

gnome = import('gnome')
pkg = import('pkgconfig')

gsl = dependency('gsl', version : '>= 2.0')
gobject = dependency('gobject-2.0', version : '>= 2.38.0')
gio = dependency('gio-2.0', version : '>= 2.32.0')

gir = find_program('g-ir-scanner', required: false)

introspection_available = gir.found() and get_option('introspection')

pymod = import('python')
python = pymod.find_installation(get_option('python'))

prefix = get_option('prefix')
includedir = join_paths(prefix, get_option('includedir'))
package_subdir = get_option('package_subdir') # When used as subproject
libdir = join_paths(get_option('libdir'))
girdir = join_paths(get_option('datadir'), 'gir-1.0')
typelibdir = join_paths(get_option('libdir'), 'girepository-1.0')

root_inc = include_directories('.')
src_inc = include_directories('gigsl')
top_build_dir = meson.current_build_dir()
build_inc = include_directories('./build')

version_arr = meson.project_version().split('.')
gigsl_version_major = version_arr[0].to_int()
gigsl_version_minor = version_arr[1].to_int()
gigsl_version_micro = version_arr[2].to_int()

apiversion = '0.2'
soversion = 0

if gigsl_version_minor.is_odd()
  gigsl_interface_age = 0
else
  gigsl_interface_age = gigsl_version_micro
endif

current = gigsl_version_minor * 100 + gigsl_version_micro - gigsl_interface_age
revision = gigsl_interface_age
libversion = '@0@.@1@.@2@'.format(soversion, current, revision)
pkgvapidir = join_paths(get_option('datadir'), 'gnome-builder/vapi')

# TODO: create a meaningful config header

subdir('gigsl')

if get_option('enable_tests')
  libgigsl_so_build_dir = join_paths(meson.current_build_dir(), 'gigsl')
  subdir('test')
endif


