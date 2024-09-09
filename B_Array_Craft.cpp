// RunAt - Green
#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n,x,y; cin >> n >> x >> y;

  vector<int> arr(n+1,1);

  arr[x] = 1;
  arr[y] = 1;

  for (int i=x+1; i<=n; i+=2) {
    arr[i] = -1;
  }
  for (int i=x+2; i<=n; i+=2) {
    arr[i] = 1;
  }

  for (int i=y-1; i>=1; i-=2) {
    arr[i] = -1;
  }
  for (int i=y-2; i>=1; i-=2) {
    arr[i] = 1;
  }

  for (int i=1; i<=n; i++) {
    cout << arr[i] << " \n"[i==n];
  }


}

int main() {
  cin.sync_with_stdio(0); cin.tie(0);
  int t; cin >> t; while (t--) solve();
}