#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
     
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i=0;i<n;i++) {
        cin >> a[i];
    }
    int ans = 0;
    int sum = 0;
    for(int i=0;i<n*2;i++) {
        if(a[i%n]==1) {
            sum++;
            ans = max(ans,sum);
        }
        else {
            sum = 0;
        }
    }
    cout<<ans<<'\n';
    return 0;
}