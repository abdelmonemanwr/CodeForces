#include <bits/stdc++.h>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/assoc_container.hpp>
 
using namespace std;
using ld = long double;
using ll = long long int;
using namespace __gnu_pbds;
 
#define sp ' '
#define nl '\n'
#define OO 0x3f3f3f3f
#define pii pair<int , int>
#define sz(s) (int)(s).size()
#define pb(val) push_back(val)
#define all(a) a.begin(), a.end()
#define rall(a) a.rbegin(), a.rend()
#define Testcases int test_cases; cin >> test_cases; for(int tc=1; tc<=test_cases; tc++)
#define ordered_set tree<int , null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
#define Easy_Peasy_Lemon_Squeezy ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
const int N = 1e5 + 1;
 
void Solve() {
    int n, o;
    cin >> n;
    ll ans = 0;
    ordered_set os;
    for (int i = 1; i <= n; i++) {
        cin >> o;
        ans += os.order_of_key(o) * (o < i);
        if (o < i)os.insert(i);
    }
    cout << ans << nl;
}
 
signed main() {
    Easy_Peasy_Lemon_Squeezy
    Testcases Solve();
}