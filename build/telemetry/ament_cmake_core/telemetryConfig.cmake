# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_telemetry_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED telemetry_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(telemetry_FOUND FALSE)
  elseif(NOT telemetry_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(telemetry_FOUND FALSE)
  endif()
  return()
endif()
set(_telemetry_CONFIG_INCLUDED TRUE)

# output package information
if(NOT telemetry_FIND_QUIETLY)
  message(STATUS "Found telemetry: 0.0.0 (${telemetry_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'telemetry' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT telemetry_DEPRECATED_QUIET)
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(telemetry_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${telemetry_DIR}/${_extra}")
endforeach()
