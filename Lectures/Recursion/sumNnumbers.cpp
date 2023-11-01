#include <iostream>
using namespace std;
// int sumNnumbers(int n, int sum) {
//     if (n == 0) return sum;
//     return sumNnumbers(n-1,sum + n);
// }
// int main() {
//     int ans = sumNnumbers(11,0);
//     cout << ans;
// }


int sumNumbers(int n) {
    if (n == 1) return 1;
    return n + sumNumbers(n-1);
}
int main() {
    int ans = sumNumbers(11);
    cout << ans;
}