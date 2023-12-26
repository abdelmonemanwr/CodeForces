#include <bits/stdc++.h>
 
using namespace std;
#define ll long long
#define ld long double
 
const ld PI = acos(-1);
const ll OO = 1e18, N = 1e4 + 5, MOD = 1e9 + 7, oo = 2e9;
 
#define nl '\n'
#define sp ' '
#define F first
#define S second
#define EPS 1e-4
#define pb push_back
#define mkp make_pair
#define rz return 0;
#define rv return void
#define em emplace_back
#define sz(s) (ll)(s.size())
#define all(a) a.begin(), a.end()
#define rall(a) a.rbegin(), a.rend()
#define Tests int test_cases; cin >> test_cases; for(int tc=1; tc<=test_cases; tc++)
#define WAAAAADY ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
 
void y3ni_mht3dee4() {
    int n, m;
    cin >> n >> m;
 
    vector<string> s(n);
    for (string &ss: s)
        cin >> ss;
 
    vector<int> a(m);
    for (int &aa: a)
        cin >> aa;
    
    ll sum = 0;
    for (int i = 0; i < m; i++) {
        vector<int> fr(26, 0);
        for (int j = 0; j < n; j++) {
            int idx = s[j][i] - 'A';
            fr[idx]++;
        }
        int mx = *max_element(all(fr));
        sum += mx * 1ll * a[i];
    }
    cout << sum << nl;
}
 
signed main() {
    WAAAAADY
    // Tests
    y3ni_mht3dee4();
}