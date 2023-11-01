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
char ch;
const int N = 100005;
ll arr[N];

void func() {
    cin >> n;
    cin >> s;
    int cnt = 0;
    for (char ch : s) {
        if (ch == '0') {
            cnt++;
        }
    }
    if (n-cnt != cnt) {
        printnl(-1);
        return;
    }
    vector<char> v(n);
    for (auto ch : s) {
        v.push_back(ch);
    }
    int i = 0;
    int j = n-1;

    int p = 0;
    while (i<j) {
        if (v[i] == v[j]) {
            p++;
            v.push_back('0');
            v.push_back('1');
            j = v.size()-1;
            i = 0;
        }
        else {
            j--;
            i++;
        }
    }
}


int main() {
    int t;
    cin >> t;
    
    while (t--) {
        func();
    }
    
    return 0;
}