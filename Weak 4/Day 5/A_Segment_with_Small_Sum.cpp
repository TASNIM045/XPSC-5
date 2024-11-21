#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    long long n,s;
    cin >> n >> s;
    vector<int> num(n);
    for(int i=0;i<n;i++) {
        cin >> num[i];
    }
    int r = 0,l = 0;
    int ans = 0;
    long long sum = 0;
    while(r<n) {
        sum+=num[r];
        if(sum<=s) {
            ans = max(ans,r-l+1);
        } 
        else {
            sum-=num[l];
            l++;
        }
        r++;
    }
    cout<<ans<<'\n';
    return 0;
}