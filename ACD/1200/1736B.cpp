/*
    RunAt - grey
*/
#include <iostream>
#include <numeric>
#include <vector>
using namespace std;

#define ll long long
#define printnl(a) cout << a << "\n";

ll getLCM(ll a, ll b) {
    ll g = std::gcd(a,b);
    return (a*b)/g;
}

void solve() {
    ll n;
    cin >> n;

    vector<ll> a(n+2,1);
    for (int i=1; i<=n; i++) cin >> a[i];

    vector<ll> b(n+2,1);
    for (int i=1; i<=n+1; i++) {
        b[i] = getLCM(a[i], a[i-1]);
    }

    /* 
        If gcd of two adjacent elements is not equal to 
        what was in the original array.
        Then it means that the array is not possible
    */
    for (int i=1; i<=n; i++) {
        if (std::gcd(b[i], b[i+1]) != a[i]) {
            printnl("NO");
            return;
        }
    }
    printnl("YES");

}


int main() {
    int tests = 1;
    cin >> tests;
    while (tests--) solve();
    return 0;
}