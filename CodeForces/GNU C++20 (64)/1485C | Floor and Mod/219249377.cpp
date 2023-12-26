#include <bits/stdc++.h>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/assoc_container.hpp>
 
using namespace std;
using namespace __gnu_pbds;
 
#define sp ' '
#define nl '\n'
#define F first
#define S second
#define em emplace_back
#define ll long long int
#define sz(s) (int)(s.size())
#define all(a) a.begin(), a.end()
#define rall(a) a.rbegin(), a.rend()
#define IOS ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
#define Oset tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
 
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization("unroll-loops")
 
const ll OO = 0x3f3f3f3f3f3f3f3f;
const int N = 1e3 + 5, M = 1e6 + 7, MOD = 1e9 + 7, oo = 0x3f3f3f3f;
 
void brute() {
    int mx = 0;
    vector<vector<pair<int, int>>> a(40);
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) {
            if (i / j == i % j) {
                int x = i / j;
                a[x].em(i, j);
            }
        }
    }
    for (int i = 1; i < 40; i++) {
        cout << i << ":\n";
        for (auto p: a[i]) {
            cout << p.first << " " << p.second << '\n';
        }
        cout << '\n';
    }
}
 
void solve() {
    ll x, y;
    cin >> x >> y;
    ll ans = 0;
    for (ll i = 1; i * i < x; i++)
        ans += max(min(y, x / i - 1) - i, 0LL);
    cout << ans << '\n';
}
 
signed main() {
    IOS
    int T = 1;
    cin >> T;
    for (int i = 1; i <= T; i++) {
        solve();
    }
    return 0;
}