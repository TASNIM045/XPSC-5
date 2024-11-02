#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        int n = s.size();
        int idx = -1;
        for (int i = 0; i + 1 < n; i++)
            if (s[i] == s[i + 1])
                idx = i;
        if (idx == -1)
        {
            if (s.back() == 'a')
                cout << (s + "b") << endl;
            else
                cout << (s + "a") << endl;
        }
        else
        {
            string t = "a";
            if (s[idx] == 'a')
                t = "b";
            cout << s.substr(0, idx + 1) + t + s.substr(idx + 1) << endl;
        }
    }
    return 0;
}