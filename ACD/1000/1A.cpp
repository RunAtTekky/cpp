#include <iostream>
using namespace std;

#define ll long long
#define printnl(a) cout << a << "\n";

ll n,m,k;

void func() {
    cin >> n >> m >> k;
    ll vTiles = 0;
    ll hTiles = 0;
    if (n%k != 0) {
        vTiles += 1;
    }
    if (m%k != 0) {
        hTiles += 1;
    }
    vTiles += n/k;
    hTiles += m/k;

    printnl(vTiles*hTiles);
}


int main() {
    int t;
    t=1;
    while (t--) {
        func();
    }
    
    return 0;
}