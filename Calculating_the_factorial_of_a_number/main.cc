#include <iostream>

using namespace std;

int main() {
  int i = 1, end = 1, power = 1;
  cout << "Enter a number: ";
  cin >> end;
  while (i <= end) {
    power *= i;
    ++i;
  }
  cout << power << '\n';

  return 0;
}
