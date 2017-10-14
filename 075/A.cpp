#include <bits/stdc++.h>
using namespace std;
int main(){
  int A, B, C;
  cin >> A >> B >> C;
  int result;
  if (A == B) result = C;
  else if (B == C) result = A;
  else result = B; 
  cout << result << endl;
  return 0;
}