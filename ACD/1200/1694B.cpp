/*
    RunAt - grey
*/
#include <iostream>
#include <set>
#include <map>
#include <climits>
#include <algorithm>
#include <numeric>
#include <vector>
#include <string>
using namespace std;

typedef int long long ll;
#define printnl(a) cout << a << "\n";
#define printab(a,b) cout << a << " " << b << "\n";

const int N = 100005;

void solve() {
    ll n;
    cin >> n;
    string bin; cin >> bin;

    /*
     We know all the individual elements will be Paranoid Strings
     For adding Paranoid Strings longer than 1.
     We will check if two adjacent numbes are not equal.
     Whatever the index will be of that element s[i] != s[i-1]
     There will be that many Paranoid String in that [0,i]
    */

    /*
     For example:
     1 1 0 0 1
         ^ 
         This is where adjacent elements are not equal.
         We can make two more paranoid strings behind this.
         Let's see how
         In 1 1 0
              ^ ^
              These two
         And then 1 1 0
                  ^ ^ ^
         We can make 1 1 0 -> 1 0 -> 0
         Thus we can always make that many Paranoid strings
         as many elements are behind.
    */
    // 
    ll cnt = 0;
    for (int i=1; i<n; i++) {
        if (bin[i] != bin[i-1]) {
            cnt += i;
        }
    }
    printnl(n+cnt);
}


int main() {
    int tests = 1;
    cin >> tests;
    while (tests--) solve();
    return 0;
}