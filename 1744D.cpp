#include <iostream>
#include <map>
#include <climits>
#include <algorithm>
#include <numeric>
#include <string>
#include <vector>
using namespace std;

#define ll long long
#define printnl(a) cout << a << "\n";
#define printab(a,b) cout << a << " " << b << "\n";

ll countMultipleOf2(ll n) {
    ll count = 0;
    while (n>1) {
        if (n%2 == 0) {
            count++;
            n = n/2;
        }
        else break;
    }
    return count;
}

void solve() {
    ll n;
    cin >> n;
    ll countOfTwo = 0;
    ll indexMultipleOf2 = 0;
    vector<ll> hasTwoes;
    for (int i=1; i<=n; i++) {
        int num; cin >> num; // Taking input of one digit
        countOfTwo += countMultipleOf2(num); // Find the numbe of times that digit is divisible by 2
        ll indexHasTwo = countMultipleOf2(i); // Find the numbe of times the index i is divisble by 2
        indexMultipleOf2 += indexHasTwo; // Keep adding how many 2's you can use if needed through indexes
        hasTwoes.push_back(indexHasTwo); // keep adding the number of times i is divisble by 2 to an array
    }
    sort(hasTwoes.begin(),hasTwoes.end()); // Thus the biggest numbers will be at the end and we can easily find how many steps it will take
    // printnl((countOfTwo + indexMultipleOf2 < n));
    // printnl("HEY");
    // printnl(countOfTwo);
    // printnl(countMultipleOf2(12));
    if (countOfTwo >= n) {printnl(0); return;}
    if (countOfTwo + indexMultipleOf2 < n) {
        printnl(-1);
    }
    else {
        ll ans = 0;
        ll wants = n-countOfTwo;
        for (int i=n-1; i>=0; i--) {
            if (hasTwoes[i] != 0) {
                ans++;
                wants -= hasTwoes[i];
                if (wants <= 0) {
                    printnl(ans);
                    return;
                }
            }
        }
    }
}


int main() {
    int tests;
    cin >> tests;
    
    while (tests--) {
        solve();
    }
    
    return 0;
}