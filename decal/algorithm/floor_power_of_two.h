// Decal library for C++
//
// Copyright (c) 2018 YonMy Kim
// All rights reserved.
//
// Author: YonMy Kim (yonmygame@gmail.com / https://yonmy.com)
// File:   floor_power_of_two.h

// Floor power of two
//  - floor a value to the next power of two. 63 becomes 32, 64 stays 64, and so forth.
//  - Warren Jr., Henry S. (2013) [2002]. Hacker's Delight (2 ed.). 
//  - Addison Wesley - Pearson Education, Inc. 
//  - ISBN 978-0-321-84268-8. 0-321-84268-5.

namespace decal
{

#if _MSC_VER

template<class _Ty> inline
_Ty _Floor_power_of_two(_Ty _X, std::integral_constant<std::size_t, (sizeof(_Ty) * 8)>)
	{
	return (_X - (_X >> 1));
	}

#endif

template<class _Ty,
	std::size_t _Index> inline
	_Ty _Floor_power_of_two(_Ty _X, std::integral_constant<std::size_t, _Index>)
	{
#if _MSC_VER
	static_assert(_Index < (sizeof(_Ty) * 8), "_Index error");
#else
	if (_Index >= (sizeof(_Ty) * 8))
		{
		return (_X - (_X >> 1));
		}
#endif
	return _Floor_power_of_two(_X | (_X >> _Index), std::integral_constant<std::size_t, _Index * 2>());
	}

template<class _Ty>
_Ty floor_power_of_two(_Ty _X)
	{
	return _Floor_power_of_two(_X, std::integral_constant<std::size_t, 1>());
	}

}
