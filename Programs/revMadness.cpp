#include <iostream>
#include <string>
#include <vector>
using namespace std;


void rev(vector<char> s, int a, int b) {
    while (a<b) {
        int temp = s.at(a);
        s.assign(a,s.at(b));
        s.assign(b,temp);
        a++;
        b--;
    }
    
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n, k;
        
        string s;
        vector<int> l;
        vector<int> r;
        int q;
        vector<int> queriesV;

        cin >> n >> k;
        getline(cin,s);
        for (int i=0; i<k; i++) {
            int num;
            cin >> num;
            l.push_back(num);
        }
        
        for (int i=0; i<k; i++) {
            int num;
            cin >> num;
            r.push_back(num);
        }

        
        for (int i=0; i<k; i++) {
            int num;
            cin >> num;
            queriesV.push_back(num);
        }

        vector<char> stringV;
        for (int i=0; i<n; i++) {
            stringV.push_back(s[i]);
        }

        int i=0;
        while (i < k) {
            int a = queriesV.at(i);
            int b = l.at(i) + r.at(i) - queriesV.at(i);
            rev(stringV, a, b);
            i++;
        }
        for (auto ch : s) cout << ch << " ";
        cout << endl;
        
    }

    
    return 0;
}