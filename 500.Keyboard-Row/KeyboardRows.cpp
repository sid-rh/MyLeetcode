#include <iostream>
#include <bits/stdc++.h>

using namespace std;

vector<string> findWords(vector<string> &words)
{
    unordered_map<int, string> umap;
    umap[1] = "qwertyuiopQWERTYUIOP";
    umap[2] = "asdfghjklASDFGHJKL";
    umap[3] = "zxcvbnmZXCVBNM";
    vector<string> ans;
    unordered_map<char, int> mp;
    for (auto i : umap)
    {
        string str = i.second;
        for (int j = 0; j < str.size(); j++)
        {
            mp[str[j]] = i.first;
        }
    }

    for (auto word : words)
    {
        int n = word.size();
        int row = mp[word[0]];
        int flag = 1;
        for (int i = 1; i < n; i++)
        {
            if (mp[word[i]] != row)
            {
                flag = 0;
                break;
            }
        }
        if (flag == 1)
        {
            ans.push_back(word);
        }
    }
    return ans;
}

int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    vector<string> nums(n);
    cout << "Enter the string: ";
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    vector<string> ans = findWords(nums);

    for (auto i : ans)
    {
        cout << i << " ";
    }
}