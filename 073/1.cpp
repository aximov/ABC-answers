#include <iostream>
using namespace std;
int main(){
  int N;
  cin >> N;
  int one = N % 10;
  int ten = N / 10;
  if(one == 9 || ten == 9) {cout << "Yes" << endl;}
  else {cout << "No" << endl;}
return 0;
}