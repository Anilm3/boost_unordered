#include <version>

#if defined(__cpp_lib_memory_resource)
#  include <memory_resource>
#else
#  include <experimental/memory_resource>
#  include <string>
#  include <unordered_map>
#  include <unordered_set>
#  include <vector>

#  if !defined(__cpp_lib_experimental_memory_resources)
#    include "libcxx-compat/monotonic_buffer_resource.hpp"
#  endif

#endif
