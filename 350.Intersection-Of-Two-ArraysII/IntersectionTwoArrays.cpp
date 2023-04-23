/*
    Two pointers, find the intersection and push it in the answer.
*/

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

/*
    Record the frequency of each element in the first array using a map, iterate through the second and check if the frequency is not 0. If it is not 0, then insert it in the answer and reduce the frequency.
*/

vector<int> intersect(vector<int> &nums1, vector<int> &nums2)
{
    unordered_map<int, int> freq;
    vector<int> ans;
    for (auto i : nums1)
    {
        freq[i]++;
    }
    for (auto j : nums2)
    {
        if (freq[j])
        {
            freq[j]--;
            ans.push_back(j);
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

    vector<int> ans = intersection(nums1, nums2);

    for (auto i : ans)
    {
        cout << i << " ";
    }
}
