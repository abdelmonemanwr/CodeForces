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
const ll N = 1e6 + 5, M = 1e6 + 5, MOD = 1e9 + 7;
 
void File() {
    ios_base::sync_with_stdio(false), cout.tie(nullptr), cin.tie(nullptr);
#ifndef ONLINE_JUDGE
    freopen("input.txt", " r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}
 
void solve() {
    vector<bool> primes(N, true);
    for (int prime = 2; prime <= N / prime; prime++) {
        if (primes[prime]) {
            for (int multiple = prime * prime; multiple < N; multiple += prime) {
                primes[multiple] = false;
            }
        }
    }
    vector <ll> ans;
    for (int prime = 2; prime < N; prime++) {
        if (primes[prime]) {
            ans.emplace_back(prime * 1ll * prime);
        }
    }
    ll n, x;
    cin >> n;
    while (n--) {
        cin >> x;
        bool ok = *lower_bound(ans.begin(), ans.end(), x) == x;
        cout << (ok ? "YES" : "NO") << nl;
    }
}
 
signed main() {
    File();
    solve();
}