/*
    Approach: add all the numbers to an unordered map
    iterate through the range and find the number that does not exist and add it to the answer.
*/

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

vector<int> findDisappearedNumbers(vector<int> &nums)
{
    int n = nums.size();
    unordered_map<int, int> mp;
    vector<int> ans;
    for (auto i : nums)
    {
        mp[i]++;
    }
    for (int i = 1; i <= n; i++)
    {
        if (mp.count(i) == 0)
            ans.push_back(i);
    }
    return ans;
}

/*
    Add it to a set instead
*/
vector<int> findDisappearedNumbers2(vector<int> &nums)
{
    int n = nums.size();
    unordered_set<int> set(nums.begin(), nums.end());
    vector<int> ans;

    for (int i = 1; i <= n; i++)
    {
        if (set.count(i) == 0)
            ans.push_back(i);
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

    vector<int> ans = findDisappearedNumbers(nums);

    for (auto i : ans)
    {
        cout << i << " ";
    }
}