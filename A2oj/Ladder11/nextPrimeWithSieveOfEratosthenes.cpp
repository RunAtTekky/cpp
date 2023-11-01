#include <iostream>
#include <algorithm>
#include <numeric>
#include <string>
#include <vector>
using namespace std;

#define ll long long

void func() {
    int n, m;
    cin >> n >> m;

    vector<int> primes(m+1,1);

    // for (auto x : primes) cout << x << " ";

    primes[0] = 0;
    primes[1] = 0;

    for (int i=2; i<=m; i++) {
        if (primes[i] == 1) {
            for (int j=2*i; j<=m; j += i) {
                primes[j] = 0;
            }
        }
    }
    // for (auto x : primes) cout << x << " ";

    if (!primes[m]) {
        cout << "NO" << endl;
        return;
    }
    for (int k=n+1; k<m; k++) {
        if (primes[k]) {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;


    
}


int main() {
    func();
    
    return 0;
}