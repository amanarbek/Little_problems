#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Hero {
  string name;
  int health;
  int level;
  int kind;
  int items[5];
};

void initHero(Hero& h) {
  h.level = 1;
  h.kind = rand() % 3;

  if (h.kind == 0) h.health = 100;
  if (h.kind == 1) h.health = 50;
  if (h.kind == 2) h.health = 75;

  for (int j = 0; j < 5; ++j) h.items[j] = rand() % 3;
}

void infoHero(Hero& h) {
  cout << "name: " << h.name << '\n';
  cout << "health: " << h.health << '\n';
  if (h.kind == 0) cout << "Warrior\n";
  if (h.kind == 1) cout << "Magician\n";
  if (h.kind == 2) cout << "Archer\n";
  cout << "level: " << h.level << '\n';

  for (int j = 0; j < 5; ++j) cout << h.items[j] << " ";
  cout << "\n\n";
}

int main() {
  Hero h[3];
  h[0].name = "Misha";
  h[1].name = "Kolya";
  h[2].name = "Vanya";

  srand(time(nullptr));

  for (int i = 0; i < 3; ++i) {
    initHero(h[i]);
  }

  bool valid_hero = true;
  for (int i = 0; i < 3; ++i) {
    for (int j = 0; j < 5; ++j) {
      if (h[i].items[j] != 1 && h[i].items[j] != 2) valid_hero = false;
    }
    if (valid_hero) infoHero(h[i]);
  }

  return 0;
}