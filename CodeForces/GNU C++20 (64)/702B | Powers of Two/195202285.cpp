#include<bits/stdc++.h>
#define IO ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
using namespace std;
typedef long long lol;
int main()
{    IO;
     lol n,tot=0;
     cin >> n;
     lol arr[n];
     map<lol,lol>mp;
     for (lol i = 0; i < n; i++) 
     {
          cin>>arr[i];
          mp[arr[i] ]++;
     }
     for (lol i = 0; i < n; i++)             //O(n)
     {
        mp[arr[i]]--;
          for (lol ii = 2; ii < 2e9+5; ii*=2)  //O(log n)
          {    
               lol tmp = ii - arr[i];
               if(tmp > 0)
                   tot+=mp[tmp];
          }
     }
     cout<<tot<<endl;     
    return 0;
}