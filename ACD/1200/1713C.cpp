#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> perm(n);
    int r = n; int x = 2 * sqrt(n); // no idea why we do this

    while (r>0) {
        // max we can make is (n-1) + (n-1) = 2*n-2
        // Thus we find x such that it can be made by 2*n-2
        while (x*x > 2*r-2) x--;
        
        // This is the value which will be made by all the
        // indexes of the range [v-r+1, r) 
        // as all of these can make sum upto v
        int v = x*x;

        for (int i=v-r+1; i<r; i++) {
            perm[i] = v-i;
        }
        
        r = v-r+1;
    }
    for (int i=0; i<n; i++) {
        cout << perm[i] << " ";
    }
    cout << "\n";
}


int main() {
    int tests; cin >> tests;
    while (tests--) solve();
    return 0;
}