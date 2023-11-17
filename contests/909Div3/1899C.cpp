#include <iostream>
#include <map>
#include <climits>
#include <algorithm>
#include <numeric>
#include <string>
#include <vector>
using namespace std;

#define ll long long
#define printnl(a) cout << a << "\n";
#define printab(a,b) cout << a << " " << b << "\n";

const int N = 100005;
int maxSubArraySum(vector<int> a, int size)
{
    int max_so_far = INT_MIN, max_ending_here = 0;
 
    for (int i = 0; i < size; i++) {
        max_ending_here = max_ending_here + a[i];
        if (i!=0 && (a[i]&1) == (a[i-1]&1)) {
            max_ending_here = a[i];
            max_so_far = max(max_so_far,a[i]);
        }
        if (max_so_far < max_ending_here)
            max_so_far = max_ending_here;
 
        if (max_ending_here < 0)
            max_ending_here = 0;
    }
    return max_so_far;
}

void solve() {
    ll n;
    cin >> n;
    vector<int> arr(n);
    for (int i=0; i<n; i++) cin >> arr[i];

    int ans = maxSubArraySum(arr,n);
    printnl(ans);
}


int main() {
    int tests; cin >> tests;
    while (tests--) solve();
    return 0;
}