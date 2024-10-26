#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for(int i=1;i<=n;i++)
    {
        int x=i;
        while(x>0)
        {
            int dig = x%10;
            cout<<dig<<" ";
            x/=10;
        }
        cout<<endl;
    }
    return 0;
}