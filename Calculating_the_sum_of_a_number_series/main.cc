#include <iostream>

using namespace std;

int main() {
  int i = 1, end = 1, power = 1;
  double factorial = 1;
  cout << "Enter a number: ";
  cin >> end;
  while (i <= end) {
    power *= i;
    factorial += 1.0 / power;
    ++i;
  }
  cout << factorial << '\n';

  return 0;
}
