#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    cin.ignore();
    set<string> bouqute;
    while(t--)
    {
        string s;
        getline(cin,s);
        bouqute.insert(s);
    }
    cout<<bouqute.size()<<endl;
    return 0;
}