#include <bits/stdc++.h>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/assoc_container.hpp>
 
using namespace std;
using ld = long double;
using ll = long long int;
using namespace __gnu_pbds;
 
#define sp ' '
#define nl '\n'
#define F first
#define S second
#define oo INT_MAX
#define OO LLONG_MAX
#define pb push_back
#define eb emplace_back
#define pii pair<int, int>
#define sz(s) (int)(s).size()
#define all(a) a.begin(), a.end()
#define rall(a) a.rbegin(), a.rend()
#define mem(x, y, SZ) memset(x, y, (SZ) * sizeof(x[0]))
#define tests int test_cases; cin >> test_cases; for(int tc=1; tc<=test_cases; tc++)
#define RamadanKareem ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
#define ordered_set tree<int , null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
 
const ll N = 1e5+5, MOD = 1e9 + 7;
 
void y3ni_mht3dee4(){
  int n, q;
  ll sum = 0;
  cin >> n >> q;
  vector<int> a(n+1, 0);
  for(int i=1; i<=n; i++)
    cin >> a[i], a[i]+=a[i-1];
 
  while(q--){
    ll l, r, x;
    cin >> l >> r >> x;
    //cout << a[n] << sp << (a[r] - a[l-1]) << sp << (r-l+1)*x << sp << a[n] - (a[r] - a[l-1]) + (r-l+1)*x << sp;
    sum = a[n] - (a[r] - a[l-1]) + (r-l+1)*x;
    if(sum&1)cout<<"YES\n";
    else cout<<"NO\n";
  }
 
}
 
signed main() {
  RamadanKareem
  tests
    y3ni_mht3dee4();
  return 0;
}