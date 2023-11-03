#include <iostream>
#include <climits>
#include <algorithm>
#include <numeric>
#include <string>
#include <vector>
using namespace std;

#define ll long long
#define printnl(a) cout << a << "\n";
#define printab(a,b) cout << a << " " << b << "\n";

ll n,m,k;

void func() {
    cin >> n >> m >> k;

    if (n > m) {printnl(n); return;}
    if (m-n > k) {
        printnl((n+k + 2*(m-(n+k))));
        return;
    }
    printnl(m);
    return;
}


int main() {
    int t;
    cin >> t;
    
    while (t--) {
        func();
    }
    
    return 0;
}