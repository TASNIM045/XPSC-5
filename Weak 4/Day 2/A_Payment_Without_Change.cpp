#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while(t--) {
        int a, b, n, s;
		cin >> a >> b >> n >> s;
		if (s % n <= b && (long long)1*a*n+b >= s) {
			cout << "YES\n";
		}
		else {
			cout << "NO\n";
		}
    }
    return 0;
}