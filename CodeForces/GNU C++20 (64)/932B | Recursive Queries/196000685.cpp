#include <bits/stdc++.h>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/assoc_container.hpp>
 
using namespace std;
using ld = long double;
using ll = long long int;
using namespace __gnu_pbds;
 
#define sp ' '
#define nl '\n'
#define OO 0x3f3f3f3f
#define pii pair<ll , ll>
#define sz(s) (int)(s).size()
#define pb(val) push_back(val)
#define all(a) a.begin(), a.end()
#define rall(a) a.rbegin(), a.rend()
#define Testcases int test_cases; cin >> test_cases; for(int tc=1; tc<=test_cases; tc++)
#define ordered_set tree<int , null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
#define Easy_Peasy_Lemon_Squeezy ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
const int N = 1e6 + 1;
 
ll dp[10][N];
 
ll calc(ll x) {
    if (x < 10)return max(x, 1ll);
    return calc(x / 10) * max(1ll, (x % 10));
}
 
ll G(ll x) {
    if (x < 10)return max(x, 1ll);
    ll newX = calc(x);
    return G(newX);
}
 
signed main() {
    Easy_Peasy_Lemon_Squeezy
 
    for (ll i = 0; i < 10; i++) {
        for (ll j = 0; j < N; j++) {
            dp[i][j] = 0;
        }
    }
 
    for (int i = 1; i < N; i++) {
        dp[G(i)][i] = 1;
    }
 
    for (int i = 1; i < 10; i++) {
        for (int j = 1; j < N; j++) {
            dp[i][j] += dp[i][j - 1];
        }
    }
 
    Testcases {
        int l, r, k;
        cin >> l >> r >> k;
        cout << dp[k][r] - dp[k][l - 1] << nl;
    }
 
 
}