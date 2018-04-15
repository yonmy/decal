# Defines functions and macros useful for building Decal test

macro(fix_default_compiler_settings_)
	if (MSVC)
		# For MSVC, CMake sets certain flags to defaults we want to override.
		# This replacement code is taken from sample in the CMake Wiki at
		# http://www.cmake.org/Wiki/CMake_FAQ#Dynamic_Replace.
		foreach (flag_var
				 CMAKE_CXX_FLAGS CMAKE_CXX_FLAGS_DEBUG CMAKE_CXX_FLAGS_RELEASE
				 CMAKE_CXX_FLAGS_MINSIZEREL CMAKE_CXX_FLAGS_RELWITHDEBINFO)
		  string(REPLACE "/MD" "/MT" ${flag_var} "${${flag_var}}")

		  # We prefer more strict warning checking for building Google Test.
		  # Replaces /W3 with /W4 in defaults.
		  string(REPLACE "/W3" "/W4" ${flag_var} "${${flag_var}}")
		endforeach()
	endif()
endmacro()

macro(config_compiler_and_linker)
	fix_default_compiler_settings_()
endmacro()
