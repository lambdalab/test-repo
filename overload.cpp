//#include "test.h"
//
//int x = 1;

class A {
public:
  int x;
};
inline bool operator ==(const A& x, const A& y) {
  return x.x == y.x;
}
