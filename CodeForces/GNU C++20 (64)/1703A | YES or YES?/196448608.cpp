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
#define pii pair<ll , ll>
#define sz(s) (int)(s).size()
#define pb(val) push_back(val)
#define all(a) a.begin(), a.end()
#define rall(a) a.rbegin(), a.rend()
#define Testcases int test_cases; cin >> test_cases; for(int tc=1; tc<=test_cases; tc++)
#define ordered_set tree<int , null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
#define Easy_Peasy_Lemon_Squeezy ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
const int N = 1e5 + 1, M = 1e5 + 3;
 
void Solve() {
    string yes;
    cin >> yes;
    yes[0] = ::tolower(yes[0]);
    yes[1] = ::tolower(yes[1]);
    yes[2] = ::tolower(yes[2]);
    if (yes == "yes")cout << "yes\n";
    else cout << "no\n";
}
 
signed main() {
    Easy_Peasy_Lemon_Squeezy
    Testcases Solve();
}