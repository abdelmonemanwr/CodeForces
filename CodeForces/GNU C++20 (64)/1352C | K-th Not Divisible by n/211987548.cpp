#include <bits/stdc++.h>
 
using namespace std;
using ld = long double;
using ll = long long int;
 
#define nl '\n'
#define sp ' '
#define F first
#define S second
#define EPS 1e-6
#define pb push_back
#define mkp make_pair
#define r(x) return x
#define rv return void
#define em emplace_back
#define sz(s) (int)(s.size())
#define all(a) a.begin(), a.end()
#define rall(a) a.rbegin(), a.rend()
#define Tests int test_cases;cin>>test_cases; for(int tc=1; tc<=test_cases; tc++)
#define Y3niMht3dee4 ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
 
const ld PI = acos(-1);
const int oo = 0x3f3f3f3f;
const ll OO = 0x3f3f3f3f3f3f3f3f;
const int N = 2e5 + 5, M = 1e6 + 5, MOD = 1e9 + 7;
 
void Y3niMht3deee4() {
    int n, k;
    cin >> n >> k;
    ll ans = k, prv = 0;
    while (true) {
        ll divisible = ans / n - prv / n;
        if (!divisible)break;
        prv = ans;
        ans += divisible;
    }
    if(!(ans%n))ans++;
    cout << ans << nl;
}
 
signed main() {
    Y3niMht3dee4
    Tests Y3niMht3deee4();
}