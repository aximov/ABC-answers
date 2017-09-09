#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main(){
  int deg, dis;
  string dir;
  cin >> deg >> dis;
  double n = deg / 112.5;
  if(n < 1 || 31 <= n) dir = "N";
  if(1 <= n && n < 3) dir = "NNE";
  if(3 <= n && n < 5) dir = "NE";
  if(5 <= n && n < 7) dir = "ENE";
  if(7 <= n && n < 9) dir = "E";
  if(9 <= n && n < 11) dir = "ESE";
  if(11 <= n && n < 13) dir = "SE";
  if(13 <= n && n < 15) dir = "SSE";
  if(15 <= n && n < 17) dir = "S";
  if(17 <= n && n < 19) dir = "SSW";
  if(19 <= n && n < 21) dir = "SW";
  if(21 <= n && n < 23) dir = "WSW";
  if(23 <= n && n < 25) dir = "W";
  if(25 <= n && n < 27) dir = "WNW";
  if(27 <= n && n < 29) dir = "NW";
  if(29 <= n && n < 31) dir = "NNW";
  double d = round(dis / 60.0 * 10) / 10;
  int w;
  if(d <= 0.2) {w = 0; dir = "C";}
  if(0.3 <= d && d <= 1.5) w = 1; 
  if(1.6 <= d && d <= 3.3) w = 2;
  if(3.4 <= d && d <= 5.4) w = 3;
  if(5.5 <= d && d <= 7.9) w = 4;
  if(8.0 <= d && d <= 10.7) w = 5;
  if(10.8 <= d && d <= 13.8) w = 6;
  if(13.9 <= d && d <= 17.1) w = 7;
  if(17.2 <= d && d <= 20.7) w = 8;
  if(20.8 <= d && d <= 24.4) w = 9;
  if(24.5 <= d && d <= 28.4) w = 10;
  if(28.5 <= d && d <= 32.6) w = 11;
  if(32.7 <= d) w = 12;
  cout << dir << " " << w << endl;
return 0;
}