// RunAt - Green
#include <bits/stdc++.h>
using namespace std;

void print(vector<pair<int,int>> coordinates) {
  for (auto [x_c, y_c] : coordinates) {
    cout << x_c << " " << y_c << "\n";
  }
  cout << "\n";
}

void solve() {
  int x,y,k;
  cin >> x >> y >> k;

  vector<pair<int,int>> coordinates;

  int tillWhere = (k&1) ? k-1 : k;
  for (int i=1; i<=tillWhere/2; i++) {
    coordinates.push_back({x+i, y});
    coordinates.push_back({x-i, y});
  }

  if (k&1) {
    coordinates.push_back({x,y});
  }

  print(coordinates);


}

int main() {
  cin.sync_with_stdio(0); cin.tie(0);
  int t; cin >> t; while (t--) solve();
}