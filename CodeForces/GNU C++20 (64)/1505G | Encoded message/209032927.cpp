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
const ll N = 1e5 + 5, MOD = 1e9 + 7, oo = 2e9, OO = 2e18;
 
vector<string> encoding = {
 "1 0 0 1 0",
 "1 1 0 2 0",
 "2 0 0 1 1",
 "2 1 0 1 2",
 "1 1 0 1 1",
 "2 1 0 2 1",
 "2 2 0 2 2",
 "1 2 0 2 1",
 "1 1 0 1 1",
 "1 2 0 1 2",
 "1 0 1 2 0",
 "1 1 1 3 0",
 "2 0 1 2 1",
 "2 1 1 2 2",
 "1 1 1 2 1",
 "2 1 1 3 1",
 "2 2 1 3 2",
 "1 2 1 3 1",
 "1 1 1 2 1",
 "1 2 1 2 2",
 "1 0 2 2 1",
 "1 1 2 3 1",
 "1 2 1 1 3",
 "2 0 2 2 2",
 "2 1 2 2 3",
 "1 1 2 2 2"
};
 
void y3ni_mht3dee4() {
  int n;
  cin >> n;
  cin.ignore();
  string ans;
  for(int i=1; i<=n; i++){
    string encode;
    getline(cin, encode);
    for(int idx=0; idx<26; idx++){
      if(encoding[idx]==encode){
        ans+=char('a'+idx);
        break;
      }
    }
  }
  cout << ans << nl;
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