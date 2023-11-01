#include <iostream>
#include <algorithm>
#include <numeric>
#include <string>
#include <vector>
using namespace std;

#define ll long long
#define printnl(a) cout << a << "\n";

void func() {
    int n,m;
    int pedalAxle[52];
    int rearAxle[52];
    
    cin >> n;
    for (int i=0; i<n; i++) {
        cin >> pedalAxle[i];
    }
    cin >> m;
    for (int i=0; i<m; i++) {
        cin >> rearAxle[i];
    }
    int maxi = 0;
    int maxiCount = 0;
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            if (rearAxle[j]%pedalAxle[i] == 0) {
                if (rearAxle[j]/pedalAxle[i] > maxi) {
                    maxi = rearAxle[j]/pedalAxle[i];
                    maxiCount = 1;
                }
                else if (rearAxle[j]/pedalAxle[i] == maxi) {
                    maxiCount++;
                }
            }
        }
    }
    printnl(maxiCount);
}

int main() {
    int t;
    t=1;
    while (t--) {
        func();
    }
    
    return 0;
}