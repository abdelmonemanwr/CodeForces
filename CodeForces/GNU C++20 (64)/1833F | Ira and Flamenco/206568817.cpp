#include <bits/stdc++.h>
 
using namespace std;
#define ll long long
#define ld long double
 
const ld PI = acos(-1);
const ll N = 1e6 + 5, MOD = 1e9 + 7, oo = 2e9, OO = 2e18;
 
#define nl '\n'
#define sp ' '
#define F first
#define S second
#define EPS 1e-4
#define pb push_back
#define mkp make_pair
#define rz return 0;
#define rv return void
#define em emplace_back
#define sz(s) (ll)(s.size())
#define all(a) a.begin(), a.end()
#define rall(a) a.rbegin(), a.rend()
#define Tests int test_cases; cin >> test_cases; for(int tc=1; tc<=test_cases; tc++)
#define WAAAAADY ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
 
// #define int ll
 
ll fp(ll base, ll power) {
    if (!power) {
        return 1ll;
    }
    ll sq = fp(base, power / 2);
    sq = (sq % MOD * sq % MOD) % MOD;
    if (power & 1)
        sq = sq * base % MOD;
    return sq % MOD;
}
 
ll query(ll l, ll r, vector<ll> &productPrefix) {
    ll out = productPrefix[r] % MOD;
    if (l) {
        ll inv = fp(productPrefix[l - 1], MOD - 2);
        out = (((out % MOD) * (inv % MOD)) % MOD);
    }
    return out;
}
 
void y3ni_mht3dee4() {
    int n, m;
    cin >> n >> m;
 
    vector<ll> a(n), d;
    unordered_map<ll, ll> mp;
 
    for (ll &aa: a) {
        cin >> aa, mp[aa]++;
        if (mp[aa] == 1)d.em(aa);
    }
    sort(all(d));
    n = sz(d);
 
    vector<ll> prefixProduct(n);
    prefixProduct[0] = mp[d[0]];
    for (int i = 1; i < n; i++)
        prefixProduct[i] = prefixProduct[i - 1] * mp[d[i]] % MOD;
 
    ll out = 0;
    for (int i = 0; i < n; i++) {
        int lst = i + m - 1;
        if (lst < n) {
            int cur = d[lst] - d[i];
            if (cur < m) {
                out += query(i, lst, prefixProduct);
                out %= MOD;
            }
        }
    }
    cout << out << nl;
}
 
signed main() {
    WAAAAADY
    Tests y3ni_mht3dee4();
}