#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
     
    int n;
    long long sum;
    cin >> n >> sum;
    vector<int> num(n);
    for(int i=0;i<n;i++) {
        cin >> num[i];
    }
    long long total = 0, count = 0;
    map<long long, long long> mp;

    mp[0] = 1;

    for (long long i = 0; i < n; i++) {
        total += num[i];

        if(total % n == 0) {
            count++;
        }
        mp[total]++;
    }

    cout << count << endl;
    return 0;
}