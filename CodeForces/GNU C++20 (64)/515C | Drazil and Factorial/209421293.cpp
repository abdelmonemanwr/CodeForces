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
  int n;
  string a;
  cin >> n >> a;
  vector<int> ans;
  for(int i = 0; i < n; i++) {
    int dig = a[i] - '0';
    if(dig==2||dig==3||dig==5||dig==7)ans.em(dig);
    else {
      if(dig==4)ans.em(2), ans.em(2), ans.em(3);
      else if(dig==6)ans.em(5), ans.em(3);
      else if(dig==8)ans.em(7), ans.em(2), ans.em(2), ans.em(2);
      else if(dig==9)ans.em(7), ans.em(3), ans.em(3), ans.em(2);
    }
  }
  sort(rall(ans));
  for(auto i: ans) cout << i;
}
 
signed main()
{
  IOS;
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#else
#endif
  // Tests
  y3ni_mht3dee4();
}
 
 
/*
// primes
2 -> 2
3 -> 3
5 -> 5
7 -> 7
 
// not primes
 
4 -> 24 = 2 * 2 * 3  --> why not 2 * 2 * 2 * 3
// because fact(2) * fact(2) * fact(3) = 24
// while fact(2) * fact(2) * fact(2) * fact(3) = 48
 
 
6 -> 53 -> fact(5) * fact(3)
// 120 * 6 = 720 = fact(6)
 
8! -> 40320
8  -> 7222
 
 
9! = 362880
9! = 7! * 3! * 3! * 2!
 
*/