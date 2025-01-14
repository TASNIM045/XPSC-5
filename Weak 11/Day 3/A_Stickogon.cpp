// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
     
//     int t;
//     cin >> t;
//     while(t--) {
//         int n;
//         cin >> n;
//         vector<int> a(101,0);
//         for(int i=0;i<n;i++) {
//             int x;
//             cin >> x;
//             a[x]++;
//         }
//         int ans = 0;
//         for(auto val : a) {
//             ans += val/3;
//         }
//         cout<<ans<<'\n';
//     }
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        map<int, int> freq;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            freq[x]++;
        }

        int ans = 0;
        for (auto [key, value] : freq) {
            ans += value / 3;
        }

        cout << ans << '\n';
    }

    return 0;
}
