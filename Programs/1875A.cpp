#include <iostream>
using namespace std;

#define ll long long
#define printnl(a) cout << a << "\n";

void solve() {
    ll a,b,n;
    cin >> a >> b >> n;

    ll sum = 0;
    for (int i=1; i<=n; i++) {
        ll tool;
        cin >> tool;
        
        sum += min(a,tool+1)-1;
    }
    printnl(sum+b);
}


int main() {
    int tests;
    cin >> tests;
    
    while (tests--) {
        solve();
    }
    
    return 0;
}