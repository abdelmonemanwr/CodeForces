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
 
const ll N = 2e5+5, MOD = 1e9 + 7;
 
void y3ni_mht3dee4(){
  int n;
  cin >> n;
  vector<int> a(n + 1);
  for (int i = 1; i <= n; i++) {
    cin >> a[i];
    a[i] += a[i - 1];
  }
  int l = 1, r = n, w = 0, p;
  while (l <= r) {
      int m = (l + r) / 2;
      vector<int> query;
      cout << "? " << m-l+1 << " ";
      for (int i = l; i <= m; i++) {
          cout << i << " ";
      }
      cout << endl;
      int sum;
      cin >> sum;
      if (sum == a[m] - a[l - 1]) {
          l = m + 1;
      } else {
        p = m;
        r = m - 1;
      }
      w = sum;
  }
  cout << "! " << p << endl;
}
 
signed main() {
  RamadanKareem
  tests
    y3ni_mht3dee4();
  return 0;
}