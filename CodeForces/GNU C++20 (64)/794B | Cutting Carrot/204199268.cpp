#include <bits/stdc++.h>
 
using namespace std;
#define ll long long int
const int N = 8e7 + 5, MOD = 1e9 + 7; // 8e7+5
 
#define nl '\n'
#define sz(s) (ll)(s.size())
#define rv return void
#define Tests int test_cases; cin >> test_cases; for(int tc=1; tc<=test_cases; tc++)
#define EidMubarak ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
 
signed main() {
    EidMubarak
    int n, h;
    cin >> n >> h;
    for(int i = 1; i < n; i++){
        cout << fixed << setprecision(12) << h * sqrt(i * 1.0 / n) << ' ';
    }
}