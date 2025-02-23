#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
     
    int t;
    cin >> t;
    while(t--) {
        int n,m;
        cin >> n >> m;
        string s;
        cin >> s;
        int ans = 0;
        for(char ch='A';ch<='G';ch++) {
            int cnt = count(s.begin(),s.end(),ch);
            ans += max(0,m-cnt);
        }
        cout<<ans<<'\n';
    }
    return 0;
}