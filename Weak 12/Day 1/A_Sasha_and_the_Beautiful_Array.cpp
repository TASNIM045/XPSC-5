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
        sort(a.begin(),a.end());
        int sum = 0;
        for(int i=2;i<=n;i++) {
            sum += a[i] - a[i-1];
        }
        cout<<sum<<'\n';
    }
    return 0;
}