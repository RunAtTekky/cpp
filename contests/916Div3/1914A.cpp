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
#define debugV(vec) for (auto &e: vec) {cout << e << " ";} cout << "\n";
#define YES cout << "YES" << "\n"
#define NO cout << "NO" << "\n"

const int N = 100005;

void solve() {
    ll n;
    cin >> n;

    string s; cin >> s;

    vector<int> alpha(26);
    // iota(alpha.begin(), alpha.end(), 1);

    for (auto ch : s) {
        alpha[ch-'A']++;
    }
    int cnt = 0;
    for (int i=0; i<26; i++) {
        if (alpha[i] >= i+1) {
            cnt++;
        }
    }
    p(cnt);
}


int main() {
    int tests = 1;
    cin >> tests;
    while (tests--) solve();
    return 0;
}