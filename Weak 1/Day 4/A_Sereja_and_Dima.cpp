#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    deque<int> dq(n);
    for(int i=0;i<n;i++)
    {
        cin >> dq[i];
    }
    int ans1=0,ans2=0,cnt=0;
    while(!dq.empty())
    {
        int left = dq.front();
        int right = dq.back();
        int mx = max(left,right);
        if(cnt%2==0)
        {
            ans1+=mx;
        }
        else
        {
            ans2+=mx;
        }
        if(mx == left)
        {
            dq.pop_front();
        }
        else
        {
            dq.pop_back();
        }
        cnt++;
    }
    cout<<ans1<<" "<<ans2<<'\n';
    return 0;
}