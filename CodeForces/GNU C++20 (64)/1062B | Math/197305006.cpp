#include <bits/stdc++.h>
 
using namespace std;
using ll = unsigned long long int;
 
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
 
vector<int>pf(int n){
    vector<int>p;
    for(int i=2; i<=n/i; i++){
        while(n%i==0){
            p.pb(i);
            n/=i;
        }
    }
    if(n>1) p.pb(n);
    return p;
}
 
void Solve() {
    int n;
    cin >> n;
    if(n==1){
        cout << "1 0" << nl;
        return;
    }
    vector<int> v = pf(n);
    map<int, int> mp;
    for (int i = 0; i < sz(v); i++)
        mp[v[i]]++;
 
    int mx = -oo, mn = oo;
    for(auto it:mp){
        mx = max(mx, it.S);
        mn = min(mn, it.S);
    }
 
    for(ll i=0; i<32; i++){
        if((1LL << i) >= mx){
            mx = (1ll << i);
            break;
        }
    }
 
    ll op = (mx!=mn);
 
    while(mx>1){
        op++;
        mx/=2;
    }
    n = 1;
    for(auto it:mp){
        n *= it.F;
    }
    cout << n << ' ' << op << nl;
}
 
signed main() {
    ios_base::sync_with_stdio(false), cout.tie(nullptr), cin.tie(nullptr);
    int tc = 1;
 //cin >> tc;
    while (tc--)
        Solve();
}