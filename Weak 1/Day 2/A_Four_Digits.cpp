#include<bits/stdc++.h>
using namespace std;
int main()
{
    string n;
    cin >>  n;
    if(n.size() == 4) cout<<n<<endl;
    else
    {
        int x = 4 - n.size();
        string s;
        for(int i=0;i<x;i++)
        {
            s.push_back('0');
        }
        cout<<s+n<<endl;
    }
    return 0;
}