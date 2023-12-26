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
 
 
void Solve() {
    int n, k;
    cin >> n >> k;
    string s, t;
    cin >> s >> t;
    string temp1 = s;
    string temp2 = t;
 
    sort(all(temp1));
    sort(all(temp2));
    if (temp1 != temp2)return cout << "NO\n", void();
 
    for (int i = 0; i < n; i++) {
        if (s[i] != t[i]) {
            if (i - k < 0 && i + k >= n) {
                cout << "NO\n";
                return;
            }
        }
    }
 
    cout << "YES" << nl;
 
 
}
 
 
signed main() {
    EasyPeasyLemonSqueezy
    ForEachTestCase Solve();
    return 0;
}