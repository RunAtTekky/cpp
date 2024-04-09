#include <iostream>
#include <string>
#include <vector>
using namespace std;

int curr_position = 0;
string path;
vector<vector<bool>> visited(7);

int number_of_paths(int i, int j) {
    if (curr_position == 48) {
        if (i==6 && j==0) return 1;
        else return 0;
    }

    char dir = path[curr_position++];
    if (dir == 'D') i++;
    if (dir == 'U') i--;
    if (dir == 'L') j--;
    if (dir == 'R') j++;

    if ((i<0 || j<0) || (i>=7 || j>=7)) {
        return 0;
    }

    if (visited[i][j]) return 0;

    visited[i][j] = true;
    
    int num_of_path = number_of_paths(i+1, j) + number_of_paths(i-1, j) + number_of_paths(i, j-1) + number_of_paths(i, j+1);

    visited[i][j] = false;

    return num_of_path;
}

void solve() {
    cin >> path;

    cout << number_of_paths(0,0) << "\n";


}

int main() {
    solve();
}
