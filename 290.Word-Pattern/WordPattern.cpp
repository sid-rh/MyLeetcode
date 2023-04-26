#include <iostream>
#include <bits/stdc++.h>
using namespace std;
/*
Approach: insert the words into a vector, compare the size of the vector with that of pattern. Store a key value pair of chars and words check if for the same key there exists two different words-> false; if a word to be inserted in a key is already inserted in another one-> false.

*/
bool wordPattern(string pattern, string s)
{
    vector<string> words;
    string word;
    stringstream stream(s); // for streaming a string
    // for (int i = 0; i < s.size(); i++)
    // {
    //     string word = "";
    //     while (i < s.size() && s[i] != ' ')
    //     {
    //         word.push_back(s[i]);
    //         i++;
    //     }
    //     words.push_back(word);
    // }
    while (stream >> word)
        words.push_back(word); // streams until a space is occurred and pushes back the words

    if (words.size() != pattern.size())
        return false;
    unordered_map<char, string> mp;
    unordered_map<string, bool> inserted;
    for (int i = 0; i < pattern.size(); i++)
    {
        if (mp.count(pattern[i]))
        {
            if (mp[pattern[i]] != words[i])
                return false;
        }
        else
        {
            if (inserted.count(words[i]) && inserted[words[i]])
                return false;

            mp[pattern[i]] = words[i];
            inserted[words[i]] = true;
        }
    }
    return true;
}
int main()
{
    string pattern = "";
    string b = "";

    cout << "Enter the pattern: ";
    cin >> pattern;
    cout << "Enter the b: ";
    cin >> b;

    bool ans = wordPattern(pattern, b);

    cout << "ans is " << ans << endl;
}