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
 
const ll N = 2e6 + 5, MOD = 1e9 + 7;
 
int dx[] = {0, 0, 1, -1};
int dy[] = {1, -1, 0, 0};
 
ll lcm(ll x, ll y) {
    return (x / __gcd(x, y) * y);
}
 
void y3ni_mht3dee4() {
    int n;
    cin >> n;
    int a[n], xor_sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        xor_sum ^= a[i];
    }
    int x = -1;
    for (int i = 0; i <= 255; i++) {
        if ((xor_sum ^ i) == 0) {
            x = i;
            break;
        }
    }
    xor_sum = 0;
    for (int i = 0; i < n; i++) {
        xor_sum ^= (x ^ a[i]);
    }
    if (xor_sum)x = -1;
    cout << x << nl;
}
 
signed main() {
    RamadanKareem
    tests y3ni_mht3dee4();
}