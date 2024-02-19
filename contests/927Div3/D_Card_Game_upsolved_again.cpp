/*
  RunAt - green
*/
#include <iostream>
#include <set>
#include <climits>
#include <string>
#include <numeric>
#include <cmath>
#include <map>
#include <algorithm>
#include <vector>
using namespace std;

typedef int long long ll;
#define p(a) cout << a << "\n";
#define p2(a,b) cout << a << " " << b << "\n";
#define YES cout << "YES" << "\n"
#define NO cout << "NO" << "\n"

const int N = 1e5+5;
const int MOD = 1e9+7;

void solve() {
  ll n;
  cin >> n;
  
  char trump; cin >> trump;

  map<char, vector<string>> mp;

  for (int i=0; i<2*n; i++) {
    string card; cin >> card;
    mp[card[1]].push_back(card);
  }

  vector<string> remainingCardsOfAllDecks;
  for (auto &[x,y]: mp) {
    sort(y.begin(), y.end());
    if (x == trump) continue;
    if (y.size()&1) remainingCardsOfAllDecks.push_back(y[y.size()-1]);
  }

  if (remainingCardsOfAllDecks.size() > mp[trump].size()) {
    p("IMPOSSIBLE");
    return;
  }

  for (auto &[x,y]: mp) {
    if (x == trump) continue;
    for (int i=0; i+1<y.size(); i+=2) {
      p2(y[i],y[i+1]);
    }
  }

  for (int i=0; i<remainingCardsOfAllDecks.size(); i++) {
    p2(remainingCardsOfAllDecks[i], mp[trump][i]);
  }

  for (int i=remainingCardsOfAllDecks.size(); i+1<mp[trump].size(); i+=2) {
    p2(mp[trump][i], mp[trump][i+1]);
  }

}

int main() {
  int tests = 1;
  cin >> tests;
  while (tests--) solve();
  return 0;
}
