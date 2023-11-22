/*
    RunAt - grey
*/
#include <iostream>
#include <map>
#include <vector>
using namespace std;

#define ll long long
#define printnl(a) cout << a << "\n";

void solve() {
    ll n;
    cin >> n;

    vector<ll> dollSize(n);
    map<ll,ll> szCnt;
    for (auto &i : dollSize) {
        cin >> i;
        szCnt[i]++;
    }

    // Let's say we had this map
    /*
        1 -> 1
        2 -> 2
        3 -> 2
        4 -> 1
        6 -> 1

        Now we know that 1 is the first entry
        Thus it will make 1 doll 
        Now we have two 2's
        12      2
        Thus we have 2 dolls
        Now for 3
        123     23
        There is no extra doll as freq was same
        Now for 4
        1234    23
        There is no extra doll as freq was less than last freq
        For 6
        1234    23  6
        Thus there could be 3 dolls for this case.
        What we essentially do is:
        If it is continuous i.e. key == prevKey + 1
        Then we add the difference in freq (only when it is positive)
        key(freq) - prevKey(freq) > 0
        then add else don't add
        because
        lets say we had 2 -> 2 and 3 -> 4
        we can make
        23  23  3   3
        
        Here we got the first 2 from 2-0
        Then we get the next 2 from 4-2

    */
    ll cnt = 0;
    ll last = -1;
    ll ans = 0;
    for (auto [x,y] : szCnt) {
        if (last + 1 != x) cnt = 0;
        ans += max(0LL,y-cnt);
        last = x; cnt = y;
    }
    printnl(ans);

}


int main() {
    int tests = 1;
    cin >> tests;
    while (tests--) solve();
    return 0;
}