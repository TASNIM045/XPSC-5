#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i=0;i<n;i++) {
            cin >> arr[i];
        }
        sort(arr.begin(),arr.end());
        cout<<arr[n/2]<<'\n';
    }
    return 0;
}
