/*
    Store the index of the first occurence in the map, if it already doesn't exist. On second occurence find the difference between the current index and index of previous occurence and compare with k and return the result.
*/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
bool containsNearbyDuplicate(vector<int> &nums, int k)
{
    unordered_map<int, int> mp;
    for (int i = 0; i < nums.size(); i++)
    {
        if (mp.count(nums[i]))
        {
            if (abs(i - mp[nums[i]]) <= k)
                return true;
        }

        mp[nums[i]] = i;
    }
    return false;
}

int main()
{
    int n, k;
    cout << "Enter the size of the array: ";
    cin >> n;
    vector<int> nums(n);
    cout << "Enter the numbers: ";
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    cout << "Enter the value of k: ";
    cin >> k;

    cout << containsNearbyDuplicate(nums, k);
}