#include <bits/stdc++.h>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/assoc_container.hpp>
 
#pragma GCC optimize("-Ofast")
#pragma GCC optimize("-ffast-math")
#pragma GCC optimize("-funroll-loops")
#pragma GCC optimize("-funroll-all-loops,-fpeel-loops,-funswitch-loops")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,sse4.2,popcnt,abm,mmx,avx2,tune=native")
 
using namespace std;
using ld = long double;
using ll = long long int;
using namespace __gnu_pbds;
 
#define sp ' '
#define nl '\n'
#define F first
#define S second
#define pb push_back
#define oo 0x3f3f3f3f
#define mkp make_pair
#define eb emplace_back
#define pll pair<ll, ll>
#define pii pair<int, int>
#define OO 0x3f3f3f3f3f3f3f3f
#define sz(s) (int)(s).size()
#define all(a) a.begin(), a.end()
#define rall(a) a.rbegin(), a.rend()
#define fs(n) fixed<<setprecision(n)
#define mem(x, y, SZ) memset(x, y, (SZ) * sizeof(x[0]))
#define test int test_case = 1; while(test_case--)
#define tests int test_cases; cin >> test_cases; for(int tc=1; tc<=test_cases; tc++)
#define RamadanKareem ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
#define ordered_set tree<int , null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
const ll N = 1010, MOD = 1e9 + 7;
 
ll mfp(ll base, ll power, ll mod) {
    return !power ? 1 : mfp(base * base % mod, power >> 1, mod) * (power & 1 ? base : 1) % mod;
}
 
unordered_map<ll, ll> dist;
 
int bfs(int src, int destination) {
    queue<pair<int, pii>> q;
    q.emplace(src, mkp(src, src));
    int ans = 0;
    while (!q.empty()) {
        int operations = q.front().F, lst = q.front().S.F, cur = q.front().S.S;
        q.pop();
        if (cur == destination) {
            ans = operations;
            break;
        }
        if (dist.count(cur) && (dist[cur] + 1 < dist[cur - lst - 1] || dist[cur] + 1 < dist[cur + lst + 1])) continue;
        dist[cur] = operations;
        q.emplace(operations + 1, mkp(lst + 1, cur + lst + 1));
        q.emplace(operations + 1, mkp(lst + 1, cur - lst - 1));
    }
    return ans;
}
 
void y3ni_mht3dee4() {
    ll q, w;
    cin >> q >> w;
    if ((w & 1 ^ 1) && (q & 1)) {
        cout << "NO" << nl;
    } else {
        cout << "YES" << nl;
    }
}
 
signed main() {
    RamadanKareem
    tests y3ni_mht3dee4();
}