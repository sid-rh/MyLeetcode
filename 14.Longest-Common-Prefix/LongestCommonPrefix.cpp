#include <iostream>
#include <bits/stdc++.h>

using namespace std;

/*
    Approach: Iterate through each word in string, take the whole word for the first word, then compare it with the next word and only record the common words. Do this till the end of the array.
*/

string longestCommonPrefix(vector<string> &strs)
{
    string ans = "";

    for (int i = 0; i < strs.size(); i++)
    {
        string currWord = strs[i];
        string prevWord = ans;
        ans = "";
        if (i == 0)
        {
            ans = currWord;
            continue;
        }
        else
        {
            for (int j = 0; j < currWord.size(); j++)
            {
                if (j < prevWord.size() && prevWord[j] == currWord[j])
                {
                    ans.push_back(currWord[j]);
                }
                else
                    break;
            }
        }

        if (ans == "")
            return ans;
    }
    return ans;
}

/*
    Approach: sort the array of strings, first and the last words will be the most different in sorted array. Comapre them and find common letters.
*/

string longestCommonPrefix2(vector<string> &strs)
{
    sort(strs.begin(), strs.end());
    string first = strs[0];
    string last = strs[strs.size() - 1];
    string ans = "";

    for (int i = 0; i < first.size(); i++)
    {
        if (i < last.size() && first[i] == last[i])
        {
            ans += first[i];
        }
        else
        {
            break;
        }
    }
}

int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    vector<string> strs(n);
    cout << "Enter the words: ";
    for (int i = 0; i < n; i++)
    {

        cin >> strs[i];
    }

    string ans = longestCommonPrefix(strs);

    cout << ans << endl;
}