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
    string s;
    cin >> s;

    ll n = s.size();
    ll mini = INT_MAX;

    string res;
    for (int i=n-1; i>=0; i--) {
        int ele = s[i] - '0';
        if (ele > mini && ele!=9) {
            res += char(ele + '0' + 1);
        } else if (ele!=9) {
            res += char(ele + '0');
            mini = ele;
        } else {
            res += char(ele + '0');
        }
    }
    // printnl(res);
    sort(res.begin(), res.end());
    printnl(res);
}


int main() {
    int tests; cin >> tests;
    while (tests--) solve();
    return 0;
}