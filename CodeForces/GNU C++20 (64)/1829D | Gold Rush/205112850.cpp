#include <bits/stdc++.h>
 
using namespace std;
#define ll long long int
#define ld long double
 
const int oo = 0x3f3f3f3f;
const ll OO = 0x3f3f3f3f3f3f3f3f;
const int N = 1e7 + 5, MOD = 1e9 + 7; // 8e7+5
 
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
 
map<int, int> dp;
 
bool solve(int n, int m) {
    if (n == m)return 1;
    if (n < m)return 0;
    if (dp.count(n))return dp[n];
    if (n % 3 == 0) {
        int n1 = n / 3;
        if (n1 + (n1 << 1) == n) {
            dp[n] = max(solve(n1, m), solve(n1 << 1, m));
        } else {
            dp[n] = 0;
        }
    } else {
        dp[n] = 0;
    }
    return dp[n];
}
 
void y3ni_mht3dee4() {
    int n, m;
    cin >> n >> m;
    dp.clear();
    cout << (solve(n, m)? "YES\n" : "NO\n");
}
 
signed main() {
    EidMubarak
    Tests y3ni_mht3dee4();
}