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
        int ans = n+1;
        for(int i=0;i<26;i++) {
            int cnt = 0,l=0,r=n-1;
            while(l<=r) {
                if(s[l]==s[r]) {
                    l++;
                    r--;
                }
                else if(s[l]==char('a'+i)) {
                    cnt++;
                    l++;
                }
                else if(s[r]==char('a'+i)) {
                    cnt++;
                    r--;
                }
                else {
                    cnt = n+1;
                    break;
                }
            }
            ans = min(ans,cnt);
        }
        if(ans==n+1) cout<<-1<<'\n';
        else cout<<ans<<'\n';
    }
    return 0;
}