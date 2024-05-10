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
        int n,k,src1,src2;
        cin>>n>>k>>src1>>src2;
        vector<int> a(n+1);
        vector<int> b(n+1);
        for(int i=1;i<=n;i++) cin>>a[i];
        for(int i=1;i<=n;i++) cin>>b[i];
        int suru1 = b[src1];
        int suru2 = b[src2];
        vector<int> path1;
        vector<int> path2;
        int cur=src1;
        int nxt=a[src1];
        path1.push_back(src1);
        while(nxt!=src1) {
            path1.push_back(nxt);
            cur=nxt;
            nxt = a[cur];
        }
        cur=src2;
        nxt=a[src2];
        path2.push_back(src2);
        while(nxt!=src2) {
            path2.push_back(nxt);
            cur=nxt;
            nxt=a[cur];
        }

        int ans1 = 0;
        for(int i=0;i<path1.size();i++) {
            if(i+1>k) break;
            int temp = ans1;
            temp += (k-i)*b[path1[i]];
            suru1 = max(suru1,temp);
            ans1+=b[path1[i]];
        }
        int ans2 = 0;
        for(int i=0;i<path2.size();i++) {
            if(i+1>k) break;
            int temp = ans2;
            temp += (k-i)*b[path2[i]];
            suru2 = max(suru2,temp);
            ans2+=b[path2[i]];
        }
        if(suru1>suru2) cout<<"Bodya"<<endl;
        else if(suru1<suru2) cout<<"Sasha"<<endl;
        else cout<<"Draw"<<endl;
    }
    return 0;
}
