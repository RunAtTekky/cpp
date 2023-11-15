#include <iostream>
using namespace std;

#define ll long long
#define printnl(a) cout << a << "\n";

void solve() {
    ll n,m,a,b;
    cin >> n >> m >> a >> b;

    if (b/m < a) {
        int ans = (n/m)*b;
        ans += (b<(n%m)*a) ? b : (n%m)*a;
        printnl(ans);
    } else {
        printnl(a*n);
    }
}


int main() {
    int tests;
    tests = 1;

    while (tests--) {
        solve();
    }
    
    return 0;
}