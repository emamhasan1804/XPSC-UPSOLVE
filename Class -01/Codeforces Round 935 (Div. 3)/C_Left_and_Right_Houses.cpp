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
        // bam pase koita 0 and dan pase koita 1 
        vector<int> pre(n+1),suf(n+2);
        for(int i=1;i<=n;i++) {
            pre[i]=pre[i-1]+s[i-1]-'0';
        }
        for(int i=n;i>=1;i--) {
            suf[i]=suf[i+1] + s[i-1]-'0';
        }
        
        // for(int i=1;i<=n;i++) {
        //     cout<<pre[i]<<" ";
        // }
        // cout<<endl;
        // for(int i=1;i<=n;i++) {
        //     cout<<suf[i]<<" ";
        // }
        // cout<<endl;

        double mid = n/2.0;
        int dif;
        int mn = INT_MAX;
        int ans;
        for(int i=1;i<=n;i++) {
            int zero,one;
            zero=i-pre[i];
            one =suf[i+1];
            int lefthalf ,righthalf;
            lefthalf = ceil((float)i/2);
            righthalf=ceil((float)(n-i)/2);
            if(zero>=lefthalf && one>=righthalf) {
                dif = abs(mid-i);
                if(dif<mn) {
                    mn = dif;
                    ans = i;
                }
            }
        }
        int total_1 = pre[n];
        int half = ceil((float)n/2);
        if(total_1 >= half && mid<=mn) {
            ans = 0;
        } 
        cout<<ans<<endl;
    }
    return 0;
}


// corner case : 1100 
/* 
total 1 >= ceil n/2 hole  and | n/2-i| min hobe tokhon 0 te road hobe

*/