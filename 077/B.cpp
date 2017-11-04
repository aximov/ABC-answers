#include <bits/stdc++.h>
using namespace std;

bool is_integer(double k)
{
  return floor(k) == k;
}

int main()
{
  double N;
  cin >> N;
  int answer = 0;
  for(int i = N; i > 0; --i)
  {
    double rt = sqrt(i);
    if (is_integer(rt))
    {
      answer = i;
      break;
    }
  }
  cout << answer << endl;
  return 0;
}