#include <bits/stdc++.h>
using namespace std;
int main(){
  char in[4][4];
  for(int i = 0; i < 4; ++i){
    for(int j = 0; j < 4; ++j){
      cin >> in[i][j];
    }
  }
  char out[4][4];
  for(int i = 0; i < 4; ++i){
    for(int j = 0; j < 4; ++j){
      out[i][j] = in[3-i][3-j];
    }
  }
  for(int i = 0; i < 4; ++i){
    cout << out[i][0] << ' ' << out[i][1] << ' ' << out[i][2] << ' ' << out[i][3] << endl; 
  }
  return 0;
}