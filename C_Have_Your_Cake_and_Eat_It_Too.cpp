// RunAt - Green
#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n; cin >> n;

  vector<int> Alice(n);
  vector<int> Bob(n);
  vector<int> Charlie(n);

  for (auto &e : Alice) cin >> e;
  for (auto &e : Bob) cin >> e;
  for (auto &e : Charlie) cin >> e;


  long long sum = accumulate(Alice.begin(), Alice.end(), 0LL);

  long long atLeast = ceil(sum/3.0);

  int b = 0, c = n-1;

  long long alicePart = 0;
  long long bobPart = 0;
  long long charliePart = 0;

  while (b<n) {
    alicePart += Alice[b];
    bobPart += Bob[b];
    charliePart += Charlie[b];

    if (alicePart > atLeast)

    b++;
  }

}

int main() {
  cin.sync_with_stdio(0); cin.tie(0);
  int t; cin >> t; while (t--) solve();
}