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

const ll N = 1e5 + 5, M = 105, MOD = 1e9 + 7;

int dx[] = {0, 0, 1, -1};
int dy[] = {1, -1, 0, 0};

ll n, k, h[N], dp[N];

ll solve(int idx) {
    if (idx >= n)return 0;
    ll &ret = dp[idx];
    if (~ret)return ret;
    ret = OO;
    for (int op = 1; op <= k; op++)
        if (op+idx <= n)
            ret = min(ret, abs(h[idx + op] - h[idx]) + solve(idx + op));
    return ret;
}

void y3ni_mht3dee4() {
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
        cin >> h[i], dp[i] = -1;
    cout << solve(1);
}

signed main() {
    RamadanKareem
    y3ni_mht3dee4();
}