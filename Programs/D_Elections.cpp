// RunAt - Green
#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
  int n,c;
  cin >> n >> c;

  vector<ll> vec(n);
  for (auto &e: vec) cin >> e;

  vector<ll> bh(n);
  bh[0] = vec[0];

  vector<ll> ah(n);
  ah[n-1] = vec[n-1];

  vector<ll> pref(n);
  pref[0] = vec[0];

  for (int i=1; i<n; i++) {
    bh[i] = max(bh[i-1], vec[i]);
    ah[n-1-i] = max(ah[n-i], vec[n-1-i]);
    pref[i] = pref[i-1] + vec[i];
  }

  vector<ll> ans(n);
  for (int i=0; i<n; i++) {
    int cnt = 0;
    if (i!=0 && (vec[i] >= ah[i] && vec[i] > bh[i-1] && vec[i] > vec[0]+c)) {
      ans[i] = 0; continue;
    }
    if ((pref[i]+c)>=ah[i]) {
      cnt = i;
    }
    else if (vec[i] < ah[i]) {
      cnt = i+1;
    }
    else if (vec[i] <= vec[0]+c) {
      cnt = i;
    }
    ans[i] = cnt;
  }

  for (auto &e: ans) cout << e << " ";
  cout << "\n";

}

int main() {
  cin.sync_with_stdio(0);
  cin.tie(0);

  int t;
  cin >> t;
  while (t--) solve();
  
}