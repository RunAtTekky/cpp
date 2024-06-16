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
#define YES cout << "Yes" << "\n"
#define NO cout << "No" << "\n"

const int N = 1e5+5;
const int MOD = 1e9+7;

void solve() {
  ll n,k;
  cin >> n >> k;

  if (k&1) {NO; return;}
  if (n==1 && k!=0) {NO; return;}

  vector<long long> vec(n+1);
  iota(vec.begin(), vec.end(), 0);

  ll max_sum = 0;
  for (int i=1; i<=n; i++) {
    max_sum += abs(n+1-i-i);
  }

  if (max_sum < k) {NO; return;}
  
  for (int i=1; i<=(n+1)/2; i++) {
    ll maxDiff = (n+1-i-i)*2;
    if (maxDiff <= k){
      k-=maxDiff;
      swap(vec[i], vec[n+1-i]);
    } 
    else {
      swap(vec[i], vec[i+(k/2)]);
      k = 0;
    }
    if (k==0) break;
  }


  YES;
  
  for (int i=1; i<=n; i++) {
    cout << vec[i] << " ";
  }
  cout << "\n";
  

}

int main() {
  cin.sync_with_stdio(0);
  cin.tie(0);
  int tests = 1;
  cin >> tests;
  while (tests--) solve();
  return 0;
}
