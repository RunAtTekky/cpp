#include <iostream>
#include <algorithm>
using namespace std;

#define printnl(a) cout << a << "\n";

void func() {
    int n;
    cin >> n;
    int ele;
    int arr[1001] = {0};
    for (int i=1; i<=n; i++) {
        cin >> ele;
        arr[ele] = i;
    }
    int maxi = -1;
    for (int i=1; i<=1000; i++) {
        for (int j=i; j<=1000; j++) {
            if (arr[i] != 0 && arr[j] != 0) {
                if (__gcd(i,j) == 1) {
                    maxi = max(arr[i]+arr[j],maxi);
                }
            }
        }
    }
    printnl(maxi);
}


int main() {
    int t;
    cin >> t;
    while (t--) {
        func();
    }
    return 0;
}