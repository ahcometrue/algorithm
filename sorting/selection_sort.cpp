#include "../utils/vector_helper.h"
#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

template <typename T> void vectorSort(vector<T> &list) {
  int nums = list.size();
  for (int i = 0; i < nums - 1; i++) {
    int minIndex = i;
    for (int j = i + 1; j < nums; j++) {
      if (list[minIndex] > list[j]) {
        minIndex = j;
      }
    }
    if (list[minIndex] != list[i]) {
      cout << "--->第" << i << "次替换："
           << "minIndex = " << minIndex << " v = " << list[minIndex]
           << ", i = " << i << " v = " << list[i] << endl;
      swap(list[i], list[minIndex]);
      cout << "--->替换后： " << vectorToString(list) << "\n\n";
    }
  }
}

int main() {
  vector<int> list_int = {1, 20, 30, 10, 2, 3, 4, 5, 9, 7, 6};
  cout << "排序前：" << vectorToString(list_int) << "\n\n";
  vectorSort(list_int);

  cout << "排序后：" << vectorToString(list_int) << "\n\n";
  return 0;
}
