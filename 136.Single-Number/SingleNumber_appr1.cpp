#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int singleNumber(vector<int> nums)
{
    unordered_map<int, int> umap;
    int n = nums.size();

    for (int i = 0; i < n; i++)
    {
        umap[nums[i]]++;
    }
    int ans = 0;
    for (auto i : umap)
    {
        if (i.second == 1)
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

    cout << singleNumber(nums);
}