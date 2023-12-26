#include <bits/stdc++.h>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/assoc_container.hpp>
 
using namespace std;
using ld = long double;
using ll = long long int;
using namespace __gnu_pbds;
 
#define sp ' '
#define nl '\n'
#define OO 0x3f3f3f3f
#define pii pair<int , int>
#define sz(s) (int)(s).size()
#define pb(val) push_back(val)
#define all(a) a.begin(), a.end()
#define rall(a) a.rbegin(), a.rend()
#define Testcases int test_cases; cin >> test_cases; for(int tc=1; tc<=test_cases; tc++)
#define ordered_set tree<int , null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
#define Easy_Peasy_Lemon_Squeezy ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
 
bool cmp(pii &a, pii &b) {
    if (a.second == b.second)return a.first < b.first;
    return a.second > b.second;
}
 
void Solve() {
    int n;
    cin >> n;
    int a[3][n];
    int lstSum = 0;
    for (int i = 0; i < 3; i++) {
        int sum = 0;
        for (int j = 0; j < n - i; j++) {
            cin >> a[i][j];
            sum+=a[i][j];
        }
        if(!i)lstSum = sum;
        else cout<<lstSum - sum<<nl, lstSum = sum;
    }
}
 
signed main() {
    Easy_Peasy_Lemon_Squeezy
    // Testcases
    Solve();
    return 0;
}