#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int ar[n];
    for(int i=0;i<n;i++)
    {
        cin >> ar[i];
    }
    long long int total_sum = 0;
    for(int i=0;i<n;i++)
    {
        total_sum+=ar[i];
    }
    int odd = INT_MAX;
    for(int i=0;i<n;i++)
    {
        if(ar[i]%2!=0)
        {
            odd = min(odd,ar[i]);
        }
    }
    if(total_sum % 2 == 0) cout<<total_sum<<endl;
    else cout<<total_sum - odd<<endl;
    return 0;
}