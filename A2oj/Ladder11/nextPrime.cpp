#include <iostream>
#include <algorithm>
#include <numeric>
#include <string>
#include <vector>
using namespace std;

#define ll long long

bool isPrime(int m) {
    for (int i=2; i<m; i++) {
        if (m%i == 0) return false;
    }
    return true;
}

void func() {
    int n, m;
    cin >> n >> m;

    if (isPrime(m)) {
        for (int i=n+1; i<m; i++) {
            if (isPrime(i)) {
                cout << "NO" << endl;
                return;
            }
        }
        cout << "YES" << endl;
        return;
    } else {
        cout << "NO" << endl;
        return;
    }
}


int main() {
    func();
    
    return 0;
}