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

    int alpha[26] = {0};
    vector<int> prefix(n);
    vector<int> suffix(n);

    int prev = 0;
    for (int i=0; i<n; i++) {
        if (alpha[s[i]-'a'] == 0) {
            prefix[i] = prev + 1;
            prev = prefix[i];
        } else {
            prefix[i] = prev;
        }
        alpha[s[i]-'a']++;
    }

    fill(alpha, alpha+26, 0);
    prev = 0;
    for (int i=n-1; i>0; i--) {
        if (alpha[s[i]-'a'] == 0) {
            suffix[i] = prev + 1;
            prev = suffix[i];
        } else {
            suffix[i] = prev;
        }
        alpha[s[i]-'a']++;
    }
    int maxDistinct = -1;
    for (int i=0; i<n-1; i++) {
        maxDistinct = max(maxDistinct, prefix[i] + suffix[i+1]);
    }
    printnl(maxDistinct);
}


int main() {
    int tests = 1;
    cin >> tests;
    while (tests--) solve();
    return 0;
}