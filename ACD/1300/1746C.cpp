/*
    RunAt - grey
*/
// Trying Tourist's solution
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

    vector<int> arr(n);
    readV(arr);

    vector<pair<int,int>> vp;

    for (int i=0; i<n-1; i++) {
        int diff = arr[i] - arr[i+1];
        vp.push_back({diff,i});
    }
    sort(vp.begin(), vp.end());

    cout << "1" << " ";

    for (auto [diff,index] : vp) {
        cout << index+2 << " ";
    }
    cout << "\n";

}


int main() {
    int tests = 1;
    cin >> tests;
    while (tests--) solve();
    return 0;
}