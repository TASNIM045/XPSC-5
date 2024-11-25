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
        vector<int> ans(n);
        for(int i=0;i<n;i++) {
            ans[i] = n-i;
        }
        reverse(ans.end()-k-1,ans.end());
        for(int i=0;i<n;i++) {
            cout<<ans[i]<<" ";
        }
        cout<<'\n';
    }
    return 0;
}