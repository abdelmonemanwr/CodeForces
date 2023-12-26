#include <bits/stdc++.h>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/assoc_container.hpp>

using namespace std;
using ld = long double;
using ll = long long int;
using namespace __gnu_pbds;

#define sp ' '
#define nl '\n'
#define F first
#define S second
#define oo INT_MAX
#define OO LLONG_MAX
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

const ll N = 1e5+5, M = 105, MOD = 1e9 + 7;

int dx[] = {0, 0, 1, -1};
int dy[] = {1, -1, 0, 0};

ll n, cap, w[N], v[N], dp[M][N];

ll knapsack(int idx, ll cur) {
    if (idx > n) return 0;
    ll &ret = dp[idx][cur];
    if(~ret)return ret;
    ll pick = 0, leave = knapsack(idx + 1, cur);
    if (cur - w[idx] >= 0)
        pick = v[idx] + knapsack(idx+1, cur - w[idx]);
    return ret = max(pick, leave);
}

void y3ni_mht3dee4() {
    cin >> n >> cap;
    mem(dp, -1, n+1);
    for (int i = 1; i <= n; i++)
        cin >> w[i] >> v[i];
    cout << knapsack(1, cap) << nl;
}

signed main() {
    RamadanKareem
    y3ni_mht3dee4();
}