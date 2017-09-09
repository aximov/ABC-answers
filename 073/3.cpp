#include <iostream>
#include <vector>
using namespace std;
int main(){
  int N;
  cin >> N;
  vector<int> paper(N,0);
  int a;
  int k;
  for(int i = 0; i < N; ++i){
    cin >> a;
    k = 0;
    for(int j = 0; j < i; ++j){
      if(paper[j] == a){
        paper[j] = 0;
        k = 1;
      }
    }
    if(k == 0){
      paper[i] = a;
    }
  }
  int counter = 0;
  for(int l = 0; l < N; ++l){
    if(paper[l] != 0) {counter += 1;}
  }
  cout << counter << endl;
return 0;
}