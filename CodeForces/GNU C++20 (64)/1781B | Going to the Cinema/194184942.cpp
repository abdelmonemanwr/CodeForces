#include <bits/stdc++.h>
using namespace std;
signed main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        
        map<int, int>mp;
        for(int& val:a)
            cin >> val, 
            mp[val]++;
            
        sort(a, a+n);
        int ans = 1;
        if(!mp[0])ans=2;
        
        for(int i=0; i<n-1; i++)
            if(a[i]<i+1 && a[i+1]>=i+2)
                ans++;    
        cout<<ans<<'\n';
    }
}