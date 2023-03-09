/*

*/

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int majorityElement(vector<int> &nums)
{
    int majority, count = 0;
    int n = nums.size();
    for (int i = 0; i < n; i++)
    {
        if (count == 0)
        {
            majority = nums[i];
            count++;
        }
        else
        {
            if (nums[i] == majority)
                count++;
            else
                count--;
        }
    }
    return majority;
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

    cout << majorityElement(nums);
}