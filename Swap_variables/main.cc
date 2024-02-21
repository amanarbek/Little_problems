#include <iostream>

using namespace std;

int main() {
  int num1, num2, num3;
  cout << "Enter 3 numbers: ";
  cin >> num1 >> num2 >> num3;
  int tmp = num1;
  num1 = num2;
  num2 = tmp;

  // swap(num1, num2);

  // num1 ^= num2;
  // num2 ^= num1;
  // num1 ^= num2;

  cout << "Num1: " << num1 << " - Num2: " << num2 << '\n';

  // for (int i = 0; i < 3; ++i) { // Циклический сдвиг трех цифр три раза
  //   int tmp = num3;
  //   num3 = num2;
  //   num2 = num1;
  //   num1 = tmp;
  //   cout << num1 << num2 << num3 << '\n';
  // }

  return 0;
}
