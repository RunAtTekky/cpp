#include <iostream>
#include <algorithm>
#include <numeric>
#include <string>
#include <vector>
using namespace std;

#define ll long long
#define printnl(a) cout << a << "\n";

void putMen(char board[][102], int n, int m, int i, int j, bool currWhite, bool visited[][102]) {
    if (visited[i][j] == true) return;
    if (board[i][j] != '.' && board[i][j] != '-') return;
    if (board[i][j] == '.') {
        if (currWhite == true) board[i][j] = 'W';
        else board[i][j] = 'B';
    }
    visited[i][j] = true;
    if (j>0) {
        putMen(board,n,m,i,j-1,!currWhite, visited);
    }
    if (j<m-1) {
        putMen(board,n,m,i,j+1,!currWhite, visited);
    }
    if (i>0) {
        putMen(board,n,m,i-1,j,!currWhite, visited);
    }
    if (i<n-1) {
        putMen(board,n,m,i+1,j,!currWhite, visited);
    }
    return;

}
void func() {
    int n,m;
    cin >> n >> m;
    string s;
    char chessBoard[102][102];

    for (int i=0; i<n; i++) {
        cin >> s;
        for (int j=0; j<m; j++) {
            chessBoard[i][j] = s[j];
        }
    }
    bool memo[102][102];
    for (int i=0;i<102; i++) {
        for (int j=0; j<102; j++) {
            memo[i][j] = false;
        }
    }
    putMen(chessBoard, n,m, 0,0, false, memo);
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            cout << chessBoard[i][j];
        }
        cout << endl;
    }
}


int main() {
    int t;
    t=1;
    while (t--) {
        func();
    }
    
    return 0;
}