/*
    RunAt - grey
*/
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

typedef int long long ll;
#define printnl(a) cout << a << "\n";

void solve() {
    ll n;
    cin >> n;

    string word; cin >> word;

    int alpha[26] = {0};
    int maxi = INT_MIN;
    for (auto c: word) {
        alpha[c-'a']++;
        if (alpha[c-'a']>maxi) maxi = alpha[c-'a'];
    }

    /*
        If we have some element more than n/2 times.
        Obviously we can not remove it completely.
        Lets say we have n = 10
        3 is appearing 7 times, then, we can only remove it 3 times
        Thus resulting in 2*7 - 10 or (7 - (10-7))

        If there is no element greater than n/2
        Then if we have even elements. Then all can be removed.
        If odd 1 will remain at the end.
    */

    auto res = max(n%2, 2*maxi-n);

    printnl(res);
    
}


int main() {
    int tests = 1;
    cin >> tests;
    while (tests--) solve();
    return 0;
}