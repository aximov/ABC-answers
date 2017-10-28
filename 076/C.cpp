#include <bits/stdc++.h>
using namespace std;
int main()
{
  string code, key;
  cin >> code >> key;
  string hatena;
  for (int i = 0; i < key.length(); ++i)
    hatena += '?';
  int hit = code.rfind(hatena);
  string answer = "UNRESTORABLE";
  string tempcode = code;
  if (hit = -1)
  {
    for (int i = 0; i < key.length(); ++i)
    {
      for (int j = 0; j < code.length(); ++j)
      {
        if (key[i] == code[j])
        {
          
          if(j - i >= 0 && j - i + key.length() <= code.length())
          {
            int k = 0;
            while(code[j - i + k] == key[k] || code[j - i + k] == '?')
            {
              tempcode[j - i + k] = key[k];
              ++k;
            }
            if (tempcode.rfind(key) != -1)
            {
              code = tempcode;
              for (int l = 0; l < code.length(); ++l)
              {
                if (code[l] == '?') code[l] = 'a';
              }
              answer = code;
            }
          }
        }
      }
    }
  }
  else
  {
    for (int m = 0; m < key.length(); ++m)
    {
      code[hit + m] = key[m];
    }
    for (int l = 0; l < code.length(); ++l)
    {
      if (code[l] == '?') code[l] = 'a';
    }
    answer = code;
  }

  cout << answer << endl;
  return 0;
}