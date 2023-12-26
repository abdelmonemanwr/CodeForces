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
 
int dist[N];
int colors[N];
vector<int> adj[N];
int n, mxColors, u, v;
 
void dfs(int node, int parent, int color) {
    int cur = 1;
    colors[node] = color;
    for (auto child: adj[node]) {
        if (child == parent)continue;
        if (cur == colors[node] || cur == colors[parent])cur++;
        if (cur == colors[node] || cur == colors[parent])cur++;
        dfs(child, node, cur);
        cur++;
    }
}
 
void Solve() {
    cin >> n;
    for (int i = 1; i < n; i++) {
        cin >> u >> v;
        adj[u].pb(v);
        adj[v].pb(u);
        dist[u]++;
        dist[v]++;
        mxColors = max(mxColors, max(dist[u] + 1, dist[v] + 1));
    }
    dfs(1, 0, 1);
    cout << mxColors << nl;
    for (int i = 1; i <= n; i++)
        cout << colors[i] << sp;
}
 
signed main() {
    ios_base::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    Solve();
    return 0;
}