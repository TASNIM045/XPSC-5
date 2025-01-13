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
        string s;
        cin >> s;
        int ans = 0;
        int cnt = 0;
        for(int i=0;i<n;i++) {
            if(s[i]=='.') {
                cnt++;
                ans++;
            }
            else if(s[i]=='#') {
                cnt = 0;
            }
            if(cnt>=3) break;
        }
        if(cnt>=3) cout<<2<<'\n';
        else cout<<ans<<'\n';
    }
    return 0;
}