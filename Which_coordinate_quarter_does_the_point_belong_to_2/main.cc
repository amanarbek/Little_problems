#include <iostream>

using namespace std;

int main() {
  int x, y;
  cout << "Enter the coordinates of the x and y points: ";
  cin >> x >> y;
  if (y >= 0 && y <= x || y <= 0 && y >= x) {
    cout << "Entered\n";
  } else {
    cout << "Not entered\n";
  }

  return 0;
}
