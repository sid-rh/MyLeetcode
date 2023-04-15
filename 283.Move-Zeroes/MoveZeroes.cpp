/*
    Approach: start from the back and find the first zero, swap it with non zeroes until the end;
*/

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void moveZeroes(vector<int> &nums)
{
    int n = nums.size();

    for (int i = n - 1; i >= 0; i--)
    {
        if (nums[i] == 0)
        {
            int j = i;
            while (j < n - 1)
            {
                swap(nums[j], nums[j + 1]);
                j++;
            }
        }
    }
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

    moveZeroes(nums);

    for (auto i : nums)
    {
        cout << i << " ";
    }
}