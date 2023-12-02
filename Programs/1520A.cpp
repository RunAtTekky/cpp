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
    
    string s; cin >> s;

    int alpha[26] = {0};

    string newString = "";
    for (int i=0; i<n; i++) {
        if (i == 0 || s[i-1] != s[i]) {
            newString.push_back(s[i]);
        }
    }
    // printnl(newString);
    for (auto &e: newString) {
        if (alpha[e-'A'] != 0) {NO; return;}
        else alpha[e-'A']++;
    }
    YES;


}


int main() {
    int tests = 1;
    cin >> tests;
    while (tests--) solve();
    return 0;
}