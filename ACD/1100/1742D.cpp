#include <iostream>
#include <climits>
#include <algorithm>
#include <numeric>
#include <string>
#include <vector>
using namespace std;

#define ll long long
#define printnl(a) cout << a << "\n";

const int N = 1001;
vector<int> getFactors(int x) {
    vector<int> factors;
    int og = x;
    for (int i=2; i<=og; i++) {
        while (x%i==0) {
            factors.push_back(i);
            x /= i;
            // printnl(x);
        }
        if (x==1) break;
    }
    return factors;
}
bool isCoprime(int a, int b) {
    if (a == 1 && b == 1) return true;
    vector<int> aFact = getFactors(a);
    vector<int> bFact = getFactors(b);
    int i=0;
    int j=0;
    while (i < aFact.size() && j < bFact.size()) {
        int f = aFact[i];
        int s = bFact[j];
        if (f == s) return false;
        if (f < s) i++;
        else j++;
    }
    return true;
}
void func() {
    ll n;
    cin >> n;
    ll ele;
    ll arr[1001] = {0};
    for (int i=1; i<=n; i++) {
        cin >> ele;
        arr[ele] = i;
    }
    int max_i = -1;
    int max_j = -1;
    ll maxi = 0;
    for (int i=1; i<=1000; i++) {
        for (int j=i; j<=1000; j++) {
            if (arr[i] != 0 && arr[j] != 0 && isCoprime(i,j)) {
                // printnl(i);
                // printnl(j);
                maxi = max(arr[i]+arr[j],maxi);
                // if (arr[i] + arr[j] > maxi) {
                //     max_i = arr[i];
                //     max_j = arr[j];
                //     maxi = arr[i] + arr[j];
                // }
            }
        }
    }
    if (maxi != 0) {printnl(maxi);}
    else {printnl(-1);}
}


int main() {
    int t;
    cin >> t;
    
    while (t--) {
        func();
    }
    // cout << isCoprime(7,48);
    return 0;
}