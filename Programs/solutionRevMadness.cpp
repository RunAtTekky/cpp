#include <algorithm>
#include <iostream>
#include <string>
#include <vector> 
#include <map>
#include <numeric>
#include <set>
#include <stack>
#include <cassert>
#include <cmath>
#include <tuple>
#include <set>
#include <limits.h>
#include <numeric>
#include <map>
using namespace std;


const long long N = 200005;

int l[N], r[N];

void answer(){
    int n, k; 
    cin >> n >> k;

    string s; cin >> s;
    
    for(int i=0; i<k; ++i) cin >> r[i];
    for(int i=0; i<k; ++i) cin >> l[i];

    vector<int> Q(n, 0);

    int q;
    cin >> q;

    for(int i=0; i<q; ++i){
        int x;
        cin >> x;

        int j = upper_bound(l, l+k, x) - l;
        --j;

        int a = min(x, l[j]+r[j]-x);
        int b = max(x, l[j]+r[j]-x);

        Q[a-1]+=1;
    }

    // for(int i=0; i<n; ++i)cout << Q[i] << " ";
    // cout << endl;

    for(int i=0; i<k; ++i){
        int sm = 0;
        for(int j=l[i]; 2*j<=l[i]+r[i]; ++j){
            sm += Q[j-1];
            if (sm%2){
                //swap
                int temp = s[j-1];
                s[j-1] = s[l[i]+r[i]-j-1 ];
                s[l[i]+r[i]-j-1 ] = temp;
            }
        }
        // cout << s << endl;
    }
    cout << s << endl;
}

void preproces(){

}
int main(){
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    preproces();

    int t;
    cin >> t;

    while(t--){
        answer();
    }
}