#include <bits/stdc++.h>

using namespace std;
#define f first
#define s second
#define ins(val) insert(val)
#define sz(s) (int)(s).size()
#define sc1(a) scanf("%d", &a)
#define pb(val) push_back(val)
#define pf(val) push_front(val)
#define scl1(a) scanf("%lld",&a)
#define max(a, b) (a>b?a:b)
#define min(a, b) (a<b?a:b)
#define all(a) a.begin(), a.end()
#define sortvec(vi) sort(all(vi))
#define sortarr(a, n) sort(a,a+n)
#define allrev(a) a.rbegin(), a.rend()
#define MAX(a) (*max_element(all(a)))
#define MIN(a) (*min_element(all(a)))
#define mem(a, v) memset(a,v, sizeof a)
#define max3(i, j, k) max(i, max(j, k))
#define min3(i, j, k) min(i, min(j, k))
#define lb(a, v) lower_bound(all(a), v)
#define ub(a, v) upper_bound(all(a), v)
#define sc2(a, b) scanf("%d %d", &a, &b)
#define scl2(a, b) scanf("%lld %lld", &a, &b)
#define forn(i, a, n, k) for(int i=a; i<n; i+=k)
#define cin_vector(a) for(auto& i : a) cin >> i;
#define tests int tests;cin>>tests;while(tests--)
#define cout_vector(a) for(auto& i : a) cout << i << " ";
#define scanf_int_vector(a) for(auto& i:(a))scanf("%d",&i)
#define scanf_LL_vector(a) for(auto& i:(a))scanf("%lld",&i)
#define MBAPPE ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef set<int> si;
typedef deque<int> dq;
const int MOD = 1e9 + 7;
const int INF = 1e9 + 8;
const ll LINF = LLONG_MAX;
const ull ULLINF = ULLONG_MAX;
const ld PI = 3.142857142857142857;

ll divisibleFrom1To10(ll n) {
    return (n / 2520);
}

bool isOdd(ll n) { return (n % 2 == 1); }

bool isEven(ll n) { return (n % 2 == 0); }

ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }

ll lcm(ll a, ll b) { return a / gcd(a, b) * b; }

ll fastPower(ll x, ll n) {
    if (n == 0) return 1;
    else if (n & 1) return x * fastPower(x, n / 2) * fastPower(x, n / 2);
    else return fastPower(x, n / 2) * fastPower(x, n / 2);
}

int main() {
    MBAPPE
    /// freopen("plants.in", "r", stdin);
    int a , b , t ; cin >> a >> b >> t ;
    int x = t / a ;
    int ans = x * b ;
    cout << ans << '\n';
    return 0;
}