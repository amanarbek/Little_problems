#include <cmath>
#include <iostream>

using namespace std;

int main() {
  float a, b, c, D;
  cout << "Enter 3 values separated by a space: ";
  cin >> a >> b >> c;

  if (a != 0) {
    D = (b * b) - (4 * a * c);
    if (D < 0) {
      cout << "Zero real solutions\n";
    } else if (D > 0) {
      cout << "D = " << D << '\n';
      cout << "x1 = " << (-b + sqrt(D)) / (2 * a) << '\n';
      cout << "x2 = " << (-b - sqrt(D)) / (2 * a) << '\n';
    } else {
      cout << "D = " << D << '\n';
      cout << "x = " << -(b / (2 * a)) << '\n';
    }
  } else {
    cout << "The first variable cannot be 0!\n";
  }

  return 0;
}
