#include <algorithm>
#include <iostream>
#include <set>
#include <string>
using namespace std;

void solve() {
    string s;
    cin >> s;
    set<string> st;

    sort(s.begin(), s.end());

    do {
        st.insert(s);
    } while (next_permutation(s.begin(), s.end()));

    cout << st.size() << "\n";
    for (auto str : st) {
        cout << str << "\n";
    }
}

int main() {
    solve();
}
