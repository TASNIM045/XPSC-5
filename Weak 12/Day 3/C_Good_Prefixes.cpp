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
        int ar[n];
        for(int i=0;i<n;i++) {
            cin >> ar[i];
        }
        long long sum = 0;
        int mx = 0,ans = 0;
        for(int i=0;i<n;i++) {
            sum+=ar[i];
            mx = max(mx,ar[i]);
            if(sum-mx==mx) {
                ans++;
            }
        }
        cout<<ans<<'\n';
    }
    return 0;
}