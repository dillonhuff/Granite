#include "src/Context.h"
#include "test/ContextTests.h"
#include "test/TestUtils.h"

namespace Granite {

  void varEqToSelf() {
    Context c;
    Var* a = c.freshVar(c.boolean());
    testAssertion(*a == *a, "varEqToSelf");
  }

  void varsNotEq() {
    Context c;
    Var* a = c.freshVar(c.boolean());
    Var* b = c.freshVar(c.boolean());
    testAssertion(*a != *b, "varsNotEq");
  }
  
  void contextTests() {
    varEqToSelf();
    varsNotEq();
  }
}
