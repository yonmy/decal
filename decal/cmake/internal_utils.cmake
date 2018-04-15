# Defines functions and macros useful for building Decal test

macro(fix_default_compiler_settings_)
	if (MSVC)
	endif()
endmacro()

macro(config_compiler_and_linker)
	fix_default_compiler_settings_()
endmacro()
