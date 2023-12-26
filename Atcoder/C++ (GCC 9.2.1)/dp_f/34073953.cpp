#include <bits/stdc++.h>
using namespace std;

#define F first
#define S second
#define PI acose(-1)
#define rz return 0;
#define MOD 1000000007
#define INF 1000000008
#define int long long int
#define sz(s) (int)(s.size())
#define ins(val) insert(val)
#define mem(a, v) memset(a,v, sizeof a)
#define pb(val) push_back(val)
#define all(a) a.begin(), a.end()
#define rall(a) a.rbegin(), a.rend()
#define MAX(a) (*max_element(all(a)))
#define MIN(a) (*min_element(all(a)))
#define forn(i, a, n, k) for(int i=a; i<n; i+=k)
#define cin_vector(a) for(auto& i : a) cin >> i;
#define tests int tests;cin>>tests;while(tests--)
#define EasyPeasyLemonSqueezy ios_base::sync_with_stdio(false),cin.tie(nullptr),cout.tie(nullptr);

int gcd(int a, int b) { return b ? gcd(b, a % b) : a; }

int lcm(int a, int b) { return a / gcd(a, b) * b; }

int fastPower(int x, int n) {
    if (!n) return (1);
	int res = fastPower(x, n / 2);
	res = (res % MOD * res % MOD) % MOD;
	if (n & 1) res = (res % MOD * x % MOD) % MOD;
	return res;
}

string s, t;
const int N = 3005;
vector<vector<int>>dp;
// Recursive DP
int lcs(int a, int b){
	if(!a || !b)
		rz
	if(dp[a][b]!=-1)
		return dp[a][b];
	if(s[a-1]==t[b-1])
		return dp[a][b] = 1 + lcs(a-1, b-1);

	int option1 = lcs(a-1, b);
	int option2 = lcs(a, b-1);
	int ans = max(option1, option2);
	dp[a][b] = ans;
	return ans;
}

signed main() {
	EasyPeasyLemonSqueezy

	string c;
	cin >> s;
	cin >> t;
	int a = sz(s);
	int b = sz(t);
// Initialization and memset dp = -1
	dp = vector<vector<int>>(a+1, vector<int>(b+1, -1));
// Iterative DP
	// for(int i=0; i<=a; i++){
	// 	for(int j=0; j<=b; j++){
	// 		if(!i or !j) dp[i][j] = 0;
	// 		else if(s[i-1]==t[j-1]) dp[i][j] = dp[i-1][j-1] + 1;
	// 		else dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
	// 	}
	// }
	lcs(a, b);
	while(a and b){
		if(s[a-1]==t[b-1]){
			a--;b--;
			c+=s[a];
		}
		else if(dp[a-1][b]>dp[a][b-1]) a--;
		else b--;
	}
	reverse(all(c));
	cout << c;
	rz
}