/*
    RunAt - grey
*/
#include <iostream>
#include <set>
#include <stack>
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
    string word; cin >> word;

    int n = word.size();

    stack<int> lower;
    stack<int> upper;

    vector<char> ans;
    for (int i=0; i<n; i++) {
        char ch = word[i];
        if (ch != 'b' && ch != 'B') {
            ans.push_back(ch);
            if (ch >= 'A' && ch <= 'Z') {
                upper.push(i);
            }
            if (ch >= 'a' && ch <= 'z') {
                lower.push(i);
            }
        }
        else if (ch == 'b') {
            if (!lower.empty()) {
                ans[lower.top()] = '0';
                lower.pop();
            }
            ans.push_back('0');
        }
        else if (ch == 'B') {
            
            if (!upper.empty()) {
                ans[upper.top()] = '0';
                upper.pop();
            }
            ans.push_back('0');
        }
    }
    for (int i=0; i<n; i++) {
        if (ans[i] != '0') {
            cout << ans[i];
        }
    }
    cout << endl;
}


int main() {
    int tests = 1;
    cin >> tests;
    while (tests--) solve();
    return 0;
}