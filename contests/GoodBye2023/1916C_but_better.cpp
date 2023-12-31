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

    ll sum = 0;
    ll odd = 0;

    for (int i=0; i<n; i++) {
        ll ele; cin >> ele;
        sum += ele;
        odd += (ele&1);

        if (i==0) {
            cout << sum << " "; continue;
        }

        if (odd%3 == 1) {
            cout << sum - odd/3 - 1 << " ";
        }
        else {
            cout << sum - odd/3 << " ";
        }

    }
    cout << "\n";
}


int main() {
    int tests = 1;
    cin >> tests;
    while (tests--) solve();
    return 0;
}