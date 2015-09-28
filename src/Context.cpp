#include "src/Context.h"

namespace Granite {

  Var* Context::freshVar(Sort s) {
    Var* v = (Var*) allocator.allocate(sizeof(Var));
    v->s = s;
    v->id = nextVarID;
    nextVarID++;
    return v;
  }

}
