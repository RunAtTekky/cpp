#include <iostream>
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

    if (n == 0) {
        cout << 0 << " " << 0 << " " << 0 << "\n";
        return;
    }
    if (n == 1) {
        cout << 0 << " " << 0 << " " << 1 << "\n";
        return;
    }
    if (n == 2) {
        cout << 0 << " " << 1 << " " << 1 << "\n";
        return;
    }

    vector<ll> fibb(2);
    fibb[0] = 0;
    fibb[1] = 1;
    int i=2;
    while (fibb[i-1] != n) {
        fibb.push_back(fibb[i-1] + fibb[i-2]);
        i++;
    }
    cout << fibb[i-5] << " " << fibb[i-4] << " " << fibb[i-2] << "\n";

}


int main() {
    int t;
    t = 1;
    
    while (t--) {
        func();
    }
    
    return 0;
}