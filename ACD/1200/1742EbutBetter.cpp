#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

#define ll long long


ll upperBoundBinarySearch(vector<ll> v, int target) {
    ll s = 0;
    ll e = v.size();
    while (s<e) {
        int mid = s + (e-s)/2;
        if (v[mid] <= target) {
            s = mid + 1;
        }
        else e = mid;
    }
    return e;

}

void func() {
    ll n,m;
    cin >> n >> m;
    vector<ll> stairs(n);
    vector<ll> questions(m);
    vector<ll> preStairs(n+1);
    vector<ll> preMax(n+1);

    for (int i=0; i<n; i++) {
        cin >> stairs[i];
        preStairs[i+1] = stairs[i] + preStairs[i]; // Create preSum from stairs
        preMax[i+1] = max(preMax[i],stairs[i]); // Create preSum max from stairs
    }

    // cout << "This is preStairs" << " " << preStairs[1] << "\n";
    for (int i=0; i<m; i++) {
        cin >> questions[i];
        // ll index = upperBoundBinarySearch(preMax, questions[i])-1;
        ll index = upper_bound(preMax.begin(), preMax.end(), questions[i]) - preMax.begin() - 1;
        cout << preStairs[index] << " ";
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