#include <bits/stdc++.h>
using namespace std;

long long lucas[87];

long long calc(int N)
{
    if (N == 0) return 2;
    else if (N == 1) return 1;
    else if (lucas[N] == 0) return lucas[N] = calc(N-1) + calc(N-2);
    else return lucas[N];
}

int main()
{
  int N;
  cin >> N;
  cout << calc(N) << endl;
  return 0;
}