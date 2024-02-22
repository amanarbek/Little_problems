#include <iostream>

using namespace std;

int main() {
  int num;
  int sum;
  cout << "Enter a three digit number: ";
  cin >> num;
  sum = num % 10;
  while (num) {
    num = (num / 10);
    sum += num % 10;
  }
  cout << "The sum of the digits of a three-digit number: " << sum << '\n';

  return 0;
}
