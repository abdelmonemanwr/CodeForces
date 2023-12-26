#include <bits/stdc++.h>
 
using namespace std;
using ll = long long int;
 
#define sp ' '
#define nl '\n'
#define F first
#define S second
#define PI acos(-1)
#define pb push_back
#define oo 0x3f3f3f3f
#define OO 0x3f3f3f3f3f3f3f3f
#define Map map<int , int>
#define pii pair<ll , ll>
#define sz(s) (int)(s).size()
 
const int N = 2e5 + 5;
 
vector<int> PF(int n){
    vector<int>pf;
    for(int i=2; i<=n/i; i++)
        while(n%i==0)
            pf.pb(i), n /= i;
    if(n > 1) pf.pb(n);
    return pf;
}
 
void Solve() {
    int n;
    cin >> n;
 
    if(n == 1)return cout << "1 0" << nl, void();
 
    Map mp;
    vector<int> pf = PF(n);
    for (int i = 0; i < sz(pf); i++)
        mp[pf[i]]++;
 
    int mx = -oo, mn = oo;
    for(auto &it : mp)
        mx = max(mx, it.second), mn = min(mn, it.second);
 
    for(ll i = 0; i < 32; i++)
        if((1LL << i) >= mx)
            {mx = (1ll << i); break;}
 
    ll op = (mx != mn);
 
    while(mx > 1) op++, mx /= 2;
 
    n = 1;
    for(auto &it : mp) n *= it.first;
    cout << n << ' ' << op << nl;
}
 
signed main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr),
    cout.tie(nullptr), cerr.tie(nullptr);
    Solve();
    return 0;
}