#ifndef __GRANITE_FUNC_H__
#define __GRANITE_FUNC_H__

#include "src/Sort.h"
#include "src/Term.h"

namespace Granite {

  typedef int FuncID;

  class Func : public Term {
  public:
    Sort s;
    FuncID funcID;
    
    bool operator==(const Func& other) const {
      return funcID == other.funcID;
    }

    bool operator!=(const Func& other) const {
      return !(*this == other);
    }
    
  };

}

#endif
