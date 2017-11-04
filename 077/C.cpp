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
  
  int i,j,k;
  int count = 0;
  for(i = 0; i < N; ++i)
  {
    j = 0;
    k = 0;
    while(j < N)
    {
      if (B[j] < A[i]) ++j;
      else{
        while(k < N)
        {
          if (C[k] < B[j]) ++k;
          else{
            if(A[i] < B[j] && B[j] < C[k]) count += N - k;
            break;
          }
        }
        ++j;
      }
    }
  }
  
  cout << count << endl;
  return 0;
}