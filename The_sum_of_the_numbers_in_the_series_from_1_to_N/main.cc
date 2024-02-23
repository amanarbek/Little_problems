#include <iostream>

using namespace std;

int main() {
  int i = 1, end = 1, sum = 0;
  cout << "Enter a number: ";
  cin >> end;
  while (i <= end) {
    sum += i;
    ++i;
  }
  cout << sum << '\n';

  return 0;
}
