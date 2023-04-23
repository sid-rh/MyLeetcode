#include <iostream>
#include <bits/stdc++.h>

using namespace std;

/*
sort the arrays
iterate through cookies and child array, if child is satisfied by the size increase the answer counter and go to the next iteration. Else, go to the next cookie.
*/
int findContentChildren(vector<int> &g, vector<int> &s)
{
    int count = 0;
    sort(g.begin(), g.end());
    sort(s.begin(), s.end());
    int i = 0;
    int j = 0;
    while (i < g.size() && j < s.size())
    {
        if (g[i] <= s[j])
        {
            count++;
            i++;
            j++;
        }
        else
        {
            j++;
        }
    }

    return count;
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

    int ans = findContentChildren(nums1, nums2);

    cout << ans;
}