#include <bits/stdc++.h>
 
using namespace std;
#define ll long long
#define ld long double
 
const ld PI = acos(-1);
const ll OO = 1e18, N = 1e4 + 5, MOD = 1e9 + 7, oo = 2e9;
 
#define nl '\n'
#define sp ' '
#define F first
#define S second
#define EPS 1e-4
#define pb push_back
#define mkp make_pair
#define rv return void
#define em emplace_back
#define sz(s) (ll)(s.size())
#define all(a) a.begin(), a.end()
#define rall(a) a.rbegin(), a.rend()
#define Tests int test_cases; cin >> test_cases; for(int tc=1; tc<=test_cases; tc++)
#define GO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
 
void y3ni_mht3dee4() {
    int m, s;
    cin >> m >> s;
    if(m==1){
        if(s < 10)cout<<s<<sp<<s;
        else cout<<"-1 -1";
        rv();
    }
 
    if(m * 9 < s || (!s && m > 1))
        rv(cout << "-1 -1");
 
    string mn, mx;
    int tmp_s = s;
 
    for(int i = 0; i < m; i++){
        if(s > 9){
            s -= 9;
            mx += '9';
        } else if(s){
            mx += to_string(s);
            s = 0;
        } else {
            mx += '0';
        }
    }
    s = tmp_s;
    for(int i = 0; i < m - 1; i++){
        if(s > 9){
            s -= 9;
            mn += '9';
        } else {
            if(s){
                mn += (s-1)+'0';
                s = 1;
            }
        }
    }
    mn+=to_string(s);
    reverse(all(mn));
 
    cout << mn << sp << mx << nl;
}
 
signed main() { GO y3ni_mht3dee4();}