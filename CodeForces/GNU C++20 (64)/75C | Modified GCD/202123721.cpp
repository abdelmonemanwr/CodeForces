#include <bits/stdc++.h>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/assoc_container.hpp>
 
using namespace std;
using ld = long double;
using ll = long long int;
using namespace __gnu_pbds;
 
#pragma GCC optimize("-Ofast")
#pragma GCC optimize("-ffast-math")
#pragma GCC optimize("-funroll-loops")
#pragma GCC optimize("-funroll-all-loops,-fpeel-loops,-funswitch-loops")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,sse4.2,popcnt,abm,mmx,avx2,tune=native")
 
#define sp ' '
#define nl '\n'
#define F first
#define S second
#define pb push_back
#define oo 0x3f3f3f3f
#define eb emplace_back
#define pii pair<int, int>
#define OO 0x3f3f3f3f3f3f3f3f
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
 
ll gcd(ll a, ll b) {
    return !b ? a : gcd(b, a % b);
}
 
ll lcm(ll a, ll b) {
    return a / gcd(a, b) * b;
}
 
vector<int> divisors(int n) {
    vector<int> div;
    for (int i = 1; i <= n / i; i++) {
        if (n % i == 0) {
            div.eb(i);
            if (i != n / i)div.eb(n / i);
        }
    }
    sort(all(div));
    return div;
}
 
vector<int> commonDivisors(vector<int> &a, vector<int> &b) {
    vector<int> div;
    for (int i = 0, j = 0; i < sz(a) && j < sz(b);) {
        if (a[i] == b[j]) {
            div.eb(a[i]);
            i++, j++;
        } else if (a[i] < b[j])i++;
        else j++;
    }
    return div;
}
 
void y3ni_mht3dee4() {
    int a, b, q, l, r;
    cin >> a >> b >> q;
    vector<int> _a = divisors(a);
    vector<int> _b = divisors(b);
    vector<int> _c = commonDivisors(_a, _b);
    int lo, hi, mid, ans;
    while (q--) {
        cin >> l >> r;
        lo = 0, hi = sz(_c), ans = -1;
        while (hi - lo > 1) {
            mid = (lo + hi) >> 1;
            if (_c[mid] <= r) ans = mid, lo = mid;
            else hi = mid;
        }
        if (_c[lo] >= l) {
            cout << _c[lo] << "\n";
        } else {
            cout << "-1\n";
        }
    }
}
 
signed main() {
    RamadanKareem
    test y3ni_mht3dee4();
}