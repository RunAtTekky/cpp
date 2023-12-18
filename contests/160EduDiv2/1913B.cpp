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
    string s; cin >> s;

    ll cntZ = 0;
    ll cntO = 0;

    for (int i=0; i<s.size(); i++) {
        if (s[i] == '0') cntZ++;
        else cntO++;
    }

    // cntO = s.size() - cntZ;

    // p2(cntO,cntZ);
    if (s.size() == 1) {p(1); return;}
    if (cntO == cntZ) {p(0); return;}

    if (cntO > cntZ) {

    
        for (int i=0; i<s.size(); i++) {
            if (s[i] == '1') cntZ--;
            if (cntZ < 0) {
                ll res = s.size()-i;
                p(res); return;
            }
        }
    }
    
    else {
        for (int i=0; i<s.size(); i++) {
            if (s[i] == '0') cntO--;
            if (cntO < 0) {
                ll res = s.size()-i;
                p(res); return;
            }
        }
    }
}


int main() {
    int tests = 1;
    cin >> tests;
    while (tests--) solve();
    return 0;
}