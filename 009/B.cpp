#include <bits/stdc++.h>
using namespace std;
int main(){
  int N;
  cin >> N;
  int highest = 0, second = 0;
  int temp;
  for (int i = 0; i < N; ++i){
    cin >> temp;
    if (temp > highest) {
      second = highest;
      highest = temp;
    }
    else if (temp < highest && temp > second) second = temp;
  }
  cout << second << endl;
  return 0;
}