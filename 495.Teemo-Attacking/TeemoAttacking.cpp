#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int findPoisonedDuration(vector<int> &timeSeries, int duration)
{
    int ans = 0;
    for (int i = 0; i < timeSeries.size(); i++)
    {
        int end = timeSeries[i] + duration - 1;
        int currDuration = duration;
        if (i < timeSeries.size() - 1 && end >= timeSeries[i + 1])
        {
            int diff = end - timeSeries[i + 1] + 1;
            currDuration = duration - diff;
        }
        ans += currDuration;
    }
    return ans;
}

int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    vector<int> nums(n);
    cout << "Enter the numbers: ";
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    cout << "Enter the duration: ";
    int duration = 0;
    cin >> duration;

    int ans = findPoisonedDuration(nums, duration);

    cout << ans << endl;
}