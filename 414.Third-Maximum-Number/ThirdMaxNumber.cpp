

#include <iostream>
#include <bits/stdc++.h>

using namespace std;
/*
    Start from the back and count till counter becomes 2(reached third max number), also record the number in a var to check for duplicates.
*/
int thirdMax(vector<int> &nums)
{
    sort(nums.begin(), nums.end());
    int counter = 0;
    int ans = 0;
    int i = nums.size() - 1;
    while (i >= 0 && counter <= 2)
    {
        if (ans != nums[i] || counter == 0)
            counter++;

        ans = nums[i];
        i--;
    }
    if (counter <= 2)
        return nums[nums.size() - 1];
    else
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

    int ans = thirdMax(nums);

    cout << ans;
}