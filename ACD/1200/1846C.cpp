/*
    RunAt - grey
*/
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

typedef int long long ll;
#define printnl(a) cout << a << "\n";
#define printab(a,b) cout << a << " " << b << "\n";
#define readV(vec) for (auto &e: vec) cin >> e;
#define debugV(vec) for (auto &e: vec) {cout << e << " ";} cout << "\n";

void solve() {
    ll n,m,k;
    cin >> n >> m >> k;

    vector<vector<ll>> contestents;

    for (int i=0; i<n; i++) {
        vector<ll> curr;
        for (int j=0; j<m; j++) {
            int ele; cin >> ele;
            curr.push_back(ele);
        }
        // Sort the problems in which order contestents will solve
        // Least time to most time
        sort(curr.begin(),curr.end());
        contestents.push_back(curr);
    }

    ll pos = 1; // current position of Rudolf
    pair<ll,ll> rud;
    for (int i=0; i<n; i++) {
        /*
            For each contestant, calculate score and penalty
        */
        ll time = 0;
        ll penalty = 0;
        ll score = 0;
        int j=0;
        while (j<m && time + contestents[i][j]<=k) {
            time += contestents[i][j];
            penalty = (penalty + time);
            j++;
            score++;
        }
        /*  
            Now whenever anyone outperforms Rudolf we
            move his position by one
        */
        if (i) {
            if (make_pair(-score,penalty) < rud) pos++;
        }
        /* 
            This happens only on first element
            We have set what score and penalty Rudolf has goten.
        */
        else rud = {-score,penalty}; 
    }
    printnl(pos);
}


int main() {
    int tests = 1;
    cin >> tests;
    while (tests--) solve();
    return 0;
}