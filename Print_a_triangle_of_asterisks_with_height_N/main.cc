#include <iostream>

using namespace std;

int main() {
  int height;
  cout << "Enter a number: ";
  cin >> height;
  for (int i = 1; i < height; ++i) {
    for (int j = 0; j < i; ++j) {
      cout << '*';
    }
    cout << '\n';
  }

  return 0;
}
