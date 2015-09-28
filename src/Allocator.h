#ifndef __GRANITE_ALLOCATOR_H__
#define __GRANITE_ALLOCATOR_H__

#include <cstdlib>
#include <vector>

namespace Granite {

  class Allocator {
  protected:
    std::vector<void*> allocated;
    
  public:
    void* allocate(int size) {
      void* ptr = malloc(size);
      allocated.push_back(ptr);
      return ptr;
    }

    ~Allocator() {
      for (auto ptr : allocated) {
	free(ptr);
      }
    }

  };
}

#endif
