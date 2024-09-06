// RunAt - Green
#include <bits/stdc++.h>
using namespace std;

#define int long long
#define YES cout << "YES\n"
#define NO cout << "NO\n"

void solve() {
  int n; cin >> n;
  int xInitial, yInitial;
  int xFinal, yFinal;

  vector<pair<int,int>> coordinates(n);
  
  for (int i=0; i<n; i++) {
    cin >> coordinates[i].first;
    cin >> coordinates[i].second;
  }

  cin >> xInitial >> yInitial;
  cin >> xFinal >> yFinal;


  int minimumDistance = LLONG_MAX;
  for (int i=0; i<n; i++) {

    int x = coordinates[i].first;
    int y = coordinates[i].second;

    int distance = (xFinal-x)*(xFinal-x) + (yFinal-y)*(yFinal-y);

    minimumDistance = min(minimumDistance, distance);
  }

  int pathDistance = (xFinal-xInitial)*(xFinal-xInitial) + (yFinal-yInitial)*(yFinal-yInitial);


  if (minimumDistance <= pathDistance) {NO;}
  else {YES;}

}

int32_t main() {
  cin.sync_with_stdio(0); cin.tie(0);
  int t; cin >> t; while (t--) solve();
}