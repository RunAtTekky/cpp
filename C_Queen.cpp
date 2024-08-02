// RunAt - Green
#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n; 
  cin >> n;
  vector<vector<int>> children(n+1);
  vector<int> respect(n+1);

  int rootNode = -1;

  // Make adjacency list
  for (int i=0; i<n; i++) {
    int parent;
    cin >> parent >> respect[i+1];
    if (parent == -1) continue;

    children[parent].push_back(i+1);
  }

  // DFS
  vector<int> res;
  for (int i=1; i<=n; i++) {
    if (respect[i] == 1) {
      bool toRemove = true;
      for (auto child: children[i]) {
        if (respect[child] == 0) {
          toRemove = false;
          break;
        }
      }
      if (toRemove) res.push_back(i);
    }
  }

  if (res.size() == 0) {cout << -1 << "\n"; return;}

  for (auto e : res) cout << e << " ";
  

}

int main() {
  cin.sync_with_stdio(0); cin.tie(0);
  solve();
}