#include <iostream>
#include <bits/stdc++.h>

using namespace std;

/*
    sort the scores. Assign rank. if rank is 1 the gold ,2=silver,3=bronze
*/
vector<string> findRelativeRanks(vector<int> &score)
{
    unordered_map<int, int> mp;
    vector<int> sortedScore = score;
    vector<string> ans;
    sort(sortedScore.begin(), sortedScore.end());
    int rank = 1;
    for (int i = sortedScore.size() - 1; i >= 0; i--)
    {
        mp[sortedScore[i]] = rank;
        rank++;
    }
    for (auto i : score)
    {
        int ranking = mp[i];
        if (ranking == 1)
            ans.push_back("Gold Medal");
        else if (ranking == 2)
            ans.push_back("Silver Medal");
        else if (ranking == 3)
            ans.push_back("Bronze Medal");
        else
            ans.push_back(to_string(ranking));
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

    vector<string> ans = findRelativeRanks(nums);

    for (auto i : ans)
    {
        cout << i << " ";
    }
}