/*
Approach

Start with a pointer. Keep incrementing it until the consecutive numbers do not have a difference of 1, push the ans and move on to the next iteration.
*/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<string> summaryRanges(vector<int> &nums)
{
    vector<string> ans;

    for (int i = 0; i < nums.size(); i++)
    {
        int start = i;
        string temp = "";
        if (i == nums.size() - 1)
            temp = to_string(nums[i]);
        else
        {
            while ((i < nums.size() - 1) && (nums[i + 1] == nums[i] + 1))
            {
                i++;
            }
            if (start == i)
                temp = to_string(nums[start]);
            else
                temp = to_string(nums[start]) + "->" + to_string(nums[i]);
        }

        ans.push_back(temp);
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

    vector<string> ans = summaryRanges(nums);

    for (auto i : ans)
    {
        cout << i << " ";
    }
}