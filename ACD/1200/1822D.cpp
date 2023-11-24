/*
    RunAt - grey
*/
#include <iostream>
using namespace std;

typedef int long long ll;
#define printnl(a) cout << a << "\n";

void solve() {
    ll n;
    cin >> n;
    /*
        We first figure out where should the largest element go.
        If n is added to any other prevSum then it will also give the same modulo.
        (b(i) + n ) % n = b(i)
        Thus n has to go to the first position.

        a = [n,......,.....,.....,.....]

        By observation we can see:
        If n>1 and n is odd.
        Then, sumOfN = n*(n+1)/2.
        This will give 0 when sumOfN % n
        Thus no answer exists for (n>1 && n%2 == 1)
    */
    if (n>1 && n&1) {
        printnl(-1); return;
    }

    /*
        now we can form the array like this
        a = [n,1,n-2,3,n-4,5,.......,n-1,2]
        b = [0,1,n-1,2,n-2,3,.......,.....]
    */

    for (int i=0; i<n; i++) {
        if (i%2==1) cout << i << " ";
        else cout << n-i << " ";
    }
    cout << "\n";
}


int main() {
    int tests = 1;
    cin >> tests;
    while (tests--) solve();
    return 0;
}