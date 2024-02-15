/*
    RunAt - green
*/
#include <iostream>
#include <set>
#include <climits>
#include <cmath>
#include <numeric>
#include <map>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

typedef int long long ll;
#define p(a) cout << a << "\n";
#define p2(a,b) cout << a << " " << b << "\n";
#define YES cout << "YES" << "\n"
#define NO cout << "NO" << "\n"

const int N = 1e5+5;
const int MOD = 1e9+7;

vector<ll> getDivisors(int n) 
{ 
    vector<ll> ans;
    for (int i=1; i<=sqrt(n); i++) 
    { 
        if (n%i == 0) 
        { 
            if (n/i == i) 
                ans.push_back(i);
  
            else {
              ans.push_back(i);
              ans.push_back(n/i);
            }
        } 
    } 
    sort(ans.begin(), ans.end());
    return ans;
} 

void solve() {
  ll n,k;
  cin >> n >> k;

  auto div = getDivisors(n);

  ll res = INT_MAX;
  for (int i=0; i<div.size() && div[i] <= k; i++) {
    if (n/div[i] <= k) {
      res = min(res,div[i]);
      p(res); return;
    }
    else {
      res = min(res,n/div[i]);
    }
  }
  p(res);


}

int main() {
  int tests = 1;
  cin >> tests;
  while (tests--) solve();
  return 0;
}
