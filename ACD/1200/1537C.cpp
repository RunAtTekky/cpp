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
#define readV(vec) for (auto &e: vec) cin >> e
#define debugV(vec) for (auto &e: vec) {cout << e << " ";} cout << "\n"
#define YES cout << "YES" << "\n"
#define NO cout << "NO" << "\n"

const int N = 100005;

void solve() {
    ll n;
    cin >> n;

    vector<ll> mountains(n);
    readV(mountains);
    sort(mountains.begin(), mountains.end());

    ll minDiff = INT_MAX;
    ll first = -1; ll second = -1;
    for (int i=0; i<n-1; i++) {
        if (mountains[i+1]-mountains[i] < minDiff) {
            minDiff = mountains[i+1]-mountains[i];
            first = i; second = i+1;
        }
    }

    vector<ll> obstacle;
    obstacle.push_back(mountains[first]);

    /*
        Find from where onwards mountain height is greater than
        first height of mountain.
    */
    int i=0;
    while (i<n && mountains[i] <= mountains[first]) {
        i++;
    }

    /*
        Now append those mountains which are greater than the first mountain.
    */
    for (int j=i; j<n; j++) {
        if (j == first || j == second) continue;
        obstacle.push_back(mountains[j]);
    }

    /*
        Now append those which are small or equal to first mountain.
    */
    for (int k=0; k<i; k++) {
        if (k == first || k == second) continue;
        obstacle.push_back(mountains[k]);
    }

    obstacle.push_back(mountains[second]);

    debugV(obstacle);



    
}


int main() {
    int tests = 1;
    cin >> tests;
    while (tests--) solve();
    return 0;
}