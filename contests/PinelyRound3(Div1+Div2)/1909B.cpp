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
    vector<ll> arr(n);
    readV(arr);

    ll k=1;
    
    // 8 15 22 30
    // Obviously I should have checked what will happen with 2
    // Then 4 and then so on.....
    while (true) {
        for (int i=0; i<n; i++ ) {
            if (arr[i]%k != arr[0]%k) {p(k); return;}
        }
        k *= 2;
    }
}


int main() {
    int tests = 1;
    cin >> tests;
    while (tests--) solve();
    return 0;
}