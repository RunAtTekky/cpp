/*
    RunAt - grey
*/
#include <iostream>
using namespace std;

typedef int long long ll;
#define p(a) cout << a << "\n";

void solve() {
    ll n;
    cin >> n;
    
    int lastOdd;
    int lastEven;

    int cnt = 0;
    for (int i=0; i<n; i++) {
        int ele; cin >> ele;
        if (ele&1) {
            lastOdd = i;
            cnt++;
        }
        else lastEven = i;
    }

    if (cnt == 1) {p(lastOdd+1);}
    else {p(lastEven+1);}
}


int main() {
    solve();
}