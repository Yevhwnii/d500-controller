# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\appD500Controller_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\appD500Controller_autogen.dir\\ParseCache.txt"
  "appD500Controller_autogen"
  )
endif()
