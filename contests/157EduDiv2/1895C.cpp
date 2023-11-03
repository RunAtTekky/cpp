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

bool isLucky(string a, string b) {
    int l = a.size() + b.size();
    if (l%2 == 1) return false;
    string c = a+b;
    // printnl(c);
    int first = 0;
    int second = 0;
    for (int i=0; i<l/2; i++) {
        first += c[i]-'0';
        second += c[i+l/2]-'0';
    }
    // printab(first,second);
    // printnl("h");
    return first == second;
}

void func() {
    int n;
    cin >> n;
    vector<string> tickets(n);
    for (int i=0; i<n; i++) {
        cin >> tickets[i];
    } 
    // for (int i=0; i<n; i++) {
    //     printnl(tickets[i]);
    // }
    int ans = 0;
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            if (i != j) {
                // printnl("he");
                if (isLucky(tickets[i],tickets[j])) ans++;

            }
        }
    }
    printnl(ans);
}


int main() {
    func();
    // bool res = isLucky("5","582");
    // cout << res;
    return 0;
}