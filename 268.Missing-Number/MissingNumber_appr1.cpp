/*
    Approach: find the sum of n natural numbers using the formula.
    find the difference between the sum of the array and that of n natural numbers.
*/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int missingNumber(vector<int> &nums)
{
    int sumOfArray = 0;
    int n = nums.size();
    int sumOfNumbers = n * (n + 1) / 2;
    for (auto i : nums)
    {
        sumOfArray += i;
    }
    return sumOfNumbers - sumOfArray;
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

    int ans = missingNumber(nums);

    cout << ans;
}