#include <iostream>

using namespace std;

int main() {
  const int size = 10;
  int arr[size][size];
  bool even = true;
  for (int i = 0; i < size; ++i) {
    for (int j = 0; j < size; ++j) {
      if (even) {
        arr[i][j] = 1;
      } else {
        arr[i][j] = 0;
      }
      even = !even;
    }
    if (size % 2 == 0) even = !even;
  }

  for (int i = 0; i < size; ++i) {
    for (int j = 0; j < size; ++j) {
      cout << arr[i][j] << ' ';
    }
    cout << '\n';
  }

  return 0;
}
