#include <iostream>
#include <vector>
#include <string>
using namespace std;
 
using i64 = long long;
 
int findLess(int l[], int x, int k) {
    int res = -1;
    for (int i=0; i<k; i++) {
        if (l[i] < x) {
            res = i;
        }
    }
    return res;
}
int findGreater(int l[], int x, int k) {
    int res = -1;
    for (int i=0; i<k; i++) {
        if (l[i] > x) {
            res = i;
        }
    }
    return res;
}

vector<char> revString(vector<char> s, int l, int r) {

    while (l<r) {
        char temp = s.at(l);
        s.assign(l,s.at(r));
        s.assign(r,temp);
        l++;
        r--;
    }
    return s;
}

void solve() {
    // Inputs in every testcase.
    int n, k;
    cin >> n >> k ;
    string s;
    getline(cin,s);

    vector<char> sVec;
    for (auto c : s) {
        sVec.push_back(c);
    }

    int l[k];
    for (int i=0; i<k; i++) {
        int a;
        cin >> a;
        l[i] = a;
    }
    int r[k];
    for (int i=0; i<k; i++) {
        int a;
        cin >> a;
        r[i] = a;
    }
    int q;
    cin >> q;
    int query[q];
    for (int i=0; i<q; i++) {
        int a;
        cin >> a;
        query[i] = a;
    }
    // Actual Code here
    for (int num : query) {
        int l1 = findLess(l, num, k);
        int r1 = findGreater(r, num, k);
        if (l1 != -1 && r1 != -1) {
            revString(sVec, num, l1+r1-num);
        }
    }

    for (char c : sVec) {
        cout << c << " ";
    }
    cout << endl;
    
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    // Number of testcases
    // int t;
    // cin >> t;
    
    // while (t--) {
    //     solve();
    // }

    string s = "brothers";
    vector<char> sVec;
    for (char c:s) {
        sVec.push_back(c);
    }

    vector<char> ans = revString(sVec,1,5);

    for (char c:ans) cout << c << " ";
    cout << endl;
    
    return 0;
}