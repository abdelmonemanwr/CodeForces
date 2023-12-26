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
#define Y3nimht3deee4 ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
 
const ld PI = acos(-1);
const int oo = 0x3f3f3f3f;
const ll OO = 0x3f3f3f3f3f3f3f3f;
const int N = 2e5 + 5, M = 1e6 + 5, MOD = 1e9 + 7;
 
void Bruteforce() {
    int n, x, in, divisible = 0, sum = 0;
    int idx_last_non_multiple_of_x = -1;
    int idx_first_non_multiple_of_x = -1;
    cin >> n >> x;
    for (int idx = 1; idx <= n; idx++) {
        cin >> in;
        sum += in;
        divisible += in % x ^ 1;
        if (in % x)
            idx_last_non_multiple_of_x = idx;
        if (in % x and not~idx_first_non_multiple_of_x)
            idx_first_non_multiple_of_x = idx;
 
    }
    if (divisible == n) {
        rv(cout << "-1\n");
    }
    if (sum % x) {
        rv(cout << n << nl);
    }
    int ans = n;
    int remove_minimum_segment = min(idx_first_non_multiple_of_x, n - idx_last_non_multiple_of_x + 1);
    ans -= remove_minimum_segment;
    cout << ans << nl;
}
 
signed main() {
    Y3nimht3deee4
    Tests Bruteforce();
}