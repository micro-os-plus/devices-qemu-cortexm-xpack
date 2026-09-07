# -----------------------------------------------------------------------------
# DO NOT EDIT! Automatically generated from template file:
# xcdl-package.jsonc
#
# This file is part of the µOS++ project (https://micro-os-plus.github.io/).
# Copyright (c) 2022-2026 Liviu Ionescu. All rights reserved.
#
# Permission to use, copy, modify, and/or distribute this software for any
# purpose is hereby granted, under the terms of the MIT license.
#
# If a copy of the license was not distributed with this file, it can be
# obtained from https://opensource.org/licenses/mit.
#
# -----------------------------------------------------------------------------

# This file is intended to be used by applications via:
#
# `subdir('xpacks/@micro-os-plus/devices-qemu-cortexm')`
#
# This creates dependencies that can be linked to a target with:
#
# `dependencies: [micro_os_plus_devices_qemu_cortexm_dependency],`
# `dependencies: [micro_os_plus_devices_qemu_cortexm_vectors_generic_dependency],`
# `dependencies: [micro_os_plus_devices_qemu_cortexm_vectors_mps2_an385_dependency],`
# `dependencies: [micro_os_plus_devices_qemu_cortexm_vectors_mps2_an386_dependency],`
# `dependencies: [micro_os_plus_devices_qemu_cortexm_vectors_mps2_an500_dependency],`
# `dependencies: [micro_os_plus_devices_qemu_cortexm_vectors_mps2_an505_dependency],`

# Note: the Meson configuration is provided only as a proof of concept;
# for production it might need some refinements.

# -----------------------------------------------------------------------------

# A source code library with the µOS++ QEMU Cortex-M devices support.
message('Processing xpm package @micro-os-plus/devices-qemu-cortexm...')

# -----------------------------------------------------------------------------

# Meson's DSL does not provide introspection methods on dependency objects
# to retrieve their properties after creation. The `_local_*` variables
# therefore serve a dual purpose: populating the dependency object and
# iterating over its components for the `message()` calls at the end.

_local_compile_args = [] # Common C/C++ args.
_local_compile_c_args = [] # C only args.
_local_compile_cpp_args = [] # C++ only args.
_local_include_directories = []
_local_sources = []
_local_compile_definitions = []
_local_dependencies = []
_local_link_args = []
_local_link_with = []

_local_include_directories += [
  'include',
]

_local_sources += [
  'src/system-cortexm.c',
]

_local_dependencies += [
  micro_os_plus_diag_trace_dependency,
  micro_os_plus_architecture_dependency,
  xpack_3rd_party_arm_cmsis_core_cortex_m_dependency,
]

# https://mesonbuild.com/Reference-manual_functions.html#declare_dependency
micro_os_plus_devices_qemu_cortexm_dependency = declare_dependency(
  include_directories: include_directories(_local_include_directories),
  compile_args: _local_compile_args,
  sources: files(_local_sources),
  dependencies: _local_dependencies,
  link_args: _local_link_args,
  link_with: _local_link_with,
)

# Meson dependencies cannot differentiate between C and C++ compile args;
# they are therefore exposed as separate variables alongside the dependency.
micro_os_plus_devices_qemu_cortexm_dependency_compile_c_args = _local_compile_c_args
micro_os_plus_devices_qemu_cortexm_dependency_compile_cpp_args = _local_compile_cpp_args

foreach name : _local_include_directories
  message('+ -I ' + name)
endforeach
foreach name : _local_sources + _local_compile_definitions + _local_compile_args + _local_compile_c_args + _local_compile_cpp_args
  message('+ ' + name)
endforeach
message('> micro_os_plus_devices_qemu_cortexm_dependency')

# -----------------------------------------------------------------------------
# Alias.

_dependency = declare_dependency(
  include_directories: include_directories(_local_include_directories),
  compile_args: _local_compile_args,
  sources: files(_local_sources),
  dependencies: _local_dependencies,
  link_args: _local_link_args,
  link_with: _local_link_with,
)

# Meson dependencies cannot differentiate between C and C++ compile args;
# they are therefore exposed as separate variables alongside the dependency.
_dependency_compile_c_args = _local_compile_c_args
_dependency_compile_cpp_args = _local_compile_cpp_args

