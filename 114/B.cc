#include <cmath>
#include <iostream>
using namespace std;

int ctoi(const char c) {
  if ('0' <= c && c <= '9') return (c - '0');
  return -1;
}

int main() {
  char c;
  int hundred = 0;
  int ten = 0;
  int one = 0;
  int residual = 1000;
  while (cin >> c) {
    hundred = ten;
    ten = one;
    one = ctoi(c);
    int num = hundred * 100 + ten * 10 + one;
    int restmp = abs(num - 753);
    if (restmp < residual) residual = restmp;
  }
  cout << residual << endl;
}