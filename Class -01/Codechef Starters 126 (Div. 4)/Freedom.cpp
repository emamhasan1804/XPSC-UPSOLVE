#include<bits/stdc++.h>
#define int long long
#define float double
#define endl '\n'
using namespace std;
/* 
When I wrote this code ,
only Allah and I knew what I did.
   
Now... only Allah knows
*/

int32_t main () 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;while(t--) 
    {
        int n;
        cin>>n;
        vector<int> v;
        map<int,int> mp;
        while(n--) {
            int vl;cin>>vl;
            v.push_back(vl);
            mp[vl]++;
        }
        int cnt = 0;
        for(int i:v) {
            if(i==4) {
                mp[i]--;
                cnt += mp[i];
            }
            else if(i==6) {
                cnt += mp[2];
            }
            else if(i==2) {
                mp[2]--;
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}