foreach name : _local_include_directories
  message('+ -I ' + name)
endforeach
foreach name : _local_sources + _local_compile_definitions + _local_compile_args + _local_compile_c_args + _local_compile_cpp_args
  message('+ ' + name)
endforeach
message('> _dependency')

# -----------------------------------------------------------------------------

_local_compile_args = [] # Common C/C++ args.
_local_compile_c_args = [] # C only args.
_local_compile_cpp_args = [] # C++ only args.
_local_include_directories = []
_local_sources = []
_local_compile_definitions = []
_local_dependencies = []
_local_link_args = []
_local_link_with = []

_local_sources += [
  'src/vectors-generic.c',
]

_local_dependencies += [
  micro_os_plus_architecture_dependency,
]

# https://mesonbuild.com/Reference-manual_functions.html#declare_dependency
micro_os_plus_devices_qemu_cortexm_vectors_generic_dependency = declare_dependency(
  include_directories: include_directories(_local_include_directories),
  compile_args: _local_compile_args,
  sources: files(_local_sources),
  dependencies: _local_dependencies,
  link_args: _local_link_args,
  link_with: _local_link_with,
)

# Meson dependencies cannot differentiate between C and C++ compile args;
# they are therefore exposed as separate variables alongside the dependency.
micro_os_plus_devices_qemu_cortexm_vectors_generic_dependency_compile_c_args = _local_compile_c_args
micro_os_plus_devices_qemu_cortexm_vectors_generic_dependency_compile_cpp_args = _local_compile_cpp_args

foreach name : _local_include_directories
  message('+ -I ' + name)
endforeach
foreach name : _local_sources + _local_compile_definitions + _local_compile_args + _local_compile_c_args + _local_compile_cpp_args
  message('+ ' + name)
endforeach
message('> micro_os_plus_devices_qemu_cortexm_vectors_generic_dependency')

# -----------------------------------------------------------------------------

_local_compile_args = [] # Common C/C++ args.
_local_compile_c_args = [] # C only args.
_local_compile_cpp_args = [] # C++ only args.
_local_include_directories = []
_local_sources = []
_local_compile_definitions = []
_local_dependencies = []
_local_link_args = []
_local_link_with = []

_local_sources += [
  'src/vectors-mps2-an385.c',
]

_local_dependencies += [
  micro_os_plus_architecture_dependency,
]

# https://mesonbuild.com/Reference-manual_functions.html#declare_dependency
micro_os_plus_devices_qemu_cortexm_vectors_mps2_an385_dependency = declare_dependency(
  include_directories: include_directories(_local_include_directories),
  compile_args: _local_compile_args,
  sources: files(_local_sources),
  dependencies: _local_dependencies,
  link_args: _local_link_args,
  link_with: _local_link_with,
)

# Meson dependencies cannot differentiate between C and C++ compile args;
# they are therefore exposed as separate variables alongside the dependency.
micro_os_plus_devices_qemu_cortexm_vectors_mps2_an385_dependency_compile_c_args = _local_compile_c_args
micro_os_plus_devices_qemu_cortexm_vectors_mps2_an385_dependency_compile_cpp_args = _local_compile_cpp_args

foreach name : _local_include_directories
  message('+ -I ' + name)
endforeach
foreach name : _local_sources + _local_compile_definitions + _local_compile_args + _local_compile_c_args + _local_compile_cpp_args
  message('+ ' + name)
endforeach
message('> micro_os_plus_devices_qemu_cortexm_vectors_mps2_an385_dependency')

# -----------------------------------------------------------------------------

_local_compile_args = [] # Common C/C++ args.
_local_compile_c_args = [] # C only args.
_local_compile_cpp_args = [] # C++ only args.
_local_include_directories = []
_local_sources = []
_local_compile_definitions = []
_local_dependencies = []
_local_link_args = []
_local_link_with = []

_local_sources += [
  'src/vectors-mps2-an386.c',
]

_local_dependencies += [
  micro_os_plus_architecture_dependency,
]

# https://mesonbuild.com/Reference-manual_functions.html#declare_dependency
micro_os_plus_devices_qemu_cortexm_vectors_mps2_an386_dependency = declare_dependency(
  include_directories: include_directories(_local_include_directories),
  compile_args: _local_compile_args,
  sources: files(_local_sources),
  dependencies: _local_dependencies,
  link_args: _local_link_args,
  link_with: _local_link_with,
)

