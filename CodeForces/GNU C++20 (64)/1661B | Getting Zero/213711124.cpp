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
#define pii pair<int, int>
#define sz(s) (int)(s.size())
#define all(a) a.begin(), a.end()
#define rall(a) a.rbegin(), a.rend()
#define Tests int test_cases;cin>>test_cases; for(int tc=1; tc<=test_cases; tc++)
 
#define Y3niMht3dee4 ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
const ld PI = acos(-1);
const int oo = 0x3f3f3f3f;
const ll OO = 0x3f3f3f3f3f3f3f3f;
 
 
const int N = 32770, M = 1e6 + 5, MOD = 32768;
 
bool can(int x, int add, int mul) {
    x += add;
    x *= (1ll << mul);
    return not(x % MOD);
}
 
void go() {
    int n, x;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> x;
        int ans = 16;
        for (int add = 0; add < 16; add++) {
            for (int mul = 0; mul < 16; mul++) {
                if (can(x, add, mul)) {
                    ans = min(ans, add + mul);
                }
            }
        }
        cout << ans << sp;
    }
}
 
signed main() {
    Y3niMht3dee4
    go();
}