#include <version>

#if defined(__cpp_lib_memory_resource)
#  include <memory_resource>
#else
#  include <experimental/memory_resource>

namespace std::pmr {

template <typename Key>
using polymorphic_allocator = experimental::pmr::polymorphic_allocator<Key>;

};

#endif
