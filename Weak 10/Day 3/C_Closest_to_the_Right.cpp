#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
     
    int n,q;
    cin >> n >> q;
    vector<int> num(n);
    for(int i=0;i<n;i++) {
        cin >> num[i];
    }
    while(q--) {
        int x;
        cin >> x;
        int ans = n+1;
        int l=0,r=n-1;
        while(l<=r) {
            int mid = (l+r)/2;
            if(x<=num[mid]) {
                r = mid-1;
                ans = mid+1;
            }
            else {
                l = mid+1;
            }
        }
        cout<<ans<<'\n';
    }
    return 0;
}