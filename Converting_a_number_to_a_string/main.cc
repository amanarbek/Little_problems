#include <iostream>
#include <string>

using namespace std;

int main() {
  int num = -123456789;
  string out = "";
  bool negative = false;
  if (num < 0) {
    negative = !negative;
    num = -num;
  }

  while (num) {
    out = static_cast<char>(num % 10 + '0') + out;
    num = num / 10;
  }

  if (negative) out = '-' + out;

  cout << out << '\n';
  return 0;
}
