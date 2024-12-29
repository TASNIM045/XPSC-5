#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    long long n;
    long long x;
    cin >> n >> x;
    vector<long long> arr(n);
    for (long long i = 0; i < n; i++) {
        cin >> arr[i];
    }

    long long total = 0, count = 0;
    map<long long, long long> mp;

    mp[0] = 1;

    for (long long i = 0; i < n; i++) {
        total += arr[i];

        if (mp.find(total - x) != mp.end()) {
            count += mp[total - x];
        }
        mp[total]++;
    }

    cout << count << endl;
    
    return 0;
}