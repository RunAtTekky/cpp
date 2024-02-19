/*
    RunAt - green
*/
#include <iostream>
#include <set>
#include <climits>
#include <cmath>
#include <numeric>
#include <map>
#include <string>
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

  ll maxi = 0;
  map<char,vector<ll>> mp;
  for (int i=0; i<2*n; i++) {
    string card; cin >> card;
    mp[card[1]].push_back(card[0]); 
  }

  vector<string> rem;
  vector<pair<string,string>> ans;
  for (auto &[x,y] : mp) {
    if (x == trump) continue;
    sort(y.begin(), y.end());
    int m = y.size();
    if (m&1) {
      string cardRem;
      cardRem.push_back(y[m-1]);
      cardRem.push_back(x);
      rem.push_back(cardRem);
    }
    for (int i=0; i+1<m; i+=2) {
      string card1;
      card1.push_back(y[i]);
      card1.push_back(x);
      string card2;
      card2.push_back(y[i+1]);
      card2.push_back(x);

      ans.push_back({card1,card2});
    }
  }
  if (mp[trump].size() < rem.size()) {
    p("IMPOSSIBLE");
    return;
  }

  sort(mp[trump].begin(), mp[trump].end());

  for (int i=0; i<rem.size(); i++) {
    string trumpCard;
    trumpCard.push_back(mp[trump][i]);
    trumpCard.push_back(trump);
    // ans.push_back({rem[i],mp[trump][i]});
    ans.push_back({rem[i],trumpCard});
  }

  for (int i=rem.size(); i<mp[trump].size(); i+=2) {
      string card1;
      card1.push_back(mp[trump][i]);
      card1.push_back(trump);
      string card2;
      card2.push_back(mp[trump][i+1]);
      card2.push_back(trump);

      ans.push_back({card1,card2});
  }

  for (auto &[x,y]: ans) {
    p2(x,y);
  }
}

int main() {
  int tests = 1;
  cin >> tests;
  while (tests--) solve();
  return 0;
}
