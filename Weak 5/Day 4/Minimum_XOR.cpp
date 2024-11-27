#include <bits/stdc++.h>
using namespace std;

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int t;
   cin >> t;
   while (t--) {
      int n, xr = 0;
      cin >> n;
      vector<int> a(n);
      for (int i = 0;i < n;i++) {
         cin >> a[i];
         xr ^= a[i];
      }

      int ans = xr;
      for (int i = 0;i < n;i++) {
         int curxr = (xr ^ a[i]);
         ans = min(ans, curxr);
      }

      cout << ans << '\n';
   }
   return 0;
}