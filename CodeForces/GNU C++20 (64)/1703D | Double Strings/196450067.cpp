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
 
bool com(string &a, string &b) {
    return sz(a) < sz(b);
}
 
void Solve() {
    int n;
    cin >> n;
    string start, end;
    vector<string> s(n);
    vector<bool> bts(n, false);
    unordered_map<string, bool> mp;
    for (auto &st: s)cin >> st, mp[st] = true;
    for (int i = 0; i < n; i++) {
        for (int j = 1; j < sz(s[i]); j++) {// start from 1 not to bring the string itself.
            start = s[i].substr(0, j);
            end = s[i].substr(j, sz(s[i]) - j);
            if (mp[start] && mp[end]) {
                bts[i] = true;
                break;
            }
        }
        cout << bts[i];
    }
    cout << nl;
}
 
signed main() {
    Easy_Peasy_Lemon_Squeezy
    Testcases Solve();
}