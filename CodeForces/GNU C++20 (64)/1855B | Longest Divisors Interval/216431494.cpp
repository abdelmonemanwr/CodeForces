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
 
bool comp(pair<int, int> a, pair<int, int> b) {
    return a.second < b.second;
}
 
void Y3ni_Mht3dee4() {
    long long n, i = 1, ans = 0;
    cin >> n;
    while (1) {
        if (n % i)break;
        ans++, i++;
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