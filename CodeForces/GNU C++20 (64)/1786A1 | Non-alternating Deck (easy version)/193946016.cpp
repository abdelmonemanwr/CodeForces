#include <bits/stdc++.h>
#include <ext/rope>
#include <regex>
 
using namespace std;
#define sp ' '
#define nl '\n'
#define F first
#define S second
#define PI acos(-1)
#define pb push_back
#define OO 0x3f3f3f3f
#define sz(s) (int)size(s)
#define LOO 0x3f3f3f3f3f3f3f3f
#define all(v) v.begin(), v.end()
#define Tests int t = 1; cin >> t; while(t--)
using ll = long long int;
//const ll N = 105, mod = 1e9 + 7;
 
void File() {
    ios_base::sync_with_stdio(false), cout.tie(nullptr), cin.tie(nullptr);
#ifndef ONLINE_JUDGE
    freopen("input.txt", " r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}
 
const ll N = 5e6 + 5, MOOD = 1e9 + 7;
 
ll PW(ll a, ll p = MOOD - 2, ll MOD = MOOD) {
    ll result = 1;
    while (p > 0) {
        if (p & 1)
            result = a * result % MOD;
        a = a * a % MOD;
        p >>= 1;
    }
    return result;
}
 
ll Fact[N], InvFact[N];
 
void Init() {
    ll p = MOOD;
    Fact[0] = 1;
    ll i;
    for (i = 1; i < N; i++) {
        Fact[i] = i * Fact[i - 1] % p;
    }
    i--;
    InvFact[i] = PW(Fact[i], p - 2, p);
    for (i--; i >= 0; i--) {
        InvFact[i] = InvFact[i + 1] * (i + 1) % p;
    }
}
 
ll nCr(ll n, ll r) {
    return Fact[n] * InvFact[r] % MOOD;
}
 
vector<ll> PrimeFactorization(ll n) {
    vector<ll> pf;
    for (ll i = 2; i * i <= n; i++) {
        while (n % i == 0) {
            pf.pb(i);
            n /= i;
        }
    }
    if (n > 1)pf.pb(n);
    return pf;
}
 
void Code() {
    ll a, b;
    cin >> a >> b;
//    if (a == 5000000 && b == 4999995)cout << "23\n";
//    else {
    ll ans = nCr(a, b);
    vector<ll> PF = PrimeFactorization(ans);
    cout << sz(PF) << nl;
//    }
}
 
void solve() {
    ll n;
    cin >> n;
    int cnt = 0;
    ll alice = 0, bob = 0, all = 0;
    for (int i = 0; i <= n; i++) {
        ll plus = i;
        all += plus;
        if (all > n) {
            all -= plus;
            plus = n - all;
            n = 0;
        }
        if (cnt < 2) {
            cnt++;
            alice += plus;
        } else {
            cnt++;
            bob += plus;
            if (cnt == 4)cnt = 0;
        }
    }
    cout << alice << sp << bob << nl;
}
 
int main() {
    File();
    Init();
    Tests solve();//Code();
}