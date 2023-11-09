#include <iostream>
#include <map>
#include <climits>
#include <algorithm>
#include <numeric>
#include <string>
#include <vector>
using namespace std;

#define ll long long

const int N = 100005;


void func() {
    ll n,m;
    cin >> n >> m;
    vector<ll> stairs(n);
    ll maxi = -1;
    for (ll i=0; i<n; i++) {
        cin >> stairs[i];
        maxi = max(maxi, stairs[i]);
    }
    vector<ll> questions(m);
    for (ll i=0; i<m; i++) {
        cin >> questions[i];
    }
    ll i=0;
    ll j=0;
    ll sum = 0;
    vector<ll> answers(N);
    map<ll,ll> mapping;
    while (i<n) {
        while (i<n && j>=stairs[i]) {
            sum += stairs[i];
            i++;
        }
        mapping[j] = sum;
        j = stairs[i];
    }
    for (ll z=0; z<m; z++) {
        if (questions[z] >= maxi) {
            cout << sum << " ";
        }
        else if (questions[z] == 0) {
            cout << 0 << " ";
        }
        else {
            // ll target = questions[z];
            // if (mapping.count(target) == 0) {
            //     while (target>0 && mapping.count(target) == 0) {

            //     }

            // }
            // else {

            // }
            if (mapping.count(questions[z]) != 0) {
                cout << mapping[questions[z]] << " ";
            }
            else {
                ll target = questions[z];
                while (target>0 && mapping.count(target) == 0) {
                    target--;
                }
                cout << mapping[target] << " ";
            }
        }
    }
    cout << "\n";
}


int main() {
    int t;
    cin >> t;
    
    while (t--) {
        func();
    }
    
    return 0;
}