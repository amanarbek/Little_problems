#include <iostream>

using namespace std;

int main() {
  int x = 1, count = 0, max = -1;
  while (x != 0) {
    cout << "Enter a number: ";
    cin >> x;
    if (x % 2 == 0 && x != 0) {
      ++count;
      if (max < x) max = x;
    }
  }

  cout << "Count numbers: " << count << '\n';
  cout << "Max of them: " << max << '\n';

  return 0;
}
