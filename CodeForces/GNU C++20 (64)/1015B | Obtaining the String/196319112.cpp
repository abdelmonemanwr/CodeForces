#include <bits/stdc++.h>
// #include <mpi.h>
using namespace std;
using ll = long long int;
#define FAST ios::sync_with_stdio(0);cout.tie(0);cin.tie(0);
#define allrev(a) (a).rbegin(), (a).end()
#define all(a) (a).begin(), (a).end()
#define sortvec(vi) sort(all(vi))
#define pb push_back
#define S second
#define F first
 
typedef vector<int> vi;
typedef long long int ll;
typedef pair<ll , ll> pii;
 
const int MOD = 1e9 + 7;
const int INF = 1e9 + 8;
const double PI = acos(-1);
 
int main(int argc, char* argv[]){
    FAST
//    MPI_Init(&argc, &argv);
//    int size, rank;
//    MPI_Comm_size(MPI_COMM_WORLD, &size);
//    MPI_Comm_rank(MPI_COMM_WORLD, &rank);
//    cout<<"Thread Number "<<rank<<"\t"<<"Thread size "<<size<<"\n";
// MPI_Finalize();
 
    int n;
    string s, t;
    cin >> n >> s >> t;
    int fr1[26]={0}, fr2[26]={0};
    for(char ch:s)
        fr1[ch-'a']++;
 
    for(char ch:t)
        fr2[ch-'a']++;
 
    for(int i=0; i<26; i++)
        if(fr1[i]!=fr2[i])
            return cout << "-1\n", 0;
 
    vector<int>ans;
 
    for(int i=0; i<n; i++){
        if(s[i]==t[i])continue;
        int idx = i+1;
        for(int j = i+1; j <n; j++){
            if(s[j] == t[i]){
                idx = j;
                break;
            }
        }
        for(int j = idx-1; j>=i; j--)
            swap(s[j], s[j+1]),
            ans.pb(j+1);
    }
    cout << ans.size() << endl;
    for(int& val : ans)
        cout << val << ' ';
    cout << endl;
    return 0;
}