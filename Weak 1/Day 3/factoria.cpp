#include<bits/stdc++.h>
using namespace std;

//O(N)
int fact(int n)
{
  if(n == 0) return 1;
  int chotoFact = fact(n-1);
  return chotoFact * n;
}

int main()
{
  int n;
  cin >> n;
  cout<<fact(n)<<endl;
 
  //O(N)
  int x;
  cin >> x;
  int ans = 1;
  for(int i=1;i<=x;i++)
  {
    ans*=i;
  }
  cout<<ans<<endl;
  return 0;
}