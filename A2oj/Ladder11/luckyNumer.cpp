#include <iostream>
#include <algorithm>
#include <numeric>
#include <string>
#include <vector>
using namespace std;

#define ll long long

void func() {
    ll n;
    cin >> n;

    int fourCnt = 0;
    int sevenCnt = 0;

    while (n>0) {
        ll dig = n%10;
        // cout << dig << endl;
        if (dig == 4) fourCnt++;
        if (dig == 7) sevenCnt++;
        n = n/10;
    }
    
    // cout << fourCnt << " " << sevenCnt << endl;
    if (fourCnt + sevenCnt == 4 || fourCnt + sevenCnt == 7) {
        cout << "YES" << endl;
        return;
    }
    else cout << "NO" << endl;
}


int main() {
    func();
    
    return 0;
}