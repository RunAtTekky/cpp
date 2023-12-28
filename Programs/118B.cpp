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

    for (int i=1; i<=2*n+1; i++) {
        int spaces = (i<=n+1) ? (2*n - 2*(i-1)) : (2*(i-n-1));
        // spaces += (i<=n) ? (- 2*(i-1)) : 2*(i - n-1);

        for (int j=1; j<=spaces; j++) cout << " ";
        
        int ind;
        ind = (i<=n) ? (i) : (2*n+1-i+1);

        for (int j=0; j<ind; j++) {
            if (j != 0 || j != ind-1) 
            cout << j << " ";
            else cout << j;
        }

        for (int j=ind-2; j>=0; j--) {

            if (j != 0) 
            cout << j << " ";
            else cout << j;
        }

        cout << "\n";
    }
}


int main() {
    solve();
}