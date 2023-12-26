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
 
/// Geometry
#define EPS 1e-9
#define X real()
#define Y imag()
#define vec(a, b) ((b)-(a))
#define lengthSqr(v) (dot(v,v))
#define rotate(v, t) (polar(v,t))
#define normalize(p) ((p)/length(p))
#define perp(a) (point(-(a).Y,(a).X))
#define angle(v) (atan2((v).Y,(v).X))
#define mid(a, b) (((a)+(b))/point(2,0))
#define dot(a, b) ((conj(a)*(b)).real())
#define cross(a, b) ((conj(a)*(b)).imag())
#define length(v) ((ld)hypot((v).Y,(v).X))
#define reflect(p, m) ((conj((p)/(m)))*(m))
#define same(a, b) (lengthSqr(vec(a,b))<EPS)
#define polar(r, t) ((r)*exp(point(0,(t))))
#define rotateabout(v, t, a) (rotate(vec(a,v),t)+(a))
 
/////
 
#define sp ' '
#define nl '\n'
#define F first
#define S second
#define pb push_back
#define oo 0x3f3f3f3f
#define eb emplace_back
#define pll pair<ll, ll>
#define Map map<int, int>
#define pii pair<int, int>
typedef complex<ll> point;
#define OO 0x3f3f3f3f3f3f3f3f
#define sz(s) (int)(s).size()
#define all(a) a.begin(), a.end()
#define rall(a) a.rbegin(), a.rend()
#define fs(n) fixed<<setprecision(n)
#define mem(x, y, SZ) memset(x, y, (SZ) * sizeof(x[0]))
#define Test int test_case = 1; while(test_case--)
#define Tests int test_cases; cin >> test_cases; for(int tc=1; tc<=test_cases; tc++)
#define RamadanKareem ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
#define ordered_set tree<pll , null_type,less<pll>, rb_tree_tag,tree_order_statistics_node_update>
const ll N = 1e6 + 5, MOD = 1e9 + 7;
 
ll gcd(ll a, ll b) { return !b ? a : gcd(b, a % b); }
 
ll lcm(ll a, ll b) { return a / gcd(a, b) * b; }
 
ll mfp(ll b, ll p, ll m) { return !p ? 1 : mfp(b * b % m, p >> 1, m) * (p & 1 ? b : 1) % m; }
 
bool com(pair<string, int> &a, pair<string, int> &b) {
    if (a.S == b.S)return a.S < b.S;
    else return a.S > b.S;
}
 
void y3ni_mht3dee4() {
    int n;
    string s;
    cin >> n >> s;
    
    if (n & 1)
        return cout << "-1\n", void();
 
    vector<int> fr(26, 0);
    for (char &ch: s)
        fr[ch - 'a']++;
 
    for (int &c: fr)
        if (c > n / 2)
            return cout << "-1\n", void();
 
    fr = vector<int>(26, 0);
    for (int i = 0; i < n / 2; i++)
        if (s[i] == s[n - i - 1])
            fr[s[i] - 'a']++;
    
    int mx1 = 0, mx2 = 0;
    for (int &c: fr) 
        mx1 = max(mx1, c), mx2 += c;
    
    mx2 = (mx2 + 1) >> 1;
    cout << max(mx1, mx2) << nl;
}
 
signed main() {
    RamadanKareem
    Tests y3ni_mht3dee4();
}