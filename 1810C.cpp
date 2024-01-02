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
    ll n,c,d;
    cin >> n >> c >> d;

    vector<ll> vec(n);
    readV(vec);

    auto last = unique(vec.begin(), vec.end());
    
    vec.erase(last,vec.end());

    for (auto e: vec) cout << e << " ";
    cout << "\n";

    ll m = vec.size();
    ll deleted = n - m;
    p(deleted);
    ll score = 0;

    score += deleted*c;

    if (vec[0] != 1) {
        score += d;
    }


}


int main() {
    int tests = 1;
    cin >> tests;
    while (tests--) solve();
    return 0;
}