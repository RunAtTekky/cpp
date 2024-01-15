// Written in NVIM, NVCHAD
#include <iostream>
#include <vector>
using namespace std;

#define YES cout << "I become the guy." << "\n";
#define NO cout << "Oh, my keyboard!" << "\n";

void solve() {
  int totalLevels; cin >> totalLevels;

  vector<bool> levels(totalLevels+1);

  int p; cin >> p;
  while(p--) {int level; cin >> level; levels[level] = true;}

  int q; cin >> q;
  while(q--) {int level; cin >> level; levels[level] = true;}

  int levelPassed = 0;
  for (int i=1; i<=totalLevels; i++) {
    if (levels[i]) levelPassed++;
  }

  if (levelPassed == totalLevels) {YES}
  else {NO}
}

int main() {
  solve();
  return 0;
}
