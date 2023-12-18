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

ll getNum(string s, int start, int end) {
    ll score = 0;
    ll multiplier = 1;
    for (int i=end; i>=start; i--) {

        score = score + multiplier*(s[i]-'0');
        multiplier *= 10;
    }
    return score;
}

void solve() {
    string s; cin >> s;

    int n = s.size();
    int prev = 0;
    vector<ll> score(n);
    vector<ll> postScore(n);

    for (int i=0; i<n; i++) {
        ll sum = getNum(s,0,i);
        score[i] = sum;
    }
    for (int i=n-1; i>=0; i--) {
        if (s[i] == '0') continue;
        ll sum = getNum(s,i,n-1);
        postScore[i] = sum;
    }

    // debugV(score);
    // debugV(postScore);

    ll resA = 0;
    ll resB = 0;
    for (int i=0; i<n-1; i++) {
        if (score[i] < postScore[i+1]) {
            resA = score[i];
            resB = postScore[i+1];
        }
    }

    if (resA != 0 && resB != 0) {
        p2(resA,resB);
    }
    else {
        p(-1);
    }
}


int main() {
    int tests = 1;
    cin >> tests;
    while (tests--) solve();
    return 0;
}