// RunAt - Green
#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n; cin >> n;
  vector<int> coins(n);

  for (auto &coin : coins) cin >> coin;

  sort(coins.begin(), coins.end());

  long long sum = accumulate(coins.begin(), coins.end(), 0LL);


  long long ourSum = 0;
  for (int i=n-1; i>=0; i--) {
    ourSum += coins[i];
    sum -= coins[i];
    if (ourSum > sum) {
      cout << n-i << "\n";
      return;
    }
  }

}

int main() {
  cin.sync_with_stdio(0); cin.tie(0);
  int t=1; while (t--) solve();
}