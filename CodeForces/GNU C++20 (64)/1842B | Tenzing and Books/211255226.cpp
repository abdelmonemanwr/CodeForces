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
#define rz return 0;
#define rv return void
#define em emplace_back
#define sz(s) (int)(s.size())
#define all(a) a.begin(), a.end()
#define rall(a) a.rbegin(), a.rend()
#define Tests int test_cases;cin>>test_cases; for(int tc=1; tc<=test_cases; tc++)
#define Y3niMht3dee4 ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
 
ll M = 1;
const ld PI = acos(-1);
const ll N = 1e6 + 5, MOD = 1e9 + 7, oo = 2e9, OO = 2e18;
 
void y3ni_mht3dee4() {
    int n, x, cur = 0;
    cin >> n >> x;
    int a[n], b[n], c[n];
    for (int &val: a)cin >> val;
    for (int &val: b)cin >> val;
    for (int &val: c)cin >> val;
    for (int &val: a) {
        if ((x | val) <= x)cur |= val;
        else break;
    }
    if (cur == x) rv(cout << "YES\n");
    for (int &val: b) {
        if ((x | val) <= x)cur |= val;
        else break;
    }
    if (cur == x) rv(cout << "YES\n");
    for (int &val: c) {
        if ((x | val) <= x)cur |= val;
        else break;
    }
    if (cur == x) rv(cout << "YES\n");
    cout << "NO\n";
}
 
signed main() {
    Y3niMht3dee4
    Tests y3ni_mht3dee4();
}