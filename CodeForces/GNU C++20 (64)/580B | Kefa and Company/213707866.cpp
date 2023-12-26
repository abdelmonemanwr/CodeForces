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
    int n, d, x, y;
    cin >> n >> d;
    ll ans = 0;
    map<int, ll> mp;
    for (int i = 0; i < n; i++) {
        cin >> x >> y;
        mp[x] += y;
        ans = max(ans, mp[x]);
    }
 
    auto B = mp.begin(), E = mp.end();
    auto l = B, r = B;
    ll cur_friendship = 0;
    while (l != E && r != E) {
        if (abs(r->F - l->F) < d) {
            cur_friendship += r->S;
            r++;
        } else {
            cur_friendship -= l->S;
            l++;
        }
        ans = max(ans, cur_friendship);
    }
    ans = max(ans, cur_friendship);
    cout << ans << nl;
}
 
signed main() {
    Y3niMht3dee4
    go();
}