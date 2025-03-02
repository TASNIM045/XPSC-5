#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
     
    int t;
    cin >> t;
    while(t--) {
        int x1,y1,x2,y2,x3,y3,x4,y4;
        cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
        
        int side1 = abs(x1-x2);
        int side2 = abs(y1-y2);
        int side = max(side1,side2);

        int ans = pow(side,2);

        cout<<ans<<'\n';
    }
    return 0;
}