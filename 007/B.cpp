#include <bits/stdc++.h>
using namespace std;
int main()
{
  string str;
  cin >> str;
  string shorter;
  if (str == "a")
    shorter = "-1";
  else if (str.length() == 1)
    shorter = 'a';
  else
  {
    for (int i = 0; i < str.length() - 1; ++i)
    {
      shorter.push_back('a');
    }
  }
  cout << shorter << endl;
  return 0;
}