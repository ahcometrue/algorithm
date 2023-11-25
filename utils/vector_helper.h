#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

template <typename T> string vectorToString(vector<T> &list) {
  ostringstream s;
  for (const auto &v : list) {
    if (v != list[0]) {
      s << ", ";
    }
    s << v;
  }
  string rst = "[" + s.str() + "]";
  return rst;
}
