#ifndef __GRANITE_VAR_H__
#define __GRANITE_VAR_H__

namespace Granite {

  class Var {
  public:
    Sort s;
    int id;
    
    bool operator==(const Var& other) const {
      return id == other.id && s == other.s;
    }

    bool operator!=(const Var& other) const {
      return !(*this == other);
    }
    
  };

}

#endif
