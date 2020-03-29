#include <cmath>
#include <iostream>
#include <string>
using namespace std;

int main() {
  int in;
  cin >> in;
  string out;
  if (in == 25) out = "Christmas";
  if (in == 24) out = "Christmas Eve";
  if (in == 23) out = "Christmas Eve Eve";
  if (in == 22) out = "Christmas Eve Eve Eve";
  cout << out << endl;
  return 0;
}