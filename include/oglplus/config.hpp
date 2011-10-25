/**
 *  @file oglplus/config.hpp
 *  @brief Compile-time configuration options
 *
 *  @author Matus Chochlik
 *
 *  Copyright 2010-2011 Matus Chochlik. Distributed under the Boost
 *  Software License, Version 1.0. (See accompanying file
 *  LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
 */

#ifndef OGLPLUS_CONFIG_1107121519_HPP
#define OGLPLUS_CONFIG_1107121519_HPP

namespace oglplus {

//TODO: detect support by compiler and define only if necessary
#define nullptr 0

#ifndef OGLPLUS_DOCUMENTATION_ONLY
#define OGLPLUS_DOCUMENTATION_ONLY 0
#endif

#ifndef OGLPLUS_DONT_TEST_OBJECT_TYPE
/// Compile-time switch disabling the texting of object type on construction
#define OGLPLUS_DONT_TEST_OBJECT_TYPE 1
#endif

#ifndef OGLPLUS_NO_OBJECT_DESCS
/// Compile-time switch disabling textual object descriptions
#define OGLPLUS_NO_OBJECT_DESCS 0
#endif

} // namespace oglplus

#endif // include guard
