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
    int n;
    char signal;

    cin >> n;
    cin >> signal;


    // string s; getline(cin, s);
    string s; cin >> s;

    if (n == 1 || signal == 'g') {
        printnl(0); return;
    }
    vector<int> signalIdx;
    vector<int> greenIdx;

    for (int i=0; i<n; i++) {
        if (s[i] == signal) { 
            signalIdx.push_back(i);
        } else if (s[i] == 'g') {
            greenIdx.push_back(i);
        }
    }

    // for (int j = 0; j<signalIdx.size(); j++) {
    //     cout << signalIdx[j] << " ";
    // }
    // cout << "\n";
    // cout << signalIdx.size();
    // printnl(signalIdx.size());
    // printnl(greenIdx.size());
    int m = signalIdx.size();
    int g = greenIdx.size();
    int maxi = -1;

    // debugV(signalIdx);
    // debugV(greenIdx);
    for (int i=0; i<m; i++) {
        int targetr = signalIdx[i];
        int it = upper_bound(greenIdx.begin(), greenIdx.end(), targetr) - greenIdx.begin();

        if (it == g) {
            maxi = max(maxi, n - (targetr - greenIdx[0]));
        } else {
            maxi = max(maxi, greenIdx[it] - targetr);
        }
    }
    printnl(maxi);
}


int main() {
    int tests = 1;
    cin >> tests;
    while (tests--) solve();
    return 0;
}