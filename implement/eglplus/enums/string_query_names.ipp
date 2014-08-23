/*
 *  .file eglplus/enums/string_query_names.ipp
 *
 *  Automatically generated header file. DO NOT modify manually,
 *  edit 'source/enums/eglplus/string_query.txt' instead.
 *
 *  Copyright 2010-2014 Matus Chochlik. Distributed under the Boost
 *  Software License, Version 1.0. (See accompanying file
 *  LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
 */

namespace enums {
EGLPLUS_LIB_FUNC StrCRef ValueName_(
	StringQuery*,
	EGLenum value
)
#if (!EGLPLUS_LINK_LIBRARY || defined(EGLPLUS_IMPLEMENTING_LIBRARY)) && \
	!defined(EGLPLUS_IMPL_EVN_STRINGQUERY)
#define EGLPLUS_IMPL_EVN_STRINGQUERY
{
switch(value)
{
#if defined EGL_CLIENT_APIS
	case EGL_CLIENT_APIS: return StrCRef("CLIENT_APIS");
#endif
#if defined EGL_EXTENSIONS
	case EGL_EXTENSIONS: return StrCRef("EXTENSIONS");
#endif
#if defined EGL_VENDOR
	case EGL_VENDOR: return StrCRef("VENDOR");
#endif
#if defined EGL_VERSION
	case EGL_VERSION: return StrCRef("VERSION");
#endif
	default:;
}
EGLPLUS_FAKE_USE(value);
return StrCRef();
}
#else
;
#endif
} // namespace enums
