/*
    RunAt - grey
*/
#include <iostream>
#include <set>
#include <map>
#include <cmath>
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

void solve() {
    int n; cin >> n;
    vector<ll> arr(n);
    readV(arr);
    for (int i=0; i<n; i++) {
        if (i%2) arr[i] *= -1;
    }
    /*
    1 2 11 4 1 5 1 2     <- Glasses
    1 -2 11 -4 1 -5 1 -2 <- Even | Odd
    1 -1 10  6 7  2 3  1 <- Cumulative sum
    We can see that, at first and last index we have 1.
    This means when Julia and her date drank the glasses in between.
    They drank equal amount.
    Thus we need to keep track of the amount of juice at current index.
    Also, 0 must be already stored.
    */
    map<ll, int> pos;
    pos[0]++;
    ll cur = 0;
    for (int i=1; i<=n; i++) {
        cur += arr[i-1];
        if (pos.count(cur)) {
            YES; return;
        }
        pos[cur]++;
    }
    NO;
}



int main() {
    int tests = 1;
    cin >> tests;
    while (tests--) solve();
    return 0;
}