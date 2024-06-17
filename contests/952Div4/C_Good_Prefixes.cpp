// RunAt - Green
#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
  int n; cin >> n;

  vector<ll> a(n);
  for (auto &e: a) cin >> e;

  ll sum = 0;
  ll total = 0;

  map<ll,bool> mp;
  for (int i=0; i<n; i++) {
    sum += a[i];
    mp[a[i]] = true;

    if (sum&1) continue;
    if (mp[sum/2]) total++;
  }

  cout << total << "\n";
}

int main() {
  cin.sync_with_stdio(0);
  cin.tie(0);

  int t; cin >> t;
  while (t--) solve();
  
}