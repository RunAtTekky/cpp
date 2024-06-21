// RunAt - Green
#include <bits/stdc++.h>
using namespace std;

#define YES cout << "Yes\n"
#define NO cout << "No\n"

int main() {
  cin.sync_with_stdio(0);
  cin.tie(0);

  int t; cin >> t;
  while (t--) {
    int n,m;
    cin >> n >> m;

    if (n < m) {
      NO;
    }

    else if ((m-n)&1) {
      NO;
      
    }
    else {
      YES;
    }
  }
  
}