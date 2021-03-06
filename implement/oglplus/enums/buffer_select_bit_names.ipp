//  File implement/oglplus/enums/buffer_select_bit_names.ipp
//
//  Automatically generated file, DO NOT modify manually.
//  Edit the source 'source/enums/oglplus/buffer_select_bit.txt'
//  or the 'source/enums/make_enum.py' script instead.
//
//  Copyright 2010-2017 Matus Chochlik.
//  Distributed under the Boost Software License, Version 1.0.
//  See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt
//
namespace enums {
OGLPLUS_LIB_FUNC StrCRef ValueName_(
	BufferSelectBit*,
	GLbitfield value
)
#if (!OGLPLUS_LINK_LIBRARY || defined(OGLPLUS_IMPLEMENTING_LIBRARY)) && \
	!defined(OGLPLUS_IMPL_EVN_BUFFERSELECTBIT)
#define OGLPLUS_IMPL_EVN_BUFFERSELECTBIT
{
switch(value)
{
#if defined GL_COLOR_BUFFER_BIT
	case GL_COLOR_BUFFER_BIT: return StrCRef("COLOR_BUFFER_BIT");
#endif
#if defined GL_DEPTH_BUFFER_BIT
	case GL_DEPTH_BUFFER_BIT: return StrCRef("DEPTH_BUFFER_BIT");
#endif
#if defined GL_STENCIL_BUFFER_BIT
	case GL_STENCIL_BUFFER_BIT: return StrCRef("STENCIL_BUFFER_BIT");
#endif
	default:;
}
OGLPLUS_FAKE_USE(value);
return StrCRef();
}
#else
;
#endif
} // namespace enums

