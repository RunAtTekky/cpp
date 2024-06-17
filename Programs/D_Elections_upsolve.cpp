// RunAt - Green
#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
  int n,c; cin >> n >> c;

  vector<ll> vec(n);
  for (auto &e : vec) cin >> e;

  if (n == 1) {cout << 0 << "\n"; return;}

  int mxIdx = max_element(vec.begin()+1, vec.end()) - vec.begin();

  int maxVotes = max(vec[mxIdx], vec[0]+c);

  int winnerIdx = (maxVotes == vec[0]+c) ? 0 : mxIdx;

  ll sum = c;
  for (int i=0; i<n; sum+=vec[i], i++) {
    int minToDelete = 0;
    if (i == winnerIdx) minToDelete = 0;
    else if (sum + vec[i] >= vec[mxIdx]) minToDelete = i;
    else minToDelete = i+1;
    cout << minToDelete << " ";
  }
  cout << "\n";
}


int main() {
  cin.sync_with_stdio(0);
  cin.tie(0);

  int t; cin >> t;
  while (t--) solve();
  
}