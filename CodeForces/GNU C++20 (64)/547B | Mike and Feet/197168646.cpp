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
 
void Solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    
    stack<int> S;
    vector<int> L(n), R(n);
    for (int i = 0; i < n; i++) {
        while (!S.empty() && a[S.top()] >= a[i]) {
            S.pop();
        }
        L[i] = S.empty() ? -1 : S.top();
        S.push(i);
    }
    
    while (!S.empty()) S.pop();
    
    for (int i = n - 1; i >= 0; i--) {
        while (!S.empty() && a[S.top()] >= a[i]) {
            S.pop();
        }
        R[i] = S.empty() ? n : S.top();
        S.push(i);
    }
    
    vector<int> cnt(n + 1);
    for (int i = 0; i < n; i++) {
        int len = R[i] - L[i] - 1;
        cnt[len] = max(cnt[len], a[i]);
    }
    
    for (int i = n - 1; i >= 1; i--)
        cnt[i] = max(cnt[i], cnt[i + 1]);
    
    for (int i = 1; i <= n; i++)
        cout << cnt[i] << " ";
}
 
signed main() {
    ios_base::sync_with_stdio(false), 
    cout.tie(nullptr), cin.tie(nullptr);
    Solve();
    return 0;
}