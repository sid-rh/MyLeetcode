/*
    use a set, if the size of set is less than that of array return true else false.
*/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
bool containsDuplicate(vector<int> &nums)
{
    set<int> mySet(nums.begin(), nums.end());
    if (nums.size() > mySet.size())
        return true;

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