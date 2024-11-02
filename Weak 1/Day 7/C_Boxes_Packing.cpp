#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n,a;
    map<int,int>mp;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>a;
        mp[a]++;
    }

    ll ans = 0;
    for(auto it = mp.begin();it!=mp.end();it++) {
        ll temp = it->second;
        ans = max(ans,temp);
    }
    cout<<ans<<'\n';
    

    return 0;
}