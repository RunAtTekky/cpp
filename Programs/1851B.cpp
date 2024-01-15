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
    ll n;
    cin >> n;
    vector<long long> vec(n);
    for (auto &e: vec) cin >> e;
    
    vector<ll> newVec(n);
    for (int i=0; i<n; i++) {
        newVec[i] = vec[i];
    }
    sort(newVec.begin(), newVec.end());

    for (int i=0; i<n; i++) {
        if ((newVec[i]&1) != (vec[i]&1)) {NO; return;}
    }
    YES;
}

int main() {
    int tests = 1;
    cin >> tests;
    while (tests--) solve();
    return 0;
}
