#include <bits/stdc++.h>
using namespace std;
int main(){
  int N;
  cin >> N;
  int sum = 0;
  for(int i = 1; i <= N; ++i) sum += i;
  double mean;
  mean = sum * 1.0e+4 / N;
  cout << mean << endl;
  return 0;
}