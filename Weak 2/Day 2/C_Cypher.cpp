#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            string s;
            cin >> s;
            for (int j = 0; j < x; j++)
            {
                if (s[j] == 'U')
                {
                    v[i]--;
                    if (v[i] == -1)
                    {
                        v[i] = 9;
                    }
                }
                else
                {
                    v[i]++;
                    if (v[i] == 10)
                    {
                        v[i] = 0;
                    }
                }
            }
        }
        for (int val : v)
        {
            cout << val << " ";
        }
        cout << '\n';
    }
    return 0;
}