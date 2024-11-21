#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin>>t;
    while(t--){
        ll n,c;
        cin>>n>>c;
        vector<ll> v(n+1);
        for(int i=1;i<=n;i++){
            cin>>v[i];
            v[i]=v[i]+i;
        }
        sort(v.begin(),v.end());
        ll cnt=0,sum=0;
        for(int i=1;i<=n;i++){
            sum+=v[i];
            if(sum<=c){
                cnt++;
            }
            else{
                break;
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}