#include <vector>

#include "src/Context.h"
#include "src/Term.h"
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

  void builtinFuncEq() {
    Context c;
    Var* a = c.freshVar(c.boolean());
    std::vector<Term*> vs;
    vs.push_back(a);
    vs.push_back(a);
    Func* f = c.freshFunc(c.eq(), vs);
    testAssertion(*f == *f, "builtinFuncEq");
  }

  void differentFuncsNEQ() {
    Context c;
    Var* a = c.freshVar(c.boolean());
    std::vector<Term*> vs;
    vs.push_back(a);
    vs.push_back(a);
    Func* eq1 = c.freshFunc(c.eq(), vs);

    Var* b = c.freshVar(c.boolean());
    std::vector<Term*> ts;
    ts.push_back(b);
    ts.push_back(b);
    Func* eq2 = c.freshFunc(c.eq(), ts);

    testAssertion(*eq1 != *eq2, "differentFuncsNEQ");
  }
  
  void contextTests() {
    varEqToSelf();
    varsNotEq();
    builtinFuncEq();
    differentFuncsNEQ();
  }
}
