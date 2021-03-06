/* SPDX-License-Identifier: LGPL-2.1 */
/**
 * Copyright (c) 2016 by Ludwig Grill (www.rotzbua.de)
 * Simple deprecated workaround for Arduino IDE
 * IDE 1.6.8 use gcc 4.8 which do not support c++14 [[deprecated]]
 * Later versions should support c++14, then use c++14 syntax
 */
#pragma once

#ifdef __has_cpp_attribute
#if __has_cpp_attribute(deprecated)
#define DEPRECATED [[deprecated]]
#define DEPRECATED_MSG(msg) [[deprecated(msg)]]
#endif // __has_cpp_attribute(deprecated)
#else
#define DEPRECATED __attribute__((deprecated))
#define DEPRECATED_MSG(msg) __attribute__((deprecated(msg)))
#endif // __has_cpp_attribute
