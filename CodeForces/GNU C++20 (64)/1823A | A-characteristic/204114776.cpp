#include <bits/stdc++.h>
 
using namespace std;
#define ll long long int
const int N = 8e7 + 5, MOD = 1e9 + 7; // 8e7+5
 
#define nl '\n'
#define rv return void
#define Tests int test_cases; cin >> test_cases; for(int tc=1; tc<=test_cases; tc++)
#define EidMubarak ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
 
void y3ni_mht3dee4() {
    int n, k;
    cin >> n >> k;
    for (int i = 0; i <= n; i++) {
        if ((i * (i - 1)) / 2 + (n - i) * (n - i - 1) / 2 == k) {
            cout << "YES\n";
            for (int j = 0; j < i; j++) cout << "1 ";
            for (int j = 0; j < n - i; j++) cout << "-1 ";
            rv(cout << nl);
        }
    }
    cout << "NO\n";
}
 
signed main() {
    EidMubarak
    Tests y3ni_mht3dee4();
}