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
#define Tests int test_cases;cin>>test_cases; for(int tc=1; tc<=test_cases; tc++)
#define IOS ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
 
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization("unroll-loops")
 
ll M = 1;
const ld PI = acos(-1);
const ll N = 1e5 + 5, MOD = 1e9 + 7, oo = 2e9, OO = 2e18;
 
ll logBase(int base, int number) {return log(number) / log(base);}
 
ll lcm(ull a, ull b){  return a / __gcd(a, b) * b;}
 
vector<ll>jiro_atk, jiro_def, ciel_atk;
 
ll calc1(){
  ll ans = 0;
  ll jiro_atk_idx = 0;
  ll jiro_atk_cnt = sz(jiro_atk);
  ll jiro_def_cnt = sz(jiro_def);
  ll ciel_atk_cnt = sz(ciel_atk);
  ll ciel_atk_idx = ciel_atk_cnt-1;
 
  while(jiro_atk_idx < jiro_atk_cnt && ciel_atk_idx>=0){
    if(jiro_atk[jiro_atk_idx]<=ciel_atk[ciel_atk_idx]){
      ans += (ciel_atk[ciel_atk_idx] - jiro_atk[jiro_atk_idx]);
      jiro_atk_idx++;
      ciel_atk_idx--;
    } else {
      break;
    }
  }
  return ans;
}
 
 
ll calc2(){
  ll mx = 0;
  ll jiro_atk_cnt = sz(jiro_atk);
  ll jiro_def_cnt = sz(jiro_def);
  ll ciel_atk_cnt = sz(ciel_atk);
 
  for(ll &jiro_def_card_power: jiro_def){
    auto up = upper_bound(all(ciel_atk), jiro_def_card_power);
    if(up<ciel_atk.end() && up>=ciel_atk.begin())
        ciel_atk.erase(up);
    else return 0ll;
  }
 
  for(ll &jiro_atk_card_power: jiro_atk){
    auto lo = lower_bound(all(ciel_atk), jiro_atk_card_power);
    if(lo<ciel_atk.end() && lo >= ciel_atk.begin() && jiro_atk_card_power <= *lo){
      mx += (*lo - jiro_atk_card_power);
      ciel_atk.erase(lo);
    } else {
      return mx;
    }
  }
 
  for(ll &rest_powers: ciel_atk)
    mx += rest_powers;
  return mx;
}
 
void y3ni_mht3dee4() {
  ll n, m, x;
  cin >> n >> m;
  ciel_atk = vector<ll>(m);
  for(int i=0; i<n; i++){
    string s;
    cin >> s;
    cin >> x;
    if(s == "ATK"){
      jiro_atk.em(x);
    } else {
      jiro_def.em(x);
    }
  }
  for(ll &power: ciel_atk)
    cin >> power;
 
  sort(all(jiro_atk)), sort(all(jiro_def)), sort(all(ciel_atk));
  x = calc1();
  x = max(x, calc2());
  cout << x << nl;
}
 
signed main()
{IOS;
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#else
#endif
    y3ni_mht3dee4();
}