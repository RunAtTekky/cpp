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

// To sort with size of string rather than lexicographically
bool myComp(string &a, string &b) {
    return a.size() < b.size();
}
void func() {
    // Taking input
    ll n;
    cin >> n;
    vector<string> v(n);
    for (int i=0; i<n; i++) {
        cin >> v[i];
    }
    
    sort(v.begin(),v.end(),myComp);

    ll ans = n; // Each ticket with itself will be a lucky ticket
    // We create a map with 
    // {lenght, sum} -> count
    map<pair<ll,ll>,ll> hm;
    for (auto s : v) {
        ll length = s.size();
        // We keep adding to the string from 1 to length
        // We check if there is any other which can make it lucky ticket
        for (int j=1; j<=length; j++) {
            ll sum = length + j;
            if (sum&1) continue; // If odd then not possible to make lucky ticket
            ll mid = sum/2; 
            // Lets say we have 93456 
            // and we are trying to check
            // if adding 1 to it will give us lucky ticket
            // we need to find 934 56_
            // thus we will need to first sum 9,3,4 = 16
            // then substract 5,6 = 11
            // Which will give us 5
            // We need to check if we have a string of length 1 which has sum 5
            // If yes we add it to the answer.
            // Obviously if the required number is negative
            // then it is not possible
            // hence we only check non-negative values.
            ll req = 0;
            for (int i=0; i<mid; i++) req += (s[i]-'0');
            for (int i=mid; i<length; i++) req -= (s[i]-'0');
            if (req>=0) ans += hm[{j,req}];
        }
        reverse(s.begin(),s.end());

        for (int j=1; j<=length; j++) {
            ll sum = length + j;
            if (sum&1) continue;
            ll mid = sum/2;
            ll req = 0;
            for (int i=0; i<mid; i++) req += (s[i]-'0');
            for (int i=mid; i<length; i++) req -= (s[i]-'0');
            if (req>=0) ans += hm[{j,req}];
        }
        ll sumTicket = 0;
        for (auto ch : s) sumTicket += (ch-'0');
        hm[{length,sumTicket}]++;
    }
    printnl(ans);
}


int main() {
    int t;
    t=1;
    while (t--) {
        func();
    }
    
    return 0;
}