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
 
int fp(int base, int power) {
    if (!power) {
        return 1ll;
    }
    int sq = fp(base, power / 2) % MOD;
    sq = sq * 1ll * sq % MOD;
    if (power & 1)
        sq = sq * 1ll * base % MOD;
    return sq % MOD;
}
 
int query(int l, int r, vector<int> &productPrefix) {
    int out = productPrefix[r] % MOD;
    if (l) {
        int inv = fp(productPrefix[l - 1], MOD - 2);
        out = (((out % MOD) * 1ll * (inv % MOD)) % MOD);
    }
    return out;
}
 
void y3ni_mht3dee4() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    set<string> st;
    for (int i = 0; i < n - 1; i++) {
        st.insert(s.substr(i, 2));
    }
    cout << sz(st) << nl;
}
 
signed main() {
    WAAAAADY
    Tests y3ni_mht3dee4();
}