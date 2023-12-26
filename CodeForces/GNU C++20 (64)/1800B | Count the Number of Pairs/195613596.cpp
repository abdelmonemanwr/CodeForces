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
    int n, k;
    string s;
    cin >> n >> k >> s;
    int l[26] = {0}, u[26] = {0};
    for (int i = 0; i < n; i++) {
        if (isupper(s[i]))
            u[s[i] - 'A']++;
        else
            l[s[i] - 'a']++;
    }
    int burles = 0;
    for (int i = 0; i < 26; i++) {
        int mn = min(l[i], u[i]);
        burles += mn;
        l[i] -= mn;
        u[i] -= mn;
    }
    for (int i = 0; i < 26; i++) {
        int up = u[i];
        int lo = l[i];
        if (!up && !lo)continue;
        if (up) {
            int mn = min(up / 2, k);
            burles += mn;
            k -= mn;
            up -= mn * 2;
        } else if (lo) {
            int mn = min(lo / 2, k);
            burles += mn;
            k -= mn;
            lo -= mn * 2;
        }
    }
 
    cout << burles << nl;
 
}
 
signed main() {
    EasyPeasyLemonSqueezy
    ForEachTestCase Solve();
    return 0;
}