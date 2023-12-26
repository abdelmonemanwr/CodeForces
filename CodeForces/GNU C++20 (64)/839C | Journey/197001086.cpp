#include <bits/stdc++.h>
 
using namespace std;
using ld = long double;
using ll = long long int;
 
#define sp ' '
#define nl '\n'
#define F first
#define S second
#define PI acos(-1)
#define pb push_back
#define oo 0x3f3f3f3f
#define OO 0x3f3f3f3f3f3f3f3f
#define Map map<int , int>
#define pii pair<ll , ll>
#define sz(s) (int)(s).size()
 
const int N = 2e5 + 5, M = 1e6 + 5, MOD = 1e9 + 7;
//int head[N];
//int vis[N];
//int nxt[M];
//int to[M];
//
//int ne, n, m;
//
//void addEdge(int f, int t) {
//    nxt[ne] = head[f];
//    to[ne] = t;
//    head[f] = ne++;
//}
//
//void addBiEdge(int u, int v) {
//    addEdge(u, v);
//    addEdge(v, u);
//}
//
//void init(){
//    memset(head, -1, n*sizeof head[0]);
//    ne = 0;
//}
//
//bool dfs(int u, int c){
//    if(vis[u])return vis[u] == c;
//    vis[u] = c;
//    for(int k = head[u]; ~k; k = nxt[k]){
//        int v = to[k];
//        if(!dfs(v, 3 - c))return false;
//    }
//}
 
vector<int> adj[N];
bool vis[N];
int n;
 
ld dfs(int u, int now) {
    vis[u] = true;
    ld ret = 0;
    bool leaf = true;
    for (auto v: adj[u]) {
        if (!vis[v]) {
            leaf = false;
            ret += dfs(v, now + 1);
        }
    }
    if (leaf)return now;
    if (u == 1) {
        return ret / (sz(adj[1]));
    } else {
        return ret / (sz(adj[u]) - 1);
    }
}
 
void Solve() {
    cin >> n;
    for (int i = 1; i < n; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].pb(v);
        adj[v].pb(u);
    }
    ld ret = dfs(1, 0);
    cout << fixed << setprecision(15) << ret << nl;
}
 
signed main() {
    ios_base::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    int tc = 1;
    // cin >> tc;
    while (tc--) {
        Solve();
    }
    return 0;
}