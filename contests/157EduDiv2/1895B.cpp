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
    cin >> m;
    vector<int> v(2*m);
    n = 2*m;
    for (int i=0; i<n; i++) {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    ll sumX = 0;
    ll sumY = 0;
    for (int i=0; i<m-1; i++) {
        sumX += abs(v[i]-v[i+1]);
    }

    for (int i=m; i<n-1; i++) {
        sumY += abs(v[i]-v[i+1]);
    }
    printnl(sumY+sumX);
    for (int i=0; i<m; i++) {
        printab(v[i],v[i+m]);
    }
}


int main() {
    int t;
    cin >> t;
    
    while (t--) {
        func();
    }
    
    return 0;
}