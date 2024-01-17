/*
    RunAt - grey
*/
#include <iostream>
#include <vector>
using namespace std;

typedef int long long ll;
#define p(a) cout << a << "\n";

void solve() {
    ll n;
    cin >> n;

    vector<long long> vec(n);
    for (auto &e: vec) cin >> e;
    
    vector<long long> b(n);
    b[0] = vec[0];

    for (int i=1; i<n; i++) {
        ll fs = b[i-1] - vec[i];
        ll sc = b[i-1] + vec[i];

        if (fs != sc && fs >= 0 && sc >= 0) {p(-1); return;}
        b[i] = (fs>=0) ? fs : sc;
    }
    for (auto &e: b) cout << e << " ";
    cout << "\n";
    
}

int main() {
    int tests = 1;
    cin >> tests;
    while (tests--) solve();
    return 0;
}
