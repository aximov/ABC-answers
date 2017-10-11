#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
  int N;
  cin >> N;
  vector<int> paper(N,0);
  for(int i = 0; i < N; ++i){
    cin >> paper[i];
  }
  sort(paper.begin(), paper.end());

  int d = 0;
  int counter = 0;
  int j = 0;
  for(int i = 0; i < N; i += j + 1){
    j = 0;
    if(paper[i] != 0){
      d = 1;
      for(int j = 1; j < N - i; ++j){
        if(paper[i+j] == paper[i]){
          d += 1;
        }else{
          j -= 1;
          break;
        }
      }
      cout << d << endl;
      if(d % 2 == 1){counter += 1;}
    }
  }
  
  cout << counter << endl;
return 0;
}