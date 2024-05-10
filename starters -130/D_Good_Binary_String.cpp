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
        string s;
        cin>>s;
        vector<int> ans;
        for(int i=0;i<n-1;i+=2) {
            string temp;
            temp+= s[i];
            temp+=s[i+1];
            if(temp=="11" || temp=="00") {
                continue;
            }
            if(ans.size()%2==0) {
                if(s[i]=='1') ans.push_back(i);
                else ans.push_back(i+1);
            }
            else {
                if(s[i]=='0') ans.push_back(i);
                else ans.push_back(i+1);
            }
        }
        cout<<ans.size()<<endl;
        for(int i:ans) cout<<i+1<<" ";
        cout<<endl;
    }
    return 0;
}
