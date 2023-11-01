#include <iostream>
using namespace std;


int main() {
    int t;
    cin >> t;
    
    while (t--) {
        long long n,k,x;
        cin >> n >> k >> x;
        long long diff = n-k;
        long long maxm = (n*(n+1))/2 - (diff*(diff+1))/2;
        long long min = (k*(k+1))/2;
        if (x >= min && x<= maxm) cout << "YES";
        else cout << "NO";
        cout << endl;
    }

    
    return 0;
}