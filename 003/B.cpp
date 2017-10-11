#include <bits/stdc++.h>
using namespace std;
int main()
{
  vector<char> wildcard{'a', 't', 'c', 'o', 'd', 'e', 'r'};
  string S, T;
  cin >> S >> T;
  bool result = true;
  for (int i = 0; i < S.length(); ++i)
  {
    if(!result) break;
    if (S[i] == T[i] || (S[i] == '@' && T[i] == '@'))
      continue;
    if (S[i] == '@')
    {
      for (int j = 0; j < wildcard.size() + 1; ++j)
      {
        if (j == wildcard.size())
        {
          result = false;
          break;
        }
        if (T[i] == wildcard[j])
          break;
      }
      continue;
    }
    if (T[i] == '@')
    {
      for (int j = 0; j < wildcard.size() + 1; ++j)
      {
        if (j == wildcard.size())
        {
          result = false;
          break;
        }
        if (S[i] == wildcard[j])
          break;
      }
      continue;
    }
    result = false;
  }
  if(result) cout << "You can win" << endl;
  else cout << "You will lose" << endl;
  return 0;
}