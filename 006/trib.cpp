#include <bits/stdc++.h>
using namespace std;

int memo[1000010];

int trib(int n) {
  if (n <= 2) return 0;
  if (n == 3) return 1;
  if (memo[n] != 0) return memo[n];
  return memo[n] = trib(n - 1) + trib(n - 2) + trib(n - 3);
}

int main(){
  int n;
  cin >> n;
  cout << trib(n) << endl;
  return 0;
}