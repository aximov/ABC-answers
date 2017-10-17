#include <bits/stdc++.h>
using namespace std;
int main(){
  int N;
  cin >> N;
  int a;
  double cnt = 0;
  double all = 0;
  while (cin >> a) {
    cnt += a;
    if (a != 0) all++;
  }
  cout << ceil(cnt / all) << endl;
  return 0;
}