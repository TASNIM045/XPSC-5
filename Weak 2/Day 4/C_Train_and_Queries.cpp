#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int testCases;
    cin >> testCases;
    while (testCases--)
    {
        int stationCount, queryCount;
        cin >> stationCount >> queryCount;
        map<int, set<int>> stationMap;
        for (int stationIndex = 1; stationIndex <= stationCount; stationIndex++)
        {
            int stationID;
            cin >> stationID;
            stationMap[stationID].insert(stationIndex);
        }

        for (int queryIndex = 1; queryIndex <= queryCount; queryIndex++)
        {
            int leftStation, rightStation;
            cin >> leftStation >> rightStation;
            if ((stationMap.find(leftStation) == stationMap.end()) || (stationMap.find(rightStation) == stationMap.end()))
            {
                cout << "NO" << '\n';
            }
            else
            {
                int leftMostStartStation, rightMostEndStation;
                leftMostStartStation = *stationMap[leftStation].begin();
                rightMostEndStation = *stationMap[rightStation].rbegin();
                if (leftMostStartStation < rightMostEndStation)
                {
                    cout << "YES" << '\n';
                }
                else
                {
                    cout << "NO" << '\n';
                }
            }
        }
    }

    return 0;
}
