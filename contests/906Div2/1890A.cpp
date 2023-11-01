#include <iostream>
#include <set>
#include <climits>
#include <algorithm>
#include <numeric>
#include <string>
#include <vector>
using namespace std;

#define ll long long
#define printnl(a) cout << a << "\n";
#define printab(a,b) cout << a << " " << b << "\n";

ll n,m,k;
string s;
char ch;
const int N = 100005;
ll arr[N];

void func() {
    cin >> n;


    // for (int i=0; i<n; i++) {
    //     cin >> arr[i];
    // }

    vector<int> v(n);
    for (int i=0; i<n; i++) {
        cin >> v[i];
    }
    set<int> tSet(v.begin(),v.end());
    if (tSet.size() > 2) {
        printnl("NO");
        return;
    }
    int a = v[0];
    int aCount = 0;
    for (int i=0; i<n; i++) {
        if (v[i] == a) {
            aCount++;
        }
    }
    if (aCount == n) {
        printnl("YES");
        return;
    }
    int bCount = n-aCount;
    if (abs(aCount-bCount) > 1){printnl("NO");}
    else {printnl("YES");}
}


int main() {
    int t;
    cin >> t;
    
    while (t--) {
        func();
    }
    
    return 0;
}