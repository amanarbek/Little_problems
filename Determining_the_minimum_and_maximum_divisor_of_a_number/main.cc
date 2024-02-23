#include <iostream>
#include <string>

using namespace std;

int main() {
  int i = 0, num = 1, power = 1;
  double factorial = 1;
  string str;
  cout << "Enter 'min' or 'max' divisor: ";
  cin >> str;
  cout << "Enter a number: ";
  cin >> num;
  if (str == "min") {
    i = 2;
    while (num % i != 0) {
      ++i;
    }
    cout << i << '\n';
  } else if (str == "max") {
    i = num - 1;
    while (num % i != 0) {
      ++i;
    }
    if (i != num) cout << i << '\n';
  }

  return 0;
}
