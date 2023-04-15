/*
    Approach
    store all the numbers in a map with their values being 1
    iterate through the size of the array starting with 0 and find which number does not exist.
*/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int missingNumber(vector<int> &nums)
{
    unordered_map<int, int> mp;
    int ans = 0;
    for (auto i : nums)
    {
        mp[i] = 1;
    }
    for (int i = 0; i <= nums.size(); i++)
    {
        if (!mp.count(i))
        {
            ans = i;
            break;
        }
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

    int ans = missingNumber(nums);

    cout << ans;
}