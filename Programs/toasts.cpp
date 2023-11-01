#include <iostream>
using namespace std;

int min3 (int a, int b, int c) {
    if (a<b) {
        if (a<c) return a;
        return c;
    } else {
        if (b<c) return b;
        return c;
    }
}
void func() {
    int n,k,l,c,d,p,nl,np;

    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    int toasts = (k*l)/nl;
    int slices = (c*d);
    int salt = p/np;

    int ans = min3(toasts, slices, salt)/n;

    cout << ans ;
}

int main() {
    
    func();
    
    return 0;
}