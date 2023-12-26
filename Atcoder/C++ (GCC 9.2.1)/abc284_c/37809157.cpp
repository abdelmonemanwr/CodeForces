#include <bits/stdc++.h>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/assoc_container.hpp>

using namespace std;
using ll = long long int;
using namespace __gnu_pbds;

#define sp ' '
#define nl '\n'
#define F first
#define S second
#define PI acose(-1)
#define MOD 1000000007
#define OO 0x3f3f3f3f
#define LOO 0x3f3f3f3f3f3f3f3f
#define sz(s) (int)(s).size()
#define pb(val) push_back(val)
#define all(a) a.begin(), a.end()
#define rall(a) a.rbegin(), a.rend()
#define MAX(a) (*max_element(all(a)))
#define MIN(a) (*min_element(all(a)))
#define mem(x, y) memset(x,y,sizeof x)
#define pii pair<int, int>
#define cin_vector(a) for(auto& i : a) cin >> i;
#define forn(i, a, n, k) for(int i=a; i<n; i+=k)
#define ordered_set tree<int , null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
#define EasyPeasyLemonSqueezy ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
#define ForEachTestCase int test_cases; cin >> test_cases; for(int tc=1; tc<=test_cases; tc++)

ll fp(ll b, ll p) {
    if (p == 0) return 1;
    ll sq = fp(b, p / 2) % MOD;
    sq *= sq;
    sq %= MOD;
    if (p & 1) sq = (sq * (b % MOD)) % MOD;
    return sq;
}

ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }

ll lcm(ll a, ll b) { return a / gcd(a, b) * b; }

ll mod(ll a, ll b) { return ((a % b) + b) % b; }

int n, m;
vector<vector<int>> adj;
vector<bool> vis;

void dfs(int u) {
    vis[u] = true;
    for (auto v: adj[u]) {
        if (!vis[v]) dfs(v);
    }
}

void TRY_SOLVE_IT() {
    cin >> n >> m;
    adj.resize(n + 1);
    vis.resize(n + 1);
    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].pb(v);
        adj[v].pb(u);
    }
    int ans = 0;
    for (int i = 1; i <= n; i++) {
        if (!vis[i]) {
            dfs(i);
            ans++;
        }
    }
    cout << ans << nl;
    adj.clear();
    vis.clear();
}

signed main() {
    EasyPeasyLemonSqueezy
#ifndef ONLINE_JUDGE
    freopen("in.txt", " r", stdin);
    freopen("out.txt", "w", stdout);
#endif
//    ForEachTestCase
    TRY_SOLVE_IT();
    return 0;
}