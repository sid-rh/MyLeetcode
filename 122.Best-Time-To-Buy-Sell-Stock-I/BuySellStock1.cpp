#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int maxProfit(vector<int> &prices)
{
    int minPrice = prices[0];
    int maxProfit = 0;
    int n = prices.size();

    for (int i = 1; i < n; i++)
    {
        if (prices[i] < minPrice)
        {
            minPrice = prices[i];
            continue;
        }
        else
        {
            int profit = prices[i] - minPrice;
            if (profit > maxProfit)
            {
                maxProfit = profit;
            }
        }
    }

    return maxProfit;
}

int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    vector<int> prices(n);
    cout << "Enter the numbers: ";
    for (int i = 0; i < n; i++)
    {
        cin >> prices[i];
    }

    cout << maxProfit(prices);
}