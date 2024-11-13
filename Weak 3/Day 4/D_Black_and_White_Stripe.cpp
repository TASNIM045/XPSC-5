#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        vector<int> w(n + 1, 0);
        for (int i = 1; i <= n; i++) {
            w[i] = w[i - 1];
            if (s[i - 1] == 'W') {
                w[i] += 1;
            }
        }

        int result = INT_MAX;
        for (int i = k; i <= n; i++) {
            result = min(result, w[i] - w[i - k]);
        }

        cout << result << endl;
    }
    return 0;
}