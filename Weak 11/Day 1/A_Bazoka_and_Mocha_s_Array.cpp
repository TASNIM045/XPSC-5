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
        vector<int> a(n+1);
        for(int i=1;i<=n;i++) {
            cin >> a[i];
        }
        int pos = 0;
        for(int i=1;i<n;i++) {
            if(a[i]>a[i+1]) {
                pos = i;
                break;
            }
        }
        if(!pos) {
            cout<<"Yes"<<'\n';
        }
        else {
            int flag = 0;
            for(int i = pos+1;i<n;i++) {
                if(a[i]>a[i+1]) {
                    flag = 1;
                }
            }
            if(!flag && a[n]<=a[1]) cout<<"Yes"<<'\n';
            else cout<<"No"<<'\n';
        }
    }
    return 0;
}