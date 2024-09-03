// RunAt - Green
#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n; cin >> n;

  vector<int> noteIndex;
  
  for (int i=0; i<n; i++) {
    string note;
    cin >> note;

    for (int idx=0; idx<4; idx++) {
      if (note[idx] == '#') {
        noteIndex.push_back(idx+1);
        break;
      }
    }
  }

  for (int i=n-1; i>=0; i--) {
    cout << noteIndex[i] << " \n"[i==0];
  }

}

int main() {
  cin.sync_with_stdio(0); cin.tie(0);
  int t; cin >> t; while (t--) solve();
}