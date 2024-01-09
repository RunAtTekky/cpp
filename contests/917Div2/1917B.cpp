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
    string s; cin >> s;

    set<char> st;

    ll ans = 0;
    for (auto ch : s) {
        st.insert(ch);
        ans += st.size();
    }
    p(ans);

}


int main() {
    int tests = 1;
    cin >> tests;
    while (tests--) solve();
    return 0;
}