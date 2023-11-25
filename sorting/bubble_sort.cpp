#include "../utils/vector_helper.h"
#include <iostream>
#include <vector>

template <typename T> void vectorSort(vector<T> &list) {
  for (int i = list.size() - 1; i > 0; i--) {
    bool flag = false;
    for (int j = 0; j < i; j++) {
      if (list[j] > list[j + 1]) {
        cout << "i = " << i << " list[i] = " << list[i] << ", j = " << j
             << " list[j] = " << list[j] << " list[j+1] = " << list[j + 1]
             << ",list = " << vectorToString(list) << "\n";
        swap(list[j + 1], list[j]);
        flag = true;
      } else {
        cout << "未交换" << i << "\n";
      }
    }
    // 第二层的for循环未发生交换，说明已经有序了，无需继续检查了
    if (!flag) {
      break;
    }
  }
}

int main() {
  vector<int> list_int = {1, 100, 0, 20, 30, 10, 2, 3, 4, 5, 9, 7, 6};
  cout << "排序前：" << vectorToString(list_int) << "\n\n";
  vectorSort(list_int);

  cout << "排序后：" << vectorToString(list_int) << "\n\n";
  return 0;
}
