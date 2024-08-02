// RunAt - Green
#include <bits/stdc++.h>
using namespace std;

const int N = 3e5+1;
vector<vector<long long>> children(N);
vector<long long> sizes(N);
vector<long long> dpCentroid(N,-1);

void dfs(long long curr) {
  long long currSize = 0;

  for (auto child: children[curr]) {
    dfs(child);
    currSize += sizes[child];
  }

  if (children[curr].empty()) {sizes[curr] = 0; dpCentroid[curr] = curr;}

  sizes[curr] = 1 + currSize;

}

long long findCentroid (long long curr, long long root) {
  if (dpCentroid[root] != -1) return dpCentroid[root];
  bool centroid = true;
  for (auto child : children[curr]) {
    if (sizes[child] > ceil(sizes[root]/2.0)) {
      centroid = false;
      auto isCentroid = findCentroid(child, root);
      if (isCentroid != -1) return child;
    }
  }
  if (centroid) {
    if (ceil(sizes[root]/2.0) < (sizes[root] - sizes[curr])) {
      centroid = false;
    }
  }

  if (centroid) {
    return dpCentroid[root] = curr;
  }
  return -1;
}

void solve() {
  long long n,q; cin >> n >> q;

  for (int i=2; i<=n; i++) {
    long long parent; cin >> parent;

    children[parent].push_back(i);
  }

  dfs(1);

  for (int i=0; i<q; i++) {
    long long query; cin >> query;

    long long centroidVal = dpCentroid[query];
    if (centroidVal != -1) cout << centroidVal << "\n";
    else {
      cout << findCentroid(query, query) << "\n";
    }
  }

}

int main() {
  cin.sync_with_stdio(0); cin.tie(0);
  solve();
}