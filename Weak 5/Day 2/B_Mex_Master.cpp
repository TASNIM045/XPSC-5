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
        vector<int> num(n);
        for(int i=0;i<n;i++) {
            cin >> num[i];
        }
        int zero = 0;
        int nonZero = 0;
        for(int i=0;i<n;i++) {
            if(num[i]==0) {
                zero++;
            } else {
                nonZero++;
            }
        }
        int ans;
        if(zero==0) {
            ans = 0;
        } 
        else {
            if(nonZero>=zero-1) {
                ans = 0;
            }
            else {
                int mx = *max_element(num.begin(),num.end());
                if(mx==1) {
                    ans = 2;
                }
                else {
                    ans = 1;
                }
            }
        }
        cout<<ans<<'\n';
    }
    return 0;
}