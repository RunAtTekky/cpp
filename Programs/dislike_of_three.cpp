#include <iostream>
#include <vector>
using namespace std;

vector<int> nums;

bool dislikes (int i) {
  if (i%3 == 0 || i%10 == 3) return true;
  return false;
}

void pre() {
  const int MAX_POSSIBLE = 10000;
  for (int i=1; i<MAX_POSSIBLE; i++) {
    if (dislikes(i)) continue;
    nums.push_back(i);
  }
}


int main() {
  pre();

  auto solve = [] (int k) {
    cout << nums[k-1] << "\n";
  };

  int t;
  cin >> t;
  while (t--) {
    int k; cin >> k;
    solve(k);
  }
  return 0;
}
