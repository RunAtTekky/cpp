#include <iostream>
#include <vector>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> v;

    for (int i=2; i<=n; i+=2) {
        v.push_back(i);
    }

    for (int i=1; i<=n; i+=2) {
        v.push_back(i);
    }

    for (int i=0; i+1<n; i++) {
        if (abs(v[i]-v[i+1]) == 1) {
         cout << "NO SOLUTION\n";
         return;
        }
    }
    
    for (auto e : v) {
        cout << e << " " ;
    }
    cout << "\n";

}


int main() {
    solve();
}
