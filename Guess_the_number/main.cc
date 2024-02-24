#include <iostream>

using namespace std;

int main() {
  srand(time(nullptr));
  int num = rand() % 51;
  int guess = -1;
  int attempt = 1;
  while (guess != num) {
    cout << "Enter a number: ";
    cin >> guess;
    if (guess > num) {
      cout << "Less" << '\n';
    } else if (guess < num) {
      cout << "Greater" << '\n';
    } else {
      cout << "Great! You win!" << '\n';
      break;
    }
    ++attempt;
    if (attempt > 5) {
      cout << "You lose!" << '\n';
      break;
    }
  }

  return 0;
}
