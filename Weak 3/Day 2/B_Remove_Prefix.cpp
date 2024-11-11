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
        bool call = false;
        set<int> s;
        for(int i=n-1;i>=0;i--) {
            if(s.count(v[i])) {
                cout<<i+1<<'\n';
                call = true;
                break;
            }
            s.insert(v[i]);
        }
        if(!call) {
            cout<<0<<'\n';
        }
    }
    return 0;
}