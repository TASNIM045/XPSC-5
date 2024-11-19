#include <bits/stdc++.h>
using namespace std;

char get(int i)
{
    return 'a' + i - 1;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string s;
        cin >> n >> s;

        int i = n - 1;
        string ans;
        while (i >= 0)
        {
            if (s[i] != '0')
            {
                ans += get(s[i]-48);
                i--;
            }
            else
            {
                int x = stoi(s.substr(i - 2, 2));
                ans += get(x);
                i -= 3;
            }
        }
        reverse(ans.begin(), ans.end());
        cout << ans << '\n';
    }
    return 0;
}