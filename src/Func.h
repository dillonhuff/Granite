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
    std::vector<Term*> args;
    
    bool operator==(const Func& other) const {
      return funcID == other.funcID;
    }

    bool operator!=(const Func& other) const {
      return !(*this == other);
    }

    void setArgs(std::vector<Term*> newArgs) {
      for (auto t : newArgs) {
	args.push_back(t);
      }
    }
    
  };

}

#endif
