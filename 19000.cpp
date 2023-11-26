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

    ll dotCnt = 0;
    ll totalDotCount = 0;
    for (int i=0; i<n; i++) {
        if (s[i] == '.') {
            dotCnt++;
            totalDotCount++;
            if (dotCnt == 3) {
                printnl(2); return;
            }
        } else {
            dotCnt = 0;
        }
    }
    printnl(totalDotCount);

}


int main() {
    int tests = 1;
    cin >> tests;
    while (tests--) solve();
    return 0;
}