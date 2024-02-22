#include <iostream>

using namespace std;

int main() {
  int x, y;
  cout << "Enter the coordinates of the x and y points: ";
  cin >> x >> y;
  if (x > 0 && y > 0) {
    cout << "first\n";
  } else if (x > 0 && y < 0) {
    cout << "second\n";
  } else if (x < 0 && y < 0) {
    cout << "third\n";
  } else if (x < 0 && y > 0) {
    cout << "fourth\n";
  } else {
    cout << "zero\n";
  }

  return 0;
}
