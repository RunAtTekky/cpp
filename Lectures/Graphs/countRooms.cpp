#include <iostream>
#include <string>
using namespace std;

char grid[1000][1000];
bool visited[1000][1000];

// Right, left, up, down
int dx[4] = {1,-1,0,0};
int dy[4] = {0,0,1,-1};

void dfs(char grid[1000][1000], int i, int j, int n, int m) {
    visited[i][j] = true;
    for (int d=0; d<4; d++) {
        if (i+dx[d] < 0 || i+dx[d] > n-1 || j+dy[d]<0 || j+dy[d] > m-1) continue;
        if (visited[i+dx[d]][j+dy[d]]) continue;
        dfs(grid,i+dx[d],j+dy[d],n,m);
    }    
}


int main() {
    int n,m;
    cin >> n >> m;
    for (int i=0; i<n; i++) {
        string line;
        cin >> line;
        for (int j=0; j<m; j++) {
            grid[i][j] = line[j];
        }
    }
    // cout << "HI";
    int count = 0;
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            char ch = grid[i][j];
            if (ch == '#') 
                visited[i][j] = true;
        }
    }

    // for (int i=0; i<n; i++) {
    //     for (int j=0; j<m; j++) {
    //         cout << visited[i][j];
    //     }
    //     cout << "\n";
    // }
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            if (visited[i][j]) continue;
            dfs(grid,i,j,n,m);
            count++;
        }
    }
    cout << count << "\n";
}