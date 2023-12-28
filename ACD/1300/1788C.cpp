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
#define YES cout << "Yes" << "\n"
#define NO cout << "No" << "\n"

const int N = 100005;

void solve() {
    ll n;
    cin >> n;

    if (!(n&1)) {NO; return;}
    
    YES;
    for (int i=1; i<=(n+1)/2; i++) {
        p2(i, 2*n+2 - 2*i);
    }
    for (int i=n; i>(n+1)/2; i--) {
        p2(i,3*n+2 - 2*i);
    }
}


int main() {
    int tests = 1;
    cin >> tests;
    while (tests--) solve();
    return 0;
}