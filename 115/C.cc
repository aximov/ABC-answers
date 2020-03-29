#include <algorithm>
#include <cmath>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
  int N, K;
  cin >> N >> K;
  vector<int> h;
  for (int i = 0; i < N; ++i) {
    int tmp;
    cin >> tmp;
    h.push_back(tmp);
  }
  sort(h.begin(), h.end());
  int diff = 1000000000;
  for (int i = 0; i + K - 1 < N; ++i) {
    diff = min(abs(h[i] - h[i + K - 1]), diff);
  }
  cout << diff << endl;
  return 0;
}