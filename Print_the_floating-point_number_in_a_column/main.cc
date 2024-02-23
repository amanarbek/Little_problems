#include <iomanip>
#include <iostream>

using namespace std;

int main() {
  float f = 2.0;
  while (f <= 3.0) {
    cout << fixed << setprecision(1) << f << '\n';
    f += 0.1;
  }

  return 0;
}
