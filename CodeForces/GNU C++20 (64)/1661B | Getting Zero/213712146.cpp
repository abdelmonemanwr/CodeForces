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
 
#define Y3niMht3dee4 ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
const ld PI = acos(-1);
const int oo = 0x3f3f3f3f;
const ll OO = 0x3f3f3f3f3f3f3f3f;
 
 
const int N = 4e4 + 5, M = 1e6 + 5, MOD = 32768;
 
int dp[N][20];
 
int DP(int x, int operations) {
    if (!x)return operations;
    if (operations > 15)return oo;
    int &ret = dp[x][operations];
    if (~ret)return ret;
    int child1 = DP((x + 1) % MOD, operations + 1);
    int child2 = DP((x << 1ll) % MOD, operations + 1);
    ret = min(child1, child2);
    return ret;
}
 
void go() {
    int n, x;
    cin >> n;
    for (int i = 0; i < N; i++)
        for (int j = 0; j < 20; j++)
            dp[i][j] = -1;
    while (n--) {
        cin >> x;
        cout << DP(x, 0) << sp;
    }
}
 
signed main() {
    Y3niMht3dee4
    go();
}