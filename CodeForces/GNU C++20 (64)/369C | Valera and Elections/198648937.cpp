#include <bits/stdc++.h>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/assoc_container.hpp>
 
using namespace std;
using ld = long double;
using ll = long long int;
using namespace __gnu_pbds;
 
#define sp ' '
#define nl '\n'
#define oo 0x3f3f3f3f
#define OO 0x3f3f3f3f3f3f3f3f
#define F first
#define S second
#define pb push_back
#define eb emplace_back
#define pii pair<int, int>
#define sz(s) (int)(s).size()
#define all(a) a.begin(), a.end()
#define rall(a) a.rbegin(), a.rend()
#define mem(x, y, SZ) memset(x, y, (SZ) * sizeof(x[0]))
#define tests int test_cases; cin >> test_cases; for(int tc=1; tc<=test_cases; tc++)
#define RamadanKareem ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
#define ordered_set tree<int , null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
 
const ll N = 1e5+5, MOD = 1e9 + 7;
 
int dx[] = {0, 0, 1, -1};
int dy[] = {1, -1, 0, 0};
 
vector<pii>adj[N];
vector<bool>fix(N), vis(N);
 
void dfs(int node, int par){
  vis[node] = true;
 
  if(fix[node]){
    fix[par] = false;
    par = node;
  }
 
  for(auto child : adj[node]){
    if(!vis[child.F]){
      dfs(child.F, par);
    }
  }
}
 
 
void bfs(){
  queue<pair<int, int>> q;
  q.emplace(1, 1);
  vis[1] = true;
  while(!q.empty()){
    int node = q.front().F;
    int par = q.front().S;
    vis[node] = true;
    q.pop();
    for(auto nxt : adj[node]){
      int child = nxt.F;
      int z = nxt.S;
      if(!vis[child]){
        if(z==2){
          fix[par] = false;
          fix[child] = true;
          q.emplace(child, child);
        } else {
          q.emplace(child, par);
        }
      }
    }
  }
}
 
void y3ni_mht3dee4() {
  int n;
  cin >> n;
  for(int i = 1; i < n; i++){
    int u, v, z;
    cin >> u >> v >> z;
    adj[u].pb({v, z});
    adj[v].pb({u, z});
  }
 
  // dfs(1, 1);
  bfs();
 
  vector<int> ans;
  for(int i = 1; i <= n; i++)
    if(fix[i])
      ans.pb(i);
 
  cout << sz(ans) << nl;
  for(int x:ans)cout << x << sp;
}
 
// we will solve: M,
signed main() {
    RamadanKareem
    y3ni_mht3dee4();
    return 0;
}