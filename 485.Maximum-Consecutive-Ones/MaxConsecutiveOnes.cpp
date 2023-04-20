#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int findMaxConsecutiveOnes(vector<int> &nums)
{
    int maxNum = 0;
    int count = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        while (i < nums.size() && nums[i] == 1)
        {
            count++;
            i++;
        }
        if (count > maxNum)
        {
            maxNum = count;
        }
        count = 0;
    }
    return maxNum;
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

    int ans = findMaxConsecutiveOnes(nums);

    cout << ans << endl;
}