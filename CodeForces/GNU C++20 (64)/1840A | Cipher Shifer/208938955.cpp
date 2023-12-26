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
 
pair<int, string> solve(int st, int ed, string &s, string &cipher) {
    while (st < ed) {
        int i = st + 1;
        bool found = false;
        for (; i < ed; i++) {
            if (s[i] == s[st]) {
                found = true;
                break;
            }
        }
        if (found) {
            st = i + 1;
            cipher += s[i];
        } else {
            cipher += s[st++];
        }
    }
    return {sz(cipher), cipher};
}
 
void y3ni_mht3dee4() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    string ans;
    for (int i = 0; i < n; i++) {
        int nxt = -1;
        for (int j = i + 1; j < n; j++) {
            if (s[j] == s[i]) {
                nxt = j;
                break;
            }
        }
        ans += s[i];
        if (~nxt)i = nxt;
    }
    cout << ans << nl;
}
 
signed main() {
    Y3niMht3dee4
    Tests y3ni_mht3dee4();
 
}