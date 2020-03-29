#include <bits/stdc++.h>

using namespace std;

int main() {
  int A,B;
  cin >> A >> B;
  int dignA[19], dignB[19];
  for(int i = 0; i < 19; ++i){
    dignA[i] = A % 10;
    A /= 10;
    dignB[i] = B % 10;
    B /= 10;
  }
  return 0;
}