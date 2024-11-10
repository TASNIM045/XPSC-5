#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int a,b,c;
	cin >> a >> b >> c;
	float score = a+(b/2);
	float oponent = (b/2)+c;
	if(score>oponent) cout<<"Yes"<<endl;
	else
	{
	    int total = (4-(a+b+c))+score;
	    if(total>oponent) cout<<"Yes"<<endl;
	    else cout<<"No"<<endl;
	}
    return 0;
}