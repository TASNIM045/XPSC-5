#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
     
    int t;
    cin >> t;
    while(t--) {
        int a,b,c;
        cin >> a >> b >> c;
        if(a%2==0) {
            if(a*b<(a/2)*c) cout<<a*b<<'\n';
            else cout<<(a/2)*c<<'\n';
        }
        else {
            if(((a/2)*c)+b<(a*b)) cout<<(a/2)*c+b<<'\n';
            else cout<<a*b<<'\n';
        }
    }
    return 0;
}