#include <bits/stdc++.h>
 
using namespace std;
#define ll long long
#define ld long double
 
const ld PI = acos(-1);
const ll N = 1e6 + 5, MOD = 1e9 + 7, oo = 2e9, OO = 2e18;
 
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
#define sz(s) (ll)(s.size())
#define all(a) a.begin(), a.end()
#define rall(a) a.rbegin(), a.rend()
#define Tests int test_cases; cin >> test_cases; for(int tc=1; tc<=test_cases; tc++)
#define Y3niMht3dee4 ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
 
void y3ni_mht3dee4() {
    int n, x;
    cin >> n;
    vector<int>o,e;
    for(int i=1; i<=n; i++)
        cin >> x, (x&1 ? o.em(x) : e.em(x));
    if(!sz(o) || !sz(e))rv(cout<<"YES\n");
    sort(all(o)), sort(all(e));
    if(e[0]>o[0])rv(cout<<"YES\n");
    rv(cout<<"NO\n");
}
 
signed main() {
    Y3niMht3dee4
    Tests y3ni_mht3dee4();
}