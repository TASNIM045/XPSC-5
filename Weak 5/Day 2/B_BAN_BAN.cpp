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
            s = s + "BAN";
        }
        n = s.size()-1;
        vector<pair<int,int>> ans;
        int l = 0,r = n-1;
        while(l<r) {
            ans.push_back({l,r});
            swap(s[l],s[r]);
            l+=3;
            r-+3;
        }
        cout<<ans.size()<<'\n';
        for(auto i : ans) {
            cout<<i.first<<" "<<i.second<<'\n';
        }
    }
    return 0;
}