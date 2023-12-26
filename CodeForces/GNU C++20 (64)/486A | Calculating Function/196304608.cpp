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
 
const int N = 1e6 + 1;
 
void Solve() {
    ll n;
    cin >> n;
    ll ans = ceil(n/2.0) * (((n&1) * -1) + ((n&1^1) * 1));
    cout << ans << nl;
}
 
signed main() {
    EasyPeasyLemonSqueezy
    // ForEachTestCase 
    Solve();
    return 0;
}