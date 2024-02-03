/*
    RunAt - green
*/
#include <iostream>
#include <set>
#include <climits>
#include <cmath>
#include <numeric>
#include <map>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

typedef int long long ll;
#define p(a) cout << a << "\n";
#define p2(a,b) cout << a << " " << b << "\n";
#define YES cout << "YES" << "\n"
#define NO cout << "NO" << "\n"

const int MOD = 1e9+7;

void solve() {
  ll H,W,N;
  cin >> H >> W >> N;

  vector<vector<bool>> grid;
  for (int i=0; i<H; i++) {
    vector<bool> curr;
    for (int j=0; j<W; j++) {
      curr.push_back(false);
    }
    grid.push_back(curr);
  }

  vector<pair<int,int>> directions;
  directions = {{0,-1}, {1,0}, {0,1}, {-1,0}};

  int dir = 0;

  int xPos = 0, yPos = 0;
  for (int i=1; i<=N; i++) {
    bool curr = grid[yPos][xPos];
    if (curr) {
      dir = (dir-1);
      if (dir == -1) dir = 3;
      grid[yPos][xPos] = !grid[yPos][xPos];
      xPos = (xPos + directions[dir].first);
      if (xPos == -1) xPos = W-1;
      else if (xPos == W) xPos = 0;
      yPos = (yPos + directions[dir].second);
      if (yPos == -1) yPos = H-1;
      else if (yPos == H) yPos = 0;
    }
    else {
      dir = (dir+1);
      if (dir == 4) dir = 0;
      grid[yPos][xPos] = !grid[yPos][xPos];
      xPos = (xPos + directions[dir].first);
      if (xPos == -1) xPos = W-1;
      else if (xPos == W) xPos = 0;
      yPos = (yPos + directions[dir].second);
      if (yPos == -1) yPos = H-1;
      else if (yPos == H) yPos = 0;
    }
  }
  for (int i=0; i<H; i++) {
    for (int j=0; j<W; j++) {
      if (grid[i][j]) {
        cout << '#';
      }
      else {
        cout << '.';
      }
    }
    cout << "\n";
  }
}

int main() {
  int tests = 1;
  // cin >> tests;
  while (tests--) solve();
  return 0;
}
