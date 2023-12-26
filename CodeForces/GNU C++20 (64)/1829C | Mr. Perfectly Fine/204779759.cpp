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
 
bool cmp(pair<int, string> a, pair<int, string> b) {
    if (a.second == b.second)return a.first < b.first;
    return a.second > b.second;
}
 
void y3ni_mht3dee4() {
    int n;
    cin >> n;
    vector<pair<int, string>> a(n);
    for (int i = 0; i < n; i++) cin >> a[i].first >> a[i].second;
    sort(all(a), cmp);
    ll ans = OO;
    for (int i = 0; i < n; i++) {
        if (a[i].second == "00")continue;
        if (a[i].second == "11") {
            ans = min(ans, a[i].first * 1ll);
        } else {
            if (a[i].second == "01") {
                int idx = lower_bound(all(a), make_pair(a[i].first, "10"), cmp) - a.begin();
                if (idx == n || a[idx].second != "10")continue;
                ans = min(ans, a[i].first * 1ll + a[idx].first * 1ll);
            } else {
                int idx = lower_bound(all(a), make_pair(a[i].first, "01"), cmp) - a.begin();
                if (idx == n || a[idx].second != "01")continue;
                ans = min(ans, a[i].first * 1ll + a[idx].first * 1ll);
            }
        }
    }
    cout << (ans == OO ? -1 : ans) << nl;
}
 
signed main() {
    EidMubarak
    Tests y3ni_mht3dee4();
}