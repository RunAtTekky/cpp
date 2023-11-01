 #include <iostream>
#include <algorithm>
#include <numeric>
#include <string>
#include <vector>
using namespace std;

#define ll long long

void func() {
    string a;
    string b;
    getline(cin, a);
    getline(cin, b);

    string ans = "";

    for (int i=0; i<a.size(); i++) {
        int aint = (a[i] == '0') ? 0 : 1;
        int bint = (b[i] == '0') ? 0 : 1;
        ans += char(aint^bint + '0');
    }
    cout << ans << endl;
}


int main() {
    func();
    
    return 0;
}