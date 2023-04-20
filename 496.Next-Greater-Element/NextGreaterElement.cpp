#include <iostream>
#include <bits/stdc++.h>

using namespace std;

vector<int> nextGreaterElement(vector<int> &nums1, vector<int> &nums2)
{
    vector<int> ans;
    for (int i = 0; i < nums1.size(); i++)
    {
        int j = 0;
        while ((j < nums2.size()) && (nums2[j] != nums1[i]))
            j++;
        if (j == nums2.size() - 1)
            ans.push_back(-1);
        j++;
        while (j < nums2.size())
        {
            if (nums2[j] > nums1[i])
            {
                ans.push_back(nums2[j]);
                break;
            }
            else
            {
                if (j == nums2.size() - 1)
                    ans.push_back(-1);
                j++;
            }
        }
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

    vector<int> ans = nextGreaterElement(nums1, nums2);

    for (auto i : ans)
    {
        cout << i << " ";
    }
}