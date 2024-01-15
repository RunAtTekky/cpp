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
#define printV(vec) for (auto &e: vec) {cout << e << " ";} cout << "\n";
#define YES cout << "YES" << "\n"
#define NO cout << "NO" << "\n"

const int N = 100005;

void solve() {
    ll n,f,a,b;
    cin >> n >> f >> a >> b;

    vector<long long> vec(n);
    for (auto &e: vec) cin >> e;

    vector<ll> diff(n);
    diff[0] = min(a*vec[0],b);
    for (int i=1; i<n; i++) {
        // diff[i] = vec[i]-vec[i-1];
        diff[i] = min(b,a*(vec[i]-vec[i-1]));
        // if (diff[i] > b) diff[i] = b;
    }
    auto sum = accumulate(diff.begin(), diff.end(),0LL);

    // p(sum);
    if (sum >= f) {NO;}
    else {YES;}
    
}

int main() {
    int tests = 1;
    cin >> tests;
    while (tests--) solve();
    return 0;
}
