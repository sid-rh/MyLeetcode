/*
 Record the frequency of each element in a map and find the majority one
*/

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int majorityElement(vector<int> &nums)
{
    unordered_map<int, int> umap;
    int n = nums.size();
    int ans = 0;

    for (int i = 0; i < n; i++)
    {
        umap[nums[i]]++;
    }

    for (auto i : umap)
    {
        if (i.second > n / 2)
        {
            ans = i.first;
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

    cout << majorityElement(nums);
}