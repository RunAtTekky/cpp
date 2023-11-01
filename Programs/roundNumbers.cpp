#include <iostream>
#include <vector>
using namespace std;


void func(int n) {
    int cnt = 0;
    int multiplier = 1;
    vector<int> ans;

    while (n>0) {
        if (n%10 != 0) {
            ans.push_back((n%10)*multiplier);
            cnt++;
            n = n/10;
        }
        else {
            n = n/10;
        }
        multiplier *= 10;
    }
    cout << cnt << endl;
    for (auto number : ans) cout << number << " ";
    cout << endl;
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;

        func(n);
        
    }

    
    return 0;
}