//  File implement/eglplus/enums/string_query_range.ipp
//
//  Automatically generated file, DO NOT modify manually.
//  Edit the source 'source/enums/eglplus/string_query.txt'
//  or the 'source/enums/make_enum.py' script instead.
//
//  Copyright 2010-2017 Matus Chochlik.
//  Distributed under the Boost Software License, Version 1.0.
//  See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt
//
namespace enums {
EGLPLUS_LIB_FUNC aux::CastIterRange<
	const EGLenum*,
	StringQuery
> ValueRange_(StringQuery*)
#if (!EGLPLUS_LINK_LIBRARY || defined(EGLPLUS_IMPLEMENTING_LIBRARY)) && \
	!defined(EGLPLUS_IMPL_EVR_STRINGQUERY)
#define EGLPLUS_IMPL_EVR_STRINGQUERY
{
static const EGLenum _values[] = {
#if defined EGL_CLIENT_APIS
EGL_CLIENT_APIS,
#endif
#if defined EGL_EXTENSIONS
EGL_EXTENSIONS,
#endif
#if defined EGL_VENDOR
EGL_VENDOR,
#endif
#if defined EGL_VERSION
EGL_VERSION,
#endif
0
};
return aux::CastIterRange<
	const EGLenum*,
	StringQuery
>(_values, _values+sizeof(_values)/sizeof(_values[0])-1);
}
#else
;
#endif
} // namespace enums

