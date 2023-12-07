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
    ll n,k;
    cin >> n >> k;

    string s; cin >> s;

    vector<ll> cnt(n);

    int prev = 0;
    for (int i=0; i<n; i++) {
        if (s[i] == 'W') {
            cnt[i] = prev + 1;
            prev = cnt[i];
        }
        else cnt[i] = prev;
    }

    int mini = INT_MAX;
    for (int i=0; i+k-1<n; i++) {
        int whites = cnt[i+k-1] - cnt[i];
        whites += (s[i] == 'B') ? 0 : 1;
        // printab(whites, i);
        // if (s[i] == 'B') whites++;
        mini = min(mini,whites);
    }
    printnl(mini);


}


int main() {
    int tests = 1;
    cin >> tests;
    while (tests--) solve();
    return 0;
}