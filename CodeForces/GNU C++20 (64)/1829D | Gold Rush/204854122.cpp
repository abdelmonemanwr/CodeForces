#include <bits/stdc++.h>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/assoc_container.hpp>
 
using namespace std;
using ld = long double;
using ll = long long int;
using namespace __gnu_pbds;
 
#pragma GCC optimize("-Ofast")
#pragma GCC optimize("-ffast-math")
#pragma GCC optimize("-funroll-loops")
#pragma GCC optimize("-funroll-all-loops,-fpeel-loops,-funswitch-loops")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,sse4.2,popcnt,abm,mmx,avx2,tune=native")
 
#define sp ' '
#define nl '\n'
#define F first
#define S second
#define pb push_back
#define oo 0x3f3f3f3f
#define mkp make_pair
#define eb emplace_back
#define pll pair<ll, ll>
#define pii pair<int, int>
#define OO 0x3f3f3f3f3f3f3f3f
#define sz(s) (int)(s).size()
#define all(a) a.begin(), a.end()
#define rall(a) a.rbegin(), a.rend()
#define fs(n) fixed<<setprecision(n)
#define mem(x, y, SZ) memset(x, y, (SZ) * sizeof(x[0]))
#define test int test_case = 1; while(test_case--)
#define tests int test_cases; cin >> test_cases; for(int tc=1; tc<=test_cases; tc++)
#define RamadanKareem ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
#define ordered_set tree<int , null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
const ll N = 2e5 + 5, MOD = 1e9 + 7;
 
void go() {
    int n, m;
    cin >> n >> m;
    unordered_map<int, int> mp;
 
    if (n == m)return cout << "YES\n", void();
    if (n % 3 != 0 || m > n)return cout << "NO\n", void();
 
 
    set<int> s;
    s.insert(n);
    int can = 0, nn;
    while (sz(s) > 0) {
        nn = *s.begin();
        mp[nn]++;
        s.erase(s.begin());
        if (nn == m) {
            mp[nn]++;
            can = 1;
            if (sz(mp) > 5)break;
            return void(cout << "YES\n");
        }
 
        if (nn % 3 == 0) {
            nn /= 3;
            if (nn == m || 2 * nn == m) {
                can = true;
                if (mp.size() > 5)
                    break;
                return void(cout << "YES\n");
            }
            if (nn % 3 == 0) {
                mp[nn]++;
                s.insert(nn);
                s.insert(2 * nn);
            }
        }
    }
    cout << (can ? "YES\n" : "NO\n");
}
 
 
signed main() {
    RamadanKareem
    tests go();
}