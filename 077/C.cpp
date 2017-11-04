#include <bits/stdc++.h>
using namespace std;
int main()
{
  int N;
  cin >> N;
  vector<int> A,B,C;
  int in;
  for (int i = 0; i < N; ++i)
  {
    cin >> in;
    A.push_back(in);
  }
  for (int i = 0; i < N; ++i)
  {
    cin >> in;
    B.push_back(in);
  }
  for (int i = 0; i < N; ++i)
  {
    cin >> in;
    C.push_back(in);
  }
  sort(A.begin(), A.end());
  sort(B.begin(), B.end());
  sort(B.begin(), B.end());
  
  int count = 0;
  for(int i = 0; i < N; ++i) {
    for(int j = 0; j < N; ++j) {
      if(A[i] < B[j]) {
        for(int k = 0; k < N; ++k) {
          if(B[j] < C[k]) ++count;
        }
      } 
    }
  }
  
  cout << count << endl;
  return 0;
}