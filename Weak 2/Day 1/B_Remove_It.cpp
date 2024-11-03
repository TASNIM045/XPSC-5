#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n,x;
    cin >> n >> x;
    vector<int> v(n);
    vector<int> ans;
    for(int i=0;i<n;i++) {
        cin >> v[i];
        if(v[i]!=x){
            ans.push_back(v[i]);
        }
    }
    for(auto val : ans) {
        cout<<val<<" ";
    }
    cout<<'\n';
    return 0;
}