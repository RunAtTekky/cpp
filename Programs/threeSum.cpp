#include <iostream>
using namespace std;

void solve() {
    long long n;
    cin >> n;


    for (long long i=1; i<=n; i++) {
        for (long long j=1; j<=n; j++) {
            for (long long k=1; k<=n; k++) {
                if (i+j+k == n) {
                    if (i!=j && j!=k && k!=i) {
                        if (i%3 != 0 && j%3 != 0 && k%3 != 0) {
                            cout << "YES" << endl;
                            cout << i << " " << j << " " << k << endl;
                            return;

                        }

                    }
                }
                
            }
        }
    }
    cout << "NO" << endl;
    
    return;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        solve();
    }
}