#include <iostream>

using namespace std;

int main() {
  int i = 1, x = 1;
  cout << "Enter a number from 1 to 10: ";
  cin >> x;
  if (x < 1 || x > 10) return 0;
  while (i <= 10) {
    cout << i << " * " << x << " = " << i * x << '\n';
    ++i;
  }

  return 0;
}
