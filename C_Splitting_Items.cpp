// RunAt - Green
#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n, k; cin >> n >> k;

  vector<int> items(n);
  for (auto &item : items) cin >> item;

  sort(items.begin(), items.end());

  for (int i=n-2; i>=0; i-=2) {
    int diff = items[i+1] - items[i];

    items[i] = items[i] + min(k,diff);

    k -= min(k,diff);
  }

  long long Alice = 0, Bob = 0;
  bool AliceTurn = true;
  for (int i=n-1; i>=0; i--) {
    if (AliceTurn) Alice += items[i];
    else Bob += items[i];

    AliceTurn = !AliceTurn;
  }

  cout << Alice - Bob << "\n";
}

int main() {
  cin.sync_with_stdio(0); cin.tie(0);
  int t; cin >> t; while (t--) solve();
}