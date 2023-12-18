/*
    RunAt - grey
*/
#include <iostream>
using namespace std;

#define YES cout << "YES" << "\n"
#define NO cout << "NO" << "\n"

void solve() {

    int n; cin >> n;

    // n = 2020*x + 2021*y

    int y = n%2020;

    int x = (n-y)/2020 - y;

    if (x>=0 && 2020*x + 2021*y == n) {
        YES;
    }
    else {NO;}


}


int main() {
    int tests = 1;
    cin >> tests;
    while (tests--) {
        solve();
    }
    return 0;
}