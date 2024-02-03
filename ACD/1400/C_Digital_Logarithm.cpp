/*
    RunAt - green
*/
#include <iostream>
#include <set>
#include <queue>
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

ll getSize(ll x) {
  return to_string(x).size();
}

void solve() {
  ll n;
  cin >> n;

  vector<long long> vec(n);
  for (auto &e: vec) cin >> e;
  
  vector<long long> vec2(n);
  for (auto &e: vec2) cin >> e;

  priority_queue<ll> pa(vec.begin(), vec.end());
  priority_queue<ll> pb(vec2.begin(), vec2.end());

  ll ans = 0;

  while (!pa.empty()) {
    if (pa.top() == pb.top()) {
      pa.pop(); pb.pop();
      continue;
    }

    if (pa.top() > pb.top()) {
      int sizeOfLargest = getSize(pa.top());
      pa.pop();
      pa.push(sizeOfLargest);
    }
    else {
      int sizeOfLargest = getSize(pb.top());
      pb.pop();
      pb.push(sizeOfLargest);
    }
    ans++;
  }

  p(ans);
  
  
}

int main() {
  int tests = 1;
  cin >> tests;
  while (tests--) solve();
  return 0;
}
