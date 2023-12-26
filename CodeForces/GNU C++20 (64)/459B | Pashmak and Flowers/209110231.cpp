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
 
void y3ni_mht3dee4() {
    int n;
    cin >> n;
    int a[n];
    for (int &aa: a)cin >> aa;
    sort(a, a + n);
    cout << a[n - 1] - a[0] << sp;
    if(a[n-1]==a[0]){
        rv(cout << 1ll*n*(n-1)/2);
    }
    int mn_freq = 0, mx_freq = 0;
    for (int i = 0; i < n; i++) {
        if (a[0] == a[i])
            mn_freq++;
        if (a[n - 1] == a[i])
            mx_freq++;
    }
    cout << 1ll * mn_freq * mx_freq << nl;
}
 
signed main() {
    Y3niMht3dee4
    y3ni_mht3dee4();
}