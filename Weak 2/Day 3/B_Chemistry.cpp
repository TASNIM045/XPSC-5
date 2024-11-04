#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while(t--) {
        int n,k;
        cin >> n >> k;
        string s;
        cin >> s;
        map<char,int> mp;
        for(int i=0;i<s.size();i++) {
            mp[s[i]]++;
        }
        int odd = 0;
        for(auto it=mp.begin();it!=mp.end();it++){
            if(it->second%2!=0) odd++;
        }
        odd-=k;
        if(odd<=1) cout<<"YES"<<'\n';
        else cout<<"NO"<<'\n';
    }
    return 0;
}