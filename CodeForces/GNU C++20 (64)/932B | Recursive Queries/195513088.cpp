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
#define ld long double
#define pii pair<int , int>
#define sz(s) (int)(s).size()
#define pb(val) push_back(val)
#define all(a) a.begin(), a.end()
#define rall(a) a.rbegin(), a.rend()
#define ordered_set tree<int , null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
#define EasyPeasyLemonSqueezy ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
#define ForEachTestCase int test_cases; cin >> test_cases; for(int tc=1; tc<=test_cases; tc++)
 
ll fp(ll base, ll power) {
    if (!power) return 1;
    ll ans = fp(base, power / 2) % MOD;
    ans *= ans;
    ans %= MOD;
    if (power & 1) ans = (ans * base) % MOD;
    return ans;
}
 
ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
 
ll lcm(ll a, ll b) { return a / __gcd(a, b) * b; }
 
ll mod(ll a, ll b) { return ((a % b) + b) % b; }
 
const int N = 1e6 + 1;
 
ll dp[10][N], l, r, k;
 
ll FDash(ll n) {
    if (n < 10)return max(1ll, n);
    else return FDash(n / 10) * max(1LL, n % 10);
}
 
ll F(ll n) {
    if (n < 10)return max(1ll, n);
    while (true) {
        ll val = FDash(n);
        return F(val);
    }
}
 
ll G(int n) {
    if (!n)return 1;
    else if (n < 10)return n;
    return F(n);
}
 
 
void Preprocessing() {
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < N; j++) {
            dp[i][j] = 0;
        }
    }
 
    for (int i = 0; i < N; i++) {
        dp[G(i)][i] = 1;
    }
 
    for (int i = 1; i < 10; i++) {
        for (int j = 1; j < N; j++) {
            dp[i][j] += dp[i][j - 1];
        }
    }
}
 
void solve() {
    cin >> l >> r >> k;
    cout << dp[k][r] - dp[k][l - 1] << nl;
}
 
signed main() {
    EasyPeasyLemonSqueezy
    Preprocessing();
    ForEachTestCase solve();
    return 0;
}