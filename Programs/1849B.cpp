#include <iostream>
#include <algorithm>
#include <numeric>
#include <vector>
using namespace std;

void solve() {
    int n,k;
    cin >> n >> k;

    vector<int> health(n+1);
    for (int i=1; i<=n; i++) {
        int monsterHealth;
        cin >> monsterHealth;
        int h = monsterHealth%k;
        if (h) health[i] = monsterHealth%k;
        else health[i] = k;
    }
    vector<int> ans(n+1);
    iota(ans.begin(),ans.end(),0);
    stable_sort(ans.begin()+1,ans.end(), [&](int i, int j) {
        return health[i] > health[j];
    });

    for (int i=1; i<=n; i++) {
        cout << ans[i] << " ";
    }
    cout << "\n";
}


int main() {
    int tests;
    cin >> tests;
    
    while (tests--) {
        solve();
    }
    
    return 0;
}