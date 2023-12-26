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
 
    int n;
    cin >> n;
    char a[n][n];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> a[i][j];
    int ans = 0;
    map<pii, int> dp;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (dp[{i, j}])continue;
            int i90 = j, j90 = n - i - 1;
            int i180 = j90, j180 = n - i90 - 1;
            int i270 = j180, j270 = n - i180 - 1;
            int sum = (a[i][j] == '1') + (a[i90][j90] == '1') + (a[i180][j180] == '1') + (a[i270][j270] == '1');
            ans += min(sum, 4 - sum);
            dp[{i, j}]++;
            dp[{i90, j90}]++;
            dp[{i180, j180}]++;
            dp[{i270, j270}]++;
        }
    }
    cout << ans << nl;
}
 
signed main() {
    Easy_Peasy_Lemon_Squeezy
    Testcases Solve();
}