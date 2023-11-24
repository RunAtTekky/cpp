/*
    RunAt - grey
*/
#include <iostream>
#include <vector>
using namespace std;

typedef int long long ll;
#define printnl(a) cout << a << "\n";

void solve() {
    ll n;
    cin >> n;

    ll last = 0;
    ll ans = 0;
    for (int i=0; i<n; i++) {
        int r; cin >> r;
        if (r > last) {
            ans += r - last;
        }
        last = r;
    }
    printnl(ans-1);
}


int main() {
    int tests = 1;
    cin >> tests;
    while (tests--) solve();
    return 0;
}