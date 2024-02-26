#include <iostream>
#include <string>

using namespace std;

double deg(double num, int exp) {
  double res = 1;
  while (exp) {
    res *= num;
    --exp;
  }
  return res;
}

int main() {
  cout << deg(2.5, 3) << '\n';
  return 0;
}
