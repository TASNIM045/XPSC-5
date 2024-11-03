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
        string a,b;
        cin >> a >> b;
        bool ans = true;
        for(int i=0;i<n;i++) {
            if(a[i]==b[i]) ans = true;
            else if(a[i]=='B' && b[i]== 'G') ans = true;
            else if(a[i]=='G' && b[i]=='B') ans = true;
            else {
                ans = false;
                break;
            }
        }
        if(ans) {
            cout<<"YES"<<'\n';
        } else {
            cout<<"NO"<<'\n';
        }
    }
    return 0;
}