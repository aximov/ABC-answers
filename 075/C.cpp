#include <bits/stdc++.h>
using namespace std;

vector<int> G[50];
int V, E;
bool flag[50] = {};

bool dfs(int v){
  if(G[v].size() == 0) return false;
  // 頂点 v をみる
  flag[v] = true;
  for(int i = 0; i < G[v].size(); ++i){
    // 隣接頂点をまだ見ていなければそこからみる
    if(!flag[G[v][i]]) dfs(G[v][i]);
  }
  // パス存在確認
  for(int i = 0; i < V; ++i){
    if(!flag[i]) return false;
  }
  return true;
}

int main(){
  cin >> V >> E;

  for(int i = 0; i < E; ++i){
    int s, t;
    cin >> s >> t;
    s--,t--;
    G[s].push_back(t);
    G[t].push_back(s);
  }

  int bridge = 0;

  for (int i = 0; i < V; ++i) {
    for (int j = 0; j < G[i].size(); ++j){
      int temp = 0, tempV = G[i][j];
      for (int k = 0; k < G[tempV].size(); ++k){
        if (G[tempV][k] == tempV) temp = k;
      }
      G[i].erase(G[i].begin() + j);
      G[tempV].erase(G[tempV].begin() + temp);
      if(!dfs(i)) bridge++; 
      G[i].insert(G[i].begin() + j, tempV);
      G[tempV].insert(G[tempV].begin() + temp, i);
    }
  }

  cout << bridge << endl;
  return 0;
}