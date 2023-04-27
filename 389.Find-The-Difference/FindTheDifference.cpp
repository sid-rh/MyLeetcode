#include <iostream>
#include <bits/stdc++.h>
using namespace std;
char findTheDifference(string s, string t)
{
    int count[26] = {0};
    char ans;
    for (auto c : t)
    {
        count[c - 'a']++;
    }
    for (auto c : s)
    {
        count[c - 'a']--;
    }
    for (int i = 0; i < 26; i++)
    {
        if (count[i])
            ans = 'a' + i;
    }
    return ans;
}

int main()
{
    string a = "";
    string b = "";

    cout << "Enter the a: ";
    cin >> a;
    cout << "Enter the b: ";
    cin >> b;

    char ans = findTheDifference(a, b);

    cout << ans << endl;
}