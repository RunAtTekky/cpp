/*
    RunAt - grey
*/
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

typedef int long long ll;
#define printnl(a) cout << a << "\n";

void solve() {
    ll boys;
    cin >> boys;
    vector<ll> boySkill(boys);
    for (auto &i : boySkill) cin >> i;

    ll girls;
    cin >> girls;
    vector<ll> girlSkill(girls);
    for (auto &i : girlSkill) cin >> i;

    sort(boySkill.begin(), boySkill.end());    
    sort(girlSkill.begin(), girlSkill.end());    

    int i=0; int j=0; int pairs = 0;
    while (i<boys && j<girls) {
        ll diff = abs(boySkill[i] - girlSkill[j]);

        if (diff == 0 || diff == 1) {
            pairs++;
            i++;
            j++;
        }
        else {
            if (boySkill[i] < girlSkill[j]) i++;
            else j++;
        }
    }
    printnl(pairs);
}

int main() {
    solve();
}