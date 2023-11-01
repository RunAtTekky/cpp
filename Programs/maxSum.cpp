#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;
const long long N = 200005;
int a[N];

void func(){
    int n,k;
    cin >> n >> k;

    vector<long long> v1(n);
    for (int i=0; i<n; i++) {
        cin >> v1[i];
    }

    sort(v1.begin(),v1.end());

    vector<long long> kandane(n+1,0);
    for (int i=0; i<n; i++) {
        kandane[i+1] = kandane[i] + v1[i];
    }

    long long ans = 0;
    for (int i=0; i<=k; i++) {
        ans = max(ans, kandane[n-(k-i)] - kandane[i*2]);
    }

    cout << ans << endl;
}

// Main
int main() {
    int t;
    cin >> t;
    
    while (t--) {
        func();
    }
    
    return 0;
}