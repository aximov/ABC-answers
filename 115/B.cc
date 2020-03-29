#include <algorithm>
#include <cmath>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> p;
  for (int i = 0; i < N; ++i) {
    int tmp;
    cin >> tmp;
    p.push_back(tmp);
  }
  sort(p.begin(), p.end());
  reverse(p.begin(), p.end());
  int sum = p[0] / 2;
  for (int i = 1; i < N; ++i) {
    sum += p[i];
  }
  cout << sum << endl;
  return 0;
}