#ifndef __GRANITE_CONTEXT_H__
#define __GRANITE_CONTEXT_H__

#include "src/Allocator.h"
#include "src/Func.h"
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
    Func* freshFunc(FuncID i, std::vector<Term*> args);
    
    Sort boolean() { return Sort(0, 2); }
    FuncID eq() { return 0; }
    
  };
  
}
#endif
