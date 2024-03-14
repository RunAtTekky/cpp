/*
    RunAt - grey
*/
#include <iostream>
#include <set>
#include <map>
#include <climits>
#include <string>
#include <numeric>
#include <algorithm>
#include <vector>
using namespace std;

typedef int long long ll;
#define p(a) cout << a << "\n";
#define p2(a,b) cout << a << " " << b << "\n";
#define readV(vec) for (auto &e: vec) cin >> e;
#define debugV(vec) for (auto &e: vec) {cout << e << " ";} cout << "\n";
#define YES cout << "YES" << "\n"
#define NO cout << "NO" << "\n"

const int N = 100005;

vector<int> nums(N);

void solve() {
    ll n;
    cin >> n;

    nums.clear();
    
    vector<ll> vec(n);
    for (auto &e: vec) {
      cin >> e;
      nums[e]++;
    } 
    
    int mini = *min_element(vec.begin(), vec.end());
    int maxi = *max_element(vec.begin(), vec.end());

    if (mini == maxi) {
      p(n);
      for (int i=1; i<=n; i++) {
        p2(i,i);
      }
      return;
    }

    int MEX = 0;
    int all_in_range = 1;
    for (int i=0; i<=maxi; i++) {
      all_in_range &= (nums[i]);
      if (!nums[i]) {
        MEX = i; break;
      } 
    }
    if (all_in_range) {
      p(-1); return;
    }
    
    for (int i=0; i<MEX; i++) {
      if (nums[i] < 2) {
        p(-1); return;
      }
    }

    set<int> st;
    int pnt = -1;
    for (int i=0; i<n; i++) {
      if (vec[i] < MEX) {
        st.insert(vec[i]);
      }
      if (st.size() == MEX) {
        pnt = i; break;
      }
    }
    
    if (pnt == -1) {
      p(-1); return;
    }
    
    p(2);
    p2(1,pnt+1);
    p2(pnt+2, n);

    
  

    

    
    

    
}


int main() {
    int tests = 1;
    cin >> tests;
    while (tests--) solve();
    return 0;
}

