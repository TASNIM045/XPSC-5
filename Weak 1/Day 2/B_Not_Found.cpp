#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    char ans = '0';
    for(int i=0;i<26;i++)
    {
        char c = i+97;
        auto it = find(s.begin(),s.end(),c);
        if(it == s.end())
        {
            ans = c;
            break;
        }
    }
    if(ans != '0') cout<<ans<<endl;
    else cout<<"None"<<endl;
    return 0;
}