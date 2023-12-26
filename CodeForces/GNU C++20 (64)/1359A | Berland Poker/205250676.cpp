#include <bits/stdc++.h>
 
using namespace std;
#define ll long long int
#define ld long double
 
const int oo = 0x3f3f3f3f;
const ll OO = 0x3f3f3f3f3f3f3f3f;
const int N = 200005, MOD = 1e9 + 7; // 8e7+5
 
#define EPS 1e-4
#define nl '\n'
#define rv return void
#define sz(s) (ll)(s.size())
#define all(a) a.begin(), a.end()
#define rall(a) a.rbegin(), a.rend()
#define Tests int test_cases; cin >> test_cases; for(int tc=1; tc<=test_cases; tc++)
#define EidMubarak ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
 
void y3ni_mht3dee4() {
    int n, m, k;
    cin >> n >> m >> k;
    int player_cards = n / k;
    if (m - player_cards <= 0)rv(cout << m << nl);
    int rest_jokers = m - player_cards;
    int rest_players = k - 1;
    int cards_per_player = rest_jokers / rest_players;
    if (rest_jokers % rest_players != 0)cards_per_player++;
    cout << player_cards - cards_per_player << nl;
}
 
signed main() {
    EidMubarak
    Tests y3ni_mht3dee4();
}