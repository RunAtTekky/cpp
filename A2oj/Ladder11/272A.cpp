#include <iostream>
#include <algorithm>
#include <numeric>
#include <string>
#include <vector>
using namespace std;

#define ll long long

void func() {
    int n;
    cin >> n;

    vector<int> fingers(n);
    for (int i=0; i<n; i++) {
        cin >> fingers[i];
    }

    int sum = accumulate(fingers.begin(),fingers.end(),0);
    // cout << sum << "\n";
    int cnt = 0;
    for (int i=1; i<=5; i++) {
        if ((sum+i)%(n+1) != 1) cnt++;
    }
    cout << cnt << "\n";


}


int main() {
    int t;
    t=1;
    
    while (t--) {
        func();
    }
    
    return 0;
}