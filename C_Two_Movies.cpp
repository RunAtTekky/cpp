// RunAt - Green
#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n; cin >> n;

  vector<int> movieA(n);
  vector<int> movieB(n);

  for (auto &rating : movieA) cin >> rating;
  for (auto &rating : movieB) cin >> rating;

  int ratingA = 0;
  int ratingB = 0;

  int bothGood = 0;
  int bothBad = 0;

  for (int i=0; i<n; i++) {
    int a = movieA[i], b = movieB[i];

    if (a == 0 && b == 0) continue;
    if (a+b == -1) continue;

    if (a == 1 && b <= 0) ratingA++;
    if (b == 1 && a <= 0) ratingB++;

    if (a+b == 2) {
      bothGood++;
    }
    if (a+b == -2) {
      bothBad++;
    }
  }

  while (bothGood--) {
    if (ratingA < ratingB) {
      ratingA++;
    } else ratingB++;
  }

  while (bothBad--) {
    if (ratingA > ratingB) {
      ratingA--;
    } else ratingB--;
  }

  cout << min(ratingA, ratingB) << "\n";

}

int main() {
  cin.sync_with_stdio(0); cin.tie(0);
  int t; cin >> t; while (t--) solve();
}