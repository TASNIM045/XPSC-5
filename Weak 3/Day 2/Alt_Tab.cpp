#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    vector<string> v(n);
    for(int i=0;i<n;i++) {
        cin >> v[i];
    }

    reverse(v.begin(),v.end());
    
    vector<char> ans;
    
    map<string,int> mp;
    for(auto it : v) {
        if(mp[it]==0){
            ans.push_back(it[it.size()-2]);
            ans.push_back(it[it.size()-1]);
        }
        mp[it]++;
    }

    for(auto it:ans) cout<<it;
    cout<<'\n';

    return 0;
}