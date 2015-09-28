#include "src/Context.h"
#include "src/Sort.h"
#include "test/SolverTests.h"

namespace Granite {

  void varsEq() {
    Context c;
    Var* a = c.freshVar(c.boolean());
    Var* b = c.freshVar(c.boolean());
    //    Func* f = c.freshFunc(c.eq(), a, b);
  }

  void solverTests() {
    varsEq();
  }
  
}
