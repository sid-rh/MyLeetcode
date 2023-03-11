/*
    use hash map to store the count, if count is greater than 1 return true else false.
*/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
bool containsDuplicate(vector<int> &nums)
{
    unordered_map<int, int> mp;

    for (auto i : nums)
    {
        mp[i]++;
    }
    for (auto a : mp)
    {
        if (a.second > 1)
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