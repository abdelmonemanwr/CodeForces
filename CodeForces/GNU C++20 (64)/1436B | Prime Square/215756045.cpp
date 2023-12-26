#include <bits/stdc++.h>
 
#define sp ' '
#define nl '\n'
#define PI acos(-1)
#define pb push_back
#define sz(s) (int)s.size()
#pragma GCC optimize("03")
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization("unroll-loops")
 
using namespace std;
typedef long long int ll;
const ll N = 1e7 + 5, M = 1e6 + 5, MOD = 1e9 + 7;
 
void Files() {
    ios_base::sync_with_stdio(false), cout.tie(nullptr), cin.tie(nullptr);
#ifndef ONLINE_JUDGE
    freopen("input.txt", " r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}
 
void Solve() {
    int n;
    cin >> n;
 
    bool a[n][n];
    std::memset(a, false, sizeof(a));
 
    for (int i = 0; i < n; i++)
        a[i][i] = true, a[i][n - i - 1] = true;
 
    if (n & 1) n >>= 1, a[n][n + 1] = a[n - 1][n] = true, n <<= 1, n |= 1;
 
    for (int i = 0; i < n; i++, cout << nl)
        for (int j = 0; j < n; j++)
            cout << a[i][j] << sp;
}
 
signed main() {
    Files();
    int t;
    cin >> t;
    while(t--)
        Solve();
}