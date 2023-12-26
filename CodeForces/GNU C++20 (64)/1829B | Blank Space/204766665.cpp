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
 
void y3ni_mht3dee4() {
    int n;
    cin >> n;
    vector<int> a(n + 2);
    for (int i = 1; i <= n; i++) cin >> a[i];
    a[n + 1] = 2, a[0] = 2;
    int ans = 0, cnt = 0;
    for (int i = 0; i < n + 2; i++) {
        if (a[i] == 0)cnt++;
        else {
            ans = max(ans, cnt), cnt = 0;
        }
    }
    cout << ans << nl;
}
 
signed main() {
    EidMubarak
    Tests y3ni_mht3dee4();
}