#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt;
    cin >> tt;
    while (tt--) {
        int n, k;
        cin >> n >> k;
        vector <int> num(n);
        for (int i = 0; i < n; i++) {
            cin >> num[i];
            num[i]--;
        }

        int x = 0;
        for (int i=0; i<n; i++) {
            if (num[i] % k != i % k) {
                x++;
            }
        }

        if(x == 0)
            cout << 0 << '\n';
        else if(x == 2)
            cout << 1 << '\n';
        else
            cout << -1 << '\n';
    }

    return 0;
}