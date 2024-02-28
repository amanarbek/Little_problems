#include <iostream>
#include <vector>

using namespace std;

void show_place(vector<vector<int>> &place) {
  for (int i = 0; i < place.size(); ++i) {
    for (int j = 0; j < place.size(); ++j) {
      cout << place[i][j];
    }
    cout << '\n';
  }
}

bool check_step(vector<vector<int>> &place, int player) {
  int check_row = 0;
  int check_col = 0;
  int left_right = 0;
  int right_left = 0;
  for (int i = 0; i < 3; ++i) {
    if (place[i][i] == player) ++left_right;
    if (place[i][2 - i] == player) ++right_left;
    for (int j = 0; j < 3; ++j) {
      if (place[i][j] == player) ++check_row;
      if (place[j][i] == player) ++check_col;
    }

    if (check_row == 3 || check_col == 3 || left_right == 3 || right_left == 3)
      return true;

    check_row = 0;
    check_col = 0;
  }

  return false;
}

int main() {
  vector<vector<int>> place(3, vector<int>(3));

  for (int i = 0; i < 9; ++i) {
    int x, y;
    if (i % 2 == 0) {
      cout << "Player 1 enter the coordinates: ";
      cin >> x >> y;
      if (place[x][y] == 0)
        place[x][y] = 1;
      else
        --i;
    } else {
      cout << "Player 2 enter the coordinates: ";
      cin >> x >> y;
      if (place[x][y] == 0)
        place[x][y] = 2;
      else
        --i;
    }
    show_place(place);
    if (check_step(place, (i % 2) + 1)) {
      cout << "Player " << (i % 2) + 1 << " Win!\n";
      return 0;
    }
  }
  cout << "Draw!\n";

  return 0;
}