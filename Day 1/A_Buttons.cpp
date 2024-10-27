#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin >> a >> b;
    int ans_0 = a+b;
    int ans_1 = a + (a-1);
    int ans_2 = b + (b-1);
    int mx = max(ans_0,ans_1);
    int ans = max(mx,ans_2);
    cout<<ans<<endl;
    return 0;
}