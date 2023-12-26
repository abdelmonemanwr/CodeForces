#include <bits/stdc++.h>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/assoc_container.hpp>
 
using namespace std;
using ld = long double;
using ll = long long int;
using namespace __gnu_pbds;
 
#define sp ' '
#define nl '\n'
#define re register
#define OO 0x3f3f3f3f
#define pii pair<int , int>
#define sz(s) (int)(s).size()
#define pb(val) push_back(val)
#define all(a) a.begin(), a.end()
#define rall(a) a.rbegin(), a.rend()
#define Testcases int test_cases; cin >> test_cases; for(int tc=1; tc<=test_cases; tc++)
#define ordered_set tree<int , null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
#define Easy_Peasy_Lemon_Squeezy ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
const int N = 1e5 + 1;
 
ll LCM(ll a, ll b) {
    return (a * b) / __gcd(a, b);
}
 
void Solve() {
    ll n;
    cin >> n;
    ll lcm = 6;
    ll mod = 1000000007;
    ll ans = (((n + 1) / 2) * 2);
    ans %= mod;
    ll rem = (n - ((n + 1) / 2)); 
    ans += rem * 3; 
    ans %= mod;
    for (ll i = 4; i <= 50; i++) {
        ans += (n / lcm);
        ans %= mod;
        lcm = LCM(lcm, i);
        if (lcm > n)break;
    }
    cout << ans << nl;
}
 
signed main() {
    Easy_Peasy_Lemon_Squeezy
    Testcases Solve();
}