#ifndef __GRANITE_CONTEXT_H__
#define __GRANITE_CONTEXT_H__

#include "src/Allocator.h"
#include "src/Sort.h"
#include "src/Var.h"

namespace Granite {

  class Context {
  protected:
    Allocator allocator;
    int nextVarID;
    
  public:
    Context() {
      nextVarID = 0;
    }
    
    Var* freshVar(Sort s);
    Sort boolean() { return Sort(0, 2); }
  };
  
}
#endif
