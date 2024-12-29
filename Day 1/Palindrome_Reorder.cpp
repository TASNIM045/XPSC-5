#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string s;
    cin >> s;
    map<char,int> mp;
    for(auto it : s) {
        mp[it]++;
    }
    string f = "", m = "", l = "";
    int cnt = 0;
    char n = '0';
    for(int i=0;i<26;i++) {
        if(mp[char(i+65)]%2!=0) {
            cnt++;
            n = char(i+65);
        }
        else {
            int x = mp[char(i+65)];
            for(int j=0;j<x/2;j++) {
                f+=char(i+65);
            }
            for(int k=0;k<x/2;k++) {
                l+=char(i+65);
            }
        }
    }
    reverse(l.begin(),l.end());
    for(int i=0;i<mp[n];i++) {
        m+=n;
    }

    if(cnt>1) {
        cout<<"NO SOLUTION"<<'\n';
    }
    else {
        cout<<f+m+l<<'\n';
    }
    
    
        
    return 0;
}