#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int operations, currentCustomer = 1;
    cin >> operations;
    set<pair<int, int>> customerSet;
    multiset<pair<int, int>> moneySet;
    vector<int> result;
    for (int i = 1; i <= operations; i++)
    {
        int operationType;
        cin >> operationType;
        if (operationType == 1)
        {
            int amount;
            cin >> amount;
            customerSet.insert({currentCustomer, amount});
            moneySet.insert({amount, -currentCustomer});
            currentCustomer++;
        }
        else if (operationType == 2)
        {
            int customerID = customerSet.begin()->first, customerMoney = customerSet.begin()->second;
            result.push_back(customerID);
            customerSet.erase(customerSet.begin());
            moneySet.erase({customerMoney, -customerID});
        }
        else
        {
            int customerID = -moneySet.rbegin()->second, customerMoney = moneySet.rbegin()->first;
            result.push_back(customerID);
            moneySet.erase(--moneySet.end());
            customerSet.erase({customerID, customerMoney});
        }
    }

    for (auto customer : result)
    {
        cout << customer << " ";
    }
    cout << '\n';

    return 0;
}
