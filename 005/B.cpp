#include <bits/stdc++.h>
using namespace std;
int main(){
  int N;
  cin >> N;
  int t = 100;
  int temp;
  for(int i = 0; i < N; ++i){
    cin >> temp;
    if(t > temp) t = temp;
  }
  cout << t << endl;
  return 0;
}