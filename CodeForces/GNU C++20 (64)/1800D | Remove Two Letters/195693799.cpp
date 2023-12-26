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
 
//ll mod(ll a, ll b) { return ((a % b) + b) % b; }
 
 
const int p = 29, p2 = 31, N = 2e5 + 5, mod = 1e9 + 7;
int prfx[N], pw[N], pw2[N], inv[N], prfx2[N], inv2[N];
 
 
int mul(int a, int b) {
    return 1LL * a * b % mod;
}
 
int add(int a, int b) {
    return (0ll + a + b + mod) % mod;
}
 
int fastPower(int a, int b) {
    if (b == 0) return 1;
    int temp = fastPower(a, b / 2);
    temp = mul(temp, temp);
    if (b & 1)
        temp = mul(temp, a);
    return temp;
}
 
void preprocessing() {
    pw[0] = inv[0] = 1;
    pw2[0] = inv2[0] = 1;
    int mInv = fastPower(p, mod - 2);
    int mInv2 = fastPower(p2, mod - 2);
    for (int i = 1; i < N; i++) {
        pw[i] = mul(pw[i - 1], p);
        inv[i] = mul(inv[i - 1], mInv);
        pw2[i] = mul(pw2[i - 1], p2);
        inv2[i] = mul(inv2[i - 1], mInv2);
    }
}
 
pair<int, int> getHash(int l, int r) {
    int f = prfx[r];
    int s = prfx2[r];
    if (l) {
        f = add(f, -prfx[l - 1]);
        s = add(s, -prfx2[l - 1]);
    }
    if (l) {
        f = mul(f, inv[2]);
        s = mul(s, inv2[2]);
    }
    return {f, s};
}
 
void genHash(string &st) {
    int x = st.size();
    for (int i = 1; i <= x; i++) {
        int idx = st[i - 1] - 'a' + 1;
        prfx[i] = mul(idx, pw[i - 1]);
        prfx[i] = add(prfx[i], prfx[i - 1]);
        prfx2[i] = mul(idx, pw2[i - 1]);
        prfx2[i] = add(prfx2[i], prfx2[i - 1]);
    }
}
 
int getHashValue(string &st) {
    int val = 0;
    for (int i = 1; i <= st.length(); i++) {
        int idx = st[i - 1] - 'a' + 1;
        val = add(val, mul(idx, pw[i - 1]));
    }
    return val;
}
 
void Solve() {
    int n;
    string s;
    cin >> n >> s;
    genHash(s);
    pii a, b;
    set<pii > dp;
    for (int i = 1; i < n - 2; i++) {
        a = getHash(0, i - 1);
        b = getHash(i + 2, n - 1);
        a.first = add(a.first, b.first);
        a.second = add(a.second, b.second);
        dp.insert(a);
    }
    dp.insert(getHash(2, n - 1));
    dp.insert(getHash(0, n - 3));
    cout << sz(dp) << nl;
}
 
void test() {
    int n;
    string s;
    cin >> n >> s;
    int ans = 0;
    string go = s.substr(0, 2), tp;
    for (int i = 1; i < n - 1; i++) {
        tp = "";
        tp += s[i];
        tp += s[i + 1];
        if (tp != go)
            ans++;
        go = tp;
        if (s[i + 1] != s[i] && s[i + 1] == s[i - 1])
            ans--;
    }
    cout << ans + 1 << nl;
}
 
signed main() {
    EasyPeasyLemonSqueezy
//    preprocessing();
    ForEachTestCase test();//Solve();
    return 0;
}