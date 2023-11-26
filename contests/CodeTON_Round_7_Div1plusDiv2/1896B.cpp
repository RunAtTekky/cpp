/*
    RunAt - grey
*/
#include <iostream>
#include <set>
#include <map>
#include <climits>
#include <algorithm>
#include <numeric>
#include <vector>
#include <string>
using namespace std;

typedef int long long ll;
#define printnl(a) cout << a << "\n";
#define printab(a,b) cout << a << " " << b << "\n";

const int N = 100005;

void solve() {
    ll n;
    cin >> n;

    string s; cin >> s;

    ll currCountOfA = 0;

    ll ans = 0;
    for (int i=0; i<=n-2; i++) {
        if (s[i] == 'A') {
            currCountOfA++;
        }
        if (s[i] == 'A' && s[i+1] == 'B') {
            ans += currCountOfA;
            currCountOfA = 0;
            swap(s[i],s[i+1]);
        }
    }

    printnl(ans);
}


int main() {
    int tests = 1;
    cin >> tests;
    while (tests--) solve();
    return 0;
}