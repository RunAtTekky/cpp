#include <iostream>
// #include <string>
#include <vector>
using namespace std;
const long long N = 200005;
int a[N];

bool allZero(vector<int> a, int n) {
    for (int i=0; i<n; i++) {
        if (a.at(i) != 0) return false;
    }
    return true;
}
int getMaxIndex(vector<int> a, int n) {
    int maxi = 0;
    int ans = 0;
    for (int i=0; i<n; i++) {
        if (a.at(i) > maxi) {
            maxi = a.at(i);
            ans = i;
        }
    }
    return ans;
}
void func() {
    int n,k; 
    cin >> n >> k;
    // int n = 3, k = 2;
    // for (int i=0; i<n; i++) {
    //     cin >> a[i];
    // }

    vector<int> a(n);
    for (int i=0; i<n; i++) {
        int h;
        cin >> h;
        a.push_back(h);
    }
    // int a[] = {1,2,3};
    vector<int> ans;
    
    while(!allZero(a,n)) {
        int m = getMaxIndex(a,n);
        // cout << m << "<- " << endl;
        a.assign(m, a.at(m)-k);
        if (a.at(m) <= 0) {
            a.assign(m,0);
            ans.push_back(m+1);
        } 
    }

    for (int i : ans) cout << i << " ";

    cout << endl;
    return;
    
}

// Main
int main() {
    int t;
    cin >> t;
    
    while (t--) {
        func();
    }

    // func();
    
    return 0;
}