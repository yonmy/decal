# CMakeList.txt : CMake project for decal-test, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)
project (decaltest)

# Define helper functions and macros used by decal-test
include (cmake/internal_utils.cmake)

# TODO: Add tests and install targets if needed.
config_compiler_and_linker()

# Add source to this project's executable.
add_executable (decaltest "decaltest.cpp" "decaltest.h" "decaltest-all.cpp")

# include_directories
include_directories ("${CMAKE_CURRENT_SOURCE_DIR}")
include_directories ("${CMAKE_SOURCE_DIR}")
include_directories ("${CMAKE_SOURCE_DIR}/thirdparty/googletest/googletest/include")

target_link_libraries (decaltest gtest)

set_target_properties (decaltest PROPERTIES
    CXX_STANDARD 17
    CXX_STANDARD_REQUIRED ON
    CXX_EXTENSIONS OFF
)
