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

    int lowerRange = 0;
    int upperRange = INT_MAX;
    vector<int> vec;

    for (int i=1; i<=n; i++) {
        int a,x;
        cin >> a >> x;

        if (a==1) {
            lowerRange = max(lowerRange, x);
        }

        if (a==2) {
            upperRange = min(upperRange, x);
        }

        if (a==3) {
            vec.push_back(x);
        }

    }

    int cnt = 0;
    for (auto &e: vec) {
        if (e>=lowerRange && e<=upperRange) {
            cnt++;
        }
    }

    if (upperRange - lowerRange + 1 <= 0) {p(0); return;}

    if (cnt >= upperRange - lowerRange + 1) {p(0); return;}

    int res = upperRange - lowerRange + 1 - cnt;
    p(res);
}

int main() {
    int tests = 1;
    cin >> tests;
    while (tests--) solve();
    return 0;
}
