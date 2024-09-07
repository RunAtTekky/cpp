// RunAt - Green
#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n,q; cin >> n >> q;

  string a,b; 
  cin >> a >> b;

  vector<vector<int>> freqA(n+1, vector<int>(26));
  vector<vector<int>> freqB(n+1, vector<int>(26));

  for (int i=0; i<n; i++) {
    for (int j=0; j<26; j++) {
      freqA[i+1][j] = freqA[i][j] + (a[i]-'a'==j);
      freqB[i+1][j] = freqB[i][j] + (b[i]-'a'==j);
    }
  }

  for (int i=0; i<q; i++) {
    int l,r;
    cin >> l >> r;

    int total = 0;

    // cout << l << " <- l and r -> " << r << "\n";

    for (int alpha=0; alpha<26; alpha++) {
      int freqAlphaA = freqA[r][alpha] - freqA[l-1][alpha];
      int freqAlphaB = freqB[r][alpha] - freqB[l-1][alpha];

      // cout << (char)(alpha+'a') << ": " << freqAlphaA << " " << freqAlphaB << "\n";


      if (freqAlphaA < freqAlphaB) total += freqAlphaB - freqAlphaA;
    }

    cout << total << "\n";
  }



}

int main() {
  cin.sync_with_stdio(0); cin.tie(0);
  int t; cin >> t; while (t--) solve();
}