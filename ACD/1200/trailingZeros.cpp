#include <iostream>
using namespace std;

int main() {
    int n; cin >> n;

    int ans = 0;
    int m = 5;
    while (m<=n) {
        ans += (n/m);
        m *= 5;
    }
    cout << ans << "\n";
    return 0;
}
