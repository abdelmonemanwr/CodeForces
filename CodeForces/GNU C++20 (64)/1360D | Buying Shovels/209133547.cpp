#include <bits/stdc++.h>
 
using namespace std;
using ld = long double;
using ll = long long int;
 
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
 
vector<int> div(int n) {
    vector<int> ret;
    for (int i = 1; i <= n / i; i++) {
        if (n % i == 0) {
            ret.em(i);
            if (i != n / i)
                ret.em(n / i);
        }
    }
    return ret;
}
 
void y3ni_mht3dee4() {
    int n, k;
    cin >> n >> k;
    vector<int> a = div(n);
    sort(rall(a));
    for (int &aa: a)
        if (aa <= k)
            rv(cout << n / aa << nl);
}
 
signed main() {
    Y3niMht3dee4
    Tests y3ni_mht3dee4();
}