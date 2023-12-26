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
#define pii pair<ld, ld>
#define sz(s) (int)(s).size()
#define pb(val) push_back(val)
#define all(a) a.begin(), a.end()
#define rall(a) a.rbegin(), a.rend()
#define ordered_set tree<int , null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
#define EasyPeasyLemonSqueezy ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
#define ForEachTestCase int test_cases; cin >> test_cases; for(int tc=1; tc<=test_cases; tc++)
 
ll lcm(ll a, ll b) { return a / __gcd(a, b) * b; }
 
ll mod(ll a, ll b) { return ((a % b) + b) % b; }
 
const int N = 100001;
 
bool cmp(pii &a, pii &b) {
    if (a.S == b.S)return a.F < b.F;
    return a.S > b.S;
}
 
void TRY_SOLVE_IT() {
    int n, t1, t2, k;
    cin >> n >> t1 >> t2 >> k;
    vector<pii > a;
    for (int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        a.emplace_back(x, y);
    }
    vector<pii> ans(n);
    for (int i = 0; i < n; i++) {
        ld op1 = a[i].F * t1 - a[i].F * t1 * k / 100.0 + a[i].S * t2;
        ld op2 = a[i].S * t1 - a[i].S * t1 * k / 100.0 + a[i].F * t2;
        ans[i] = {i + 1, max(op1, op2)};
    }
    sort(all(ans), cmp);
    for (auto [x, y] : ans) {
        cout << fixed << setprecision(2) << (int)x << sp << y << nl;
    }
}
 
signed main() {
    EasyPeasyLemonSqueezy
    // ForEachTestCase
    TRY_SOLVE_IT();
}