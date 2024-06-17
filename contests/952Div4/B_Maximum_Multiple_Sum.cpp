// RunAt - Green
#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n; cin >> n;

  int answer = 0;
  int maxSum = 0;
  for (int x=2; x<=n; x++) {
    int multiple = x;
    int sum = 0;
    while (multiple <= n) {
      sum += multiple;
      multiple += x;
    }
    if (sum > maxSum) {
      maxSum = sum;
      answer = x;
    }
  }
  cout << answer << "\n";
}

int main() {
  cin.sync_with_stdio(0);
  cin.tie(0);

  int t; cin >> t;
  while (t--) solve();
  
}