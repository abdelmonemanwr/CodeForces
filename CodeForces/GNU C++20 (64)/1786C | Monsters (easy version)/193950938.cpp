#include<ext/pb_ds/assoc_container.hpp>
#include <bits/stdc++.h>
#include <ext/rope>
#include <regex>
 
#pragma GCC optimize("03")
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization("unroll-loops")
 
#define sp ' '
#define nl '\n'
#define F first
#define S second
#define PI acos(-1)
#define pb push_back
#define OO 0x3f3f3f3f
#define sz(s) (int)size(s)
#define LOO 0x3f3f3f3f3f3f3f3f
#define all(v) v.begin(), v.end()
#define clz(x) __builtin_clz(x)           // clz(x) = count leading zeros, in 32-Bits.
#define ctz(x) __builtin_ctz(x)           // ctz(x) = count trailing zeros, in 32-Bits.
#define clzLL(x) __builtin_clzll(x)       // clzLL(x) = count leading zeros, in 64-Bits.
#define ctzLL(x) __builtin_ctzll(x)       // ctzLL(x) = count trailing zeros, in 64-Bits.
#define popCnt(x) __builtin_popcountll(x) // count the number of one’s(set bits) in an integer.
#define parity(x) __builtin_parityll(x)   // return 1 if x has odd parity else return 0. 2->(1) 4->(0).
#define Tests int Testcases = 1; cin >> Testcases; for(int Testcase = 1; Testcase <= Testcases; Testcase++)
 
using namespace std;
using ll = long long int;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<>, rb_tree_tag, tree_order_statistics_node_update> OrderedSet;
 
const ll N = 5e5 + 5, MOD = 1e9 + 7;
 
void Code() {
    ll n;
    cin >> n;
    ll a[n];
    for (ll &i: a)cin >> i;
    sort(a, a + n);
    ll spell1 = a[0] - 1;
    a[0] = 1;
    for (int i = 1; i < n; i++) {
        if (a[i] == a[i - 1] + 1 || a[i] == a[i - 1] || a[i] <= 2)continue;
        ll cut = a[i] - (a[i - 1] + 1);
        spell1 += cut;
        a[i] = a[i - 1] + 1;
    }
    cout << spell1 << nl;
}
 
int main() {
    ios_base::sync_with_stdio(false), cout.tie(nullptr), cin.tie(nullptr);
#ifndef ONLINE_JUDGE
    freopen("input.txt", " r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    Tests Code();
}