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

    vector<int> bitP(32);
    while (n--) {
        int c; cin >> c;
        if (c == 1) {
            int b; cin >> b;
            bitP[b]++; 
        }
        else {
            int q; cin >> q;

            for (int i=29; i>=0; i--) {
                int take = min(q>>i,bitP[i]);
                q -= take<<i;
            }
            if (q==0) {YES;}
            else {NO;}
        }
    }
}


int main() {
    solve();
}