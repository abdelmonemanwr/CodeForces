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
int d, in[N], out[N], lst;
void dfs(int node){
  lst = node;
  for(auto ch:adj[node]){
    dfs(ch.F);
    d = min(d, ch.S);
  }
}
 
 
void y3ni_mht3dee4() {
  int n, m;
  cin >> n >> m;
  for(int i = 1; i <= m; i++){
    int u, v, z;
    cin >> u >> v >> z;
    adj[u].pb({v, z});
    out[u]++;
    in[v]++;
  }
  vector<pair<pii, int>>ans;
  for(int i = 1; i <= n; i++){
    if(!in[i] && out[i]){
      d = oo;
      dfs(i);
      ans.pb({{i, lst}, d});
    }
  }
  cout << ans.size() << nl;
  for(auto x:ans){
    cout << x.F.F << sp << x.F.S << sp << x.S << nl;
  }
}
 
// we will solve: M, L, J
signed main() {
    RamadanKareem
    y3ni_mht3dee4();
    return 0;
}