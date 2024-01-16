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
#define printV(vec) for (auto &e: vec) {cout << e << " ";} cout << "\n";
#define YES cout << "YES" << "\n"
#define NO cout << "NO" << "\n"

const int N = 100005;

void solve() {
    long long programmers, languages;
    cin >> programmers >> languages;

    if (programmers == 1 || languages == 1) {YES; return;}

    if (programmers <= languages) {NO; return;}
    
    for (int i=2; i*i<=programmers && i<=languages; i++) {
        if (programmers%i == 0) {NO; return;}
    }
    YES;
}

int main() {
    int tests = 1;
    cin >> tests;
    while (tests--) solve();
    return 0;
}
