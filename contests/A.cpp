#include <iostream>
#include <numeric>
#include <string>
#include <vector>
using namespace std;
const long long N = 200005;
int a[N];

void func() {
    int n;
    cin >> n;

    vector<int> a(n-1);
    for (int i=0; i<n-1; i++) {
        cin >> a[i];
    }

    int sum = accumulate(a.begin(), a.end(),0);

    cout << (sum*-1) << endl;
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