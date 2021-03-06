#ifndef __TRACYSORT_HPP__
#define __TRACYSORT_HPP__

#if ( defined _MSC_VER && _MSVC_LANG >= 201703L ) || __cplusplus >= 201703L
#  if __has_include(<execution>)
#    include <algorithm>
#    include <execution>
#  else
#    define NO_PARALLEL_SORT
#  endif
#else
#  define NO_PARALLEL_SORT
#endif

#ifdef NO_PARALLEL_SORT
#  include "tracy_pdqsort.h"
#endif


#endif
