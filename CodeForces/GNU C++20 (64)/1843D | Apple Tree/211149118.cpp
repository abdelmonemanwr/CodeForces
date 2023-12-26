#include <bits/stdc++.h>
 
using namespace std;
#define ull unsigned long long int
#define ll long long int
#define ld long double
 
 
#define nl '\n'
#define sp ' '
#define F first
#define S second
#define EPS 1e-4
#define pb push_back
#define mkp make_pair
#define rz return 0;
#define rv return void
#define em emplace_back
#define sz(s) (int)(s.size())
#define all(a) a.begin(), a.end()
#define rall(a) a.rbegin(), a.rend()
#define debug(x) cout << (#x) << " is " << (x) << nl
#define Tests int test_cases;cin>>test_cases; for(int tc=1; tc<=test_cases; tc++)
#define IOS ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
 
// #pragma GCC optimize("Ofast")
// #pragma GCC target("avx,avx2,fma")
// #pragma GCC optimization("unroll-loops")
 
//const ld PI = acos(-1);
// const ll OO = 1e18 + 7;
const int N = 2e5+5, M = 1e6 + 7, MOD = 1e9 + 7, oo = 1e9 + 7;
 
// ll logBase(int base, int number) {return log(number) / log(base);}
 
// ll lcm(ll a, ll b) {return a / __gcd(a, b) * b;}
 
vector<ll> fall(N);
vector<vector<ll>>adj(N);
 
void dfs(ll node, ll par) {
  if (sz(adj[node]) == 1 && adj[node][0] == par) {
    fall[node] = 1; // leaf
  } else {
    for (auto child : adj[node]) {
      if (child != par) {
        dfs(child, node);
        fall[node] += fall[child];
      }
    }
  }
}
 
void Y3ni_Mht3dee4(){
  int n, q;
  cin >> n;
  fall.assign(n, 0);
  adj.assign(n, vector<ll>());
//   adj.resize(n+1);
//   fall.resize(n+1);
  for(int i=1; i<n; i++){
    int u, v;
    cin >> u >> v;
    u--; v--;
    adj[u].em(v);
    adj[v].em(u);
  }
  dfs(0, -1);
  cin >> q;
  while(q--){
    int u, v;
    cin >> u >> v;
    u--; v--;
    ll ans = 1LL * fall[u] * fall[v];
    cout << ans << nl;
  }
}
 
signed main()
{IOS;
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#else
#endif
  Tests
  Y3ni_Mht3dee4();
}