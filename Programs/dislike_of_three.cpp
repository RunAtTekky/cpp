#include <iostream>
#include <vector>
using namespace std;

vector<int> nums;

bool dislikes (int i) {
  if (i%3 == 0 || i%10 == 3) return true;
  return false;
}

void pre() {
  const int max_possible = 10000;
  for (int i=1; i<max_possible; i++) {
    if (dislikes(i)) continue;

    nums.push_back(i);
  }
}

void solve() {
  int k; cin >> k;

  cout << nums[k-1] << "\n";
}

int main() {
  pre();
  int t;
  cin >> t;
  while (t--) solve();
  return 0;
}
