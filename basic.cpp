
#include <stdio.h>

#include <string>

int x = 1;

//void foo() {
//  int a;
//  a = 1;
//}
//
//namespace {
//  int x = 1;
//}

namespace haha {
//  int x = 1;


// add some comment


class MyClass {
  int v = x;
  /** comment2 **/
  void foo() {}
  int bar(int x) {
    this->v = 3;
    return x + v;
  }

  /// asdf
  MyClass copy() {
    bar(x);
    return *this;
  }
};
}
