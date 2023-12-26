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
 
void Solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int j = 0, c = 0;
    string cat = "meow";
    bool p = 1;
    if (n < 4)p = 0;
    for (int i = 0; i < n; i++) {
        s[i] = tolower(s[i]);
        if (i > 0 && s[i] == s[i - 1])continue;
        if (s[i] == cat[j]) {
            j++;
            c++;
        } else {
            p = 0;
            break;
        }
    }
    if (p and c==4)cout << "YES" << nl;
    else cout << "NO" << nl;
}
 
signed main() {
    EasyPeasyLemonSqueezy
    ForEachTestCase Solve();
    return 0;
}