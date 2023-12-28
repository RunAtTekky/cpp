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

    string curr = "";
    vector<string> ans;
    for (int i=0; i<n; i++) {

        if (s[i] == 'a' || s[i] == 'e') {
            curr += s[i];
            if (i+1 >= n) {
                ans.push_back(curr);
                i++;
            }
            else if (i+2 >= n) {
                curr += s[i+1];
                ans.push_back(curr);
                i++;
            }
            else if (i+2 < n && s[i+2] == 'b' || s[i+2] == 'c' || s[i+2] == 'd') {
                curr += s[i+1];
                i += 1;
                ans.push_back(curr);
            }
            else if (i+2 < n && s[i+1] == 'b' || s[i+1] == 'c' || s[i+1] == 'd') {
                // i++;
                ans.push_back(curr);
            }
            curr = "";
        }
        else curr += s[i];
    }

    for (int i=0; i<ans.size(); i++) {
        if (i != ans.size()-1) {
            cout << ans[i] << ".";
        }
        else cout << ans[i] << "\n";
    }
}


int main() {
    int tests = 1;
    cin >> tests;
    while (tests--) solve();
    return 0;
}