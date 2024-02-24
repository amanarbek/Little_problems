#include <iostream>

using namespace std;

int main() {
  int size = 25;
  int max = -1;
  int arr[size];
  for (int i = 0; i < size; ++i) {
    arr[i] = rand() % 10 + 1;
    cout << arr[i] << ' ';
  }
  cout << '\n';
  for (int i = 0; i < size; ++i) {
    if (arr[i] % 2 == 1) arr[i] *= 2;
    if (arr[i] > max) max = arr[i];
    cout << arr[i] << ' ';
  }
  cout << '\n';

  cout << "Max: " << max << '\n';

  return 0;
}
