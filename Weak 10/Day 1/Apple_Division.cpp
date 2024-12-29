#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    vector<int> weight(n);
    for(int i=0;i<n;i++) {
        cin >> weight[i];
    }
    long long total = 0;
    for(int i=0;i<n;i++) {
        total+=weight[i];
    }
    long long min_dif = __LONG_LONG_MAX__;
    for(int it = 0;it<(1<<n);it++) {
        long long subset_sum = 0;
        for(int i=0;i<n;i++) {
            if (it & (1 << i)) {
                subset_sum += weight[i];
            }
        }
        long long group2 = total - subset_sum;
        long long diff = abs(subset_sum-group2);
        min_dif = min(min_dif,diff);
    }
    cout<<min_dif<<'\n';
    
    return 0;
}