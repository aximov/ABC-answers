#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
  int N, ptr, res;
  cin >> N;
  vector<int> paper(N,0);
  for(int i = 0; i < N; ++i){ cin >> paper[i];}
  sort(paper.begin(), paper.end());
  while(ptr < N){
    int cc = paper[ptr], f = 0;
    while(ptr < N && paper[ptr] == cc) f++, ptr++;
    res += f % 2;
  }
  cout << res << endl;
return 0;
}