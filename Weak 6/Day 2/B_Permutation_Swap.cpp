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
        vector<int> num(n+1);
        for(int i=1;i<=n;i++) {
            cin >> num[i];
        }
        int ans = 0;
        for(int i=1;i<=n;i++) {
            ans = gcd(ans,abs(num[i]-i));
        }
        cout<<ans<<'\n';
    }
    return 0;
}