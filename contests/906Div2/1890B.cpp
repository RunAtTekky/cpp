#include <iostream>
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
string t;
char ch;
const int N = 100005;
ll arr[N];
vector<int> v(N);

bool isGood(string s) {
    for (int i=0; i<s.size()-1; i++) {
        if (s[i] == s[i+1]) return false;
    }
    return true;
}
void func() {
    cin >> n >> m;
    cin >> s;
    cin >> t;
    if (!isGood(s) && !isGood(t)) {
        printnl("No");
        return;
    }

    if (isGood(s)) {
        printnl("Yes");
        return;
    }
    for (int i=0; i<n-1; i++) {
        if (s[i] == s[i+1]) {
            if (s[i] == t[0] || s[i+1] == t[m-1]) {
                printnl("No");
                return;
            }
        }
    }
    printnl("Yes");
}


int main() {
    int t;
    cin >> t;
    
    while (t--) {
        func();
    }
    
    return 0;
}