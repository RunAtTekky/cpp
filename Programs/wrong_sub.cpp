#include <iostream>
using namespace std;

void solve() {

    int n,k;
    cin >> n >> k;

    while (k--) {
        if (n&1) n--;
        else n/=10;
    }

    cout << n << "\n";

}

int main() {
    solve();
}
