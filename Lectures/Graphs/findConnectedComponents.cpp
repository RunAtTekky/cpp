#include <iostream>
#include <vector>
using namespace std;

// This is the input we have
// First line corresponds to number of vertices and edges
// Then follow the edges connection
// 8 5
// 1 2
// 2 3
// 2 4
// 3 5
// 6 7

// We need a list of list
// 1 -> [2]
// 2 -> [1,3,4]
// 3 -> [2,5]
// 6 -> [7]
// 7 -> [6]
// so our adj_list looks like this
// [[],[2],[2,3,4],[2,5],[],[],[7],[6],[],[],[],[]]
vector<vector<int>> adj_list(1000);

bool visited[1000];
// We keep track of what vertex we have visited
// initially our visited array is all false

void dfs(int i) {
    visited[i] = true; // as soon as we land on the vertex we mark it as visited
    // Now we enter into the adjacency list of that vertex
    // if vertex is visited we don't go there else we apply dfs again on the vertex
    // We go to depth. Thus it is called Depth First Search.
    for (auto next : adj_list[i]) {
        if (visited[next]) continue;
        dfs(next);
    }
}

int main() {
    int v,e;
    cin >> v >> e;

    for (int i=0; i<e; i++) {
        int x,y;
        cin >> x >> y;

        adj_list[x].push_back(y);
        adj_list[y].push_back(x);
    }

    int ans = 0;
    for (int i=1; i<=v; i++) {
        if (visited[i]) continue;
        dfs(i);
        ans++;
    }

    cout << ans << "\n";
}