#include <iostream>
#include <bits/stdc++.h>

using namespace std;

/*
    Approach: sort the strings and compare;
*/
bool isAnagram1(string s, string t)
{
    sort(s.begin(), s.end());
    sort(t.begin(), t.end());

    return s == t;
}

/*
    use a map to record the frequency, add from 1st string and subtract from second. It should all be zero if valid anagram else not zero.
*/
bool isAnagram2(string s, string t)
{
    unordered_map<char, int> freq;
    if (s.size() != t.size())
        return false;

    for (int i = 0; i < s.size(); i++)
    {
        freq[s[i]]++;
        freq[t[i]]--;
    }
    for (auto i : freq)
    {
        if (i.second)
            return false;
    }
    return true;
}

/*
    same as approach 2 except using an array as the characters are lowercase.
*/
bool isAnagram(string s, string t)
{
    if (s.size() != t.size())
        return false;
    int freq[26] = {0};
    for (int i = 0; i < s.size(); i++)
    {
        freq[s[i] - 'a']++;
        freq[t[i] - 'a']--;
    }

    for (auto i : freq)
    {
        if (i)
            return false;
    }
    return true;
}

int main()
{

    string a = "";
    string b = "";

    cout << "Enter the a: ";
    cin >> a;
    cout << "Enter the b: ";
    cin >> b;

    bool ans = isAnagram1(a, b);

    cout << ans << endl;
}