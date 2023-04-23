/*
    Approach: take two pointers, one will iterate through the array and the other one will move with it if the current number is non zero, else it will not. If the second pointer has a zero vaule, then swap.
*/

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void moveZeroes(vector<int> &nums)
{
    int i = 0;
    int j = 0;
    while (i < nums.size())
    {
        if (nums[i] != 0)
        {
            if (nums[j] == 0)
            {
                swap(nums[i], nums[j]);
            }
            j++;
            i++;
        }
        else
        {
            i++;
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