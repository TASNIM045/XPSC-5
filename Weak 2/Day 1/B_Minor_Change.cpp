#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string x,y;
    cin >> x >> y;
    int ans = 0;
    for(int i=0;i<x.size();i++)
    {
        if(x[i]!=y[i]) ans++;
    }
    cout<<ans<<'\n';
    return 0;
}