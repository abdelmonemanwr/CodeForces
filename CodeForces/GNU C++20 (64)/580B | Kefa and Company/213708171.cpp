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
 
void go() {
    int n, x;
    cin >> n >> x;
    vector<pair<int, int>> a(n);
    ll ans = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i].F >> a[i].S;
        ans = max(a[i].S * 1LL, ans);
    }
    sort(all(a));
    int l = 0, r = 1;
    ll cur_friendship = a[0].S;
    while (l <= r && r < n) {
        if (a[r].F - x < a[l].F) {
            cur_friendship += a[r++].S;
            ans = max(ans, cur_friendship);
        } else {
            cur_friendship -= a[l++].S;
        }
    }
    ans = max(ans, cur_friendship);
    cout << ans << nl;
}
 
signed main() {
    Y3niMht3dee4
    go();
}