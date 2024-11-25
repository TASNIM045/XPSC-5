#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        string s = "";
        for(int i=0;i<n;i++) {
            s += "BAN";
        }
        int cnt = 0;
        if(s.size()%2==0) {
            cnt = s.size()/2;
        } 
        else {
            cnt = (s.size()/2)+1;
        }
        vector<int> vo,vt;
        for(int i=0;i<cnt;i++) {
            if(s[i]=='A') {
                vo.push_back(i);
            }
        }
        for(int i=s.size()-1;i>=cnt;i--) {
            if(s[i]=='N') {
                vt.push_back(i);
            }
        }
        vector<int> ans;
        for(int i=0;i<vo.size();i++) {
            ans.push_back(vo[i]);
            ans.push_back(vt[i]);
        }
        cout<<vo.size()<<'\n';
        for(auto x : ans) {
            cout<<x<<" ";
        }
        cout<<'\n';
    }
    return 0;
}
