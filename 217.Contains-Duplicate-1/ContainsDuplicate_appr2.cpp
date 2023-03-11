/*
    sort the numbers, if 2 consecutive numbers are equal return true, else false.
*/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
bool containsDuplicate(vector<int> &nums)
{
    sort(nums.begin(), nums.end());

    int n = nums.size();
    for (int i = 0; i < n - 1; i++)
    {
        if (nums[i] == nums[i + 1])
            return true;
    }
    return false;
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

    cout << containsDuplicate(nums);
}