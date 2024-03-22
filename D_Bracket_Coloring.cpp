/*
  RunAt - green
*/
#include <iostream>
#include <set>
#include <climits>
#include <string>
#include <numeric>
#include <cmath>
#include <map>
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

void solve() {
  ll n;
  cin >> n;
  
  string bracs; cin >> bracs;

  vector<int> pref(n);
  vector<int> suff(n);

  int curr_pref = 0;
  for (int i=0; i<n; i++) {
    if (bracs[i] == '(') {
      pref[i] = ++curr_pref;
    }
  }
  int curr_suff = 0;
  for (int i=n-1; i>=0; i--) {
    if (bracs[i] == ')') {
      suff[i] = ++curr_suff;
    }
  }

  for (auto &e: pref) cout << e << " ";
  cout << "\n";
  for (auto &e: suff) cout << e << " ";
  cout << "\n";
  

  int bp = -1;
  for (int i=0; i+1<n; i++) {
    if (pref[i] != 0 && pref[i] == suff[i+1]) {
      bp = i;
      break;
    }
    if (suff[i] != 0 && suff[i] == pref[i+1]) {
      bp = i;
      break;
    }
  }
  if (bp == -1) {p(-1); return;}

  int first_bracs = pref[bp];

  if (pref[bp] == n/2) {
    p(1);
    for (int i=0; i<n; i++) {
      cout << "1 ";
    }
    cout << "\n";
  }
  else {
    p(2);
    vector<int> sol(n);

    for (int i=0; i<n; i++) {
      if ((pref[i]!=0 && pref[i]<=first_bracs) || (suff[i]!=0 && suff[i]<=first_bracs)) {
        sol[i] = 1;
      }
      else sol[i] = 2;
    }
    for (auto &e: sol) cout << e << " ";
    cout << "\n";
    
    
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
