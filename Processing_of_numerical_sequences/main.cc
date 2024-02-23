#include <iostream>

using namespace std;

int main() {
  int x = 1, count = 0;
  double sum = 0;
  while (x != 0) {
    cout << "Enter a number: ";
    cin >> x;
    sum += x;
    ++count;
  }

  cout << "Count numbers: " << count - 1 << '\n';
  cout << "Sum of them: " << sum << '\n';
  cout << "Average: " << sum / (count - 1) << '\n';

  return 0;
}
