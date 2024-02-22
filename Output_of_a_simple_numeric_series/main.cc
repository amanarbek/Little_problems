#include <cmath>
#include <iostream>

using namespace std;

int main() {
  int x;
  cout << "Enter a number: ";
  cin >> x;
  int i = 1;
  while (i < x) cout << i++ << ' ';
  cout << i << '\n';

  return 0;
}
