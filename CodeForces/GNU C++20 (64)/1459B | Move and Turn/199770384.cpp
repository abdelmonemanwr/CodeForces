#include <bits/stdc++.h>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/assoc_container.hpp>
 
using namespace std;
using ld = long double;
using ll = long long int;
using namespace __gnu_pbds;
 
#define sp ' '
#define nl '\n'
#define oo 0x3f3f3f3f
#define OO 0x3f3f3f3f3f3f3f3f
#define F first
#define S second
#define pb push_back
#define eb emplace_back
#define pii pair<int, int>
#define sz(s) (int)(s).size()
#define all(a) a.begin(), a.end()
#define rall(a) a.rbegin(), a.rend()
#define fs(n) fixed<<setprecision(n)
#define mem(x, y, SZ) memset(x, y, (SZ) * sizeof(x[0]))
#define test int test_case = 1; while(test_case--)
#define tests int test_cases; cin >> test_cases; for(int tc=1; tc<=test_cases; tc++)
#define RamadanKareem ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
#define ordered_set tree<int , null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
// 824071958
const ll N = 2e6+5, MOD = 1e9 + 7;
 
int dx[] = {0, 0, 1, -1};
int dy[] = {1, -1, 0, 0};
 
ll lcm(ll x, ll y) {
  return (x / __gcd(x, y) * y);
}
 
ll fact(ll n){
  if(n<2)return 1LL;
  return (n*fact(n-1))%MOD;
}
 
void y3ni_mht3dee4() {
  ll n;
  cin >> n;
  if(n<3)cout << 4 << nl;
  else {
    if(n&1^1){
      cout << (n/2+1)*(n/2+1);
    } else {
      n = (n + 1) >> 1;
      ll ans = n * (n + 1) * 2;
      cout << ans << nl;
    }
  }
}
 
signed main() {
  RamadanKareem
  test y3ni_mht3dee4();
}