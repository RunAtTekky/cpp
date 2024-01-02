#include <iostream>
using namespace std;

void solve() {
    string s; cin >> s;
    int i=0, maxi=0, n=s.size();
    while (i<n) {
        int j=0;
        while (i<n-1 && s[i] == s[i+1]) i++,j++;
        maxi = max(maxi,j+1);
        i++;
    }
    cout << maxi << '\n';
}
int main() {solve();}