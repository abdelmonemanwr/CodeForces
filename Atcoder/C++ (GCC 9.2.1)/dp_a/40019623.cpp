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

ll n, h[N], dp[N];
void y3ni_mht3dee4() {
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> h[i], dp[i] = oo;
    dp[0] = 0;
    for (int i = 0; i < n; i++) {
        if (i + 1 < n)dp[i + 1] = min(dp[i + 1], dp[i] + abs(h[i + 1] - h[i]));
        if (i + 2 < n)dp[i + 2] = min(dp[i + 2], dp[i] + abs(h[i + 2] - h[i]));
    }
    cout << dp[n - 1] << nl;
}

signed main() {
    RamadanKareem
    y3ni_mht3dee4();
}