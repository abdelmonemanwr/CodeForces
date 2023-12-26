#include <bits/stdc++.h>
 
using namespace std;
#define ull unsigned long long int
#define ll long long int
#define ld long double
 
 
#define nl '\n'
#define sp ' '
#define F first
#define S second
#define EPS 1e-4
#define pb push_back
#define mkp make_pair
#define rz return 0;
#define rv return void
#define em emplace_back
#define sz(s) (int)(s.size())
#define all(a) a.begin(), a.end()
#define rall(a) a.rbegin(), a.rend()
#define debug(x) cout << (#x) << " is " << (x) << nl
#define Tests int test_cases;cin>>test_cases; for(int tc=1; tc<=test_cases; tc++)
#define IOS ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
 
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization("unroll-loops")
 
const ld PI = acos(-1);
const ll OO = 1e18 + 7;
const int N = 2e5+5, M = 1e6 + 7, MOD = 1e9 + 7, oo = 1e9 + 7;
 
ll logBase(int base, int number) {return log(number) / log(base);}
 
ll lcm(ll a, ll b) {return a / __gcd(a, b) * b;}
 
int n, m, q;
int l[N], r[N], idx[N], sum[N];
 
bool can(ll mid){
  for(int i = 1; i <= n; i++) // init
    sum[i] = 0;
 
 for(int i = 1; i <= mid; i++)
    sum[idx[i]] = 1;  // mark
 
 for(int i=1;i<=n;i++) // prefix
    sum[i] += sum[i-1];
 
 for(int i=1;i<=m;i++){
    ll segment = r[i] - l[i] + 1;
    ll ones = (sum[r[i]] - sum[l[i]-1]) << 1ll;
    if(ones > segment)
      return true;
  }
 return false;
}
 
 
void Y3ni_Mht3dee4(){
  cin >> n >> m;
  for(int i=1; i<=n; i++){
    l[i] = r[i] = idx[i] = 0;
  }
  for(int i=1; i<=m; i++){
    cin >> l[i] >> r[i];
  }
  cin >> q;
  for(int i=1; i<=q; i++){
    cin >> idx[i];
  }
  ll l=1, r=q, ans=-1;
  while(l<=r){
    ll mid = l+r;
    mid/=2;
    if(can(mid))ans=mid,r=mid-1;
  else l=mid+1;
  }
  cout << ans << nl;
}
 
signed main()
{IOS;
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#else
#endif
  Tests
  Y3ni_Mht3dee4();
}