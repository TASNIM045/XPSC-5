#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> v(n);
        for(int i=0;i<n;i++) {
            cin >> v[i];
        }
        sort(v.begin(),v.end());
        int possible_1 = v[n-1] - v[2];
        int possible_2 = v[n-2] - v[1];
        int possible_3 = v[n-3] - v[0];

        int mn = min(possible_1,possible_2);
        int final = min(mn,possible_3);
        
        cout<<final<<'\n';
    }
    return 0;
}