#include <iostream>

using namespace std;

int main() {
  int x1, y1, x2, y2;
  cout << "Enter the coordinates of the first shape: ";
  cin >> x1 >> y1;
  cout << "Enter the coordinates of the second shape: ";
  cin >> x2 >> y2;

  if (abs(x2 - x1) == (y2 - y1)) {  // for bishop
                                    // if (x1 == x2 || y1 == y2) { // for rook
    cout << "Beats\n";
  } else {
    cout << "Doesn't beat\n";
  }

  return 0;
}
