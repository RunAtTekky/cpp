#include <iostream>
#include <algorithm>
#include <numeric>
#include <string>
#include <vector>
using namespace std;

#define ll long long

void func() {
    ll n,k;
    cin >> n >> k;
    // n will be either odd or even
    if (n%2 == 1) {
        if (k <= n/2 + 1) {
            cout << k*2-1 << "\n";
        } else {
            cout << (k-n/2-1)*2 << "\n";
        }
    }
    else {
        if (k <= n/2) {
            cout << k*2-1 << "\n";
        } else {
            cout << (k-n/2)*2 << "\n";
        }   
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