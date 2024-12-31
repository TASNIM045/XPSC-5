#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, q;
    cin >> n >> q;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    while (q--)
    {
        int x;
        cin >> x;
        bool ans = false;
        int i = 0, j = n - 1;
        while (i <= j)
        {
            int mid = (i + j) / 2;
            if (arr[mid] == x)
            {
                ans = true;
                break;
            }
            else if (arr[mid] < x)
            {
                i = mid + 1;
            }
            else
            {
                j = mid - 1;
            }
        }
        if (ans)
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
    }
    return 0;
}