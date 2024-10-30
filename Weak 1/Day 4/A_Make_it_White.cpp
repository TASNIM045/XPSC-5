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
        string s;
        cin >> s;
        int fst = -1;
        int lst = -1;
        fst = s.find('B');
        lst = s.rfind('B');
        int ans = lst - fst + 1;
        cout<<ans<<'\n';
    }
    return 0;
}