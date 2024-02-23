#include <iostream>

using namespace std;

int main() {
  int i = 1, end = 1, product = 1;
  cout << "Enter a number: ";
  cin >> end;
  while (i <= end) {
    product *= i;
    ++i;
  }
  cout << product << '\n';

  return 0;
}
