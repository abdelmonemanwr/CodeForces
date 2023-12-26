#include <bits/stdc++.h>
 
using namespace std;
using ld = long double;
using ll = long long int;
 
#define nl '\n'
#define sp ' '
#define F first
#define S second
#define EPS 1e-6
#define pb push_back
#define mkp make_pair
#define r(x) return x
#define rv return void
#define em emplace_back
#define pii pair<int, int>
#define sz(s) (int)(s.size())
#define all(a) a.begin(), a.end()
#define rall(a) a.rbegin(), a.rend()
#define Tests int test_cases;cin>>test_cases; for(int tc=1; tc<=test_cases; tc++)
 
#define Y3niMht3dee4 ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
const ld PI = acos(-1);
const int oo = 0x3f3f3f3f;
const ll OO = 0x3f3f3f3f3f3f3f3f;
 
 
const int N = 4e4 + 5, M = 1e6 + 5, MOD = 32768;
 
int dist[N];
 
void BFS(int src) {
    queue<int> q;
    q.emplace(src);
    memset(dist, '?', sizeof(dist));
    dist[src] = 0;
    while (!q.empty()) {
        int node = q.front();
        q.pop();
        int ch1 = (node + 1) % MOD;
        int ch2 = (node * 2) % MOD;
        if (dist[ch1] == oo) {
            dist[ch1] = 1 + dist[node];
            q.emplace(ch1);
        }
        if (dist[ch2] == oo) {
            dist[ch2] = 1 + dist[node];
            q.emplace(ch2);
        }
        if (!ch1 || !ch2)
            return;
    }
}
 
void go() {
    int n, x;
    cin >> n;
    vector<int> memo(N, -1);
    while (n--) {
        cin >> x;
        if (!(~memo[x]))BFS(x), memo[x] = dist[0];
        cout << memo[x] << sp;
    }
}
 
signed main() {
    Y3niMht3dee4
    go();
}