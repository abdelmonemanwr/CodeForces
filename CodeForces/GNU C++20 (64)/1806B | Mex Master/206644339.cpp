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
 
void y3ni_mht3dee4() {
    int n, x;
    cin >> n;
    int zeros = 0, ones = 0, twos = 0;
    for (int i = 1; i <= n; i++) {
        cin >> x;
        if (!x)zeros++;
        else if (x == 1)ones++;
        else twos++;
    }
    if (zeros <= (n + 1) / 2) {
        cout << 0 << nl;
    } else {
        if (ones and not twos)cout << 2 << nl;
        else cout << 1 << nl;
    }
}
 
signed main() {
    WAAAAADY
    Tests y3ni_mht3dee4();
}