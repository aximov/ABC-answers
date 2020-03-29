#include <cmath>
#include <iostream>
#include <string>
using namespace std;

int GetDigit(int num) {
  int digit = 0;
  while (num != 0) {
    num /= 10;
    digit++;
  }
  return digit;
}

int main() {
  int n;
  cin >> n;
  int digit = GetDigit(n);
  cout << "digit = " << digit << endl;
  string s = to_string(n);
  cout << "s = " << s << endl;
  int cnt7, cnt5, cnt3;
  for (int i = 0; i < digit; ++i) {
    if (s[i] == '7')
      cnt7++;
    else if (s[i] == '5')
      cnt5++;
    else if (s[i] == '3')
      cnt3++;
    else
      cout << "not 753 num" << endl;
  }
  cout << "cnt:" << cnt7 << " " << cnt5 << " " << cnt3 << endl;
  if (cnt7 > 0 && cnt5 > 0 && cnt3 > 0)
    cout << "yes" << endl;
  else
    cout << "not" << endl;

  return 0;
}