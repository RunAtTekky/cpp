/*
    RunAt - grey
*/
#include <iostream>
#include <vector>
using namespace std;

#define readV(vec) for (auto &e: vec) cin >> e;
#define YES cout << "YES" << "\n"
#define NO cout << "NO" << "\n"

void solve() {
    int n;
    cin >> n;

    vector<int> a(n);
    vector<int> b(n);

    readV(a);
    readV(b);

    // If any value is already bigger -> NO
    for (int i=0; i<n; i++) {
        if (a[i] > b[i]) {NO; return;}
    }

    // If b[last] - b[first] >= 2 and b[last] != a[last] -> NO
    if (a[n-1] != b[n-1] && b[n-1] - b[0] >= 2) {NO; return;}


    // If any value's next value can't make this current value
    // and it is also not equal to its value i.e. a[i] != b[i]
    // Then NO
    for (int i=0; i<n-1; i++) {
        if (b[i] != a[i] && b[i] - b[i+1] >= 2) {
            NO; return;
        }
    }
    YES;
}


int main() {
    int tests = 1;
    cin >> tests;
    while (tests--) solve();
}