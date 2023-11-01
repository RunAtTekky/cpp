#include <iostream>
#include <iomanip>
#include <cmath>
#include <algorithm>
#include <numeric>
#include <string>
#include <vector>
using namespace std;

#define ll long double

long double dist(long double A[2], long double B[2]) {
    long double dx = A[0]-B[0];
    long double dy = A[1]-B[1];
    long double res = dx*dx + dy*dy;
    return sqrt(res);
}

void func() {
    ll P[2];
    ll A[2];
    ll B[2];
    ll O[2] = {0,0};

    cin >> P[0] >> P[1] ;
    cin >> A[0] >> A[1] ;
    cin >> B[0] >> B[1] ;

    ll AO = dist(A,O);
    // ll AP = dist(A,P);
    // ll bo = dist(B,O);
    // ll bP = dist(B,P);
    // ll Ab = dist(A,B);

    // // ll res = std::min(std::max(AO,AP), std::max(bo, bP), std::max(AO,bP,Ab/2), std::max(bo,AP,Ab/2));
    double res = std::min({
        std::max(dist(O, A), dist(A, P)),
        std::max(dist(O, B), dist(B, P)),
        std::max({dist(O, A), dist(A, B) / 2, dist(B, P)}),
        std::max({dist(O, B), dist(B, A) / 2, dist(A, P)}),
    });
    cout << setprecision(15) << res << endl;
}


int main() {
    ll t;
    cin >> t;
    
    while (t--) {
        func();
    }
    
    return 0;
}