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
    string pos; cin >> pos;

    int d = pos[1]-'0';

    for (int i=1; i<=8; i++) {
        if (d != i) {
            cout << pos[0] << i << endl;
        }
    }
    for (char ch = 'a'; ch <= 'h'; ch++) {
        if (pos[0] != ch) {
            cout << ch << pos[1] << endl;
        }
    }
}


int main() {
    int tests = 1;
    cin >> tests;
    while (tests--) solve();
    return 0;
}