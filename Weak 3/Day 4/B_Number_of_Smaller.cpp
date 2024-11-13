#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, m;
    cin >> n >> m;
    
    vector<int> a(n), b(m);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++) {
        cin >> b[i];
    }
    
    sort(a.begin(), a.end());
    
    vector<int> result;
    for (int i = 0; i < m; i++) {
        int count = upper_bound(a.begin(), a.end(), b[i] - 1) - a.begin();
        result.push_back(count);
    }
    
    for (int i = 0; i < m; i++) {
        cout << result[i] << " ";
    }
    cout << endl;
    return 0;
}