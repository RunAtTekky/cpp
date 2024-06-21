// RunAt - Green
#include <bits/stdc++.h>
using namespace std;

void solve() {
  int x; cin >> x;

  vector<int> binArr(32);

  for (int i=0; i<=31; i++) {
    // If bit is active only then add
    if ( ((x>>i)&1) == 0) continue;

    /*
    If bit is already added
    then remove i'th bit and add (i+1)'th bit
    */ 
    if (binArr[i]) {
      binArr[i] = 0;
      binArr[i+1] = 1;
      continue;
    }
    
    if (i==0) {
      binArr[i] = 1;
      continue;
    }
     
    /*
    If previous element is 1. The condition is [1 i 0]
    We can't set i = 1. Thus we set i+1 = 1 and i-1 = -1
    */

    if (binArr[i-1] == 1) {
      binArr[i+1] = 1;
      binArr[i-1] = -1;
    }
    // If previous isn't 1 then just add this bit here
    else {
      binArr[i] = 1;
    }
  }

  // We will output the entire array even though it is mostly empty.
  cout << binArr.size() << "\n";
  for (auto &e : binArr) cout << e << " ";
  cout << "\n";


}

int main() {
  cin.sync_with_stdio(0);
  cin.tie(0);

  int t; cin >> t;
  while (t--) solve();
  
}