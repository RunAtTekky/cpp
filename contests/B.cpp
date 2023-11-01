#include <iostream>
#include <algorithm>
#include <numeric>
#include <string>
#include <vector>
using namespace std;
const long long N = 200005;
#define ll long long
int a[N];

bool sortbysec(const pair<int,int> &a,
              const pair<int,int> &b)
{
    return (a.second < b.second);
}

void func() {

    ll n,p;
    cin >> n >> p;

    vector<int> arr(n);
    for (int i=0; i<n; i++) {
        cin >> arr[i];
    }

    vector<int> arr1(n);
    for (int i=0; i<n; i++) {
        cin >> arr1[i];
    }

    vector<pair<int,int>> vect;
    for (int i=0; i<n; i++)
        vect.push_back( make_pair(arr[i],arr1[i]) );




    sort(vect.begin(), vect.end(), sortbysec);

    // our pairing has been done now
    ll i = 0;
    ll ans = 0;
    for (ll k=1; k<=n; k++) {
        
        while (k<vect.size() && i < vect.size()) {
            ll d = vect[i].first;
            for (ll j=0; j<d; j++) {
                ans += vect[i].second;
                k++;
            }
            i++;
        }
        ans = min(ans, p*n);
    }


    cout << ans+p << endl;
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