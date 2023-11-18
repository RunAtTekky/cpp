#include <iostream>
#include <map>
using namespace std;

#define printnl(a) cout << a << "\n";



void solve() {
    int n; cin >> n;

    map<int,int> mp; // {val : index}
    long long ans = 0;
    for (int i=0; i<n; i++) {
        int x; cin >> x;
        ans += mp[x]; 
        // if there is the same element before, 
        // there will be that many pairs
        // 3 1 3 2
        //     ^  
        // once we reach here, we have one 3 present
        // thus making one pair

        // Now we have a special case, (1,2) and (2,1)
        // are also valid pairs
        // Thus if x is 1 then add as many 2's are present
        // 2 2 3 1
        //       ^
        // Let's say we are here
        // Now there are two 2's.
        // Thus (2,1) and (2,1) have to be taken.
        // Thus adding the count of 2 present in ans
        // Reverse is also true for (1,2) pairs.
        if (x == 1) ans += mp[2];
        if (x == 2) ans += mp[1];
        mp[x]++;
    }
    printnl(ans);
}


int main() {
    int tests; cin >> tests;
    while (tests--) solve();
    return 0;
}