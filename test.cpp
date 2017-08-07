//#define DF(t) int x = t;
//
int test() {
 int t = 1;
 DF(t)
 return 0;
}

//
//typedef struct GCState {
//} GCState;


//#define FUN(x) void foo##x()
//
//FUN(a)
//{
//  int x = 1;
//  x = 2;
//}

#define MAKE_STATIC_PROP(PROP) \
int p1##PROP = 0; \
int p2##PROP = 0;

void foo() {
 
 MAKE_STATIC_PROP(x)

 p1x = 2;
 p2x = 3;
}


//#include "test.h"
//
//int x = 1;


//#include <algorithm>
//void foo() {
//  static const struct A {
//    
//  } p[2] = { {}, {} };
//  std::find_if(p, p + 1, [](const A &a) { return true; });
//}

//template<typename A>
//void foo(A a) {
//  foo(1);
//}

//template <typename A>
//class T {
//public:
//  A a;
//  void bar() {}
//};
//
//T<int> t1;
//T<char> t2;
//
//int foo() {
//  t2.bar();
//  return t1.a;
//}

#define my_field int x;

typedef struct X {
  my_field
  struct X *tt;
} X;


//#include "test.h"
//MK_TACTIC_FACTORY(hello)
