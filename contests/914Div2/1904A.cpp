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
    ll a,b;
    cin >> a >> b;
    ll kX, kY;
    cin >> kX >> kY;

    ll qX, qY;
    cin >> qX >> qY;

    set<pair<int,int>> king;

    king.insert({kX + a, kY + b});
    king.insert({kX + a, kY - b});
    king.insert({kX - a, kY + b});
    king.insert({kX - a, kY - b});

    king.insert({kX + b, kY + a});
    king.insert({kX + b, kY - a});
    king.insert({kX - b, kY + a});
    king.insert({kX - b, kY - a});

    set<pair<int,int>> queen;

    queen.insert({qX + a, qY + b});
    queen.insert({qX + a, qY - b});
    queen.insert({qX - a, qY + b});
    queen.insert({qX - a, qY - b});

    queen.insert({qX + b, qY + a});
    queen.insert({qX + b, qY - a});
    queen.insert({qX - b, qY + a});
    queen.insert({qX - b, qY - a});

    // for (auto pr: king) {
    //     cout << pr.first << " " << pr.second << "\n";
    // }
    // cout << "\n";

    // for (auto pr: queen) {
    //     cout << pr.first << " " << pr.second << "\n";
    // }
    // cout << "\n";

    auto i1 = king.begin();
    auto i2 = queen.begin();

    int count = 0;
    while (i1 != king.end() && i2 != queen.end()) {
        if ((*i1) > (*i2)) {
            i2++;
        } else if ((*i1) < (*i2)) {
            i1++;
        } else {
            count++;
            i1++;
            i2++;
        }
    }
    printnl(count);
    // int count = 0;


    // vector<pair<int,int>> ans;
    // auto res = set_intersection(king.begin(), king.end(), queen.begin(), queen.end(), ans.begin());

    // printnl(ans.size());
}


int main() {
    int tests = 1;
    cin >> tests;
    while (tests--) solve();
    return 0;
}