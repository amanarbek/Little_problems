#include <iostream>
#include <string>

using namespace std;

int main() {
  string num = "-123456789";
  int out = num[num.size() - 1] - '0';
  bool negative = false;
  int end = 0;
  if (num[0] == '-') {
    negative = !negative;
    ++end;
  }

  for (int i = num.size() - 2, exponent = 10; i >= end; --i) {
    out += (num[i] - '0') * exponent;
    exponent *= 10;
  }

  if (negative) out *= -1;

  cout << out << '\n';
  return 0;
}
