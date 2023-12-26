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
  int n; cin >> n;
  string s; cin >> s;
  vector<int>fr[26];
  memset(fr, 0, sizeof(fr));
  for(int i=0; i<n; i++)
    fr[s[i] - 'a'].pb(i);
  bool can = true;
  for(int i=0; i<26; i++){
    int odd = 0, even = 0;
    for(auto x: fr[i]){
      if(x&1^1)
        even++;
      else
        odd++;
    }
    if(odd && even){
      can = false;
      break;
    }
  }
  if(can)
    cout << "YES" << nl;
  else
    cout << "NO" << nl;
}
 
signed main() {
  RamadanKareem
  tests
    y3ni_mht3dee4();
  return 0;
}