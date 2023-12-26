#include <bits/stdc++.h>
 
using namespace std;
using ll = long long int;
 
#define nl '\n'
#define Map map<int , int>
#define pii pair<int , int>
#define sz(s) (int)(s).size()
#define pb(val) push_back(val)
 
int n, sx, sy, fx, fy;
map<int, Map > mp, mp2;
int dx[] = {0, 1, 0, -1, 1, -1, -1, 1};
int dy[] = {1, 0, -1, 0, 1, -1, 1, -1};
 
void BFS() {
    queue<pii > q;
    q.emplace(sx, sy);
    mp2[sx][sy] = 0;
    while (!q.empty()) {
        pii top = q.front();
        q.pop();
        int x = top.first;
        int y = top.second;
        for (int i = 0; i < 8; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];
            if (mp[nx][ny] && mp2[x][y] + 1 < mp2[nx][ny]) {
                mp2[nx][ny] = mp2[x][y] + 1;
                q.emplace(nx, ny);
            }
        }
    }
}
 
void Solve() {
    cin >> sx >> sy >> fx >> fy >> n;
    for (int i = 0; i < n; i++) {
        int r, x, y;
        cin >> r >> x >> y;
        for (int j = x; j <= y; j++) {
            mp[r][j] = 1;
            mp2[r][j] = 1e9;
        }
    }
    BFS();
    if (mp2[fx][fy] == 1e9)cout << "-1\n";
    else cout << mp2[fx][fy] << nl;
}
 
signed main() {
    Solve();
    return 0;
}