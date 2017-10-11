#include <bits/stdc++.h>
using namespace std;
int main()
{
  string W;
  cin >> W;
  vector<char> vowel{'a', 'i', 'u', 'e', 'o'};
  int i = 0;
  while (i < W.length())
  {
    bool isVowel = false;
    for (int j = 0; j < vowel.size(); j++)
    {
      if (W[i] == vowel[j])
        isVowel = true;
    }
    if (isVowel)
    {
      W.erase(W.begin() + i);
    }
    else
    {
      ++i;
    }
  }

  cout << W << endl;

  return 0;
}