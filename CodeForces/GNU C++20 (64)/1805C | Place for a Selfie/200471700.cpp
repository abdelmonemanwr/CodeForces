#include <bits/stdc++.h>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/assoc_container.hpp>
 
using namespace std;
using ld = long double;
using ll = long long int;
using namespace __gnu_pbds;
 
#pragma GCC optimize("-Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,sse4.2,popcnt,abm,mmx,avx2,tune=native")
#pragma GCC optimize("-ffast-math")
#pragma GCC optimize("-funroll-loops")
#pragma GCC optimize("-funroll-all-loops,-fpeel-loops,-funswitch-loops")
 
#define sp ' '
#define nl '\n'
#define oo 0x3f3f3f3f
#define OO 0x3f3f3f3f3f3f3f3f
#define F first
#define S second
#define pb push_back
#define eb emplace_back
#define pii pair<int, int>
#define sz(s) (int)(s).size()
#define all(a) a.begin(), a.end()
#define rall(a) a.rbegin(), a.rend()
#define fs(n) fixed<<setprecision(n)
#define mem(x, y, SZ) memset(x, y, (SZ) * sizeof(x[0]))
#define test int test_case = 1; while(test_case--)
#define tests int test_cases; cin >> test_cases; for(int tc=1; tc<=test_cases; tc++)
#define RamadanKareem ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
#define ordered_set tree<int , null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
const int INF = 2e9;
const ll N = 2e6 + 5, MOD = 1e9 + 7;
 
int dx[] = {0, 0, 1, -1};
int dy[] = {1, -1, 0, 0};
 
ll lcm(ll x, ll y) {
    return (x / __gcd(x, y) * y);
}
 
void y3ni_mht3dee4() {
    int n, m, k;
    cin >> n >> m;
    vector<int> lines(n);
    for (int i = 0; i < n; i++)
        cin >> lines[i];
    sort(all(lines));
 
    for (int i = 0; i < m; i++) {
        // y = ax^2 + bx + c = kx
        // kx - bx = ax^2 + c
        // x (k-b) = ax^2 + c
        // new_b -> (k - b)
        // b^2 - 4ac < 0 // no intersection
        // b^2 < 4ac
        int a, b, c;
        cin >> a >> b >> c;
        ll x = 4ll * a * c;
        int lo = lower_bound(all(lines), b) - lines.begin();
        if (lo < n) {
            ll new_b = lines[lo] - b;
            new_b *= new_b;
            if (new_b < x) {
                cout << "YES\n" << lines[lo] << nl;
                continue;
            }
        }
        if (lo - 1 >= 0) {
            ll new_b = lines[lo - 1] - b;
            new_b *= new_b;
            if (new_b < x) {
                cout << "YES\n" << lines[lo - 1] << nl;
                continue;
            }
        }
        cout << "NO\n";
    }
}
 
signed main() {
    RamadanKareem
    tests {
        y3ni_mht3dee4();
        cout << nl;
    }
}