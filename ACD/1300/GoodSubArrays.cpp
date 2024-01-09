#include <iostream>
#include <vector>
using namespace std;


#define ll long long

ll fact(ll n) {
  return (n*(n+1))/2;
}

void solve() {
  ll n; cin >> n;
  vector<ll> vec(n);
  for(auto &e : vec) {
    cin >> e;
  }
  
  ll res = 0;

  int j=0;

  /*
    Keep one pointer which will go one by one.
    Another pointer will keep moving till the condition b[i] >= i is satisfied.
    When the condition fails, add these elements in between to answer.
  */
  for (int i=0; i<n; i++) {

    while (j<n && vec[j] >= (j-i+1)) j++;

    res += (j-i);
  }

  cout << res << "\n";
} 

int main() {
  int t; cin >> t;
  while (t--) {
    solve();
  }
}
