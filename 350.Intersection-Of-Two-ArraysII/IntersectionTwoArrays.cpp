#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<int> intersection(vector<int> &nums1, vector<int> &nums2)
{
    sort(nums1.begin(), nums1.end());
    sort(nums2.begin(), nums2.end());
    int i = 0;
    int j = 0;
    vector<int> ans;
    while (i < nums1.size() && j < nums2.size())
    {
        if (nums1[i] == nums2[j])
        {
            if ((ans.empty()) || (ans.back() != nums1[i]))
            {
                ans.push_back(nums1[i]);
            }
            i++;
            j++;
        }
        else if (nums1[i] > nums2[j])
            j++;
        else
            i++;
    }
    return ans;
}

int main()
{
    int n1, n2;
    cout << "Enter the size of the array: ";
    cin >> n1;
    cin >> n2;
    vector<int> nums1(n1);
    vector<int> nums2(n2);
    cout << "Enter the numbers: ";
    for (int i = 0; i < n1; i++)
    {
        cin >> nums1[i];
    }
    cout << "Enter the numbers: ";
    for (int i = 0; i < n2; i++)
    {
        cin >> nums2[i];
    }

    vector<int> ans = intersection(nums1, nums2);

    for (auto i : ans)
    {
        cout << i << " ";
    }
}