# Meson dependencies cannot differentiate between C and C++ compile args;
# they are therefore exposed as separate variables alongside the dependency.
micro_os_plus_devices_qemu_cortexm_vectors_mps2_an386_dependency_compile_c_args = _local_compile_c_args
micro_os_plus_devices_qemu_cortexm_vectors_mps2_an386_dependency_compile_cpp_args = _local_compile_cpp_args

foreach name : _local_include_directories
  message('+ -I ' + name)
endforeach
foreach name : _local_sources + _local_compile_definitions + _local_compile_args + _local_compile_c_args + _local_compile_cpp_args
  message('+ ' + name)
endforeach
message('> micro_os_plus_devices_qemu_cortexm_vectors_mps2_an386_dependency')

# -----------------------------------------------------------------------------

_local_compile_args = [] # Common C/C++ args.
_local_compile_c_args = [] # C only args.
_local_compile_cpp_args = [] # C++ only args.
_local_include_directories = []
_local_sources = []
_local_compile_definitions = []
_local_dependencies = []
_local_link_args = []
_local_link_with = []

_local_sources += [
  'src/vectors-mps2-an500.c',
]

_local_dependencies += [
  micro_os_plus_architecture_dependency,
]

# https://mesonbuild.com/Reference-manual_functions.html#declare_dependency
micro_os_plus_devices_qemu_cortexm_vectors_mps2_an500_dependency = declare_dependency(
  include_directories: include_directories(_local_include_directories),
  compile_args: _local_compile_args,
  sources: files(_local_sources),
  dependencies: _local_dependencies,
  link_args: _local_link_args,
  link_with: _local_link_with,
)

# Meson dependencies cannot differentiate between C and C++ compile args;
# they are therefore exposed as separate variables alongside the dependency.
micro_os_plus_devices_qemu_cortexm_vectors_mps2_an500_dependency_compile_c_args = _local_compile_c_args
micro_os_plus_devices_qemu_cortexm_vectors_mps2_an500_dependency_compile_cpp_args = _local_compile_cpp_args

foreach name : _local_include_directories
  message('+ -I ' + name)
endforeach
foreach name : _local_sources + _local_compile_definitions + _local_compile_args + _local_compile_c_args + _local_compile_cpp_args
  message('+ ' + name)
endforeach
message('> micro_os_plus_devices_qemu_cortexm_vectors_mps2_an500_dependency')

# -----------------------------------------------------------------------------

_local_compile_args = [] # Common C/C++ args.
_local_compile_c_args = [] # C only args.
_local_compile_cpp_args = [] # C++ only args.
_local_include_directories = []
_local_sources = []
_local_compile_definitions = []
_local_dependencies = []
_local_link_args = []
_local_link_with = []

_local_sources += [
  'src/vectors-mps2-an505.c',
]

_local_dependencies += [
  micro_os_plus_architecture_dependency,
]

# https://mesonbuild.com/Reference-manual_functions.html#declare_dependency
micro_os_plus_devices_qemu_cortexm_vectors_mps2_an505_dependency = declare_dependency(
  include_directories: include_directories(_local_include_directories),
  compile_args: _local_compile_args,
  sources: files(_local_sources),
  dependencies: _local_dependencies,
  link_args: _local_link_args,
  link_with: _local_link_with,
)

# Meson dependencies cannot differentiate between C and C++ compile args;
# they are therefore exposed as separate variables alongside the dependency.
micro_os_plus_devices_qemu_cortexm_vectors_mps2_an505_dependency_compile_c_args = _local_compile_c_args
micro_os_plus_devices_qemu_cortexm_vectors_mps2_an505_dependency_compile_cpp_args = _local_compile_cpp_args

foreach name : _local_include_directories
  message('+ -I ' + name)
endforeach
foreach name : _local_sources + _local_compile_definitions + _local_compile_args + _local_compile_c_args + _local_compile_cpp_args
  message('+ ' + name)
endforeach
message('> micro_os_plus_devices_qemu_cortexm_vectors_mps2_an505_dependency')

# -----------------------------------------------------------------------------
