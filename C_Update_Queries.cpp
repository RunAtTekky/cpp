// RunAt - Green
#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
  int n,m; cin >> n >> m;

  string s; cin >> s;
  vector<ll> indexes(m); 
  for (int i=0; i<m; i++) {
    int ele; cin >> ele;
    indexes[i] = ele - 1;
    // cout << indexes[i] << " \n"[i==m-1];
  }

  string c; cin >> c;

  sort(c.begin(), c.end());

  vector<ll> copy = indexes;

  sort(copy.begin(), copy.end());

  map<int,char> mp;
  string newS = c;
  int pos = 0;
  for (int i=0,j=0; i<m; i=j+1) {
    j=i;
    while (j+1<m && copy[j] == copy[j+1]) {
      j++;
    }
    mp[copy[j]] = c[pos++];
  }

  for (auto [x,y] : mp) {
    s[x] = y;
  }

  cout << s << "\n";



}

int main() {
  cin.sync_with_stdio(0); cin.tie(0);
  int t; cin >> t; while (t--) solve();
}