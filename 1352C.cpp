#include <iostream>
using namespace std;

#define ll long long
#define printnl(a) cout << a << "\n";

void solve() {
    ll n,k;
    cin >> n >> k;

    ll diff = n-1; // For n = 3, it will have 2 steps each time

    ll times;
    times = (k%diff == 0) ? k/diff : k/diff + 1;
    ll multiple = n*times;
    ll ans = 0;
    ans = (k%diff == 0) ? multiple - 1 : multiple - n + k%diff;
    printnl(ans);
}


int main() {
    int tests;
    cin >> tests;
    
    while (tests--) {
        solve();
    }
    
    return 0;
}