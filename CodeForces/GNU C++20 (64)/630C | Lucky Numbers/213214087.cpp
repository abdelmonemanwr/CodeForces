#include <bits/stdc++.h>
 
using namespace std;
using ld = long double;
using ll = long long int;
 
#define nl '\n'
#define sp ' '
#define F first
#define S second
#define EPS 1e-6
#define pb push_back
#define mkp make_pair
#define rz return 0;
#define rv return void
#define em emplace_back
#define sz(s) (int)(s.size())
#define all(a) a.begin(), a.end()
#define rall(a) a.rbegin(), a.rend()
#define Test int test_cases = 1; while(test_cases--)
#define tests int test_cases; scanf("%d", &test_cases); while(test_cases--)
#define Tests int test_cases; cin>>test_cases; for(int tc=1; tc<=test_cases; tc++)
#define Y3niMht3dee4 ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
 
ll M = 1;
const ld PI = acos(-1);
const ll N = 1e6 + 5, MOD = 1e9 + 7, oo = 2e9, OO = 2e18;
 
ll fp(ll base, ll power){
    if(!power)return 1ll;
    ll sq = fp(base, power >> 1ll);
    sq *= sq;
    if(power & 1)sq *= base;
    return sq;
}
 
void Y3niMht3deee4() {
    ll n;
    cin >> n;
    ll ans = 0;
    for(ll i=1; i<=n; i++)
        ans += fp(2, i);
    cout << ans << nl;
}
 
signed main() {
    Y3niMht3dee4
    // Tests 
    Y3niMht3deee4();
}