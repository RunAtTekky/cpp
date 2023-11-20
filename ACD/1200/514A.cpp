#include <iostream>
#include <map>
#include <climits>
#include <algorithm>
#include <numeric>
#include <string>
#include <vector>
using namespace std;

#define ll long long
#define printnl(a) cout << a << "\n";
#define printab(a,b) cout << a << " " << b << "\n";

const int N = 100005;


void solve() {
    ll x;
    cin >> x;

    ll res = 0;
    ll mult = 1;
    while (x>0) {
        ll digit = x%10;
        if (digit>=5) {
            digit = 9 - digit;
        }
        // if it is the last element and it is 0
        if (digit == 0 && x/10 == 0) digit = x%10;

        res += digit*mult;
        x /= 10;
        mult *= 10;

    }
    printnl(res);
}


int main() {
    int tests = 1;
    while (tests--) solve();
    return 0;
}