// RunAt - Green
#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
  ll x,y,z,k; cin >> x >> y >> z >> k;

  ll a,b,c;
  ll total = 0;

  for (a=1; a<=x; a++) {
    if (k%a) continue;
    for (b=1; b<=y; b++) {
      if (k%b) continue;
      
      if (k%(a*b)) continue;
      c = k/(a*b);
      if (c>z) continue;

      ll possibleWays = (x-a+1)*(y-b+1)*(z-c+1);
      total = max(total, possibleWays);
    }
  }
  

  cout << total << "\n";
}

int main() {
  cin.sync_with_stdio(0);
  cin.tie(0);

  int t; cin >> t;
  while (t--) solve();
  
}