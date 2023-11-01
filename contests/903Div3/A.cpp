#include <iostream>
#include <algorithm>
#include <numeric>
#include <string>
#include <vector>
using namespace std;

#define ll long long

int isSubstring(string s1, string s2)
{
    int M = s1.length();
    int N = s2.length();
 
    /* A loop to slide pat[] one by one */
    for (int i = 0; i <= N - M; i++) {
        int j;
 
        /* For current index i, check for
 pattern match */
        for (j = 0; j < M; j++)
            if (s2[i + j] != s1[j])
                break;
 
        if (j == M)
            return i;
    }
 
    return -1;
}

void func() {
    int n;
    int m;
    cin >> n >> m;
    string first;
    string second;
    cin >> first >> second;

    
    int i=0;
    while (i < 6 ) {
        if (isSubstring(second, first) != -1) {
            cout << i << endl;
            return;
        }
        first = first + first;
        i++;
        
    }
    cout << -1 << endl;
}


int main() {
    int t;
    cin >> t;
    
    while (t--) {
        func();
    }
    
    return 0;
}