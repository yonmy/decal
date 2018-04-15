# CMakeList.txt : Top-level CMake project file, do global configuration
# and include sub-projects here.
#
cmake_minimum_required (VERSION 3.8)

project ("decal-all")

# Include thirdparty projects
add_subdirectory ("thirdparty/googletest")

# Include sub projects.
add_subdirectory ("decal")

# Include test projects.
add_subdirectory ("test")
