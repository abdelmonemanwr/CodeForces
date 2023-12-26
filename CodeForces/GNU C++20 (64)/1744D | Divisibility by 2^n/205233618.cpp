#include <bits/stdc++.h>
 
using namespace std;
#define ll long long int
#define ld long double
 
const int oo = 0x3f3f3f3f;
const ll OO = 0x3f3f3f3f3f3f3f3f;
const int N = 200005, MOD = 1e9 + 7; // 8e7+5
 
#define EPS 1e-4
#define nl '\n'
#define rv return void
#define sz(s) (ll)(s.size())
#define all(a) a.begin(), a.end()
#define rall(a) a.rbegin(), a.rend()
#define Tests int test_cases; cin >> test_cases; for(int tc=1; tc<=test_cases; tc++)
#define EidMubarak ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
 
int Twos(int x) {
    int ret = 0;
    while (x & 1 ^ 1)
        ret++, x >>= 1;
    return ret;
}
 
void y3ni_mht3dee4() {
    int n, x, cnt = 0;
    cin >> n;
    int twos[n + 1];
    for (int i = 1; i <= n; i++) {
        cin >> x;
        cnt += Twos(x);
        twos[i] = Twos(i);
    }
    if (cnt >= n)rv(cout << 0 << nl);
    sort(twos + 1, twos + n + 1, greater<int>());
    int ans = 0;
    for (int i = 1; i <= n; i++) {
        cnt += twos[i], ans++;
        if (cnt >= n)rv(cout << ans << nl);
    }
    cout << "-1\n";
}
 
signed main() {
    EidMubarak
    Tests y3ni_mht3dee4();
}