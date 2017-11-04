#include <bits/stdc++.h>
using namespace std;
int main()
{
  string first,second;
  cin >> first >> second;
  string answer = "YES";
  for(int i = 0; i < 3; ++i){
    if(first[i] != second[2-i]) answer = "NO";
  }
  cout << answer << endl;
  return 0;
}