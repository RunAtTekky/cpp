// RunAt - Green
#include <bits/stdc++.h>
using namespace std;

#define int long long

int toInt(char ch) {
  return ch-'0';
}

void solve() {
  int n; cin >> n;
  string s; cin >> s;

  if (n<3) {
    if (n == 2) {
      int res = toInt(s[0])*10 + toInt(s[1]);
      cout << res << "\n";
    }
    else {
      cout << n << "\n";
    }
    return;
  }

  if (n==3) {
    int s1 = toInt(s[0])*10 + toInt(s[1]);
    int s2 = toInt(s[1])*10 + toInt(s[2]);

    int mini = min({s1 + toInt(s[2]),
                    s1 * toInt(s[2]),
                    toInt(s[0]) + s2,
                    toInt(s[0]) * s2
    });
    cout << mini << "\n";
    return;
  }

  if (s.find('0') != string::npos) {
    cout << 0 << "\n";
    return;
  }

  // Now use DP
  vector<vector<int>> dp(n+1, vector<int>(2,-1));
  function<int(int,bool)> rec = [&](int i, bool ok) -> int {
    if (i==n && ok) return 1;
    if (i==n) return INT_MAX;

    if (dp[i][ok] != -1) return dp[i][ok];

    int single = INT_MAX;
    int combined = INT_MAX;

    if (!ok && i<n-1) {
      int res = (toInt(s[i]))*10 + (toInt(s[i+1]));
      combined = res + (rec(i+2, 1));
      combined = min(combined,res * (rec(i+2, 1)));
    }

    single = toInt(s[i]) + rec(i+1, ok);
    single = min(single, toInt(s[i]) * rec(i+1, ok));

    return dp[i][ok] = min(single, combined);
  };

  cout << rec(0,0) << "\n";


}

int32_t main() {
  cin.sync_with_stdio(0); cin.tie(0);
  int t; cin >> t; while (t--) solve();
}