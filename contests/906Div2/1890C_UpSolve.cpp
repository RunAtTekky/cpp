#include <iostream>
#include <climits>
#include <algorithm>
#include <numeric>
#include <string>
#include <vector>
using namespace std;

#define ll long long
#define printnl(a) cout << a << "\n";
#define printab(a,b) cout << a << " " << b << "\n";


int count(string s) {
    int cnt = 0;
    for (auto ch : s) {
        if (ch == '1') cnt++;
    }
    return cnt;
}
void func() {
    int n; string s;
    cin >> n;
    cin >> s;
    if (n&1) {printnl(-1); return;}
    if (count(s) != n/2) {printnl(-1); return;}

    int low = 0;
    int high = n-1;

    vector<int> index;
    // 001110       low = 0     high = 5
    // 001110|01    low = 0     high = 7
    // 0011100|011  low = 0     high = 9

    while (low<high) {
        if (s[low] == s[high]) {
            if (s[low] == '1') {
                s.insert(low,"01");
                index.push_back(low);
                high += 2;
            }
            else {
                s.insert(high+1,"01");
                index.push_back(high+1);
                high += 2;
            }
        }
        else {
            low++;
            high--;
        }
    }
    printnl(index.size());
    for (auto ind : index) {cout << ind << " ";}
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