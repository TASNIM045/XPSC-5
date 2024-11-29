#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        vector<pair<int,char>> mp(26);
        for(int i=0; i<26;i++){
            mp[i].second = 'a'+i;
        }
        for(auto c:s){
            mp[c-'a'].first++;
        }
        sort(mp.rbegin(),mp.rend());
        string ans(n,' ');
        int idx=0;
        for(auto [y,x]:mp){
            if(y==0) break;
            for(int i=0;i<y;i++){
                if(idx>=n) idx=1;
                ans[idx]=x;
                idx+=2;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}