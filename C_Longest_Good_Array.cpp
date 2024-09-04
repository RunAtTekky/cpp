// RunAt - Green
#include <bits/stdc++.h>
using namespace std;

void solve() {
  int l,r;
  cin >> l >> r;

  long long diff = r - l;

  long long s=0, e=r;

  while (s<=e) {
    long long mid = (s+e)/2;

    long long lhs = mid*(mid-1);

    if (lhs > 2*diff) e = mid-1;
    else {
      s = mid+1;
    }
  }

  cout << s - 1 << "\n";

}

int main() {
  cin.sync_with_stdio(0); cin.tie(0);
  int t; cin >> t; while (t--) solve();
}