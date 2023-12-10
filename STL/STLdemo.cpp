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
    vector<int> v(n);
    readV(v);

    auto print = [&] (int id) {
        cout << "@" << id << ": ";
        debugV(v);
    };
    print(1);
    vector<int> pre(n);
    partial_sum(v.begin(), v.end(), pre.begin());

    debugV(pre);

    auto accSum = accumulate(v.begin(), v.end(), 0LL);
    printnl(accSum);

    auto cnt = count(v.begin(), v.end(), 4);
    printnl(cnt);

    vector<int> adj(n);
    adjacent_difference(v.begin(), v.end(), adj.begin());

    debugV(adj);

    sort(v.begin(), v.end());
    
    auto last = unique(v.begin(), v.end());

    v.erase(last, v.end());

    print(2);
    // debugV(v);
}


int main() {
    int tests = 1;
    // cin >> tests;
    while (tests--) solve();
    return 0;
}