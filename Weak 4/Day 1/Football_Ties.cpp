#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while(t--) {
        int x,y;
        cin >> x >> y;
        int draw = x%3;
        cout<<draw<<'\n';
    }
    return 0;
}