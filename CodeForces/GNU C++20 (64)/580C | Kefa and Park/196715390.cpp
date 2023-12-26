#include <bits/stdc++.h>
 
using namespace std;
using ll = long long int;
 
#define sp ' '
#define nl '\n'
#define F first
#define S second
#define PI acos(-1)
#define pb push_back
#define OO 0x3f3f3f3f
#define Map map<int , int>
#define pii pair<int , int>
#define sz(s) (int)(s).size()
 
const int N = 2e5 + 5;
 
int n, k, ans, cat[N], vis[N];
vector<int> adj[N];
 
void addEdge(int u, int v) {
    adj[u].pb(v);
}
 
void addBiEdge(int u, int v) {
    addEdge(u, v);
    addEdge(v, u);
}
 
void dfs(int u, int cnt) {
    vis[u] = 1;
    if (cat[u]) cnt++;
    else cnt = 0;
    if (cnt > k) return;
    bool leaf = 1;
    for (auto v: adj[u]) {
        if (!vis[v]) {
            leaf = 0;
            dfs(v, cnt);
        }
    }
    if (leaf) ans++;
}
 
void Solve() {
    cin >> n >> k;
    for (int i = 1; i <= n; ++i) {
        cin >> cat[i];
    }
    for (int i = 1; i < n; i++) {
        int u, v;
        cin >> u >> v;
        addBiEdge(u, v);
    }
    dfs(1, 0);
    cout << ans << nl;
 
}
 
signed main() {
    ios_base::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    int tc = 1;
//    cin >> tc;
    while (tc--)
        Solve();
    return 0;
}