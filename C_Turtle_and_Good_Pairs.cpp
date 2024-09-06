// RunAt - Green
#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n; cin >> n;

  string s; cin >> s;

  // map<char,int> count;

  vector<pair<int,char>> count(26);

  for (auto ch : s) {
    count[ch-'a'] = {count[ch-'a'].first + 1, ch};
  }

  sort(count.begin(), count.end());

  vector<char> rearranged(n);

  int j=0;

  for (int i=count.size()-1; i>=0; i--) {

    char ch = count[i].second;
    int freq = count[i].first;

    for (; j<n; j+=2) {
      if (freq == 0) break;
      rearranged[j] = ch;
      freq--;
      if ((j%2==0) && (j+2>=n)) j=-1;
    }

  }

  string answer = "";

  for (auto ch : rearranged) answer.push_back(ch);

  cout << answer << "\n";






}

int main() {
  cin.sync_with_stdio(0); cin.tie(0);
  int t; cin >> t; while (t--) solve();
}