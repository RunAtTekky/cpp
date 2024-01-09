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
    for (int i=0; i<3; i++) {
        string s; cin >> s;
        for (int j=0; j<3; j++) {
            if (s[j] == '?') {
                int cnt = s[0] + s[1] + s[2];
                if (cnt == 196) {p('A');}
                else if (cnt == 195) {p('B');}
                else if (cnt == 194) {p('C');}
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