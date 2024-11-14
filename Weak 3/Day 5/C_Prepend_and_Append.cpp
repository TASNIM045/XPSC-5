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
        int ans = n;
        int i=0;
        int j=s.size()-1;
        while(s[i]!=s[j]) {
            if(s[i]=='0' && s[j]=='1') ans-=2;
            else if(s[i]=='1' && s[j]=='0') ans-=2;
            i++;
            j--;
        }
        if(ans<0) cout<<0<<'\n';
        else cout<<ans<<'\n';
    }
    return 0;
}