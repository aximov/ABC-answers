#include <bits/stdc++.h>
using namespace std;

vector<int> G[50];
int V, E;
int s[50], t[50];
bool flag[50] = {};

void dfs(int v)
{
  // 頂点 v をみる
  flag[v] = true;
  for (int i = 0; i < G[v].size(); ++i)
  {
    // 隣接頂点をまだ見ていなければそこからみる
    if (!flag[G[v][i]])
      dfs(G[v][i]);
  }
}

int main()
{
  cin >> V >> E;

  for (int i = 0; i < E; ++i)
  {
    cin >> s[i] >> t[i];
    s[i]--, t[i]--;
    G[s[i]].push_back(t[i]);
    G[t[i]].push_back(s[i]);
  }

  int ans = 0;
  for (int i = 0; i < V; ++i)
  {
    // 訪問履歴初期化
    for (int k = 0; k < 50; ++k) flag[k] = false;

    // 辺を1つ消す
    for (int k = 0; k < G[].size(); ++k)
      if (G[dest][k] == i)
        temp = k;
    G[i].erase(G[i].begin() + j);
    G[dest].erase(G[dest].begin() + temp);

    dfs(0);

    // パス存在確認
    bool bridge = false;
    for (int l = 0; l < V; ++l)
      if (!flag[l])
        bridge = true;
    if (bridge)
      ans++;

    G[i].insert(G[i].begin() + j, dest);
    G[dest].insert(G[dest].begin() + temp, i);
  }

  cout << ans << endl;
  return 0;
}