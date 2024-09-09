// RunAt - Green
#include <bits/stdc++.h>
using namespace std;

#define int long long

bool isLightOn(int start, int k, int time) {
  int x = (time-start)/k;

  if (x&1) return false;

  int lower_bound = start + x*k;
  int upper_bound = start + (x+1)*k;

  return (lower_bound <= time && time < upper_bound);
}

void solve() {
  int n,k; cin >> n >> k;

  vector<long long> lights(n);
  for (auto &light: lights) cin >> light;

  // // If any two lights have exactly difference of k they will alternate
  // // Thus they will never turn on at the same time

  // map<int, bool> mp;

  // for (auto light : lights) {
  //   if (mp[light-k]) {
  //     cout << "-1\n"; return;
  //   }
  //   mp[light] = true;
  // }

  sort(lights.begin(), lights.end());

  int left = lights[n-1], right = lights[n-1] + k-1;

  for (auto start : lights) {

    int l = 0, r = 1e9;

    while (l<=r) {

      int mid = (l+r)/2;

      int z_lb = start + mid*2*k;
      int z_ub = start + mid*2*k + k-1;

      if (z_ub < left) {
        l = mid+1; continue;
      }
      if (right < z_lb) {
        r = mid-1; continue;
      }

      // If the range of z is in [left,right]
      // Create new smaller range
      left = max(left, z_lb);
      right = min(right, z_ub);

      break;
    }

    // This means that we were not able to find that number in the range
    if (l > r) {
      cout << "-1\n"; return;
    }
  }

  // Print the minimum of the range
  cout << left << "\n";
}

int32_t main() {
  cin.sync_with_stdio(0); cin.tie(0);
  int t; cin >> t; while (t--) solve();
}