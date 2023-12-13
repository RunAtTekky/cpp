/*
    RunAt - grey
*/
#include <iostream>
#include <vector>
using namespace std;

typedef int long long ll;
#define p(a) cout << a << "\n";
#define p2(a,b) cout << a << " " << b << "\n";
#define readV(vec) for (auto &e: vec) cin >> e;

void solve() {
    ll n;
    cin >> n;

    vector<ll> v(n);
    readV(v);
    
    // If there is only one element it is already non-decreasing
    if (n == 1) {p(0); return;}

    // Number of operations
    p(n-1);
    // We make the first and last two elements equal
    if ((v[0]&1) == (v[n-1]&1)) {
        v[0] = v[n-1];
    } else {
        v[n-1] = v[0];
    }
    p2(1,n);
    
    // Iterate from second to second last
    // Give them the first or last value (both are same)
    // At the end, array will we non-decreasing in (n-1) steps
    for (int i=1; i<n-1; i++) {
        if ((v[0]&1) == (v[i]&1)) {p2(i+1,n);}
        else {p2(1,i+1);}
    }
}


int main() {
    int tests = 1;
    cin >> tests;
    while (tests--) solve();
    return 0;
}