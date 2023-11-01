#include <iostream>
#include <algorithm>
#include <numeric>
#include <string>
#include <vector>
using namespace std;

#define ll long long

void func() {
    int grid[3][3] = {{1,1,1},{1,1,1},{1,1,1}};

    int switches[3][3];
    for (int i=0; i<9; i++) {
        cin >> switches[i/3][i%3];
    }

    
    
    // logic
    for (int i=0; i<3; i++) {
        for (int j=0; j<3; j++) {
            if (switches[i][j]%2 == 1) {
                grid[i][j] = grid[i][j]^1;
                if (i<2) grid[i+1][j] = grid[i+1][j]^1;
                if (i>0) grid[i-1][j] = grid[i-1][j]^1;
                if (j<2) grid[i][j+1] = grid[i][j+1]^1;
                if (j>0) grid[i][j-1] = grid[i][j-1]^1;
            }
        }
    }

    for (int i=0; i<3; i++) {
        for (int j=0; j<3; j++) {
            cout << grid[i][j];
        }
        cout << endl;
    }

}


int main() {
    func();
    
    return 0;
}