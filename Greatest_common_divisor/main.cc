#include <iostream>
#include <string>

using namespace std;

int main() {
  int num1, num2, divisor;
  cout << "Enter two numbers separated by a space: ";
  cin >> num1 >> num2;
  if (num1 < num2) {
    divisor = num1;
  } else {
    divisor = num2;
  }
  while (num1 % divisor != 0 || num2 % divisor != 0) --divisor;
  cout << divisor << '\n';

  return 0;
}
