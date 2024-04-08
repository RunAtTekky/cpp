#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve() {
    long long n; cin >> n;

    long long total = (n)*(n+1)/2;

    if (total&1) {cout << "NO\n"; return;}
    
    cout << "YES\n";

    vector<bool> nums(n+1);

    long long to_make = total/2;

    int i=n;
    while (to_make > 0) {
        if (i>=to_make) {
            nums[to_make] = true; break;
        }
        to_make -= i;
        nums[i] = true;
        i--;
    }

    long long cnt = count(nums.begin(), nums.end(), true);

    cout << cnt << "\n";
    for (int i=1; i<=n; i++) {
        if (nums[i]) cout << i << " ";
    }

    cout << "\n" << n-cnt << "\n";
    for (int i=1; i<=n; i++) {
        if (!nums[i]) cout << i << " ";
    }

}

int main() {
    solve();
}
