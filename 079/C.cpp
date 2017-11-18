#include <bits/stdc++.h>
using namespace std;

int main()
{
  string ABCD;
  cin >> ABCD;
  int A, B, C, D;
  A = stoi(ABCD) / 1000;
  B = stoi(ABCD)%1000 / 100;
  C = stoi(ABCD)%100 / 10;
  D = stoi(ABCD)%10;
  char ops[3];
  if (A+B+C+D == 7)
  {
      ops[0] = '+';
      ops[1] = '+';
      ops[2] = '+';
  } else if (A+B+C-D == 7)
  {
      ops[0] = '+';
      ops[1] = '+';
      ops[2] = '-';
  } else if (A+B-C+D == 7)
  {
      ops[0] = '+';
      ops[1] = '-';
      ops[2] = '+';
  } else if (A+B-C-D == 7)
  {
      ops[0] = '+';
      ops[1] = '-';
      ops[2] = '-';
  } else if (A-B+C+D == 7)
  {
      ops[0] = '-';
      ops[1] = '+';
      ops[2] = '+';
  } else if (A-B+C-D == 7)
  {
      ops[0] = '-';
      ops[1] = '+';
      ops[2] = '-';
  } else if (A-B-C+D == 7)
  {
      ops[0] = '-';
      ops[1] = '-';
      ops[2] = '+';
  } else if (A-B-C-D == 7)
  {
      ops[0] = '-';
      ops[1] = '-';
      ops[2] = '-';
  }
  cout << A << ops[0] << B << ops[1] << C << ops[2] << D << "=7" << endl;
  return 0;
}