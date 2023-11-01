#include <iostream>
#include <algorithm>
#include <numeric>
#include <string>
#include <vector>
using namespace std;

#define ll long long

void func() {
    int k,l,m,n,d;
    cin >> k >> l >> m >> n >> d;
    vector<int> dragons(d+1,1);

    for (int i=k; i<=d; i += k) {
        dragons[i] = 0;
    }
    for (int i=l; i<=d; i += l) {
        dragons[i] = 0;
    }
    for (int i=m; i<=d; i += m) {
        dragons[i] = 0;
    }
    for (int i=n; i<=d; i += n) {
        dragons[i] = 0;
    }

    int damagedDragons = 0;
    for (int i=1; i<=d; i++) {
        if (dragons[i] == 0) damagedDragons++;
    }
    cout << damagedDragons;
}


int main() {
    int t;
    t=1;
    
    while (t--) {
        func();
    }
    
    return 0;
}