# CMakeList.txt : CMake project for decal, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)
project(decal)

# Define helper functions and macros used by decal
include(cmake/internal_utils.cmake)

# TODO: Add tests and install targets if needed.
config_compiler_and_linker()

# Add source to this project's executable.
ADD_LIBRARY (decal STATIC
	"decal-all.cpp"
)

# include_directories
include_directories ("${CMAKE_CURRENT_SOURCE_DIR}")

# properties
set_target_properties (decal PROPERTIES
    CXX_STANDARD 17
    CXX_STANDARD_REQUIRED ON
    CXX_EXTENSIONS OFF
)

# output
set (LIBRARY_OUTPUT_PATH ${CMAKE_CURRENT_SOURCE_DIR}/../lib/${CMAKE_BUILD_TYPE}/)
