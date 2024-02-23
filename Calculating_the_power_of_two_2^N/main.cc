#include <iostream>

using namespace std;

int main() {
  int i = 1, end = 1, power = 1;
  cout << "Enter a number: ";
  cin >> end;
  while (i <= end) {
    power *= 2;
    ++i;
  }
  cout << power << '\n';

  return 0;
}
