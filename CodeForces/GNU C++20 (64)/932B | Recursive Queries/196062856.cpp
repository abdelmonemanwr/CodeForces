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
 
ll save[10][N];
 
ll F(ll x) {
    // base case
    if (x < 10)return max(x, 1LL);
    // transition
    return F(x / 10) * max(1ll, x % 10);
}
 
ll G(ll x) {
    if (x < 10)return max(x, 1LL);
    ll newX = F(x);
    return G(newX);
}
 
signed main() {
    Easy_Peasy_Lemon_Squeezy
 
    for (ll i = 1; i < N; i++) {
        ll k = G(i);
        save[k][i] = 1;
    }
    for (int k = 0; k < 10; k++) {
        for (int i = 1; i < N; i++) {
            save[k][i] += save[k][i - 1];
        }
    }
 
    Testcases {
        ll l, r, k;
        cin >> l >> r >> k;
        cout << save[k][r] - save[k][l - 1] << nl;
    }
 
}