#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool compr(string x_s, string y_s) {
    int i=0,j=0;
    for (int k=x_s.size()-1; k>=0; k--) {
        if (x_s[k] == '0') i++;
        else break;
    }
    for (int k=y_s.size()-1; k>=0; k--) {
        if (y_s[k] == '0') j++;
        else break;
    }

    return i > j;
}

void solve() {
    int n,m;
    cin >> n >> m;

    vector<string> vec(n);
    for (auto &e : vec) cin >> e;

    sort(vec.begin(), vec.end(),compr);

    long long dig = 0;
    for (int i=0; i<n; i++) {
        if ((i&1) == 0) {
         for (int j=vec[i].size()-1; j>=0; j--) {
             if (vec[i][j] == '0') dig--;
             else break;
         }
        }
        dig += vec[i].size();
    }
    if (dig >= m+1) cout << "Sasha\n";
    else {cout << "Anna\n";}
}

int main() {
    int t=1;
    cin >> t;

    while (t--) solve();
}
