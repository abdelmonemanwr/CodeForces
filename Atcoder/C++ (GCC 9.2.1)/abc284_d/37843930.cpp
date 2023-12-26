#include <bits/stdc++.h>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/assoc_container.hpp>

using namespace std;
using ll = long long int;
using namespace __gnu_pbds;

#define sp ' '
#define nl '\n'
#define F first
#define S second
#define PI acose(-1)
#define MOD 1000000007
#define OO 0x3f3f3f3f
#define LOO 0x3f3f3f3f3f3f3f3f
#define sz(s) (int)(s).size()
#define pb(val) push_back(val)
#define all(a) a.begin(), a.end()
#define rall(a) a.rbegin(), a.rend()
#define MAX(a) (*max_element(all(a)))
#define MIN(a) (*min_element(all(a)))
#define mem(x, y) memset(x,y,sizeof x)
#define pii pair<int, int>
#define cin_vector(a) for(auto& i : a) cin >> i;
#define forn(i, a, n, k) for(int i=a; i<n; i+=k)
#define ordered_set tree<int , null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
#define EasyPeasyLemonSqueezy ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
#define ForEachTestCase int test_cases; cin >> test_cases; for(int tc=1; tc<=test_cases; tc++)

ll fp(ll b, ll p) {
    if (p == 0) return 1;
    ll sq = fp(b, p / 2) % MOD;
    sq *= sq;
    sq %= MOD;
    if (p & 1) sq = (sq * (b % MOD)) % MOD;
    return sq;
}

ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }

ll lcm(ll a, ll b) { return a / gcd(a, b) * b; }

ll mod(ll a, ll b) { return ((a % b) + b) % b; }

void TRY_SOLVE_IT() {
    unsigned long long n;
    cin >> n;
    for (unsigned long long i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            unsigned long long p = i, q = n / (i * i);
            if (p * p * q == n) {
                cout << p << sp << q << nl;
                return;
            }
            p = i;
            q = (ll) sqrt(n / p);
            if (p * q * q == n) {
                cout << q << sp << p << nl;
                return;
            }
        }
    }
}

signed main() {
    EasyPeasyLemonSqueezy
#ifndef ONLINE_JUDGE
    freopen("in.txt", " r", stdin);
    freopen("out.txt", "w", stdout);
#endif
    ForEachTestCase TRY_SOLVE_IT();
    return 0;
}