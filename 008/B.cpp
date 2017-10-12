#include <bits/stdc++.h>
using namespace std;
int main()
{
  unordered_map<string, int> votes;
  int N;
  cin >> N;
  string str;
  for (int i = 0; i < N; ++i)
  {
    cin >> str;
    votes[str]++;
  }
  int highestvote = 0;
  string winner;
  for (auto itr = votes.begin(); itr != votes.end(); ++itr) {
    if (itr->second > highestvote) {
      highestvote = itr->second;
      winner = itr->first;
    }
  }
  cout << winner << endl;
  return 0;
}