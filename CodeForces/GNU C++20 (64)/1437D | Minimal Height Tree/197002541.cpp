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
 
int n;
vector<int> adj[N], a;
vector<int> dist(N, oo);
 
void bfs() {
    queue<int> q;
    q.push(1);
    dist[1] = 0;
    while (!q.empty()) {
        int u = q.front();
        q.pop();
        for (auto v: adj[u]) {
            if (dist[v] > dist[u] + 1) {
                dist[v] = dist[u] + 1;
                q.push(v);
            }
        }
    }
}
 
void Solve() {
    cin >> n;
    a.resize(n);
    for (int i = 0; i <= n; i++)
        dist[i] = oo, adj[i].clear();
 
    for (int i = 0; i < n; i++)
        cin >> a[i];
 
    int j = 0;
    for (int i = 1; i < n; i++) {
        //bool x = true;
        if (adj[a[j]].empty()) {
            adj[a[j]].emplace_back(a[i]);
        } else {
            if (adj[a[j]].back() < a[i]) {
                //x = false;
                adj[a[j]].emplace_back(a[i]);
            } else j++, i--;
        }
    }
    bfs();
    int mx = -oo;
    for (int i = 1; i <= n; i++) {
        // cout << dist[i] << sp;
        mx = max(mx, dist[i]);
    }
    cout << mx << nl;
 
//    cout << adj[1].size() <<nl;
}
 
signed main() {
    ios_base::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    int tc = 1;
    cin >> tc;
    while (tc--) {
        Solve();
    }
    return 0;
}