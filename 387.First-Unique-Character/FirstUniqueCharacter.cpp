#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int firstUniqChar(string s)
{
    int count[26] = {0};
    for (auto c : s)
    {
        count[c - 'a']++;
    }
    for (int i = 0; i < s.size(); i++)
    {
        if (count[s[i] - 'a'] == 1)
            return i;
    }
    return -1;
}

int main()
{
    string a = "";

    cout << "Enter the a: ";
    cin >> a;

    int ans = firstUniqChar(a);

    cout << ans << endl;
}