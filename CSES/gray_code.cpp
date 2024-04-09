#include <bitset>
#include <iostream>
#include <string>
using namespace std;

void solve() {
    int n; cin >> n;
    const int bitset_size = 16;

    for (int i=0; i<(1<<n); i++) {
        int num = i^(i>>1);
        bitset<bitset_size> binary(num);
        
        string bin_str = binary.to_string();
        for (int j=bitset_size-n; j<bitset_size; j++) cout << bin_str[j];
        cout << "\n";
    }

}

int main() {
    solve();
}
