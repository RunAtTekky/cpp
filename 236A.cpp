#include <iostream>
#include <map>
#include <set>
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


void solve() {
    string s;
    cin >> s;
    set<int> distinct;

    for (auto ch : s) distinct.insert(ch);
    
    if (distinct.size() % 2) {
        cout << "IGNORE HIM!";
    } else {
        cout << "CHAT WITH HER!";
    }

}


int main() {
    solve();
    return 0;
}    // int alpha[26]={0};
    // for(int i=0;i<n;i++){
    //     int z=s[i]-'a';
    //     alpha[z]++;
    // }

    // int count=0;
    // for(int i=0;i<26;i++){
    //     if(alpha[i]!=0){
    //         count++;
    //     }
    // }
    // // cout<<count;
    // if(count%2==0){
    //     cout << "CHAT WITH HER!";
    // } else {
    //     cout << "IGNORE HIM!";
    // }