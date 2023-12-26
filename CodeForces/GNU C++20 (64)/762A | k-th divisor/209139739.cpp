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
 
ll M = 1;
const ld PI = acos(-1);
const ll N = 1e6 + 5, MOD = 1e9 + 7, oo = 2e9, OO = 2e18;
 
ll logBase(int base, int number) {return log(number) / log(base);}
 
ll lcm(ll a, ll b){  return a / __gcd(a, b) * b;}
 
void y3ni_mht3dee4() {
  ll n;
  int k;
  scanf("%lld%d", &n, &k);
  vector<ll>divs;
  for(ll i=1; i<=n/i; i++) {
    if(n % i == 0) {
      divs.em(i);
      if(i != n/i)
        divs.em(n/i);
    }
  }
  sort(all(divs));
  if(k > sz(divs)) {
    printf("-1\n");
    return;
  }
  printf("%lld\n", divs[k-1]);
 
}
 
signed main()
{
  // IOS;
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#else
#endif
  // Tests
  y3ni_mht3dee4();
}