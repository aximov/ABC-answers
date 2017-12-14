#include <bits/stdc++.h>

using namespace std;

int main() {
  int R, C;
  cin >> R >> C;
  int sy, sx;
  cin >> sy >> sx;
  --sy, --sx;
  int gy, gx;
  cin >> gy >> gx;
  --gy, --gx;
  char maze[R][C];
  int result[R][C];
  for (int i = 0; i < R; ++i) {
    for (int j = 0; j < C; ++j) {
      cin >> maze[i][j];
      result[i][j] = -1;
    }
  }

  queue<tuple<int, int>> que;
  result[sy][sx] = 0;
  que.push(make_tuple(sy, sx));

  int x, y;
  int vx[4] = {0, 1, 0, -1};
  int vy[4] = {1, 0, -1, 0};

  while (!que.empty()) {
    y = get<0>(que.front());
    x = get<1>(que.front());
    int moves = result[y][x];
    for (int i = 0; i < 4; ++i) {
      int ny = y + vy[i];
      int nx = x + vx[i];
      if (maze[ny][nx] == '.' && result[ny][nx] == -1) {
        result[ny][nx] = moves + 1;
        que.push(make_tuple(ny, nx));
      }
    }
    que.pop();
  }
  cout << result[gy][gx] << endl;
  return 0;
}