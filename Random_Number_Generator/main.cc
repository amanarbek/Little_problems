#include <iostream>

using namespace std;

int main() {
  int i = 1;
  cout << "Enter a number: ";
  cin >> i;
  srand(time(nullptr));
  while (i) {
    cout << rand() % 5 + 5 << '\n';
    --i;
  }

  return 0;
}
