#include <iostream>
#include <string>

using namespace std;

int main() {
  string str = "/home/user/Desktop/Little_problems/Find_path/a.out";
  for (int i = str.size() - 1, pos = 0; i >= 0; --i) {
    if (str[i] == '/') {
      pos = i + 1;
      str.erase(0, pos);
      break;
    }
  }
  cout << str << '\n';
  return 0;
}
