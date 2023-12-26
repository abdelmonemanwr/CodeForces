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
    int n;
    cin >> n;
    int a[n];
    pair<int, string> s[n];
    for (auto &i: a)cin >> i;
    for (auto &i: s)cin >> i.first >> i.second;
    for (int i = 0; i < n; i++) {
        int u = count(all(s[i].second), 'U');
        int d = count(all(s[i].second), 'D');
        int moves = u - d;
        a[i] -= moves;
        if (a[i] > 9) {
            a[i] %= 10;
        } else {
            a[i] += 10;
            a[i] %= 10;
        }
        cout << a[i] << sp;
    }
    cout << nl;
}
 
signed main() {
    Easy_Peasy_Lemon_Squeezy
    Testcases Solve();
}