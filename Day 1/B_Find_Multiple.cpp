#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin >> a >> b >> c;
    
    long long int ans = b / c*c;
    if(a <= ans) cout<<ans<<endl;
    else cout<<-1<<endl;

    return 0;
}