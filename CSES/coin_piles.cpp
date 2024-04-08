#include <iostream>
using namespace std;

#define YES cout << "YES\n"
#define NO cout << "NO\n"

void solve() {
    long long a,b;
    cin >> a >> b;

    // x + 2y == a
    // 2x + y == b

    long long first_equation = 2*a-b;
    long long second_equation = 2*b-a;

    if (((first_equation%3==0) && first_equation>=0) && ((second_equation%3==0) && second_equation>=0)) YES;
    else NO;
}

int main() {
    int t; cin >> t;
    while (t--) solve();
}
