#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization("unroll-loops")
#include<bits/stdc++.h>
using namespace std;
#define end1 "\n"
#define mod 1000000007
#define OO 1000000005
void Hala_Madrid_Champions(){
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);
}
int dx[] = { 0, 0, 1, -1, 1, -1, 1, -1 };
int dy[] = { 1, -1, 0, 0, -1, 1, 1, -1 };
const double PI = 3.14159265358979323846;
void solve(){
    int tt;
    cin>>tt;
    while(tt--){
        long long n,ans=0;
        string s;
        cin>>n>>s;
        vector<int>vec(n+1);
        for(int i=1;i<=n;i++)vec[i]=s[i-1]-'0';
        for(int i=1;i<=n;i++)vec[i]+=vec[i-1];
        for(int i=1;i<=n;i++){
            for(int j=i;j<=n;j++)ans+=(vec[j]-vec[i-1]==j-i+1);
        }
        cout<<ans<<end1;
    }
}
int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    Hala_Madrid_Champions();
    solve();
}