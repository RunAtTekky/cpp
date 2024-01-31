/*
    RunAt - green
*/
#include <iostream>
#include <numeric>
#include <algorithm>
#include <vector>
using namespace std;

typedef int long long ll;
#define p(a) cout << a << "\n";

void solve() {
  ll n,x;
  cin >> n >> x;

  if (n%x != 0) {p(-1); return;}

  vector<long long> vec(n+1);
  
  iota(vec.begin(), vec.end(), 0);

  vec[1] = x; vec[n] = 1;

  while (x < n) {
    for (int currPos = x*2; currPos<=n; currPos += x) {
      if (n%currPos == 0) {
        vec[x] = currPos;
        x = currPos;
        break;
      }
    }
  }

  for (int i=1; i<=n; i++) {
    cout << vec[i] << " ";
  }
  cout << "\n";

}

int main() {
  int tests = 1;
  cin >> tests;
  while (tests--) solve();
  return 0;
}
