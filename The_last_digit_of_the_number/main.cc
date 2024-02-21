#include <iostream>

using namespace std;

int main() {
  int num;
  cout << "Enter a number: ";
  cin >> num;
  cout << "The last digit of the number: " << num % 10 << '\n';

  return 0;
}
