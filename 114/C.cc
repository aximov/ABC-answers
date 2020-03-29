#include <algorithm>
#include <cmath>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int GetDigit(int num) {
  int digit = 0;
  while (num != 0) {
    num /= 10;
    digit++;
  }
  return digit;
}

bool is753(int n) {
  int digit = GetDigit(n);
  string s = to_string(n);
  int cnt7 = 0, cnt5 = 0, cnt3 = 0;
  for (int i = 0; i < digit; ++i) {
    if (s[i] == '7')
      cnt7++;
    else if (s[i] == '5')
      cnt5++;
    else if (s[i] == '3')
      cnt3++;
    else
      return false;
  }
  if (cnt7 > 0 && cnt5 > 0 && cnt3 > 0)
    return true;
  else
    return false;
}

int main() {
  int N;
  cin >> N;
  if (N >= 777777753) {
    cout << 26484 << endl;
  } else {
    int MAX = 26485;
    int store[4] = {0, 3, 5, 7};
    vector<int> v;
    for (int i1 = 0; i1 < 4; ++i1) {
      for (int i2 = 0; i2 < 4; ++i2) {
        for (int i3 = 0; i3 < 4; ++i3) {
          for (int i4 = 0; i4 < 4; ++i4) {
            for (int i5 = 0; i5 < 4; ++i5) {
              for (int i6 = 0; i6 < 4; ++i6) {
                for (int i7 = 0; i7 < 4; ++i7) {
                  for (int i8 = 0; i8 < 4; ++i8) {
                    for (int i9 = 0; i9 < 4; ++i9) {
                      int num = store[i1] * 100000000 + store[i2] * 10000000 +
                                store[i3] * 1000000 + store[i4] * 100000 +
                                store[i5] * 10000 + store[i6] * 1000 +
                                store[i7] * 100 + store[i8] * 10 +
                                store[i9] * 1;
                      if (is753(num)) v.push_back(num);
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < MAX; ++i) {
      if (v[i] == N) {
        cout << i + 1 << endl;
        break;
      } else if (v[i] > N) {
        cout << i << endl;
        break;
      }
    }
  }
  return 0;
}