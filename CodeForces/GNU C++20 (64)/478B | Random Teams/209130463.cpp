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
#define Y3niMht3dee4 ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
 
ll M = 1;
const ld PI = acos(-1);
const ll N = 1e6 + 5, MOD = 1e9 + 7, oo = 2e9, OO = 2e18;
 
inline ll sum(int n) {
    return 1ll * n * (n - 1) / 2;
}
 
inline ll getMin(int n, int teams) {
    int people = ceil(n * 1.0 / teams);
    int mod = n % teams;
    if (!mod)return teams * 1ll * sum(people);
    ll ret = mod * 1ll * sum(people);
    int pp = people - 1;
    if (teams == 1)pp++;
    ll add = (teams - mod) * 1ll * sum(pp);
    /*cout << "sum(people - 1 + teams==1) = " << sum(people - 1 + teams==1) << nl;
    cout << "(people - 1 + teams==1) = " << (people - 1 + teams==1) << nl;
    cout << "people = " << people << nl;
    cout << "mod = " << mod << nl;
    cout << "ret = " << ret << nl;
    cout << "add = " << add << nl;
    cout << "pp = " << pp << nl;*/
    ret += add;
    return ret;
}
 
inline ll getMax(int n, int teams) {
    return sum(n - teams + 1);
}
 
inline void y3ni_mht3dee4() {
    int n, teams;
    cin >> n >> teams;
    cout << getMin(n, teams) << sp << getMax(n, teams) << nl;
}
 
signed main() {
    Y3niMht3dee4
    //Tests
    y3ni_mht3dee4();
}