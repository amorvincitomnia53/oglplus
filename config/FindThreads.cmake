#  Copyright 2010-2017 Matus Chochlik. Distributed under the Boost
#  Software License, Version 1.0. (See accompanying file
#  LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
#
find_package(Threads)
set(THREADS_FOUND ${Threads_FOUND})
set(THREADS_LIBRARIES ${CMAKE_THREAD_LIBS_INIT})
