#include <iostream>

using namespace std;

int main() {
  const int size = 25;
  int arr[size];
  for (int i = 0; i < size; ++i) {
    arr[i] = i + 1;
    cout << arr[i] << ' ';
  }
  cout << '\n';

  int will_first = arr[size - 1];
  for (int i = size - 1; i > 0; --i) {
    arr[i] = arr[i - 1];
  }
  arr[0] = will_first;

  for (int i = 0; i < size; ++i) {
    cout << arr[i] << ' ';
  }
  cout << '\n';

  return 0;
}
