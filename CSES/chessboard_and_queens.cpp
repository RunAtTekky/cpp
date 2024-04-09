#include <iostream>
#include <vector>
using namespace std;

#define ll long long

ll total_ways = 0;
vector<string> board;
vector<bool> row_occupied(20);
vector<bool> diag_occupied(20);
vector<bool> diag2_occupied(20);

void solve(int i) {

    if (i == 8) {total_ways++; return;}
    
    for (int j=0; j<8; j++) {
        if (board[i][j] == '*' ||row_occupied[j] || diag_occupied[i+j] || diag2_occupied[i-j+8]) continue;

        row_occupied[j] = diag_occupied[i+j] = diag2_occupied[i-j+8] = true;

        solve(i+1);

        row_occupied[j] = diag_occupied[i+j] = diag2_occupied[i-j+8] = false;
    }

}

int main() {

    for (int i=0; i<8; i++) {
        string row; cin >> row;
        board.push_back(row);
    }

    solve(0);

    cout << total_ways << "\n";
    
}
