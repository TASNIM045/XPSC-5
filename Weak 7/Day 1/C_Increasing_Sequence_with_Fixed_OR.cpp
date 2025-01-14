#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while(t--) {
        long long n;
        cin >> n;
        deque<long long> ans;
        for(int k=0;k<=__lg(n);k++) {
            if((n>>k)&1) {
                long long val = n-(1LL << k);
                if(val>0) {
                    ans.push_front(val);
                }
            }
        }
        ans.push_back(n);
        cout<<ans.size()<<'\n';
        for(auto val : ans) {
            cout<<val<<" ";
        }
        cout<<'\n';
    }
    return 0;
}