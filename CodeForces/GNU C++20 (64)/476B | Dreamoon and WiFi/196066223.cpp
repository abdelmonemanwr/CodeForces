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
const int N = 1e6 + 1;
 
int cntProb, vldProb;
 
void rec(int qm, string cur, int meet, int m3aya) {
    // base case
    if (!qm) {
        cntProb++;
        int plus = count(all(cur), '+');
        int minus = count(all(cur), '-');
        if (plus - minus + m3aya == meet) {
            vldProb++;
        }
        return;
    }
    // transition
    cur.pb('+');
    rec(qm - 1, cur, meet, m3aya);
    cur.pop_back();
    cur.pb('-');
    rec(qm - 1, cur, meet, m3aya);
}
 
signed main() {
    Easy_Peasy_Lemon_Squeezy
    string send;
    cin >> send;
    string receive;
    cin >> receive;
    int plus = count(all(send), '+');
    int minus = count(all(send), '-');
    int meet = plus - minus;
    plus = count(all(receive), '+');
    minus = count(all(receive), '-');
    int qm = count(all(receive), '?');
    int m3aya = plus - minus;
    cout << fixed << setprecision(10);
    if (!qm) {
        if (m3aya == meet) {
            cout << 1.0 << nl;
        } else {
            cout << 0.0 << nl;
        }
        return 0;
    }
    rec(qm, "", meet, m3aya);
    cout << 1.0 * vldProb / cntProb << nl;
}