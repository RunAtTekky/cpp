#include <iostream>
#include <string>
using namespace std;
int n, m;
char ch;
int dx[4] = {1,-1,0,0};
int dy[4] = {0,0,1,-1};
char dc[4] = {'D','U','R','L'};
bool visited[1000][1000];

char grid[1000][1000];

string dfs(char grid[1000][1000], int i, int j, int n, int m, string s) {
    visited[i][j] = true;
    string path;
    string sAns;
    sAns = "";
    for (int c=0; c<10000; c++) {
        sAns += "#";
    }
    for (int d=0; d<4; d++) {
        if (i+dx[d] < 0 || i+dx[d] > n-1 || j+dy[d]<0 || j+dy[d] > m-1) continue;
        if (visited[i+dx[d]][j+dy[d]]) continue;
        if (grid[i+dx[d]][j+dy[d]] == 'B') {
            s += dc[d];
            visited[i][j] = false;
            return s;
        }
        visited[i][j] = true;
        path = dfs(grid,i+dx[d],j+dy[d],n,m,s+dc[d]);
        if (path.size() < sAns.size()) {
            sAns = path;
        }
        visited[i][j] = false;
    }

    return sAns;
}


int main() {
    cin >> n >> m;
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            cin >> ch;
            grid[i][j] = ch;
        }
    }

    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            if (grid[i][j] == '#')
                visited[i][j] = true;
        }
    }
    string path;
    int size;
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            if (grid[i][j] == 'A') {
               path = dfs(grid,i,j,n,m,"");
               size = path.size();
               if (size != 0 && size != 10000) {
                    cout << "YES" <<"\n";
                    cout << size << "\n";
                    cout << path << "\n";
               }
               else cout << "NO" << "\n";
               return 0;
            }

        }
    }

    
    
}