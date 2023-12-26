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
 
vector<vector<char>> rotate_right(vector<vector<char>> &s, int n) {
    vector<vector<char>> transposed(n, vector<char>(n));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (s[i][j] == '>')s[i][j] = 'v';
            else if (s[i][j] == 'v')s[i][j] = '<';
            else if (s[i][j] == '<')s[i][j] = '^';
            else if (s[i][j] == '^')s[i][j] = '>';
        }
    }
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            transposed[j][i] = s[i][j];
 
    for (auto &i: transposed)
        reverse(i.begin(), i.end());
    return transposed;
}
 
vector<vector<char>> rotate_left(vector<vector<char>> &s, int n) {
    vector<vector<char>> transposed(n, vector<char>(n));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (s[i][j] == '>')s[i][j] = '^';
            else if (s[i][j] == 'v')s[i][j] = '>';
            else if (s[i][j] == '<')s[i][j] = 'v';
            else if (s[i][j] == '^')s[i][j] = '<';
        }
    }
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            transposed[j][i] = s[i][j];
    for (int i = 0; i < n; i++)
        reverse(all(transposed));
    return transposed;
}
 
void y3ni_mht3dee4() {
    int n;
    cin >> n;
    string op;
    cin >> op;
    vector<vector<char>> s(n, vector<char>(n));
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> s[i][j];
 
    int l = int(count(all(op), 'L'));
    int r = int(count(all(op), 'R'));
    if (l > r) {
        l -= r, l %= 4;
        while (l--)s = rotate_right(s, n);
    } else if (l < r) {
        r -= l, r %= 4;
        while (r--)s = rotate_left(s, n);
    }
    for (int i = 0; i < n; i++, cout << nl)
        for (int j = 0; j < n; j++)
            cout << s[i][j];
}
 
void go() {
    int n, d;
    cin >> n >> d;
    vector<ll> a(n);
    for (ll &i: a)cin >> i;
    ll ans = 0;
    for (int i = 1; i < n; i++) {
        if (a[i] > a[i - 1])continue;
        else {
            ll diff = a[i - 1] - a[i];
            ll inc = diff / d;
            a[i] += inc * d;
            ans += inc;
            if (a[i] <= a[i - 1])a[i] += d, ans++;
        }
    }
    cout << ans << nl;
}
 
signed main() {
    RamadanKareem
    // test y3ni_mht3dee4();
    go();
}