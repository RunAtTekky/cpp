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
    ll n, k;
    cin >> n >> k;

    vector<ll> arr(n);
    readV(arr);

    ll mult = 1;
    for (int i=0; i<n; i++) {
        mult *= arr[i];
    }

    if (2023%mult != 0) {NO;}

    else {
        YES;
        cout << 2023/mult << " ";
        for (int i=0; i<k-1; i++) {
            cout << "1" << " ";
        }
        cout << "\n";
    }
}


int main() {
    int tests = 1;
    cin >> tests;
    while (tests--) solve();
    return 0;
}