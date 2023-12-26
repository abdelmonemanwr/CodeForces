#include <bits/stdc++.h>
 
using namespace std;
#define ll long long
#define ld long double
 
const ld PI = acos(-1);
const ll N = 1e6 + 5, MOD = 1e9 + 7, oo = 2e9, OO = 2e18;
 
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
#define Y3niMht3dee4 ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
 
bool cmp1(pair<int, pair<int, int>> &a, pair<int, pair<int, int>> &b) {
    if (a.F == b.F) {
        return a.S.S < b.S.S;
    }
    return a.F < b.F;
}
 
bool cmp2(pair<int, pair<int, int>> &a, pair<int, pair<int, int>> &b) {
    return a.S.F < b.S.F;
}
 
void y3ni_mht3dee4() {
    int n, k, x = 0;
    cin >> n >> k;
    vector<pair<int, pair<int, int>>> a(n);
    vector<int> b(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i].F;
        a[i].S.F = i;
    }
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }
 
    sort(all(a), cmp1);
    sort(all(b));
 
    for (int i = 0; i < n; i++) {
        a[i].S.S = b[i];
    }
 
    sort(all(a), cmp2);
 
    for (auto &vpp: a) {
        cout << vpp.S.S << sp;
    }
    cout << nl;
}
 
signed main() {
    Y3niMht3dee4
    Tests y3ni_mht3dee4();
}