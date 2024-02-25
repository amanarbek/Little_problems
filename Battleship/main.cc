#include <iostream>

using namespace std;

int main() {
  const int size = 5;
  int arr[size][size]{0};
  int count_ships = 5;
  srand(time(nullptr));
  int x, y;
  for (int i = 0; i < count_ships; ++i) {
    int x, y;
    x = rand() % 5;
    y = rand() % 5;
    arr[x][y] = 1;
  }

  int arr_hit[size][size] = {0};

  while (true) {
    cout << "Enter the coordinates of the shot x and y separated by a "
            "space: ";
    cin >> x >> y;
    arr_hit[x][y] = 1;
    if (arr[x][y] == 1) {
      cout << "Hit\n";
      arr[x][y] = 0;
    } else {
      cout << "Miss\n";
    }

    for (int i = 0; i < size; ++i) {
      for (int j = 0; j < size; ++j) {
        cout << arr_hit[i][j] << ' ';
      }
      cout << '\n';
    }

    bool hit = false;

    for (int i = 0; i < size; ++i) {
      for (int j = 0; j < size; ++j) {
        if (arr[i][j] == 1) {
          hit = true;
          break;
        }
      }
      if (hit) break;
    }

    if (!hit) {
      cout << "You win!\n";
      break;
    }
  }

  return 0;
}
