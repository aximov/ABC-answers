#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, A, B;
  cin >> N >> A >> B;
  int cnt;
  for (int i = 1; i <= N; ++i) {
    int ichi = i % 10;
    int ju = i % 100 - ichi;
    int hyaku = i % 1000 - ju - ichi;
    int sen = i % 10000 - hyaku - ju - ichi;
    int man = (i == 10000 ? 10000 : 0);
    int wa = ichi + ju / 10 + hyaku / 100 + sen / 1000 + man / 10000;
    if (A <= wa && wa <= B) cnt += i;
  }
  --cnt;
  cout << cnt << endl;
  return 0;
}