#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  int a;
  int sum = 0;
  for (int i = 0; i < n; ++i)
  {
    cin >> a;
    int mushiru = 0;
    while ((a - mushiru) % 2 == 0 || (a - mushiru) % 3 == 2)
    {
      mushiru++;
    }
    sum += mushiru;
  }
  cout << sum << endl;
  return 0;
}