// RunAt - Green
#include <bits/stdc++.h>
using namespace std;

const int N = 1e5+1;

vector<vector<long long>> children(N);
vector<long long> sum(N);
vector<long long> values(N);

void dfs (long long curr, long long par) {
  long long sum_parent = 0;
  if (par != -1) sum_parent = sum[par];

  if (sum[curr] == -1) {
    long long mini = 2e9;
    for (auto child: children[curr]) {
      mini = min(mini, sum[child]);
    }

    if (children[curr].empty()) mini = sum_parent;

    sum[curr] = mini;
  }

  values[curr] = sum[curr] - sum_parent;

  for (auto child: children[curr]) {
    dfs(child, curr);
  }
}

void solve() {
  int n; cin >> n;

  for (int i=2; i<=n; i++) {
    int parent; cin >> parent;
    children[parent].push_back(i);
  }

  for (int i=1; i<=n; i++) {
    cin >> sum[i];
  }

  dfs(1,-1);

  long long total = 0;
  for (int i=1; i<=n; i++) {
    if (values[i] < 0) {
      cout << "-1\n";
      return;
    }
    total += values[i];
  }

  cout << total << "\n";
}

int main() {
  cin.sync_with_stdio(0); cin.tie(0);
  solve();
}