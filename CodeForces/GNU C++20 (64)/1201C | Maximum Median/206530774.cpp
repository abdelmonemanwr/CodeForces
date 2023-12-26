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
 
bool can(ll median, int n, int k, vector<int> &a) {
    ll neededOperations = 0;
    for (int i = n / 2; i < n; i++) {
        if (median > a[i]) {
            neededOperations += median - a[i];
        }
    }
    return neededOperations <= k;
}
 
void y3ni_mht3dee4() {
    int n, k;
    cin >> n >> k;
 
    vector<int> a(n);
    for (int &i: a)
        cin >> i;
 
    sort(all(a));
    if (n == 1)
        rv(cout << (a[0] + k) << nl);
 
    ll l = 0, r = 1e10, mid, median;
    while (l <= r) {
        mid = (l + r) / 2;
        if (can(mid, n, k, a)) {
            median = mid;
            l = mid + 1;
        } else {
            r = mid - 1;
        }
    }
    cout << median << nl;
}
 
signed main() {
    WAAAAADY
    // Tests
    y3ni_mht3dee4();
}