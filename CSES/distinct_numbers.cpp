#include <iostream>
#include <set>
using namespace std;

void solve() {
    int n;
    cin >> n;
    set<int> st;
    for (int i=0; i<n; i++) {
        int ele; cin >> ele;
        st.insert(ele);
    }

    cout << st.size() << "\n";

}

int main() {
    solve();
}
