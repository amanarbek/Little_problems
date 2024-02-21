#include <cmath>
#include <iostream>

using namespace std;

int main() {
  double a, b;
  cout << "Enter the right triangle catheters(a and b): ";
  cin >> a >> b;
  cout << "Hypotenuse: " << sqrt((a * a) + (b * b)) << '\n';

  return 0;
}
