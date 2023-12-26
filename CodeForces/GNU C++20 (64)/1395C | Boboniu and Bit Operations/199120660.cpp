#include <bits/stdc++.h>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/assoc_container.hpp>
 
using namespace std;
using ld = long double;
using ll = long long int;
using namespace __gnu_pbds;
 
#define sp ' '
#define nl '\n'
#define oo 1e9
#define OO 1e18
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
 
const ll N = 1e5 + 5, M = 512, MOD = 1e9 + 7;
 
ll n, k, a[M], b[M], dp[M][M];
 
ll solve(ll idx, ll cur) {
    if (idx == n)return 0;
    ll &ret = dp[idx][cur];
    if (~ret)return ret;
    ret = OO;
    for (int j = 0; j < k; j++)
        ret = min(ret, cur | (a[idx] & b[j]) | solve(idx + 1, cur | (a[idx] & b[j])));
    return ret;
}
 
void y3ni_mht3dee4() {
    cin >> n >> k;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < k; i++)
        cin >> b[i];
    mem(dp, -1, max(n, k) + 1);
    cout << solve(0, 0) << nl;
}
 
signed main() {
    RamadanKareem
    y3ni_mht3dee4();
}