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
 
const int N = 505, M = 1e6 + 5, MOD = 1e9 + 7;
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
 
int n, m, r1, c1, r2, c2;
char arr[N][N];
 
bool dfs(int i, int j) {
    if (i == r2 && j == c2 && arr[i][j] == 'X')
        return true;
 
    if (arr[i][j] == 'X')
        return false;
 
    bool ok = false;
    arr[i][j] = 'X';
    if (i + 1 <= n) ok |= dfs(i + 1, j);
    if (i - 1 >= 1) ok |= dfs(i - 1, j);
    if (j + 1 <= m) ok |= dfs(i, j + 1);
    if (j - 1 >= 1) ok |= dfs(i, j - 1);
    return ok;
}
 
void Solve() {
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            cin >> arr[i][j];
 
    cin >> r1 >> c1 >> r2 >> c2;
 
    bool ok = false;
    if (r1 + 1 <= n) ok |= dfs(r1 + 1, c1);
    if (r1 - 1 >= 1) ok |= dfs(r1 - 1, c1);
    if (c1 + 1 <= m) ok |= dfs(r1, c1 + 1);
    if (c1 - 1 >= 1) ok |= dfs(r1, c1 - 1);
    cout << (ok ? "YES" : "NO");
}
 
signed main() {
    ios_base::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    int tc = 1;
//    cin >> tc;
    while (tc--) {
        Solve();
    }
    return 0;
}