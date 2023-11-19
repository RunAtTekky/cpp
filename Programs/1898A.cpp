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

const int N = 100005;


void solve() {
    ll n,k;
    cin >> n >> k;

    string s;
    cin >> s;

    vector<int> prefA(n);
    vector<int> prefB(n);

    int currA = 0;
    int currB = 0;
    for (int i=0; i<n; i++) {
        if (s[i] == 'A') {
            currA++;
        } else {
            currB++;
        }
        prefA[i] = currA;
        prefB[i] = currB;
    }
    // for (auto e : prefA) cout << e << " ";
    // cout << "\n";
    // for (auto e : prefB) cout << e << " ";
    // cout << "\n";

    int totalB = currB;

    if (totalB == k) {
        printnl(0);
        return;
    }
    printnl(1);
    if (k > totalB) {
        // need more B's
        int toFind = k - totalB;
        for (int i=0; i<n; i++) {
            if (prefA[i] == toFind) {
                // printnl(i+1);
                printab(i+1,'B');
                return;
            }
        }

    } else {
        // need to remove B's
        int toFind = totalB - k;
        for (int i=0; i<n; i++) {
            if (prefB[i] == toFind) {
                // printnl(i+1);
                printab(i+1,'A');
                return;
            }
        }
    }
}


int main() {
    int tests; cin >> tests;
    while (tests--) solve();
    return 0;
}