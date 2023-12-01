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

const int U = (1<<30) - 1;

void solve() {
    ll n;
    cin >> n;

    vector<vector<ll>> matrix;

    /*
        We create a solution array which will have each elements
        with all bits ON
        so a[i] and a[j] should not have any other bits on other
        than whatever M[i][j] has
        So at first we have each element as all 30 BITS ON
        then we keep on decreasing the bits according to whatever
        
    */
    vector<ll> solution(n,U);
    for (int i=0; i<n; i++) {
        vector<ll> curr;
        for (int j=0; j<n; j++) {
            int ele; cin >> ele;
            if (i!=j) {
                solution[i] &= ele;            
                solution[j] &= ele;            
            }
            curr.push_back(ele);
        }
        matrix.push_back(curr);
    }

    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            if (i != j) {
                if (matrix[i][j] != (solution[i]|solution[j])) {
                    NO; return;
                }
            }
        }
    }
    YES;
    debugV(solution);


}


int main() {
    int tests = 1;
    cin >> tests;
    while (tests--) solve();
    return 0;
}