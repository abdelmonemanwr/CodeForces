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
    // rv(cout<<INT_MAX << sp << ((1ll<<31)-1) << nl);
 
    int n, Or = 0, mx = 0, idxx;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        Or |= a[i];
        if (a[i] > mx) {
            mx = a[i];
            idxx = i;
        }
    }
    a[idxx] = 0;
    vector<int> pfx;
    int cur_or = mx;
    pfx.em(mx);
    for (int i = 30; i >= 0; i--) {
        int cmx = 0, idx;
        for (int j = 0; j < n; j++) {
            if (a[j] && ((a[j] | cur_or) > cmx)) {
                cmx = max(cmx, a[j] | cur_or);
                idx = j;
            }
        }
        if (cur_or == Or) break;
        cur_or |= cmx;
        pfx.em(a[idx]);
        a[idx] = 0;
    }
    for (int &i: pfx) {
        cout << i << sp;
    }
    for (int &i: a) {
        if (i)cout << i << sp;
    }
    cout << nl;
}
 
signed main() {
    WAAAAADY
    Tests y3ni_mht3dee4();
}