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
 
const ld PI = acos(-1);
const int oo = 0x3f3f3f3f;
const ll OO =  0x3f3f3f3f3f3f3f3f;
const int N = 2e5 + 5, M = 1e6 + 5, MOD = 1e9 + 7;
 
int solve(int idx, int n, vector<int> &a, vector<int> mp[], vector<int>&dp) {
    if (idx >= n - 1)return 0;
    int &ret = dp[idx];
    if(~ret)return dp[idx];
    ret = solve(idx + 1, n, a, mp, dp);
    int stop = 0;
    auto it = upper_bound(all(mp[a[idx]]), idx);
    for(auto i=it; i!=mp[a[idx]].end(); i++){
        stop++;
        if(stop == 100)break; // optimizer? lol_acc : just_wa;
        ret = max(ret, solve((*i)+1, n, a, mp, dp) + (*i - idx + 1));
    }
    if(it != mp[a[idx]].end()){
        auto x = mp[a[idx]].end();
        x--;
        ret = max(ret, solve((*x) + 1, n, a, mp, dp) + ((*x) - idx + 1));
    }
    return ret;
}
 
void Y3niMht3deee4() {
    int n, idx = 0;
    cin >> n;
    vector<int> a(n), dp(n+1, -1), mp[n+1];
    for (int &aa: a)cin >>aa,mp[aa].em(idx++);
    cout << solve(0, n, a, mp, dp) << nl;
}
 
signed main() {
    Y3niMht3dee4
    Tests Y3niMht3deee4();
}