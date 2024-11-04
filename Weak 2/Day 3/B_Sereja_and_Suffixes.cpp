#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n,m;
    cin >> n >> m;
    vector<int> arr(n+1);
    for(int i=1;i<=n;i++) {
        cin >> arr[i];
    }
    set<int> s;
    vector<int> ans;
    for(int i=n;i>=1;i--) {
        s.insert(arr[i]);
        ans.push_back(s.size());
    }
    reverse(ans.begin(),ans.end());
    while(m--) {
        int pos;
        cin >> pos;
        cout<<ans[pos-1]<<'\n';
    }
    return 0;
}