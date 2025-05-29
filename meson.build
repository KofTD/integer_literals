project(
  'integer_literals',
  'cpp',
  version: '0.1.0',
  meson_version: '>= 1.3.0',
  default_options: ['warning_level=3'],
)

lib = static_library(
  'integer_literals',
  'integer_literals.cpp',
)

integer_literals_dep = declare_dependency(
  include_directories: include_directories('.'),
  link_with: lib,
)

meson.override_dependency('integer_literals', integer_literals_dep)
