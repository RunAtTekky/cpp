#include <iostream>
using namespace std;

void solve() {
    string s; cin >> s;

    int alpha[26] = {0};

    for (auto ch : s) {
        alpha[ch-'A']++;
    }

    string pal = s;
    
    int single_cnt = 0;
    int j=0;
    int n=s.size();
    for (int i=0; i<26; i++) {
        int cnt = alpha[i];
        while (cnt>=2) {
            pal[j] = 'A'+i;
            pal[n-1-j] = 'A'+i;
            j++;
            cnt -= 2;
        }
        alpha[i] = cnt;
        single_cnt += cnt;
    }

    if (single_cnt>1) {cout << "NO SOLUTION\n"; return;}

    for (int i=0; i<26; i++) {
        if (alpha[i] == 1) {
            single_cnt++;
            pal[j] = 'A'+i;
            j++;
        }
    }

    
    cout << pal << "\n";


}

int main() {
    solve();
}
