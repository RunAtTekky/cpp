/*
    RunAt - grey
*/
#include <iostream>
#include <climits>
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
    ll n,k,x;
    cin >> n >> k >> x;

    vector<ll> vec(n);
    readV(vec);

    sort(vec.begin(), vec.end());

    vector<ll> preSum(n+1);
    partial_sum(vec.begin(), vec.end(), preSum.begin()+1);

    // debugV(vec);
    // debugV(preSum);
    // debugV(postSum);

    ll maxi = INT_MIN;
    for (int take=0; take<=k; take++) {
        ll res = preSum[n-take] - 2*preSum[min(n,n-take+x)] + preSum[n];
        maxi = max(maxi,res);
    }
    p(maxi);
    // cout << "\n";
    
}

int main() {
    int tests = 1;
    cin >> tests;
    while (tests--) solve();
    return 0;
}
