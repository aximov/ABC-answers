#include <bits/stdc++.h>
using namespace std;

const int limit = 50;

int V, E;
int a[limit], b[limit];

bool graph[limit][limit];
bool visited[limit];

// 頂点vからどこまで訪問できるか深さ優先探索
void dfs(int v) {
  // 頂点vを訪問する
  visited[v] = true;
  for (int v2 = 0; v2 < V; ++v2) {
    // 頂点v2が隣接していなければ次の頂点
    if (graph[v][v2] == false) continue;
    // 頂点v2が隣接していて，訪問済みなら次の頂点に遷移
    if (visited[v2] == true) continue;
    // 頂点v2が隣接していて，未訪問なら訪問する
    dfs(v2);
  }
}

int main() {
  cin >> V >> E;

  for (int i = 0; i < E; ++i){
    cin >> a[i] >> b[i];
    a[i]--, b[i]--;
    graph[a[i]][b[i]] = graph[b[i]][a[i]] = true;
  }

  int ans = 0;

  for (int i = 0; i < E; ++i){
    // 辺を1個消す
    graph[a[i]][b[i]] = graph[b[i]][a[i]] = false;
    // 訪問履歴の初期化
    for (int j = 0; j < V; ++j) visited[j] = false;

    dfs(0);

    // パスの存在確認
    bool bridge = false;
    for (int j = 0; j < V; ++j) if(visited[j] == false) bridge = true;
    if (bridge) ans += 1;

    // 辺を元に戻す
    graph[a[i]][b[i]] = graph[b[i]][a[i]] = true;
  }

  cout << ans << endl;

  return 0;
}