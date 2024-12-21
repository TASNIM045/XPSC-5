#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    string result;
    char last1 = ' ', last2 = ' ';
    for (int i = 0; i < n; ++i) {
        for (char ch : {'a', 'b'}) {
            if (i < 2 || !(last2 == ch && last1 == ch)) {
                result += ch;
                last2 = last1;
                last1 = ch;
                break;
            }
        }
    }
    cout<<result<<'\n';
    return 0;
}