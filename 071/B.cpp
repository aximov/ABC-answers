#include <bits/stdc++.h>
using namespace std;
int main(){
  string S;
  cin >> S;
  bool found = false;
  for (char i = 'a'; i <= 'z'; ++i) {
    found = false;
    for (int j = 0; j < S.length(); ++j) {
      if (i == S[j]) {
        found = true;
        break;
      }
    }
    if (!found) {
      cout << i << endl;
      break;
    }
  }
  if (found) cout << "None" << endl;
  return 0;
}