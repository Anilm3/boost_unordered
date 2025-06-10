#include <version>

#if defined(__cpp_lib_memory_resource)
#  include <memory_resource>
#else
#  include <experimental/memory_resource>
#  include <string>
#  include <unordered_map>
#  include <unordered_set>
#  include <vector>
#endif
