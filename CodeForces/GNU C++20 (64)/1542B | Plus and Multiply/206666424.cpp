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
#define Y3niMht3dee4 ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
 
void y3ni_mht3dee4() {
    ll n, a, b;
    cin >> n >> a >> b;
    if (a == 1) {
        if ((n - 1) % b == 0) rv(cout << "Yes" << nl);
        else
            rv(cout << "No" << nl);
    }
    ll x = 1;
    bool ok = false;
    while (x <= n) {
        if ((n - x) % b == 0) {
            ok = true;
            break;
        }
        x *= a;
    }
    if (ok) cout << "Yes" << nl;
    else cout << "No" << nl;
}
 
signed main() {
    Y3niMht3dee4
    Tests y3ni_mht3dee4();
}