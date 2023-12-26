#include <bits/stdc++.h>
 
using namespace std;
#define ll long long
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
#define Tests int test_cases;cin>>test_cases; for(int tc=1; tc<=test_cases; tc++)
#define IOS ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
 
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization("unroll-loops")
 
void y3ni_mht3dee4() {
  int n;
  string s;
  cin >> n >> s;
 
  int a[n+1]={0};
  for(int i = 1; i <= n; i++)
    a[i]=s[i-1] - 48 + a[i-1];
 
  ll ans = 0;
  for(int i = 1; i <= n; i++)
      for(int j=i;j<=n;j++)
        ans += (a[j] - a[i - 1] == j - i + 1);
 
  cout<<ans<<nl;
}
 
signed main()
{
  IOS;
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#else
#endif
  Tests y3ni_mht3dee4();
}