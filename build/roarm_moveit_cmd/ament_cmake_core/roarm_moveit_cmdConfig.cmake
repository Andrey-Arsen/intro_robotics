# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_roarm_moveit_cmd_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED roarm_moveit_cmd_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(roarm_moveit_cmd_FOUND FALSE)
  elseif(NOT roarm_moveit_cmd_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(roarm_moveit_cmd_FOUND FALSE)
  endif()
  return()
endif()
set(_roarm_moveit_cmd_CONFIG_INCLUDED TRUE)

# output package information
if(NOT roarm_moveit_cmd_FIND_QUIETLY)
  message(STATUS "Found roarm_moveit_cmd: 0.1.0 (${roarm_moveit_cmd_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'roarm_moveit_cmd' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${roarm_moveit_cmd_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(roarm_moveit_cmd_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "ament_cmake_export_dependencies-extras.cmake;ament_cmake_export_include_directories-extras.cmake")
foreach(_extra ${_extras})
  include("${roarm_moveit_cmd_DIR}/${_extra}")
endforeach()
