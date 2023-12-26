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
const ll N = 2e6 + 5, MOD = 1e9 + 7;
 
ll slv(ll n) {
    if (!n)return 1ll;
    else if (n == 1)return 2ll;
    else if (n % 3)return 3 + slv(n / 3);
    else return 1 + slv(n / 3);
}
 
void y3ni_mht3dee4() {
    string PI = "31415926535897932384626433832795028841971693993751058209749445923078164";
    int n = sz(PI);
    int t, x;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int tt = PI[i] - '0';
        ll ans = 1;
        while (tt--) {
            cin >> x;
            ans *= x;
        }
        cout << ans << nl;
    }
}
 
signed main() {
    RamadanKareem
    test {
        y3ni_mht3dee4();
        cout << nl;
    }
}