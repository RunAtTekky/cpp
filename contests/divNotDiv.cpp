#include <iostream>
#include <numeric>
#include <string>
#include <vector>
using namespace std;
const long long N = 200005;
int a[N];

void func() {
    int n, m;
    cin >> n >> m;


    int sum = 0;
    for (int i=1; i<=n; i++) {
        if (i%m == 0) {
            sum += i;
        }
    }
    

    cout << (n*(n+1))/2 - 2*sum;
}

// Main
int main() {
    func();
    
    return 0;
}