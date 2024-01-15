/*
    RunAt - grey
*/
#include <iostream>
#include <set>
#include <map>
#include <climits>
#include <string>
#include <numeric>
#include <algorithm>
#include <vector>
using namespace std;

typedef int long long ll;
#define p(a) cout << a << "\n";
#define p2(a,b) cout << a << " " << b << "\n";
#define readV(vec) for (auto &e: vec) cin >> e;
#define printV(vec) for (auto &e: vec) {cout << e << " ";} cout << "\n";
#define YES cout << "YES" << "\n"
#define NO cout << "NO" << "\n"

const int N = 100005;

void solve() {
    ll n;
    cin >> n;
    string s;
    string f;
    cin >> s;
    cin >> f;

    ll ans = 0;
    ll inPos = 0;
    ll notInPos = 0;
    ll notUsed = 0;

    for (int i=0; i<n; i++) {
        if (f[i] == '1') {
            if (s[i] == '0') notInPos++;
            if (s[i] == '1') inPos++;
        }
        else if (s[i] == '1') notUsed++;
    }

    if (notUsed>notInPos) {
        p(notUsed);
    }
    else p(notInPos);

}

int main() {
    int tests = 1;
    cin >> tests;
    while (tests--) solve();
    return 0;
}
