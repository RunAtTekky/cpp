/*
  RunAt - grey
*/
#include <iostream>
#include <string>
using namespace std;

#define YES cout << "YES" << "\n"
#define NO cout << "NO" << "\n"

bool isPossible(string a, string b, bool fromTop) {
  int n = a.size();
  string grid = a.append(b);
  int xPos = 0, yPos = 0, dir = n;

  if (!fromTop) { yPos = n; dir *= -1;}

  while (xPos < n-1) {
    // First do vertical movement
    if (grid[yPos+dir+xPos] == 'B') {
      yPos += dir;
      dir *= -1;
    }
    // Now if possible do horizontal movement
    if (xPos<n-1 && grid[yPos+xPos+1] == 'B') xPos++;
    else return false;
  }
  return true;
}

void solve() {
  int m;
  cin >> m;
  
  string a,b; cin >> a >> b;

  bool top = isPossible(a,b,true);
  bool bottom = isPossible(a,b,false);

  if (top || bottom) {YES;}
  else {NO;}
}

int main() {
  int tests = 1;
  cin >> tests;
  while (tests--) solve();
  return 0;
}
