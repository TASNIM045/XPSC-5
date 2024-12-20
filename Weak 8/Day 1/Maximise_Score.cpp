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
        vector<int> num(n);
        for(int i=0;i<n;i++) {
            cin >> num[i];
        }
        int ans = INT_MAX;
        for(int i=0;i<n;i++) {
            int cur = 0;
            if(i+1<n) {
                cur = max(cur,abs(num[i+1]-num[i]));
            }
            if(i-1>=0) {
                cur = max(cur,abs(num[i-1]-num[i]));
            }
            ans = min(ans,cur);
        }
        cout<<ans<<'\n';
    }
    return 0;
}