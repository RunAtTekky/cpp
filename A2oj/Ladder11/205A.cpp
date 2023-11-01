#include <iostream>
#include <algorithm>
#include <numeric>
#include <string>
#include <vector>
using namespace std;

#define ll long long
// #define printnl(a) cout << a << "\n"

void func() {
    int n;
    cin >> n;
    if (n==1) {
        cout << 1 << "\n";
        return;
    }
    int d;
    vector<pair<ll,ll>> dist(n);
    for (int i=0; i<n; i++) {
        cin >> d;
        dist[i].first = d;
        dist[i].second = i;
    }
    sort(dist.begin(), dist.end());

    if (dist[0].first == dist[1].first) {
        cout << "Still Rozdil" << "\n";
    } else {
        cout << dist[0].second + 1 << "\n";
    }

}


int main() {
    int t;
    t = 1;
    
    while (t--) {
        func();
    }
    
    return 0;
}