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
  int n;
  cin >> n;
  vector<int>a(n);
  for(int i=0; i<n; i++)
    cin >> a[i];
  if(n == 1){
    if(a[0]==1)cout <<"YES\n";
    else cout << "NO\n";
    return;
  }
  int cur = 0;
  sort(all(a));
  for(int i=0; i<n; i++){
    if(a[i]==1)cur+=1;
    else{
      if(a[i]>cur){
        cout << "NO\n";
        return;
      }
      //cout << cur << sp;
      cur += a[i];
    }
  }
  cout << "YES\n";
}
 
signed main() {
  RamadanKareem
  tests
    y3ni_mht3dee4();
  return 0;
}