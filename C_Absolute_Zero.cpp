// RunAt - Green
#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n; cin >> n;

  vector<long long> arr(n);
  for (auto &e : arr) cin >> e;

  long long mini = *min_element(arr.begin(), arr.end());
  long long maxi = *max_element(arr.begin(), arr.end());

  if (mini == maxi && mini == 0) {
    cout << "0\n"; return;
  }

  vector<long long> vals;

  for (int operation = 0; operation < 40; operation++) {
    long long mid = (mini+maxi)/2;

    vals.push_back(mid);

    mini = INT_MAX;
    maxi = INT_MIN;

    bool allZero = true;
    for (int i=0; i<n; i++) {
      arr[i] = abs(arr[i]-mid);
      if (arr[i] != 0) allZero = false;

      mini = min(mini, arr[i]);
      maxi = max(maxi, arr[i]);
    }

    if (allZero) {
      cout << vals.size() << "\n";
      for (auto e : vals) cout << e << " ";
      cout << "\n\n";
      return;
    }
  }

  cout << -1 << "\n\n";

}

int main() {
  cin.sync_with_stdio(0); cin.tie(0);
  int t; cin >> t; while (t--) solve();
}