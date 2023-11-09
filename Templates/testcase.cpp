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

ll n,m,k;
string s; char ch;
const int N = 100005;

vector<int> readVector(int n) {
    vector<int> v(n);
    for (int i=0; i<n; i++) {
        cin >> v[i];
    }
    return v;
}
void printVector(vector<int> v) {
    for (int i=0; i<v.size(); i++) {
        cout << v[i] << " ";
    }
}

void solve() {
    cin >> n;
}


int main() {
    int tests;
    cin >> tests;
    
    while (tests--) {
        solve();
    }
    
    return 0;
}