/*
This file is part of Jedi Academy.

    Jedi Academy is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 2 of the License, or
    (at your option) any later version.

    Jedi Academy is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with Jedi Academy.  If not, see <http://www.gnu.org/licenses/>.
*/
// Copyright 2002-2013 Activision

////////////////////////////////////////////////////////////////////////////////////////
// RAVEN STANDARD TEMPLATE LIBRARY
//  (c) 2002 Activision
//
//
// Array
// -----
// This array class is little more than an assert loaded wrapper around a standard
// array.
//
//
//
// NOTES:
// 
//
//
////////////////////////////////////////////////////////////////////////////////////////
#if !defined(RATL_ARRAY_VS)
#define RATL_ARRAY_VS


////////////////////////////////////////////////////////////////////////////////////////
// Includes
////////////////////////////////////////////////////////////////////////////////////////
#if !defined(RATL_COMMON_INC)
	#include "ratl_common.h"
#endif

namespace ratl
{

template<class T, int ARG_CAPACITY>
class array_vs : public array_base<storage::value_semantics<T,ARG_CAPACITY> >
{
public:
	typedef typename storage::value_semantics<T,ARG_CAPACITY> TStorageTraits;
	typedef typename TStorageTraits::TValue TTValue;
 	enum 
	{
		CAPACITY		= ARG_CAPACITY
	};
	array_vs() {}
};

template<class T, int ARG_CAPACITY>
class array_os : public array_base<storage::object_semantics<T,ARG_CAPACITY> >
{
public:
	typedef typename storage::object_semantics<T,ARG_CAPACITY> TStorageTraits;
	typedef typename TStorageTraits::TValue TTValue;
 	enum 
	{
		CAPACITY		= ARG_CAPACITY
	};
	array_os() {}
};

template<class T, int ARG_CAPACITY, int ARG_MAX_CLASS_SIZE>
class array_is : public array_base<storage::virtual_semantics<T,ARG_CAPACITY,ARG_MAX_CLASS_SIZE> >
{
public:
	typedef typename storage::virtual_semantics<T,ARG_CAPACITY,ARG_MAX_CLASS_SIZE> TStorageTraits;
	typedef typename TStorageTraits::TValue TTValue;
 	enum 
	{
		CAPACITY		= ARG_CAPACITY,
		MAX_CLASS_SIZE	= ARG_MAX_CLASS_SIZE
	};
	array_is() {}
};

}
#endif