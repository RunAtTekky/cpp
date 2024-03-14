/*
  RunAt - green
*/
#include <iostream>
#include <set>
using namespace std;

typedef int long long ll;

void solve() {
  ll n,m,x;
  cin >> n >> m >> x;

  set<int> possible_positions;
  possible_positions.insert(x-1);
  
  while (m--) {
    int dist;
    char dir;
    cin >> dist;
    cin >> dir;

    set<int> curr_set;

    if (dir == '0' || dir == '?') {
      for (auto position : possible_positions) {
        curr_set.insert((position + dist) % n);
      }
    }
    if (dir == '1' || dir == '?') {
      for (auto position : possible_positions) {
        curr_set.insert((position - dist + n) % n);
      }
    }

    possible_positions.clear();

    for (auto position : curr_set) {
      possible_positions.insert(position);
    }
  }

  cout << possible_positions.size() << "\n";
  for (auto position : possible_positions) {
    cout << position+1 << " " ;
  }
  cout << "\n";
}

int main() {
  cin.sync_with_stdio(0);
  cin.tie(0);
  int tests = 1;
  cin >> tests;
  while (tests--) solve();
  return 0;
}
