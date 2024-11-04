#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    vector<int> arr(n);
    multiset<int> ms;
    for(int i=0;i<n;i++) {
        cin >> arr[i];
        ms.insert(arr[i]);
    }
    int ans = 0;
    int day = 1;
    while(1) {
        auto lb = ms.lower_bound(day);
        if(lb != ms.end()) {
            ans++;
            ms.erase(lb);
        }
        else {
            break;
        }
        day++;
    }
    cout<<ans<<'\n';
    
    return 0;
}