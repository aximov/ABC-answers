#include <bits/stdc++.h>
using namespace std;
int main()
{
  int H, W;
  cin >> H >> W;
  char field[50][50];
  for (int i = 0; i < H; ++i)
  {
    for (int j = 0; j < W; ++j)
    {
      cin >> field[i][j];
    }
  }
  for (int i = 0; i < H; ++i)
  {
    for (int j = 0; j < W; ++j)
    {
      if (field[i][j] == '.')
      {
        int count = 0;
        for (int k = -1; k < 2; ++k)
        {
          for (int l = -1; l < 2; ++l)
          {
            if (0 <= i + k && i + k < H && 0 <= j + l && j + l < W && field[i + k][j + l] == '#')
            {
              count++;
            }
          }
        }
        field[i][j] = '0' + count;
      }
    }
  }
  for (int i = 0; i < H; ++i)
  {
    for (int j = 0; j < W; ++j)
    {
      cout << field[i][j];
    }
    cout << endl;
  }
  return 0;
}