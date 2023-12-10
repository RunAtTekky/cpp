/*
    RunAt - grey
*/
#include <iostream>
#include <string>
using namespace std;

void solve() {
    string w; cin >> w;
    int n = w.length();

    auto rangeUpper = [w](int i, int j) {
        for (int k=i; k<=j; k++) {
            if (islower(w[k])) return false;
        }
        return true;
    };

    if (rangeUpper(0,n-1) || rangeUpper(1,n-1)) {

        for (int i=0; i<n; i++) {
            cout << char(w[i]^(1<<5));
        }

    }
    else cout << w;
    cout << "\n";
}


int main() {
    solve();
}