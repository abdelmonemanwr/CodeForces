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
#define Y3ni_Mht3deee4 ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
 
void Y3ni_Mht3dee4() {
    int n, x;
    cin >> n;
    int zeros = 0, ones = 0, twos = 0;
    for (int i = 1; i <= n; i++) {
        cin >> x;
        if (!x)zeros++;
        else if (x == 1)ones++;
        else twos++;
    }
    cout << ((zeros <= (n + 1) >> 1) ? 0 : (ones and not twos) ? 2 : 1) << nl;
}
 
signed main() {
    Y3ni_Mht3deee4
    Tests Y3ni_Mht3dee4();
}