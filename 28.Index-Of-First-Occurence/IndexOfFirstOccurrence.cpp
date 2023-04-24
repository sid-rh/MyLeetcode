#include <iostream>
#include <bits/stdc++.h>

using namespace std;

/*
    Approach: find the first occurrence of the first word, find the substring of the size of the needle, if it is equal return index, else continue.
*/

int strStr(string haystack, string needle)
{

    for (int i = 0; i < haystack.size(); i++)
    {
        if (haystack[i] == needle[0])
        {
            string word = haystack.substr(i, needle.size());
            if (word == needle)
                return i;
            else
                continue;
        }
    }
    return -1;
}

int main()
{

    string needle = "";
    string haystack = "";

    cout << "Enter the haystack: ";
    cin >> haystack;
    cout << "Enter the needle: ";
    cin >> needle;

    int ans = strStr(haystack, needle);

    cout << ans << endl;
}