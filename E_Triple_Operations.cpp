// RunAt - Green
#include <bits/stdc++.h>
using namespace std;

const int N = 2e5+5;
vector<int> dp(N);

int oper(int x) {
  int cnt = 0;

  while (x>0) {
    x /= 3;
    cnt++;
  }

  return cnt;
}

void solve() {
  int l,r;
  cin >> l >> r;

  int total = 2*(dp[l]);

  for (int i=l+1; i<=r; i++) {
    total += dp[i];
  }

  cout << total << "\n";
}

int main() {
  cin.sync_with_stdio(0); cin.tie(0);

  for (int i=1; i<N; i++) {
    dp[i] = oper(i);
  }
  
  int t; cin >> t; while (t--) solve();
}