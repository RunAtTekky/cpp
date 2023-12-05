/*
    RunAt - grey
*/
#include <iostream>
using namespace std;

typedef int long long ll;
#define printnl(a) cout << a << "\n";

void solve() {
    ll n;
    cin >> n;

    ll i = 2;
    while (i<=n) {
        i = (i<<1) - 1;
        if (n%i == 0) {printnl(n/i); return;}
        i = i+1;
    }
}


int main() {
    int tests = 1;
    cin >> tests;
    while (tests--) solve();
    return 0;
}