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

void solve() {
    ll n,k;
    cin >> n >> k;
    
    vector<ll> a(n);
    readV(a);

    vector<ll> b(n);
    readV(b);

    ll maxi = b[0];
    ll maxScore = 0;

    vector<ll> preSum(n);
    partial_sum(a.begin(), a.end(), preSum.begin());
    // debugV(preSum);
    for (int i=0; i<n && i<k; i++) {
        maxi = max(maxi,b[i]);
        ll sum = preSum[i] + (k-i-1)*maxi;
        maxScore = max(maxScore,sum);
    }
    p(maxScore);
}


int main() {
    int tests = 1;
    cin >> tests;
    while (tests--) solve();
    return 0;
}