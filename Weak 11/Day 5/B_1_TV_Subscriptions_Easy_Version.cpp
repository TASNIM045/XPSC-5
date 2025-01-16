#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
     
    int t;
    cin >> t; 
    while (t--) {
        int n, k, d;
        cin >> n >> k >> d;  
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        unordered_map<int, int> freq;
        int cnt = 0;
        int ans = INT_MAX;

        for (int i = 0; i < n; ++i) {
            freq[a[i]]+=1;
            if (freq[a[i]] == 1) {
                cnt++;
            }

            if (i >= d) {
                if (--freq[a[i - d]] == 0) {
                    cnt--;
                    freq.erase(a[i - d]);
                }
            }

            if (i >= d - 1) {
                ans = min(ans, cnt);
            }
        }

        cout << ans << endl;
    }
    return 0;
}