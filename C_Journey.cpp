// RunAt - Green
#include <bits/stdc++.h>
using namespace std;

const int N = 1e5+1;
vector<vector<long long>> edges(N+1);

long double dfs(long long curr, long long parent) {
  long double expectedValues = 0;
  long long numberOfChilds = 0;

  for (auto &nextKingdom : edges[curr]) {
    if (nextKingdom != parent) {
      expectedValues += dfs(nextKingdom, curr);
      numberOfChilds++;
    }
  }

  if (numberOfChilds == 0) return 0;

  return 1 + expectedValues/numberOfChilds;

}

void solve() {
  int n; cin >> n;

  for (int i=1; i<n; i++) {
    int u,v;
    cin >> u >> v;

    edges[u].push_back(v);
    edges[v].push_back(u);
  }
  
  cout << setprecision(15) << fixed;
  cout << dfs(1, -1) << "\n";

}

int main() {
  cin.sync_with_stdio(0); cin.tie(0);
  solve();
}