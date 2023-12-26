#include <bits/stdc++.h>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/assoc_container.hpp>
 
using namespace std;
using ld = long double;
using ll = long long int;
using namespace __gnu_pbds;
 
#pragma GCC optimize("-Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,sse4.2,popcnt,abm,mmx,avx2,tune=native")
#pragma GCC optimize("-ffast-math")
#pragma GCC optimize("-funroll-loops")
#pragma GCC optimize("-funroll-all-loops,-fpeel-loops,-funswitch-loops")
 
#define sp ' '
#define nl '\n'
#define oo 0x3f3f3f3f
#define OO 0x3f3f3f3f3f3f3f3f
#define F first
#define S second
#define pb push_back
#define eb emplace_back
#define pii pair<int, int>
#define sz(s) (int)(s).size()
#define all(a) a.begin(), a.end()
#define rall(a) a.rbegin(), a.rend()
#define fs(n) fixed<<setprecision(n)
#define mem(x, y, SZ) memset(x, y, (SZ) * sizeof(x[0]))
#define test int test_case = 1; while(test_case--)
#define tests int test_cases; cin >> test_cases; for(int tc=1; tc<=test_cases; tc++)
#define RamadanKareem ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
#define ordered_set tree<int , null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
const ll N = 2e5 + 5, MOD = 1e9 + 7;
 
ll mfp(ll base, ll power, ll mod) {
    return !power ? 1 : mfp(base * base % mod, power >> 1, mod) * (power & 1 ? base : 1) % mod;
}
 
ll n;
vector<ll> pre;
struct pos {
    ll x, y;
} a;
 
void Preprocessing() {
    ll cur;
    pre.eb(1), pre.eb(1);
    for (int i = 0; i < 50; i++)
        cur = pre[i] + pre[i + 1], pre.eb(cur);
}
 
bool can(ll idx, ll x, ll y) {
    if (idx == 1)return true;
    ll limit = pre[idx + 1] - pre[idx];
    ll mn = min(y, pre[idx + 1] - y + 1);
    if (mn <= limit) return can(idx - 1, mn, x);
    else return false;
}
 
void y3ni_mht3dee4() {
    int n;
    cin >> n;
    char c;
    cin >> c;
    string s;
    cin >> s;
    bool printed = false;
    for (int i = 0; i < n; i++) {
        if (s[i] >= c)cout << s[i];
        else if (s[i] < c && !printed) {
            cout << c << s[i];
            printed = true;
        } else cout << s[i];
    }
    if (!printed)cout << c;
    cout << '\n';
}
 
signed main() {
    RamadanKareem
    Preprocessing();
    tests y3ni_mht3dee4();
}