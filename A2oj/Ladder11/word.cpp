#include <iostream>
#include <algorithm>
#include <numeric>
#include <string>
#include <vector>
using namespace std;

#define ll long long

void func() {
    string word;
    getline(cin, word);

    int lower_cnt = 0;
    int upper_cnt = 0;

    for (auto c : word) {
        if (isupper(c)) upper_cnt++;
        else lower_cnt++;
    }
    
    if (upper_cnt>lower_cnt) {
        for (auto c : word) {
            cout << char(toupper(c));
        }
        cout << endl;
    }
    else {
        for (auto c : word) {
            cout << char(tolower(c));
        }
        cout << endl;
    }
}


int main() {
    func();
    
    return 0;
}