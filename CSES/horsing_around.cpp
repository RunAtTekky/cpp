#include <iostream>
using namespace std;

void solve() {
    int n;
    cin >> n;

    for (long long i=1; i<=n; i++) {
        // Total ways to position the two horses/2 as they are symmetric.
        // Removing the ways two horses can attack each other
        // Which is by having 2x3 or 3x2 rectangles.
        // Calculate how many of them you can make.
        long long total_ways = (i*i)*(i*i-1)/2 - (i-1)*(i-2)*4;
        cout << total_ways << "\n";
    }

}

int main() {
    solve();
}
