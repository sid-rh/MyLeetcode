#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int longestPalindrome(string s)
{
    unordered_map<char, int> mp;
    int oddChars = 0;
    for (auto c : s)
    {
        mp[c]++;
    }
    for (auto i : mp)
    {
        if (i.second % 2 == 1)
            oddChars++;
    }
    if (oddChars > 1)
        return s.size() - oddChars + 1;
    else
        return s.size();
}

int main()
{
    string a = "";

    cout << "Enter the a: ";
    cin >> a;

    int ans = longestPalindrome(a);

    cout << ans << endl;
}