#include <bits/stdc++.h>
 
using namespace std;
#define nl '\n'
#define sp ' '
#define em emplace_back
#define sz(s) (int)(s.size())
#define IOS ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization("unroll-loops")
 
const long long OO = 0x3f3f3f3f3f3f3f3f;
const int N = 1e4 + 3, M = 1e6 + 7, MOD = 1e9 + 7, oo = 0x3f3f3f3f;
 
void Y3ni_Mht3dee4() {
    long long n;
    cin >> n;
    int ans = 0, mx = 0;
    for (int i = 1; i <= 45; i++) {
        if (n % i) {
            ans = max(ans, mx);
            mx = 0;
        } else {
            mx++;
        }
    }
    cout << ans << nl;
}
 
signed main() {
    IOS
    int T = 1;
    cin >> T;
    while (T--) {
        Y3ni_Mht3dee4();
    }
}