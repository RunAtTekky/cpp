// RunAt - Green
#include <bits/stdc++.h>
using namespace std;

void solve() {
  long long x,y,k;
  cin >> x >> y >> k;

  long long bottleNeck = min(x,y);

  long long safeSpotSteps = bottleNeck/(double)k;

  x -= safeSpotSteps*k;
  y -= safeSpotSteps*k;

  int steps = 0;
  bool xSide = true;
  while (true) {
    if (x==0 && y==0) break;
    if (xSide) {
      if (x>k) x-=k;
      else x = 0;
    }
    else {
      if (y>k) y-=k;
      else y=0;
    }
    steps++;
    xSide = !xSide;
  }

  cout << safeSpotSteps*2 + steps << "\n";
}

int main() {
  cin.sync_with_stdio(0); cin.tie(0);
  int t; cin >> t; while (t--) solve();
}