#include <iostream>
#include <numeric>
#include <vector>
using namespace std;

#define printnl(a) cout << a << "\n";
#define printab(a,b) cout << a << " " << b << "\n";

void solve() {
    int n;
    cin >> n;

    vector<int> perm(n+1);

    for (int i=1; i<=n; i++) cin >> perm[i];

    int mn = 1;
    int mx = n;

    int l = 1;
    int r = n;

    while (l<=r) {
        if (perm[l] == mn) {l++; mn++;}
        else if (perm[l] == mx) {l++; mx--;}
        else if (perm[r] == mn) {r--; mn++;}
        else if (perm[r] == mx) {r--; mx--;}
        else break;
    }
    if (l<=r) {printab(l,r);}
    else printnl(-1);
}


int main() {
    int tests;
    cin >> tests;
    
    while (tests--) {
        solve();
    }
    
    return 0;
}