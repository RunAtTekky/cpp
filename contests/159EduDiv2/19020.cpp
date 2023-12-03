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
#define printnl(a) cout << a << "\n";
#define printab(a,b) cout << a << " " << b << "\n";
#define readV(vec) for (auto &e: vec) cin >> e;
#define debugV(vec) for (auto &e: vec) {cout << e << " ";} cout << "\n";
#define YES cout << "YES" << "\n"
#define NO cout << "NO" << "\n"

const int N = 100005;

void solve() {
    ll n;
    cin >> n;

    string s; cin >> s;

    int cnt = 0;
    for (int i=0; i<n; i++) {
        if (s[i] == '0') cnt++;
    }
    if (cnt > (n-cnt)) {YES; return;}

    for (int i=0; i<n-1; i++) {
        if (s[i] != s[i+1]) {
            YES; return;
        }
    }
    NO;
}


int main() {
    int tests = 1;
    cin >> tests;
    while (tests--) solve();
    return 0;
}