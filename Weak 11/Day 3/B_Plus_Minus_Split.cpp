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
        string s;
        cin >> n >> s;
        int sum = 0;
        for(int i=0;i<n;i++) {
            sum += s[i] == '+' ? 1 : -1;
        }
        cout<<abs(sum)<<'\n';
    }
    return 0;
}