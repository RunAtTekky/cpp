#include <iostream>
#include <climits>
#include <algorithm>
#include <numeric>
#include <string>
#include <vector>
using namespace std;

#define ll long long
#define printnl(a) cout << a << "\n";

void func() {
    ll n;
    cin >> n;
    ll flowers[200005];
    ll mini = LLONG_MAX;
    ll maxi = LLONG_MIN;
    for (int i=0; i<n; i++) {
        cin >> flowers[i];
        mini = min(mini,flowers[i]);
        maxi = max(maxi, flowers[i]);
    }   

    ll sameFront = 0;
    ll sameBack = 0;
    if (mini == maxi) {
        cout << 0 << " " << (n*(n-1))/2 << "\n";
        return;
    }

    for (int i=0; i<n; i++) {
        sameFront += (mini == flowers[i]);
        sameBack += (maxi == flowers[i]);
    }
    cout << maxi - mini << " " << sameFront*sameBack << "\n";
}


int main() {
    int t;
    t=1;
    while (t--) {
        func();
    }
    
    return 0;
}