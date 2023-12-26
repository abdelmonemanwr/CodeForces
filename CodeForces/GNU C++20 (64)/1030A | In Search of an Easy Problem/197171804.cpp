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
 
ll fp(ll base, ll power) {
    if (!power) return 1LL;
    ll ret = fp(base, power / 2);
    ret *= ret;
    if (power & 1) ret *= base;
    return ret;
}
 
void Solve() {
    int n;
    cin >> n;
    bool ok = 0, x;
    while(n--){
        cin >> x;
        ok|=x;
    }
    if(ok) cout << "HARD" << nl;
    else cout << "EASY" << nl;
}
 
signed main() {
    ios_base::sync_with_stdio(false), cout.tie(nullptr), cin.tie(nullptr);
    int tc = 1;
 //cin >> tc;
    while (tc--)
        Solve();
}